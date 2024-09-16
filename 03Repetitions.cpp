#include<iostream>
using namespace std; 

int main()
{
    string n ; 
    cin >> n ; 
    int count = 1 , max = 1;

    for(int i=0; i<n.length()-1; i++)
    {
        if(n.at(i) == n.at(i+1))
            count++; 
        else
            count = 1 ; 
        if(max<count)
            max = count ; 
    }
    cout << max ; 
    return 0; 
}