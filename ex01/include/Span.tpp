//
// Created by k.t. on 2023/12/12.
//

#include "Span.hpp"

template <typename T>
Span<T>::Span() {
  vec_.reserve(0);
}

template <typename T>
Span<T>::Span(unsigned int n) {
  vec_.reserve(n);
}

template <typename T>
Span<T>::Span(const Span &obj) : vec_(obj.vec_) {}

template <typename T>
Span<T>::~Span() {}

template <typename T>
Span<T> &Span<T>::operator=(const Span<T> &obj) {
  if (this != &obj) {
    vec_ = obj.vec_;
  }
  return *this;
}

template <typename T>
void Span<T>::AddNumber(T n) {
  if (vec_.size() >= vec_.capacity()) {
    throw std::runtime_error("too many elements to push back");
  }
  vec_.push_back(n);
}

template <typename T>
template <class InputIt>
void Span<T>::AddNumberRange(InputIt begin, InputIt end) {
  if (vec_.size() >= vec_.capacity()) {
    throw std::runtime_error("too many elements to push back");
  }
  if (vec_.size() + static_cast<size_t>(std::distance(begin, end)) >
      vec_.capacity()) {
    throw std::runtime_error("too many elements to push back");
  }
  for (InputIt itr = begin; itr != end; ++itr) {
    vec_.push_back(*itr);
  }
}

template <typename T>
T Span<T>::ShortestSpan() {
  if (vec_.size() <= 1) {
    throw std::runtime_error("too few elements to calculate shortest span");
  }

  std::vector<T> new_vec = vec_;
  std::sort(new_vec.begin(), new_vec.end());
  T span = std::numeric_limits<T>::max();
  for (size_t i = 0; i < new_vec.size() - 1; ++i) {
    span = std::min(span, new_vec[i + 1] - new_vec[i]);
  }
  return span;
}

template <typename T>
T Span<T>::LongestSpan() {
  if (vec_.size() <= 1) {
    throw std::runtime_error("too few elements to calculate shortest span");
  }
  return *std::max_element(vec_.begin(), vec_.end()) -
         *std::min_element(vec_.begin(), vec_.end());
}