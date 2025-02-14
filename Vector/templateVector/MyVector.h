#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>

template <typename T>
class vector {
    private:
        T* data;
        size_t size_, capacity_;
        void resize(); // Automatically call when there's not enough space.

    public:
        vector(); // Constructor initialization
        vector(size_t n, const T& value); // Constructor with value initialization
        ~vector(); // Destructor

        void push_back(const T& value); // Pushes back an element to the end of the vector
        void insert(size_t index, const T& value); // Inserts a value anywhere in the vector. size_t is used for indexing in this case because its the standard type for representing sizes and array indicies in C++.
        void remove(const T& value); // Removes a specific value if it is in the vector.
        size_t find(const T& value); // Finds a value, returns its index if its found. If not, returns -1.
        size_t size() const; // Returns size
};

template <typename T> // Constructor initialization
vector<T>::vector()
    : data(nullptr),
      size_(0),
      capacity_(0)
{}

template <typename T> // Constructor with parameters
vector<T>::vector(size_t n, const T& value)
    : data(new T[n]),
      size_(n),
      capacity_(n)
{
    for (size_t i = 0; i < n; i++){
        data[i] = value;
    }
}

template <typename T> // Destructor
vector<T>::~vector() {
    delete[] data; // Frees memory
}

#endif // MYVECTOR_H
