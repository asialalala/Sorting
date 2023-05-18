#include "filter.hh"

void filter()
{

    bool lackOfGrade = false;
    bool longTitle = false;
    Elem temp; 
    std::string line;
    std::string::iterator itE; // iterator to check elements of line from end
    std::string::iterator itB; // iterator to check elements of line from begining

    std::ifstream fileR;
    fileR.open("../file/ranking.csv"); // file with data to read

    std::ofstream fileW;
    fileW.open("../file/rankingFiltered.csv"); // file to write down filtered data

    getline (fileR,line); // line with titles of columns
    while ( getline (fileR,line) )
    {
        itE = line.end();
        itB = line.begin();
    
        if(*(--itE) != '0' )
            lackOfGrade = true;
        
        if(*(--itE) != '.' )
            lackOfGrade = true;
    
        while (*itB != '"' && itB != line.end())
            itB++;
    
        if(*itB == '"')
            longTitle = true;

        if(!lackOfGrade && longTitle)
            fileW << line << std::endl;

        if(!lackOfGrade && !longTitle)
        {
            itB = line.begin();
            itE = line.end();

            while (*itB != ',') // find begining of title
            {
                fileW << *itB; // write down the position
                itB++;
            }
            while (*itE != ',') // find the end of title
                itE--;
    
            fileW << *itB << '"'; // write dowen ' and "
            itB++;

            while (itB != itE) // write down the title
            {
                fileW << *itB;
                itB++;
            }
            fileW  << '"'; // close the " and write down ,

            while (itB != line.end())
            {
                fileW << *itB;
                itB++;
            }
            fileW << '\n';
        
    }

    lackOfGrade = false;
    longTitle = false;

    }


    fileR.close();
    fileW.close();
}
