#include<iostream>

using namespace std ;
int main(){

    int n;
    cout<<"Enter order of square matrix(n*n) : ";
    cin>>n ;
    int A[n][n];
    int row1=0 ,col1=0 ,row2 = n-1, col2 = n-1,iter=1;
    while(iter<=(n*n))
    {
        for(int i = col1; i <= col2 ; i++)
        {
            A[row1][i] = iter++;
            
            }

        for(int j=row1+1;j<=row2;j++)
          {
            A[j][col2]=iter++;
            }

        for(int i=col2-1;i>=col1;i--)
        {
            A[row2][i]=iter++;
        }

        for(int j=row2-1;j>=row1+1;j--)
        {
            A[j][col1]=iter++;
        }
        row1++;row2--;col1++;col2--;
    }

   cout<<"print spiral matrix"<<endl;
   for(int i=0; i<n; i++)
    {
      for(int j=0;j<n;j++)
      {
         cout<<"  " << A[i][j];
      }

            cout<<endl;
         }

return 0;
}
