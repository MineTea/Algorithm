#include<stdio.h>

void Insertion_Sort(int *x,int n)//x�����飬n���������
{
    int i;
    int j;
    int median;

    for(j = 0;j<n;j++)
    {
        i=j;
       while(i!=0 && x[i-1]>x[i])
       {
           median = x[i];
           x[i] = x[i-1];
           x[i-1] = median;
           i--;
       }
    }
}
