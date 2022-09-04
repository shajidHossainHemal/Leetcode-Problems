#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int last = m + n - 1;

    while(m > 0 and n > 0)
    {
        if(nums1[m - 1] > nums2[n - 1])
        {
            nums1[last] = nums1[m - 1];
            m--;
        }
        else
        {
            nums1[last] = nums2[n - 1];
            n--;
        }
        last--;
    }

    while(n > 0)
    {
        nums1[last] = nums2[n - 1];
        n--;
        last--;
    }
}

int main()
{
    vector<int> input1, input2;
    int m, n;
    int temp;

    cin >> m >> n;
    for(int i = 0; i < (m + n); i++)
    {
        cin >> temp;
        input1.push_back(temp);
    }
    
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        input2.push_back(temp);
    }
    
    merge(input1, m, input2, n);

    for (int i = 0; i < (m + n); i++)
    {
        cout << input1[i] << '\t';
    }
    cout << endl;

    return 0;
}

/*

3 3
1 2 3 0 0 0
2 5 6

*/