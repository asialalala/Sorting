#include "introspectiveSort.hh"

int devideIntroSort(std::vector<Elem>& S, int left, int right) {
    //generation of random number
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(left, right);
    int randomIndex = dis(gen);

    //choose pivot at random
    int pivotValue = S[randomIndex].getGrade();
    std::swap(S[randomIndex], S[right]);

    int i = left;

    for (int j = left; j < right; j++) {
        if (S[j].getGrade() < pivotValue) {
            std::swap(S[i], S[j]);
            i++;
        }
    }
    std::swap(S[i + 1], S[right]); // put pivot on its place
    return i + 1; // return pivot index
}

void introspectiveSort(std::vector<Elem>& S, int left, int right) {
    int n = right - left;
    if (maxElements > n) {
        heapSort(S, left, right);
        return;
     } // start heap sort

    else if (left < right) {
        int pi = devideIntroSort(S, left, right);

        introspectiveSort(S, left, pi - 1); // sort left part
        introspectiveSort(S, pi + 1, right); // sort right part
    }
}







