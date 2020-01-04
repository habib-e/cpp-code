/*
Mr habib;

*/
#include<bits/stdc++.h>
using namespace std;
class b
{
protected:
    int a,b;
public:
    void setab(int n,int m)
    {
        a=n;
        b=m;
    }
};
class d: public b
{
    int c;
public:
    void setc(int i)
    {
        c=i;
    }
    void showabc()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main()
{
    d ob;
    ob.setab(43,343);
    ob.setc(34);
    ob.showabc();
    return 0;
}
