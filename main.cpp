#include <iostream>

int fucn(int x) {
  return x*x;
}

int main(void) {
  std::cout << "git" << std::endl;
  std::cout << "Hello!" << std::endl;

  for(int i=0; i<10; i++) {
    std::cout << i << std::endl;
  }

  std::cout << func(6) << std::endl;
  
  return 0;
}
