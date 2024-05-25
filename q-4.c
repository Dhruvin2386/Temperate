#include<stdio.h>

int main(){

    int  a;
    int  lastNumber = 0;

    printf("Enter the number :- ");
    scanf("%d", &a);

    lastNumber = a%10;
    while (a>=10)
    {
        a = a/10;
    }
    
    int firstNumber = a;

    printf("First = %d\n" , firstNumber);
    printf("Last = %d\n" , lastNumber);

    printf("Sum of the number is %d.\n", firstNumber + lastNumber);
    
    return 0;
}