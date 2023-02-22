#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j, k;
    cout << "Enter the rows and columns :";
    cin >> m >> n;
    int matrix[m][n];
    cout << "Enter the matrix :\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Entered matrix is :\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int row[m], col[n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    // printing the matrix
    cout << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



// #include<iostream>

// using namespace std ;

// void setMatrixzeroes(int A[][] , int m , int n){
     
//     int i ,j
//     bool row[m] ,col[n];
//     for(i=0 ; i<=m-1 ;i++){
//         row[i] = false ;
//     }
//     for(j = 0 ; j<=n-1 ; j++){
//         col[j] = false ; 
//     }
//     for( i = 0 ; i<=m-1; i++){
//         for(j=0 ; j<= n-1 ; j++){
//             if(A[i][j]==0){
//                 row[i] = true;
//                 row[j] = true;
//             }
//         }
//     }

//     for(i = 0 ; i<=m-1 ; i++){
//         for(j = 0 ; j<=n-1 ; j++){
//             if(row[i]==true || col[j]==1){
//                 A[i][j] = 0 ;
//             }
//         }
//     }
// }

// int main(){

// setMatrixzeroes(A[4][4] , 3 , 3);
// return 0 ;
// }