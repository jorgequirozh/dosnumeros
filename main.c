#include <stdio.h>

int main()
{
    int number1;
    int number2;
    int sum;
    int i;
    sum;
    printf("Input a number and press the enter key \n");
    scanf("%d", &sum);
    printf("Pairs of numbers that add %d :\n",sum);
   
    for(i=1;i<sum;i=i+1){
    number1=i;
    number2=sum-number1;
    printf("%d y %d \n",number1,number2);
    }
    return 0;
}
