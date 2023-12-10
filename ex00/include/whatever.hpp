//
// Created by k.t. on 2023/12/11.
//

#ifndef CONVERT_INCLUDE_WHATEVER_HPP_
#define CONVERT_INCLUDE_WHATEVER_HPP_

template <typename T> void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

template <typename T> T min(const T &a, const T &b) {
  return b < a ? b : a;
}

template <typename T> T max(const T &a, const T &b) {
  return a < b ? b : a;
}

#endif // CONVERT_INCLUDE_WHATEVER_HPP_
