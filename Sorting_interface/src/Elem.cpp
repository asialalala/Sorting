#include "Elem.hh"

Elem::Elem()
{
    position = 0;
    grade = 0;
    title = "";
}

Elem::~Elem()
{
}

void Elem::setPosition(int p)
{
    position = p;
}

void Elem::setGrade(int g)
{
    grade = g;
}

void Elem::setTitle(std::string t)
{
    title = t;
}

int Elem::getPosition() const
{
    return position;
}

int Elem::getGrade() const
{
    return grade;
}

std::string Elem::getTitle() const
{
    return title;
}