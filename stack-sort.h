#pragma once

#include <stack>

template<class T> void stackSortWhitoutVector(std::stack<T>& Pila) {

	std::stack<T> result;
	std::stack<T> aux;

	T betterValue;
	int Pila_size = Pila.size();

	if (Pila.size() > 1)
	{
		while (result.size() != Pila_size)
		{
			betterValue = Pila.top();
			Pila.pop();
			while (!Pila.empty())
			{
				if (Pila.top() < betterValue)
				{
					aux.push(betterValue);
					betterValue = Pila.top();
				}
				else
				{
					aux.push(Pila.top());
				}
				Pila.pop();
			}
			result.push(betterValue);
			if (!aux.empty())
			{
				// Ahora se checkea el aux y sacamos el mas chico de aux y aprovechamos el proceso
				betterValue = aux.top();
				aux.pop();
				while (!aux.empty())
				{
					if (aux.top() < betterValue)
					{
						Pila.push(betterValue);
						betterValue = aux.top();
					}
					else
					{
						Pila.push(aux.top());
					}
					aux.pop();
				}
				result.push(betterValue);
			}
		}
		Pila = result;
	}
}