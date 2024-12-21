
/*
Task: Write a simple program to:
    Take an integer and a string as input from the user.
    Print them on separate lines.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x ;
    string str;
    
    cin >> x;
    cin.ignore();
    getline(cin, str);
    // cin >> str;

    cout << x << endl;
    cout << str << endl;
    return 0;
}