//
// Created by k.t. on 2023/12/11.
//

#ifndef A_OUT_INCLUDE_ARRAY_HPP_
#define A_OUT_INCLUDE_ARRAY_HPP_

#include <iostream>

template <typename T> class Array {
public:
  Array() : elements_(new T[1]()), size_(1) {}
  Array(size_t n) : elements_(new T[n]()), size_(n) {}
  Array(const Array<T> &obj) : elements_(new T[1]()), size_(1) {
    *this = obj;
  }
  Array &operator=(const Array<T> &obj) {
    if (this == &obj) {
      return *this;
    }
    T *temp_elements = new T[obj.size_]();
    for (size_t i = 0; i < obj.size_; ++i) {
      temp_elements[i] = obj.elements_[i];
    }
    delete[] elements_;
    elements_ = temp_elements;
    size_ = obj.size_;
    return *this;
  }
  ~Array() {
    delete[] elements_;
  }
  T &operator[](size_t index) const {
    if (index >= size_) {
      throw std::out_of_range("Array index out of range");
    }
    return elements_[index];
  }
  size_t Size() const { return size_; }

private:
  T *elements_;
  size_t size_;
};

#endif // A_OUT_INCLUDE_ARRAY_HPP_
