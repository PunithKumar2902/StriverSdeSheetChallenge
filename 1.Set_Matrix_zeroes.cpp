//set matrix zeroes

#include<bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    bool col0=false; // to identify a zero in column 0
    
    for(int i=0;i<matrix.size();i++)
    {
        if(matrix[i][0]==0)
            col0=true;
        for(int j=1;j<matrix[0].size();j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[0][j]=0;       //first element of column is set zero is there is a zero in the column.
                matrix[i][0]=0;       //first element of row is set zero is there is a zero in the row.
            }
        }
    }
    
    for(int i=matrix.size()-1;i>=0;i--)
    {
        for(int j=matrix[0].size()-1;j>0;j--)
        {
            if(matrix[0][j]==0 || matrix[i][0]==0)
            {
                matrix[i][j]=0;             //set element to zero if row or column contains zero
            }
        }
        if(col0)  //first column check
        {
            matrix[i][0]=0;
        }
    }
}
