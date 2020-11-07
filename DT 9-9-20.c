#include<stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,k,rowindex,colindex,f=0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&k);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==k)
            {
                rowindex=i;
                colindex=j;
                f=1;
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    int northeasti=rowindex,northeastj=colindex,northwesti=rowindex,northwestj=colindex;
    while(northeasti>0 && northeastj>0)
    {
        northeastj--;
        northeasti--;
    }
    while(northwesti>0 && northwestj<c)
    {
        northwestj++;
        northwesti--;
    }
   for(int i=0;i<r;i++,printf("\n"))
   {
       for(int j=0;j<c;j++)
       {
           if(northeasti==i && northeastj==j)
           {
               printf("* ");
               northeasti++;
               northeastj++;
           }
           else if(northwesti==i && northwestj==j)
           {
               printf("* ");
               northwesti++;
               northwestj--;
           }
           else
           {
              printf("%d ",arr[i][j]);
           }
           if(northeastj==northwestj)
           {
            northwesti++;
            northwestj--;
           }
       }
   }


}