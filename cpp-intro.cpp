#include <stdio.h>

class Point{
  private:
  float x, y, z;

};

int add(int a, int b){
  return a + b;
}

int main(int argc, char* argv[])
{
  int a = 4;
  char ch = 'a';
  bool bl = true;
  
  int arr[5] = {1, 2, 3, 4, 5};
  char test[] = "this is a string";

  printf("%c\n", *test);
  printf("%c\n", *(test + 1));
  printf("%c\n", *test + 2);

  int *a_ptr = &a;
  printf("%d\n", *a_ptr + 1);
  for(int i = 0; i < 4; i++){
    printf("%d\n", add(arr[i], arr[i+1]));
  }

  

  return 0;
}