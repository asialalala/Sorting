#include "introspctiveSort.hh"

void introspectiveSortStep(std::vector<Elem>& S, int z, int n)
{
        if (z >= n) //when it is sorted
        return;
        
    if (maxElements >= n) {
        heapSort(S);
        return;
     } // start merge sorting

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
    introspectiveSortStep(S, z, l - 1); // sort left side
    introspectiveSortStep(S, l+1, n); // sort right side
}

void introspectiveSort(std::vector<Elem>& S)
{
    int n = S.size();
    if(n <= 1){
        return; // finish when is less or equel than one element to sort
    }else if(n > 1 && n <= maxElements){

    }else{
       introspectiveSortStep(S, 0, n-1); // sort S with first and last elem
    }

}

