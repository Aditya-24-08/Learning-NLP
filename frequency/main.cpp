#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ifstream fin;
    fin.open("in.txt",ios::in);

    ll F[27] = {0};
    char ch;
    unsigned ll tot = 0;
    while(!fin.eof())
    {

        fin.get(ch);
        if(isalpha(ch))
        {
            tot++;
            ch = tolower(ch);
            F[ch - 96]++;
        }
        else if(ch==' ')
        {
            tot++;
            F[0]++;
        }
        ch = '\0';
    }
    double Prob[27];
    for(int i=0;i<27;i++)
    {
        Prob[i] = ((double)(F[i]))/((double)(tot));
    }
    ofstream fout,fmake;
    fout.open("display.txt",ios::out);
    fmake.open("res.txt",ios::out);

    char Ch = ' ';

    for(int i=0;i<27;i++)
    {
        fout<<Ch<<" -> "<<Prob[i]<<'\n';
        if(Ch==' ')
            Ch = 'a';
        else
            Ch++;
        fmake<<Prob[i]<<'\n';
    }

    return 0;
}
