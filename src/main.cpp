#include <iostream>
#include <vector>
#include "mergeSort.hh"
#include "quickSort.hh"
#include "introspctiveSort.hh"
#include "heapSort.hh"
#include "Elem.hh"
#include "Read.hh"

int main()
{
   /* std::cout << "Hello";

    std::vector < int > data;
    data.push_back( 5 );
    data.push_back( 7 );
    data.push_back( 2 );
    data.push_back( 3 );
    data.push_back( 10 );
    data.push_back( 3 );
    data.push_back( 2 );
    data.push_back( 1 );
    data.push_back( 98 );
    data.push_back( 74 );
    data.push_back( 29 );
    data.push_back( 0 );
   



    for( size_t i = 0; i < data.size(); i++ )
         printf( "%d, ", data[ i ] );
    
    printf( "\n\nKoniec\n" );
    */


    std::vector <Elem> movies;
    read(10,movies);

    for(int i = 0; i < movies.size(); i++)
    {
        std::cout << movies[i].getPosition() << ". " << movies[i].getTitle() << "OCENA: " << movies[i].getGrade() << std::endl;
    }

    introspectiveSort(movies);

    std::cout << "Posortowane\n";

    for(int i = 0; i < movies.size(); i++)
    {
        movies[i].setPosition(i+1);
        std::cout << movies[i].getPosition() << ". " << movies[i].getTitle() << "OCENA: " << movies[i].getGrade() << std::endl;
    }

    return 0;

}