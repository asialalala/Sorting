#include "quickSort.hh"
#include <random>

/*!
 * Devide vector S on elements which which are less than pivot and more than pvot. Return index of pivot
 */
int devide(std::vector<Elem>& S, int left, int right) {
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
/*!
 * Check if there is something to sort. If it is find pivot and sort elements less tham pivot,
 * then sort elements
 */
void quickSort(std::vector<Elem>& S, int left, int right) {
    if (left < right) {
        int pi = devide(S, left, right);

        quickSort(S, left, pi - 1); // sort left part
        quickSort(S, pi + 1, right); // sort right part
    }
}

