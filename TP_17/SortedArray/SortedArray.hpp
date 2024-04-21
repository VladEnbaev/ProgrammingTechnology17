//
//  SortedArray.hpp
//  TP_17
//
//  Created by Vlad Gradskiy on 07.04.2024.
//  


#ifndef SortedArray_hpp
#define SortedArray_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

template <typename T>
class SortedArray {
private:
    std::vector<T> data;
    size_t capacity;

public:
    SortedArray(size_t capacity) {
        this -> capacity = capacity;
    }
    
    SortedArray(const SortedArray& other) {
        this -> data = other.data;
        this -> capacity = other.capacity;
    }
    
    SortedArray& operator=(const SortedArray& other) {
        if (this == &other) {
            return *this;
        }
        data = other.data;
        capacity = other.capacity;
        return *this;
    }

    void push(const T& element) {
        if (data.size() < capacity) {
            data.push_back(element);
            std::sort(data.begin(), data.end());
        } else {
            throw std::out_of_range("SortedArray is full");
        }
    }

    size_t size() const {
        return data.size();
    }

    T& operator[](size_t index) {
        return data[index];
    }

    const T& at(size_t index) const {
        if (index >= data.size()) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    void erase(size_t index) {
        if (index >= data.size()) {
            throw std::out_of_range("Index out of range");
        }
        data.erase(data.begin() + index);
    }
};
#endif /* SortedArray_hpp */
