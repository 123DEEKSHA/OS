#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100],i,n,TotalHeadMoment=0,initial;
    printf("enter number of requests\n");
    scanf("%d",&n);
    printf("enter the requests sequence\n");
    for(i=0;i<n;i++)
      scanf("%d",&RQ[i]);
    printf("enter initial head position\n");
    scanf("%d",&initial);

    printf("sequence of request access:\n");
    for(i=0;i<n;i++)
    {
         printf("%d",RQ[i]);
         TotalHeadMoment=TotalHeadMoment+ abs(RQ[i]-initial);
         initial=RQ[i];

     }
     printf("\nTotal head moment is %d",TotalHeadMoment);
     return 0;
}