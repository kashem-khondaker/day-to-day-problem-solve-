/*
3. Loops
Question: Write a for loop that prints numbers from 1 to 10.
Challenge: Modify it to print only even numbers.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 10; i++)
    {
        cout << i << " " ;
    }
    
    for (int i = 0; i < 10; i++)
    {
        if(i==7)
        {
            cout << endl << i ;
        }
    }
    
    return 0;
}