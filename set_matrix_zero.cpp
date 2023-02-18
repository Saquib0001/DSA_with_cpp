// program to print zeros matrix(if any element of the matrix 0 it's
//                                entire row and column will be 0 )
// time complexity(n*n)...
#include <iostream>
using namespace std;

int main()
{
    int  i, j , m , n;
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