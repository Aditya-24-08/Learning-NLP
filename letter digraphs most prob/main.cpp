#include <bits/stdc++.h>
#define ll long long
#define len 3
#define rep '.'
using namespace std;
char most_prob(string d)
{
    ll A[27] = {0};
    for(ll i=0;i<d.length();i++)
    {
        if(isalpha(d[i]))
        {
            A[d[i]-96]++;
        }
        else if(d[i]==rep)
        {
            A[0]++;
        }
    }
    ll m = A[0];
    int index = 0;
    for(int i=1;i<27;i++)
    {
        if(A[i]>m)
        {
            index = i;
            m = A[i];
        }
    }
    if(index==0)
        return rep;
    else
        return (char)(index-1 + 'a');
}
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("in.txt",ios::in);
    fout.open("out.txt",ios::out);
    string word;
    string temp;
    map <string,string> m;
    while(!fin.eof())
    {
        fin>>word;
        if(word.length()!=len)
            continue;
        temp = word;
        temp.erase(temp.end()-1);
        m[temp]+= word[word.length()-1];
    }
    map <string,string>::iterator i;
    string de;
    char c;
    for(i=m.begin();i!=m.end();i++)
    {
        de = i->second;
        c = most_prob(de);
        fout<<i->first<<"___...___"<<c<<'\n';
    }
    return 0;
}
