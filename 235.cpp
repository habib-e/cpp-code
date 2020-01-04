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
class d: public b
{
    int y;
public:
    void sety(int n)
    {
        y=n;
    }
    void showy()
    {
        cout<<y<<endl;
    }
};
int main()
{
    d ob;
    ob.setx(4);
    ob.sety(6);
    ob.showx();
    ob.showy();
    return 0;
}
