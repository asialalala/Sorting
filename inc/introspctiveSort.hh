#pragma once 
#include <vector>
#include "mergeSort.hh"
#include "heapSort.hh"

#define maxElements 4

void introspectiveSort(std::vector<int>& S);
void introspectiveSortStep(std::vector<int>& S, int z, int n); 