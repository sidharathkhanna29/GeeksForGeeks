#include<iostream>
using namespace std;

int flip (char ch)
{
    return (ch == '0') ? '1' : '0';
}

int flips_in_string (string str , char ch)
{
    int count = 0;
    for (int i = 0 ; i < str.length() ; i++)
    {
        if (str[i] != ch)
            count++;
        ch = flip(ch);
    }
    return count;
}

int main()
{
    int t;
    string str;
    cin>>t;
    while (t--)
    {
        cin>>str;
        cout<<min(flips_in_string(str, '0') , flips_in_string(str , '1'))<<endl;
    }
    return 0;
}