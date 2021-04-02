#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int lefti[10000][26]; // lefti[i][j] Keep track of how many letter j's are there on i's left (i inclusive)
int findind[10000][26]; // findind[i][j] Keep track of the rightmost letter j on i's left (i inclusive). -1 means no letter j found on i's left

string work(int ind, vector<int> rem)
{
    for (int j=0;j<26;j++)
    {
        if (rem[j]>0)
        {
            rem[j] --;
            int jind = findind[ind][j];
            int flag = 1;
            for (int i=0;i<26;i++)
            {
                if (lefti[jind][i] < rem[i])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                int remf = 1;
                for (int i=0;i<26;i++)
                    if (rem[i] > 0)
                    {
                        remf = 0;
                        break;
                    }
                if (remf==0)
                {
                    string s = work(jind-1, rem);
                    string p = string(1,(char)('a'+j));
                    return p+s;
                }
                else
                {
                    string p = string(1,(char)('a'+j));
                    return p;
                }
            }
            else
                rem[j]++;
        }
    }
    return "SHOULD NOT HAPPEN";
}
int main()
{
    char merged[10001];
    vector<int> cnt(26,0);
    scanf("%s",merged);
    int len = strlen(merged);
    for (int i=0;i<len;i++)
        cnt[merged[i]-'a'] ++;
    for (int i=0;i<26;i++)
        cnt[i] /= 2;
    memset(lefti,0,sizeof(lefti));
    memset(findind,-1,sizeof(findind));
    for (int i=0;i<len;i++)
    {
        if (i==0)
            lefti[i][merged[i]-'a'] ++;
        else
        {
            for (int j=0;j<26;j++)
                lefti[i][j] = lefti[i-1][j];
            lefti[i][merged[i]-'a'] ++;
        }
    }
    for (int i=0;i<len;i++)
    {
        if (i==0)
            findind[i][merged[i]-'a'] = i;
        else
        {
            for (int j=0;j<26;j++)
                findind[i][j] = findind[i-1][j];
            findind[i][merged[i]-'a'] = i;
        }
    }
    cout << work(len-1,cnt) << endl;
}
