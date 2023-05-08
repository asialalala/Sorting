#include "Read.hh"
#include <string>
#include <iostream>

void read(int n, std::vector < Elem > & v)
{
    std::string title;
    std::string gradeS;
    int grade;
    std::string positionS;
    int position;
    std::string line; // temporary, ude to unneccessary data
    std::string::iterator itB; // iterator to check elements of line from end
    std::string::iterator itE; // iterator to check elements of line from end

    std::ifstream file;
    file.open("../file/rankingFiltered.csv");
    //getline(file, line); // get the line with names of columns
   // std::cout << line;
    for(int i = 0; i < n; i++)
    {
        getline(file, positionS, ','); // read position
        getline(file,line, '"'); // skip ,
        getline(file,line); 
        itE = line.end();
        itB = line.begin();
    //std::cout << "poczatek " << *itB << std::endl;
    //std::cout << line <<  std::endl;
    //std::cout << "koniec " << *(--itE) << std::endl;
        // read grade
        while (*itE != '"') // find the end of title
                itE--;
        while (itB != itE)
        {
            title.push_back(*itB);
            itB++;
        }
        itE++;
        itE++;
        while (itE != line.end())
        {
            gradeS.push_back(*itE);
            itE++;
        }
        
        //getline(file, gradeS, '\n');
        //std::cout << positionS;
        //std::cout << title; 
        //std::cout << gradeS;
        grade = std::stoi(gradeS);
        position = std::stoi(positionS);
        Elem * tem = new Elem;
        tem->setPosition(position);
        tem->setTitle(title);
        tem->setGrade(grade);
        v.push_back(*tem);

        gradeS.clear(); // clear temporary variables
        title.clear();
    }
    file.close();

}