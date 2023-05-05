#pragma once
#include <iostream>
class Elem
{
private:
    int position;
    float grade;
    std::string title;
public:
    Elem();
    ~Elem();
    void setPosition(int p);
    void setGrade(float g);
    void setTitle(std::string t);

    int getPosition() const;
    float getGrade() const;
    std::string getTitle() const;
};

