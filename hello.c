#include <stdio.h>
#include <string.h>

int main() {

  char str[100];
  printf("A new feature!!");
  printf("Hello!");
  printf("Enter name: ");

  scanf("%s", str);

  if (strlen(str) < 9)
  {
    printf("Invalid name!\n");
  }
  else {
    printf("hello, %s\n", str);
  }

  return 0;


}
