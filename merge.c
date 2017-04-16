#include<stdio.h>
#include<conio.h>
void main()
{
    int l,i,a[100],b[50],c[50],mid,j,k;
    printf("Enter limit\n");
    scanf("%d",&l);
    printf("Enter some numbers\n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    mid=l/2;
    for(i=0;i<mid;i++)
    {
        b[i]=a[i];
    }
    i=mid;
    j=0;
    while(i<l)
    {
        c[j]=a[i];
        j++;
        i++;
    }
    for(i=1;i<mid;i++)
    {
        k=b[i];
        j=i-1;
        while(k<b[j]&&j>-1)
        {
            b[j+1]=b[j];
            j--;
        }
        b[j+1]=k;
    }
    for(i=1;i<(l-mid);i++)
    {
        k=c[i];
        j=i-1;
        while(k<c[j]&&j>-1)
        {
            c[j+1]=c[j];
            j--;
        }
        c[j+1]=k;
    }
    j=0;
    k=0;
    for(i=0;i<l;i++)
    {
        if(b[j]<c[k])
        {
            a[i]=b[j];
            j++;
        }
        else
        {
            a[i]=c[k];
            k++;
        }
    }
    printf("Sorted list");
    for(i=0;i<l;i++)
    {
        printf(" %d",a[i]);
    }
}


