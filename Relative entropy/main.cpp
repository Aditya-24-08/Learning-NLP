#include <bits/stdc++.h>
#define small 0.000000000000000000001
using namespace std;

int main()
{
    ifstream f1,f2;
    f1.open("in1.txt",ios::in);
    f2.open("in2.txt",ios::in);

    double p1,p2,res = 0;
    while(!f1.eof() || !f2.eof())
    {
        f1>>p1;
        f2>>p2;
        if(p1==0)
        {
            continue;
        }
        else if (p2==0)
        {
            p2 = small;
        }
       res+=(p1)*log2(p1/p2);
    }
    ofstream fout;
    fout.open("disp.txt",ios::out);
    fout<<res;
    return 0;
}
