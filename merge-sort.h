#pragma once
#include <vector>


template<class T> void MergeSort(std::vector<T>& Arreglo, int start, int end);
template<class T> void merge(std::vector<T>& Arreglo, int start, int middle, int end);

template<class T> void MergeSort(std::vector<T> &Arreglo, int start, int end) {
	if (start < end) {
		int middle = (start + end) / 2;
		MergeSort(Arreglo, start, middle);
		MergeSort(Arreglo, middle + 1, end);
		merge(Arreglo, start, middle, end);
	}
}

template<class T> void merge(std::vector<T>& Arreglo, int start, int middle, int end) {
	std::vector<T> aux;
	int i, j;
	i = start;
	j = middle + 1;

	while (i <= middle && j <= end)
	{
		if (Arreglo[i] <= Arreglo[j]) {
			aux.push_back(Arreglo[i]);
			i++;
		}
		else
		{
			aux.push_back(Arreglo[j]);
			j++;
		}
	}
	while (i <= middle)
	{
		aux.push_back(Arreglo[i]);
		i++;
	}
	while (j <= end)
	{
		aux.push_back(Arreglo[j]);
		j++;
	}
	for (int k = start; k <= end; k++)
	{
		Arreglo[k] = aux[k - start];
	}
}