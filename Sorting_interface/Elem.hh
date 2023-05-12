#pragma once
#include <iostream>
class Elem
{
private:
    int position;
    int grade;
    std::string title;
public:
    Elem();
    ~Elem();
    void setPosition(int p);
    void setGrade(int g);
    void setTitle(std::string t);

    int getPosition() const;
    int getGrade() const;
    std::string getTitle() const;
};

