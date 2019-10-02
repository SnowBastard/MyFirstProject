#include <stdio.h>
#include <conio.h>

int main(void) {
    printf("Welcome to the game.\n");
    printf("Press any key to start.\n");
    getch();
    printf("You can play as warrior or wizard.\n");
    printf("Do you want to play as warrior? (y/n)\n");

    if (getch() == 'y')
    {
      printf("Good choice,let's start.\n");
      printf("If you are an old warrior,you can jump in the window,or you can go down by stairs.\n");
      printf("What do you choose?\n");
      printf("First one or second? (1/2)\n");
      if (getch() == '2')   {
        printf("Good choice");
      }
      else {
        printf("Oh nice you are an interesting person so do it!!!");
      }

    }
    else {
    printf("Don't worry we have another choice\n");
    printf("Do you want to play as wizard? (y/n)\n");
    if (getch()== 'y'){
        printf("Good choice,let's start.\n");
    }
    }

    return 0;
     }
