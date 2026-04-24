#include "UniquePtr.h"

template <typename T> Unique<T>::Unique(T *val) : ptr(val)
{
}

template <typename T> Unique<T>::~Unique()
{
    delete ptr;
}

/*
need to learn about copy constructor

and copy assignment operator

and rule of 3
*/