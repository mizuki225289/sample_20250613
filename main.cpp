#include <iostream>

/* func になってる!! */
int fucn(int x) {
  return x*x;
}

int func2(int x, int y) {
  return x+y;
}

int main(void) {
  std::cout << "git" << std::endl;
  std::cout << "Hello!" << std::endl;

  for(int i=0; i<10; i++) {
    std::cout << i << std::endl;
  }

  std::cout << fucn(6) << std::endl;
  std::cout << func2(5,7) << std::endl;

  std::cout << "git practice" << std::endl;
  
  return 0;
}
