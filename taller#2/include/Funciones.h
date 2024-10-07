#ifndef FUNCIONES_H
#define FUNCIONES_H 
#include "Cliente.h"
#include "Empleado.h"

#include <vector>

template <typename T>
int busqueda_binaria(const std::vector<T>& arr, const int& key) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

#endif // FUNCIONES_H


