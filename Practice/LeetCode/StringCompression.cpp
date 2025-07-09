// Problem Number: 443

#include <bits/stdc++.h>

using namespace std;

int compress(vector<char> &chars)
{
 int idx = 1;
    int count = 1;

    for (int i = 1; i < chars.size(); i++) {
        if (chars[i] != chars[i - 1]) {
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[idx++] = c;
                }
            }
            chars[idx++] = chars[i];
            count = 1;
        } else {
            count++;
        }
    }

    // Handle last group
    if (count > 1) {
        string cnt = to_string(count);
        for (char c : cnt) {
            chars[idx++] = c;
        }
    }

    // Erase the extra characters at the end
    chars.erase(chars.begin() + idx, chars.end());

    return idx; 
}

int main()
{

    vector<char> vec = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << endl
         << compress(vec) << endl;

    return 0;
}

/*

#include <bits/stdc++.h>

using namespace std;

int compress(vector<char> &chars)
{

    string s = "";
    s += chars[0];
    int count = 1;

    for (int i = 1; i < chars.size(); i++)
    {
        if (chars[i] != chars[i - 1])
        {
            if (count > 1)
            {
                s += to_string(count);
            }
            s += chars[i];
            count = 1;
        }
        else
        {
            count++;
        }
    }

    s += to_string(count);

    // cout << s << endl;
    chars.clear();

    for (int i = 0; i < s.length(); i++)
    {
        chars.push_back(s[i]);
    }

    // for(char i: chars){
    //     cout << i << ' ';
    // }

    return s.length();
}

int main()
{

    vector<char> vec = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(vec);

    return 0;
}


*/
