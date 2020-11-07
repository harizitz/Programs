#include<stdio.h>
#include<stdlib.h>

	void main () {
	int n;
	while(scanf("%d",&n)==1)
	{
	    if(n==0)
	    {
	        exit(0);
	    }
	    long sum=0;
	  for(int i=1;i<=n;i++)
	  {
	      sum+=i*i;
	  }
	  printf("%ld\n",sum);
	}
}