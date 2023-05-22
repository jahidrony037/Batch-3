#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    //addition 
    int sum=a+b;
    printf("%d\n",sum);
    int sub=a-b;
    printf("%d\n",sub);
    int mul=a*b;
    printf("%d\n",mul);
    float div= a*1.0/b;
    printf("%.2f\n",div);
    int rem=a%b;
    printf("%d\n",rem);

    return 0;
}