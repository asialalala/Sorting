#include <heapSort.hh>

/*!
    Create heap from the vector
*/
void heapify(std::vector<Elem>& S, int n, int i)
{
    int root = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && S[l].getGrade() > S[root].getGrade())// If left child is larger than root
        root = l;
 
    if (r < n && S[r].getGrade() > S[root].getGrade()) // If right child is larger than root
        root = r;
 
    
    if (root!= i) { // If root on its place
        std::swap(S[i], S[root]);

        heapify(S, n, root); // heapify sub-tree
    }
}


/*!
    Calls heapyfy function as a root is the bigest element, and than the bigest 
    element is positioned in the ened of vector and again change the rest of fector into
    a heap
*/
void heapSort(std::vector<Elem>& S, int left, int right)
{
    //int n = S.size();
   
    for (int i = right/ 2 ; i >= left; i--)  // Build heap
        heapify(S, right, i);
 
    for (int i = right ; i > left; i--) { // extract elements
 
        std::swap(S[left], S[i]); // swap current root (max element) with the end
 
        heapify(S, i, left); // call max heapify on the reduced heap
    }
}




