#include<iostream>
using namespace std; 
const int MAX = 1e6 ; 
bool arr[MAX]; 
int main()
{
    int n ; 
    cin >> n ; 
    for(int i=0; i<n-1; i++)
    {
        int x ; 
        cin >> x ; 
        arr[x] = true ;
    }
    for(int i=1; i<=n; i++)
    {
        if(!arr[i])
        {
            cout << i ; 
            break ; 
        }
    }
    return 0;
}