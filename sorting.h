#ifndef _SORTING_H_
#define _SORTING_H_

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

/* Sorts the contents of vec in increasing order */
template <typename T>
void bubble_sort(vector<T> &vec);

/* Sorts the contents of vec in increasing order */
template <typename T>
void merge_sort(vector<T> &vec);

/* Prints the contents of vec */
template <typename T>
void print(vector<T> &vec);

/*Fills vec with randomized char values (lowercase) */
void char_fill(vector<char> &vec);

/* Fills vec with randomized int values */
void int_fill(vector<int> &vec);
