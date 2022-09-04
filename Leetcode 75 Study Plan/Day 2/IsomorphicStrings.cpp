#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

/** 

egg
add
foo
bar
paper
title

**/

bool isIsomorphic(string s, string t)
{
    bool answer;
    map<char, bool> tableS, tableT;
    map<char, char> mappingTableS, mappingTableT;

    if(s.length() != t.length())
        return false;

    for(int i = 0; i < s.length(); i++)
    {
        if ((tableS[s[i]] && mappingTableS[s[i]] != t[i]) || (tableT[t[i]] && mappingTableT[t[i]] != s[i]))
        {
            answer = false;
            break;
        }

        tableS[s[i]] = true;
        mappingTableS[s[i]] = t[i];

        tableT[t[i]] = true;
        mappingTableT[t[i]] = s[i];
        
        answer = true;
    }

    return answer;
}

int main()
{
    string input1, input2;

    cin >> input1 >> input2;

    bool answer = isIsomorphic(input1, input2);

    cout << answer << endl;

    return 0;
}