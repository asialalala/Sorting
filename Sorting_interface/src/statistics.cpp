#include "ststistics.hh"

int median(std::vector<Elem> &movies)
{
    return movies[movies.size()/2].getGrade();
}

float mean(std::vector<Elem> &movies)
{
    int n = movies.size();
    float sum = 0;
    for(int i=0; i < n; i++)
    {
        sum = sum + movies[i].getGrade();
    }

    return sum/movies.size();
}
