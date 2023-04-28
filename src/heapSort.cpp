#include <heapSort.hh>

void heapify(std::vector<int>& S, int n, int i)
{
    int root = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && S[l] > S[root])// If left child is larger than root
        root = l;
 
    if (r < n && S[r] > S[root]) // If right child is larger than root
        root = r;
 
    
    if (root!= i) { // If root on its place
        std::swap(S[i], S[root]);

        heapify(S, n, root); // heapify sub-tree
    }
}



void heapSort(std::vector<int>& S)
{
    int n = S.size();
   
    for (int i = n/ 2 - 1; i >= 0; i--)  // Build heap 
        heapify(S, n, i);
 
    for (int i = n - 1; i > 0; i--) { // extract elements
 
        std::swap(S[0], S[i]); // swap current root (max element) with the end
 
        heapify(S, i, 0); // call max heapify on the reduced heap
    }
}




