#include "write.hh"

void write(std::vector<Elem> &movies)
{
    std::ofstream file;
    file.open("../file/Sorted.txt");
    int n = 0;
    for(n=0; n < movies.size(); n++)
    {
        file << std::to_string(n+1) << ". " << movies[n].getTitle() << " , ocena: " << movies[n].getGrade() << std::endl;
    }

    //file << movies.empty();
    file.close();
    // movies.clear();
}
