#include<iostream>
using namespace std;
int main()
{
    cout<<"n: ";
    int n; cin>>n;
    int tmp = 2*n - 1;
    char a[100][100];
    for (int i = 0; i < tmp; i++)
    {
        for (int j = 0; j < tmp; j++)
        {
            a[i][j] = '*';
        }
    }
    for (int i = 0; i <= tmp/2; i++)
    { 
        for (int j = i + 1; j <=( 2*n - 1 - 2*(i + 1)); j++)
        {
            a[i][i+1] = ' ';
        }
    }
    for (int i = 0; i < tmp; i++)
    {
        for (int j = 0; j < tmp; j++)
        {
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
    
}