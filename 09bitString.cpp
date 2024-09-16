#include<iostream>
#include<math.h>
using namespace std; 

int main()
{
    int n ; cin >> n;
    int ans = 1 ;
    int power = pow(10,9) + 7 ;
    cout << power << endl ; 
    for(int i=0; i<n; i++)
        ans = ((ans*2) % power) ;
    cout << ans;  
}