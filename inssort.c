#include<stdio.h>
void main()
{
    int a[100],l,k,j,i;
    printf("Enter limit");
    scanf("%d",&l);
    printf("Enter some no");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=l-1;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0&&a[j]>k)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;

    }
    printf("Sorted array is:");
for(i=0;i<l;i++)
{
    printf(" %d ",a[i]);
}
}

