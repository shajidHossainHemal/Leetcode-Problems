#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> output;

    int left, right;
    for(int i = 0; i < numRows; i++)
    {
        vector<int> row;

        if(i > 0)
        {
            for (int j = 0; j <= output[i-1].size(); j++)
            {
                left = (j > 0) ? output[i - 1][j - 1] : 0;
                right = (j < output[i - 1].size()) ? output[i - 1][j] : 0;

                // cout << "i: " << i << "\t j:" << j << "\t Left: " << left << "\t Right: " << right << endl;

                row.push_back((left + right));
            }
        }
        else
        {
            row.push_back(1);
        }

        output.push_back(row);
    }

    return output;
}

int main()
{
    int numRows;

    cin >> numRows;

    vector<vector<int>> answer = generate(numRows);

    for (int i = 0; i < answer.size(); i++)
    {
        for(int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}