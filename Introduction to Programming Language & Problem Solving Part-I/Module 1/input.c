#include<stdio.h>
int main()
{
    // Take input as 10% and 20% and print it 
    int a,b;
    //first method
    // scanf("%d%% %d%%",&a,&b);
    // printf("%d%% %d%%",a,b);
    printf("\n");
    //second method
    char c,d;
    scanf("%d%c %d%c",&a,&c,&b,&d);
    printf("%d%c %d%c",a,c,b,d);
    return 0;
}