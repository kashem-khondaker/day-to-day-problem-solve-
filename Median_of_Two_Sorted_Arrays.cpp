#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> v;
        v.insert(v.end(), nums1.begin(), nums1.end());
        v.insert(v.end(), nums2.begin(), nums2.end());
        
        // Sort the combined array
        sort(v.begin(), v.end());
        
        int n = v.size();
        double median;
        if (n % 2 == 0) {
            // Use double division for the average
            median = (v[n / 2 - 1] + v[n / 2]) / 2.0;
        } else {
            median = v[n / 2];
        }
        return median;
    }
};

int main() {
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;

    vector<int> nums1(n1);
    cout << "Enter elements of the first sorted array: ";
    for (int i = 0; i < n1; ++i) {
        cin >> nums1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n2;

    vector<int> nums2(n2);
    cout << "Enter elements of the second sorted array: ";
    for (int i = 0; i < n2; ++i) {
        cin >> nums2[i];
    }

    Solution solution;
    double median = solution.findMedianSortedArrays(nums1, nums2);
    cout << "The median of the two sorted arrays is: " << median << endl;

    return 0;
}
