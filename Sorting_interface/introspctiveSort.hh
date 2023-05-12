#pragma once 
#include <vector>
#include "heapSort.hh"
#include "Elem.hh"

#define maxElements 4

void introspectiveSort(std::vector<Elem>& S);
void introspectiveSortStep(std::vector<Elem>& S, int z, int n); 