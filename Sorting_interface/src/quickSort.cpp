#include "quickSort.hh"

/*!
    Chooses pivot at random and devide the vector on less then pivot's grade part
    and more than pivot's grade part. Than it sort both of this parts by quickSort way
*/
void quickSortStep(std::vector<Elem>& S, int z, int n)
{
    if (z >= n) //when it is sorted
        return;

    int pivot = z + rand() % (n - z + 1); // choos pivot at random from range which is unsorted
    std::swap(S[pivot],S[n]);
    int l = z;
    int r = n-1;
    while (l<=r)
    {
        while (l <= r && S[n].getGrade() >= S[l].getGrade())
            l++; // find elemnet in left side which doesn't suit
        while (l <= r && S[n].getGrade() <= S[r].getGrade()) 
            r--; // find elemnet in right side which doesn't suit
        if(l<r)
            std::swap(S[l],S[r]); 
    }
    std::swap(S[l],S[n]);
    quickSortStep(S, z, l - 1); // sort left side
    quickSortStep(S, l+1, n); // sort right side

}

/*!
    Checks if in the vector is less the one element and calls quickSortStepp when is not
*/
void quickSort(std::vector<Elem>& S)
{
    int n = S.size();
    if(n <= 1)
        return; // finish when is less or equel than one element to sort

   quickSortStep(S, 0, n-1); // sort S with first and last elem
}