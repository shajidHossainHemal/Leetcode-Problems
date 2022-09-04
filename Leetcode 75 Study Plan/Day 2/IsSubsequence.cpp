#include <iostream>
using namespace std;

/*

abc
ahbgdc

axc
ahbgdc

*/

bool isSubsequence(string s, string t)
{   
    int j = 0;

    if(s.size() == 0 && t.size() == 0)
        return true;

    for(int i = 0; i < t.size(); i++)
    {
        if(s[j] == t[i])
        {
            j++;
        }

        if(j == s.size())
            return true;
    }

    return false;
}

int main()
{
    string input1, input2;

    cin >> input1 >> input2;

    bool answer = isSubsequence(input1, input2);

    cout << answer << endl;

    return 0;
}