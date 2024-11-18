#include "dish.hpp"
#include <iostream>

template <class T> class DishStack
{
private:
  T *stack = nullptr;
  T *top = nullptr;
  T *current = nullptr;

public:
  DishStack(int size, T item)
  {
    stack = new T[size];
    top = stack + size;
    current = stack;

    *current = item;
    current++;
  }

  void push(T item)
  {
    if (current == top)
    {
      std::cout << "No more space in the array" << std::endl;
    }
    else
    {
      *(current) = item;
      current++;
    }
  }

  T peek()
  {
    return *(current - 1);
  }

  T pop()
  {
    T tmp = *(current - 1);
    current--;
    return tmp;
  }

  int size()
  {
    int i{};
    T *check = stack;

    while (check != current)
    {
      check++;
      i++;
    }

    return i;
  }

  // ~DishStack()
  // {
  //   delete stack;
  // }
};
