#include "quickSort.hh"


void quickSortStep(std::vector<int>& S, int nL, int n)
{
    if (nL >= n)
        return;

    int pivot = S[n];
    //int pivot = rand()%n; // choos pivot

    int l = nL;
    int r = n-1;
    while (l<=r)
    {
        while (l <= r && pivot >= S[l])
            l++;
        while (l <= r)
            r--;
        if(l<r)
            std::swap(S[l],S[r]); 
    }
    std::swap(S[l],S[n]);
    quickSortStep(S, nL, l - 1);
    quickSortStep(S, l+1, n);

}

void quickSort(std::vector<int>& S)
{
    int n = S.size();
    if(n <= 1)
        return; // finish when is less than one element to wort

   quickSortStep(S, 0, n-1); // sort S with first and last elem
}