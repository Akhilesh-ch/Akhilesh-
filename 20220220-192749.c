#include<stdio.h>


int main()
{
    int a[10][10];
    int R=0,C=0,i=0,j=0,ut=0;
    
    printf("Enter value of R and C:");
    scanf("%d %d", &R, &C);
   
    printf("enter elements") ;
    for(i=0;i<R;i++)
    {
    for(j=0;j<C;j++)
    {
    scanf("%d",&a[i][j]);
    }
    }
    
    for(i=0;i<R;i++)
    {
    for(j=0;j<C;j++)
    {
    if(i==j&&a[i][j]!=1)
    {ut=-1;
    
    break;
    }}} 
    else if(i!=j&&a[i][j]!=0)
    {
    ut=-1;
    break;
    }
   
    if(ut==0) 
    printf("given matrix is unit matrix");
    else
    printf("not a unit matrix");
    return 0;
}