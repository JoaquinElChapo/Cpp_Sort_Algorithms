// Trimigno Giuseppe , Computer Engineering at Univeristy of Parma, Italy
// Insertion Sort, a sorting algorithm with O(n) complexity in best case.
// But an O(n^2) complexity in avg and worst cases.


#ifndef INSERTION_H
#define INSERTION_H

#include "comp.h"

template <typename E> void insertionSort(E v[], int N) {
	for (int i = 1; i < N; i++)
		for (int j = i; (j > 0) && (comp(v[j - 1], v[j])); j--) 
			exch(v[j - 1], v[j]);
}


#endif // !INSERTION_H