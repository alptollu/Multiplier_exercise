#include <stdio.h>

int main() {
    int number1,i,line,number2;
    //this program writes ten numbers in every line up to limit number(number1)
    // as folds of number2
    printf("Please write down a limit number:\n");
    scanf("%d",&number1);

    printf("Please write down a number to find its folds up to the limit number:\n");
    scanf("%d",&number2);

    i=0;
    line=1;
    while (i <= number1)
    {
        if (i%number2==0)
        {
            printf("%5d",i);
                if (line%10==0)
                  {
                    printf("\n");
                  }
                line++;
        }
        i++;
    }

    return 0;
}
