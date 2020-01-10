#include<bits/stdc++.h>
using namespace std;
class intake41
{
    int nofcouse;
    int intake;
    string s;
public:
    double tution_fee;
    intake41()
    {
        nofcouse=5;
        intake=0;
        tution_fee=0.0;
        s="second";
    }
    intake41(int r,double t)
    {
        intake =r;
        tution_fee=t;
    }
    void show()
    {
        cout<<"intake : "<<intake<<endl;
        cout<<"section : "<<s<<endl;
    }
    int caltuition()
    {
        return tution_fee*(nofcouse*1000);
    }
};
int main()
{
    int r;
    double f;
    intake41 ob(2,19.0);
    ob.show();
    cout<<ob.caltuition()<<endl;
    return 0;
}
