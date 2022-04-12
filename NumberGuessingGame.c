#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int num, guess=0;
    int count = 1;
    printf("Try to guess the correct number between 1 and 100!\n");
    scanf("%d", &guess);
    srand(time(0));
    num = rand() % 100 + 1;
    while (guess!=num)
    {
      if (guess<num)
      {
          printf("Too low! Try again\n");
          scanf("%d", &guess);
          count = count + 1;
      }
      else if (guess>num)
      {
          printf("Too high! Try again\n");
          scanf("%d", &guess);
          count = count + 1;
      }

    }
        printf("You got it! Good job. You got it within %d tries\n",count);
        system("pause");

        return 0;
}