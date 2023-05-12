
// old main which is not used anymore


#include <iostream>
#include <vector>
#include "mergeSort.hh"
#include "quickSort.hh"
#include "introspctiveSort.hh"
#include "heapSort.hh"
#include "Elem.hh"
#include "Read.hh"
#include <chrono>

int menu();

int main()
{
    menu();
    return 0;
}

int menu()
{
    int choice;
    bool enter= false;
    bool filtered = false;
    int n;
    std::chrono::_V2::system_clock::time_point start;
    std::chrono::_V2::system_clock::time_point end;
    std::chrono::nanoseconds duration;
    std::vector <Elem>  movies;

    while(true)
	{
		std::cout << "\nMENU" << std::endl;
		std::cout << "1. Filtruj filmy." << std::endl;
		std::cout << "2. Wczytaj filmy." << std::endl;
		std::cout << "3. Posortuj quicksortem." << std::endl;
		std::cout << "4. Posortuj sortowaniem introspektywnym." << std::endl;
		std::cout << "5. Posortuj sortowaniem przez scalanie." << std::endl;
        std::cout << "6. Przejrzyj wczytaną część rankingu." << std::endl;
		std::cout << "7. Zakoncz program" << std::endl;
        
		std::cout << "Wybierz opcje: " << std::endl;
		std::cin >> choice;
		std::cout << std::endl;

		switch (choice)
		{
		case 1:
            start = std::chrono::high_resolution_clock::now(); // count time
			filter();
            end = std::chrono::high_resolution_clock::now(); // count time
            filtered = true;
            duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            std::cout << "Czas wykonania filtracji: " << duration.count() * 1e-9 << std::endl;
            std::cout << "Filmy zostały pofiltrowane, wynik widoczny jest w pliku rankingFiltered.csv.\n";
			break;
		case 2:
			if(filtered)
            {
                std::cout << "Ile filmow wczytac?\n";
                std::cin >> n;
                read(n, movies);
                enter = true;
            }
            else{
                std::cout << "Najpierw nalezy przefiltrować filmy.\n";
            }
			break;
		case 3:
			if(read)
            {
                start = std::chrono::high_resolution_clock::now(); // count time
                quickSort(movies);
                end = std::chrono::high_resolution_clock::now(); // count time
                duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
                std::cout << "Czas wykonania sortowania: " << duration.count() * 1e-9 << std::endl;
            }else{
                std::cout << "Najpierw nalezy wczytac filmy.\n";
            }
			break;
		case 4:
			if(read)
            {
                start = std::chrono::high_resolution_clock::now(); // count time
                introspectiveSort(movies);
                end = std::chrono::high_resolution_clock::now(); // count time
                duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
                std::cout << "Czas wykonania sortowania: " << duration.count() * 1e-9 << std::endl;
            }else{
                std::cout << "Najpierw nalezy wczytac filmy.\n";
            }
			break;
		case 5:
			if(read)
            {
                start = std::chrono::high_resolution_clock::now(); // count time
                mergeSort(movies);
                end = std::chrono::high_resolution_clock::now(); // count time
                duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
                std::cout << "Czas wykonania sortowania: " << duration.count() * 1e-9 << std::endl;
            }else{
                std::cout << "Najpierw nalezy wczytac filmy.\n";
            }
			break;
        case 6:
            if(read)
            {
                for(int i = 0; i < movies.size(); i++)
                {
                    movies[i].setPosition(i+1);
                    std::cout << movies[i].getPosition() << ", " << movies[i].getTitle() << ", " << movies[i].getGrade() << std::endl;
                }
            }else{
                std::cout << "Najpierw nalezy wczytac filmy.\n";
            }
		case 7:
			return 0;
			break;
		default:
			std::cout << "Nie ma takiej opcji" << std::endl;
			break;
	    }
    }
	return 0;
}
