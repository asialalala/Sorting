cmake_minimum_required(VERSION 3.0.0)
project(Sorting VERSION 0.1.0)
add_executable(Sorting src/main.cpp src/mergeSort.cpp src/quickSort.cpp src/introspectiveSort.cpp  src/heapSort.cpp src/Elem.cpp src/Read.cpp src/filter.cpp)
target_include_directories(Sorting PRIVATE inc/)
