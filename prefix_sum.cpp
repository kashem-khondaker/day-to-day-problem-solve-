#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n , q ;
    cin >> n >> q;

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int prefix_sum[n];
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    

    while (q--)
    {
        int l , r;
        cin >> l >> r;
        l--;
        r--;
        long long sum = 0;
        if(l==0)
        {
            sum = prefix_sum[r];
        }
        else
        {
            sum = prefix_sum[r] - prefix_sum[l-1];
        }
        cout << sum << endl;
    }
    
    return 0;
}