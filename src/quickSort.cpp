#include "quickSort.hh"

void quickSortStep(std::vector<int>& S, int z, int n)
{
    if (z >= n) //when it is sorted
        return;

    //int pivot = S[n]; // choos pivot
    int pivot = z + rand() % (n - z + 1); // choos pivot at random
    std::swap(S[pivot],S[n]);
    int l = z;
    int r = n-1;
    while (l<=r)
    {
        while (l <= r && S[n] >= S[l])
            l++; // find elemnet in left side which doesn't suit
        while (l <= r && S[n] <= S[r]) 
            r--; // find elemnet in right side which doesn't suit
        if(l<r)
            std::swap(S[l],S[r]); 
    }
    std::swap(S[l],S[n]);
    quickSortStep(S, z, l - 1);
    quickSortStep(S, l+1, n);

}

void quickSort(std::vector<int>& S)
{
    int n = S.size();
    if(n <= 1)
        return; // finish when is less or equel than one element to sort

   quickSortStep(S, 0, n-1); // sort S with first and last elem
}