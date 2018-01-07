#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("in.txt",ios::in);

    double res = 0;
    double num;

    while(!fin.eof())
    {
        fin>>num;
        if(num!=0)
          {
              res+=(num)*(log2(num));
          }
    }
    res = -1*res;
    ofstream fout,fmake;
    fout.open("disp.txt",ios::out);
    fout<<res<<" bits";
    fmake.open("res.txt",ios::out);
    fmake<<res;

    return 0;
}
