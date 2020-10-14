#include <stdio.h>

int main(void)
{
    int a[5];
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(a[j] >= a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("%d\n",a[4]);
    printf("%d\n",a[0]);
    return 0;
}
