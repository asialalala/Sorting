#pragma once 
#include <random>
#include <iostream>
#include <vector>
#include "heapSort.hh"
#include "Elem.hh"

#define maxElements 100

int devideIntroSort(std::vector<Elem>& S, int left, int right) ;
void introspectiveSort(std::vector<Elem>& S, int left, int right); 
