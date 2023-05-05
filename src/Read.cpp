#include "Read.hh"
#include <string>
#include <iostream>

void read(int n, std::vector < Elem > & v)
{
    std::string title;
    std::string gradeS;
    float grade;
    std::string positionS;
    int position;
    std::string line;

    std::fstream file;
    file.open("../file/ranking.csv");

    getline(file, line); // get the line with names of columns
   // std::cout << line;
    for(int i = 0; i < n; i++)
    {
        getline(file, positionS, ',');
        getline(file, title, ',');
        getline(file, gradeS, '\n');
       // std::cout << positionS;
       // std::cout << title; 
       // std::cout << gradeS;
        grade = std::stof(gradeS);
        position = std::stoi(positionS);
        Elem * tem = new Elem;

        tem->setPosition(position);
        tem->setTitle(title);
        tem->setGrade(grade);
        v.push_back(*tem);
    }
    file.close();

}