#include <stdio.h>

int main(void) {
	// your code goes here
	int n,t,i,k,j,a[110],b[110];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[j]);
	    }
	    for(j=0;j<n;j++)
	    {
	        for(k=j+1;k<n;k++)
	        {
	            if(a[j]!=a[k])break;
	        }
	        b[j]=n-k;
	    }
	    for(j=0;j<n;j++)
	        printf("%d ",b[j]);
        printf("\n");
	}
	return 0;
}

