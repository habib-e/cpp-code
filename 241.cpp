/*
Mr habib;

*/
#include<bits/stdc++.h>
using namespace std;
class sample{
int p;
protected:
    int q;
public:
    int r;
    sample(int n,int m)
    {
        p=n;
        q=m;
    }
    int getp()
    {
        return p;
    }
    int getq()
    {
        return q;
    }
};

int main()
{
    sample ob(43,42);
    ob.r=43;
    cout<<ob.getp()<<" "<<endl;
    cout<<ob.getq()<<" "<<endl;
    return 0;
}
