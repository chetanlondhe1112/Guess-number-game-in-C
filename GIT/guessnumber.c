//guess the magic number
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int magic,guess;
    
    magic=rand();/* get a random number*/
    //magic_2=rand();
    //magic=magic_1+magic_2;

    printf("Guess the number :");
    scanf("%d",&guess);

    if(guess==magic)
    {
        printf("***Right :)****");
    }
    else
    {
        printf("***Wrong :(***");
        if(guess<magic)         /*nested if*/
        {
            printf("\ntoo low");
        }
        else
        {
            printf("\ntoo high");

        }
    }
    return 0;
}