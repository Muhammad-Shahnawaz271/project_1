#include<iostream>
using namespace std;

void multiply(int m3[],int r1,int r2,int c1,int c2)
{
  int m1[r1*c1],m2[r2*c2];
  int n=0;
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      cout<<"Enter the value of entery at position "<<i+1<<","<<j+1<<" : ";
      cin>>m1[n];
      n++;
    }
  }
  int m4[r1][c1],m5[r2][c2];
  n=0;
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      m4[i][j]=m1[n];
      n++;
    }
  }
  n=0;
  for(int i=0;i<r2;i++)
  {
    for(int j=0;j<c2;j++)
    {
      cout<<"Enter the value of entery at position "<<i+1<<","<<j+1<<" : ";
      cin>>m2[n];
      n++;
    }
  }
  n=0;
  for(int i=0;i<r2;i++)
  {
    for(int j=0;j<c2;j++)
    {
      m5[i][j]=m2[n];
      n++;
    }
  }
  int m6[r1][c2];
 
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c2;j++)
    {
      m6[i][j]=0;
      for(int k=0;k<c1;k++)
      {
        m6[i][j]=m6[i][j]+(m4[i][k]*m5[k][j]);
      }
    }
  }
  n=0;
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c2;j++)
    {
      m3[n]=m6[i][j];
      n++;
    }
  }
}
int main()
{
  int r1,r2,c1,c2;
  cout<<"Enter the rows of 1st matrix : ";
  cin>>r1;
  cout<<"Enter the columns of 1st matrix : ";
  cin>>c1;
  cout<<"Enter the rows of 2nd matrix : ";
  cin>>r2;
  cout<<"Enter the columns of 2nd matrix : ";
  cin>>c2;
  if(c1==r2)
  {
    int m3[r1*c2];
    multiply(m3,r1,c1,r2,c2);
    int n=0;
    for(int i=0;i<r1;i++)
    {
      for(int j=0;j<c2;j++)
      {
        cout<<m3[n]<<"\t";
        n++;
      }
      cout<<endl;
    }
  }
  else
  cout<<"Multiplication not possible"<<endl;
  return 0;
}