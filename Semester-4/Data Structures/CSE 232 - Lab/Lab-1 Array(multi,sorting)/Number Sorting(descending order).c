#include<stdio.h>

int main()
{
   int i,j,n,a[50],temp;

   printf("Number of elements:\n");
   scanf("%d",&n);

   printf("Elements:\n");

for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

printf("In Descending order:\n");
for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}
return 0;
}
