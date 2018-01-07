#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ifstream fin;
    fin.open("in.txt",ios::in);

    ll F[26] = {0};
    char ch;
    unsigned ll tot = 0;
    while(!fin.eof())
    {

        fin.get(ch);
        if(isalpha(ch))
        {
            tot++;
            ch = tolower(ch);
            F[ch - 97]++;
        }
        ch = '\0';
    }
    double Prob[26];
    for(int i=0;i<26;i++)
    {
        Prob[i] = ((double)(F[i]))/((double)(tot));
    }
    ofstream fout,fmake;
    fout.open("display.txt",ios::out);
    fmake.open("res.txt",ios::out);

    char Ch='a';

    for(int i=0;i<26;i++)
    {
        fout<<Ch<<" -> "<<Prob[i]<<'\n';
        Ch++;
        fmake<<Prob[i]<<'\n';
    }

    return 0;
}
