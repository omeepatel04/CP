// Problem Number: 567

#include <bits/stdc++.h>

using namespace std;

bool isSame(int arr1[], int arr2[]){
    for(int i = 0; i < 26; i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }

    return true;
}

bool checkInclusion(string s1, string s2)
{
    int freqS1[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        freqS1[s1[i] - 'a']++;
    }

    int windSize = s1.length();

    for (int i = 0; i < s2.length(); i++)
    {

        int windIdx = 0, idx = i;
        int windFreq[26] = {0};

        while(windIdx < windSize && idx < s2.length()){
            windFreq[s2[idx]-'a']++;
            windIdx++; idx++;
        }

        if(isSame(freqS1, windFreq)){
            return true;
        }
    }

    return false;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << checkInclusion(s1, s2);

    return 0;
}