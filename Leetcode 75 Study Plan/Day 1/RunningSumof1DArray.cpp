#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int> input)
{
    for(int i = 1; i < input.size(); i++)
    {
        input[i] += input[i - 1];
    }
    return input;
}

int main()
{
    vector<int> input;
    int n, temp;
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        input.push_back(temp);
    }

    vector<int> output = runningSum(input);

    for(int i = 0; i < output.size(); i++)
    {
        cout << output[i] << '\t';
    }
    cout << endl;

    return 0;
}