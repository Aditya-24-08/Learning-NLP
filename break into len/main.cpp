#include <bits/stdc++.h>
#define len 3
#define rep '.'
using namespace std;

string takeinp(ifstream& fin)
{
    string s = "";
    char c;

    for(int i=0;i<len&&!fin.eof();i++)
        {

           fin.get(c);
           if(isalpha(c) || c==' ')
               {
                   if(c!=' ')
                        c = tolower(c);
                   else
                        c = rep;
                   s+=c;
               }
           else
           {
               s = "";
               break;
           }

           c = '\0';
        }
    return s;
}
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("in.txt",ios::in);
    fout.open("out.txt",ios::out);
    string s;
    char c;
    while(!fin.eof())
    {
        s = takeinp(fin);

        if(s.length()!=len)
            continue;

        fout<<s<<'\n';
    }
    return 0;
}
