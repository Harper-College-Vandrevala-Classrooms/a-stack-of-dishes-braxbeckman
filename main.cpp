#include "dish.hpp"
#include "dishstack.hpp"
#include <iostream>

int main()
{
  Dish dish1("dish 1");
  Dish dish2("dish 2");
  Dish dish3("dish 3");
  Dish dish4("dish 4");
  Dish dish5("dish 5");
  Dish dish6("dish 6");

  DishStack stack(5, dish1);
  stack.push(dish2); // works
  stack.push(dish3); // works
  stack.push(dish4); // works
  stack.push(dish5); // works
  stack.push(dish6); // out of space

  std::cout << "Peeking: " << stack.peek().get_description() << std::endl;
  std::cout << "Popping: " << stack.pop().get_description() << std::endl;
  std::cout << "Size: " << stack.size() << std::endl;
  std::cout << "Popping: " << stack.pop().get_description() << std::endl;
  std::cout << "Popping: " << stack.pop().get_description() << std::endl;
}
