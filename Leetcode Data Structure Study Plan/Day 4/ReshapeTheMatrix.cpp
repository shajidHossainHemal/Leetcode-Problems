#include <iostream>
#include <vector>
using namespace std;

// 2 2 1 2 3 4 1 4

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    vector<vector<int>> outputMatrix;

    if ((mat.size() * mat[0].size()) != (r * c))
        return mat;

    int newM = 0, newN = 0;
    vector<int> output;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            output.push_back(mat[i][j]);
            newN++;

            if (newN > c - 1)
            {
                newN = 0;
                outputMatrix.push_back(output);
                output.clear();
            }
        }
    }

    return outputMatrix;
}

int main()
{
    int n, m, temp;

    cin >> n >> m;

    vector<vector<int>> inputMatrix;

    for (int i = 0; i < n; i++)
    {
        vector<int> input;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            input.push_back(temp);
        }
        inputMatrix.push_back(input);
    }

    int r, c;

    cin >> r >> c;

    vector<vector<int>> answer = matrixReshape(inputMatrix, r, c);

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[0].size(); j++)
        {
            cout << answer[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}