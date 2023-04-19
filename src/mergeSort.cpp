
#include "mergeSort.hh"

/*!
    Merge sort of ints
*/
std::vector < int>mergeSort(std::vector < int > & S){

    int n = S.size(); // size of S
    std::vector < int > v1(S); // copy of S in v1
    std::vector < int > * in = &v1; // initial in
    std::vector < int >  v2(n); // empty vector with n elements
    std::vector < int > * out = &v2; // initial out

    for(int i = 1; i < n; i *= 2){ // choos two elements and go further
        for(int j = 0; j < n; j += 2*i){ 
            merge(*in, *out, i, j);
        }
    }
    std::swap(in, out); // swap in with out

    S = *in; //copy sorted vector in to S

    return S;
}

/*!
    Merge, function needed for merge sort
*/
void merge(std::vector < int > &in, std::vector < int > &out, int i, int j)
{
    int k = j;
    int l = i+j;
    int n = in.size();
    int e1 = std::min(l, n); // when first loop is finished
    int e2 = std::min(j+2*i, n); // when second loop is finished
    int m = j;
    while((k < e1)&&(l<e2)) // if there is something to merge
    {
        if(in[l] > in[k]) // append smaller to S
        out[m++] = in[k++]; // k is smaller - sign and add 1
        else
        out[m++] = in[l++]; // l is smaller - sign and add 1
    }

    // when S1 or S2 is puted enterialy into new S write the rest of S2 or S1
    while(k < e1)
        out[m++] = in[k++]; 
    while(l < e2)
        out[m++] = in[l++];


}

