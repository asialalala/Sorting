#include <iostream>
#include <vector>
#include "mergeSort.hh"
#include "quickSort.hh"

int main()
{
    std::cout << "Hello";

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
   


    quickSort(data);

    for( size_t i = 0; i < data.size(); i++ )
         printf( "%d, ", data[ i ] );
    
    printf( "\n\nKoniec\n" );

    return 0;

}