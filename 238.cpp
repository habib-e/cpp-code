/*
Mr habib;

*/
#include<bits/stdc++.h>
using namespace std;
class b
{
    int x;
public:
    void setx(int n)
    {
        x=n;
    }
    void showx()
    {
        cout<<x<<endl;
    }
};
class d: private b
{
    int y;
public:
    void setxy(int p,int q)
    {
        setx(p);
        y=q;
    }
    void showxy()
    {
        showx();
        cout<<y<<endl;
    }
};
int main()
{
    d ob;
    ob.setxy(4,8);
    ob.showxy();
    return 0;
}

