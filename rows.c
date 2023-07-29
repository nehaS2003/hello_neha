#include<stdio.h>
int main()
{
  int n;
  printf("Enter the value of n");
  scanf("%d",&n);
  int arr[n][n];
  int num=1
  int row_start=0,row_end=n-1,col_start=0,col_end=n-1;
  while(num<=n*n)
  {
  for (int j=col_start;j<=col_end;j++)
  {
      arr[row_start[j]=num++;
  }
  row_start++;
  for (int i=row-start;i<=row_end;i++)
  {
   arr[i][col_end] =num++;
  }
  col_end-;
  for(int j=col_end;j>=col_start;j--)
  {
     arr[row_end[j] = num++;
  }
  row_end--;
  for(int i=row_end;i>=row_start;i--)
  {
   arr[i][col_start]=num+=;
  }
  col_start++;
  }
  for(int i=0;i<n;i++)
  {
    for(int j=o;j<nj++)
    {
    printf("%d",arr[i][j];
    }
    printf("\n");
    }
    return 0;
}
    
