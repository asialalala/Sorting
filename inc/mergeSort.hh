#pragma once 
#include <vector>
#include <iostream>
#include "Elem.hh"

void merge(std::vector<Elem>& in, std::vector<Elem>& out, int b, int m); 
std::vector <Elem> mergeSort(std::vector<Elem>& S);
