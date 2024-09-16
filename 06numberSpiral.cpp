#include<iostream>
using namespace std; 

int main()
{
    long long int question; cin >> question;
    long long arry[question]; 
    for(int i=0; i<question; i++)
    {
        long long row , col ; cin >> row >> col ; 
        //this code not accepted for this long long integer types
        //when i submit it first time then here int so i have to focus on data types
        
        if(row > col)
        {
            if(row%2==0)
                arry[i] = (row*row) - (col-1);
            else
                arry[i] = ((row-1)*(row-1)) + col ;
        }
        else
        {
            if(col%2==0)
                arry[i] = ((col-1)*(col-1)) + row ;
            else
                arry[i] = (col*col) - (row-1); 
        }
    } 
    for(int i=0; i<question; i++)
    {
        cout << arry[i] << endl ;
    }
    return 0;
}