#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=100){
        printf("Burger Khabo");
    }
    else if (tk>=50)
    {
        printf("Fuchka Kahbo");
    }
    else if (tk>=20)
    {
        printf("Ice Cream Khabo");
    }
    else printf("Kichu Khabo na ");
    return 0;
}