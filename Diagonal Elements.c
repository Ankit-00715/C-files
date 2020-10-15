#include<stdio.h>
int main(){
    int s,a[50][50];
    printf("Enter the size of marrix : ");
    scanf("%d",&s);
    printf("Enter the elements of matrix : \n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of the Main Diagonal of the given Matrix : ");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(i==j)
            {
                printf("%d, ",a[i][j]);
            }
        }
    }
    printf("\nElements of the Anti-Diagonal of the given Matrix : ");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(i+j==m-1)
            {
                printf("%d, ",a[i][j]);
            }
        }
    }
    return 0;
}


