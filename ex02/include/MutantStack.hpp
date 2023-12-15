//
// Created by k.t. on 2023/12/12.
//

#ifndef A_OUT__MUTANTSTACK_HPP_
#define A_OUT__MUTANTSTACK_HPP_

#include <list>
#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
public:
  class MutantStackIterator<T> {
  };
  MutantStack();
  ~MutantStack();
  MutantStack(const MutantStack &mutant_stack);
  MutantStack &operator=(const MutantStack &mutant_stack);
};

#include "MutantStack.tpp"

#endif // A_OUT__MUTANTSTACK_HPP_
