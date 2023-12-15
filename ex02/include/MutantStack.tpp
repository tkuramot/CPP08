#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &mutant_stack)
    : std::stack<T>(mutant_stack) {}

template <typename T> MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &mutant_stack) {
  if (this != &mutant_stack) {
    std::stack<T>::operator=(mutant_stack);
  }
  return *this;
}