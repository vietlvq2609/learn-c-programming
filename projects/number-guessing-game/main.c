#include <stdio.h>
#include <stdlib.h>

int main() {
  int input;
  const int RANDOM_NUM = rand() % 101;
  printf("What is your guessing number ?");
  scanf("%d", &input);

  for (;;) {
    if (input == RANDOM_NUM) {
      printf("Correct\n");
      break;
    }

    if (input > RANDOM_NUM)
      printf("Too high\n");
    else
      printf("Too low\n");

    scanf("%d", &input);
  }

  return 0;
}
