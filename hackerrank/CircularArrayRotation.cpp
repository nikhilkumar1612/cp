#include<stdio.h>
int main()
{
    long int n,k,q,i,j;
    scanf("%ld%ld%ld",&n,&k,&q);
    long int a[n],m[q],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        b[i]=a[i];
    }
    

    for(i=0;i<q;i++)
    scanf("%ld",&m[i]);

    for(i=0;i<n;i++)
    {
        j=i + k;
        a[j%n]=b[i];
    }

    for(i=0;i<q;i++)
    {
        printf("%d\n",a[m[i]]);
    }
}
