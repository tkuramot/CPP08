//
// Created by k.t. on 2023/12/12.
//

#ifndef A_OUT_INCLUDE_SPAN_HPP_
#define A_OUT_INCLUDE_SPAN_HPP_

#include <list>

template <typename T>
class Span {
 public:
  Span();
  Span(unsigned int n);
  Span(const Span<T> &obj);
  ~Span();
  Span &operator=(const Span<T> &obj);

  void AddNumber(T n);
  template <class InputIt>
  void AddNumberRange(InputIt begin, InputIt end);
  T ShortestSpan();
  T LongestSpan();

 private:
  std::vector<T> vec_;
};

#include "Span.tpp"

#endif  // A_OUT_INCLUDE_SPAN_HPP_
