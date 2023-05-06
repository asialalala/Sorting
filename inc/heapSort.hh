#pragma once 
#include <vector>
#include <iostream>
#include "Elem.hh"

void heapSort(std::vector<Elem>& S);
void heapify(std::vector<Elem>& S, int i, int n);
