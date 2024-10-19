#include<stdio.h>
void sort(int a[],int n)
{
int i,j,temp;
for(i = 0;i <= n-1;i++)
{
    temp = a[i];
    for(j = i-1;j>=0;j--)
    {
        if(a[j] > temp)
        {
            a[j+1] = a[j];
            a[j] = temp;
        }
    }
}
    printf("Sorted Array\n");
    for(i = 0;i < n;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
}
void main()
{
    int n,i;
    printf("Enter the total number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);

}
