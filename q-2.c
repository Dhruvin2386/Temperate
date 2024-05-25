#include<stdio.h>

int main(){

    int a,digit,ans;

    printf("Enter value for table :- ");
    scanf("%d", &digit);

    for ( a = 1; a <=10; a++)
    {
        ans = digit*a;
        printf("%d * %d = %d\n",digit, a, ans);
    }
    

    return 0;
}