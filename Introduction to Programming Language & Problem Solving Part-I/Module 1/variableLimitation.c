#include<stdio.h>
int main()
{
    int a=1000000000; // 2^32 - 1 or 10 digit number can take int variable
    long long b = 10000000000000000000; // 2^64 - 1 or 19 digit number can take long long int variable
    float f=22.45667; //float can take 7 digit number 
    double d=22.456789099888902;
    printf("%.15lf",d); 
    return 0;
}