
#include "mergeSort.hh"

/*!
    Merge sort of ints
*/
std::vector <Elem> mergeSort(std::vector<Elem>& S) {
int n = S.size();
std::vector <Elem> v1(S); // copy elemenets from S input
std::vector <Elem> * in = &v1;
std::vector <Elem> v2(n); // create empty place for S output
std::vector <Elem> * out = &v2;
for (int m = 1; m < n; m *= 2) 
{
    for (int b = 0; b < n; b += 2*m) 
    { 
        merge(*in, *out, b, m); // marge objects in output
    }
    std::swap(in, out); // sort output, input will be overwrite
}

S=*in; //copy sorted aray to S

return S;
}

/*!
    Merge, function needed for merge sort
*/
void merge(std::vector<Elem>& in, std::vector<Elem>& out, int b, int m) {
int i = b;
int j = b + m;
int n = in.size();
int e1 = std::min(b + m, n); // check when is the last
int e2 = std::min(b + 2*m, n); // check if the last
int k = b;
while ((i < e1) && (j < e2)) // while in S are elements
{
    if(in[j].getGrade() >= in[i].getGrade()) // if less
        out[k++] = in[i++];
    else
        out[k++] = in[j++];
}
while (i < e1) // if S2 empty, write the rest of S1
    out[k++] = in[i++];
while (j < e2) // if S1 empty, write the rest of S2
    out[k++] = in[j++];
}