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
        vector(); // Constructor
        ~vector(); // Destructor

        void push_back(const T& value); // Pushes back an element to the end of the vector
        void insert(size_t index, const T& value); // Inserts a value anywhere in the vector. size_t is used for indexing in this case because its the standard type for representing sizes and array indicies in C++.
        void remove(const T& value); // Removes a specific value if it is in the vector.
        size_t find(const T& value); // Finds a value, returns its index if its found. If not, returns -1.
        size_t size() const; // Returns size
};

// Using only h file to reduce a potential code bloat -- where
#endif
