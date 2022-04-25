#include<stdio.h>
int main()
{
    int n,sum=0,i=1,a,temp;
    printf(" \n ENTER A NUMBER \n ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        a = n%10;
        sum = sum+a*a*a;
        n = n/10;
    }    
    
    if(temp == sum)
    {
        printf("\n %d is an armstrong number \n",n);
    }
    else
    {
        printf(" \n %d is not an armstrong number \n",n);
    }
    return 0;
}