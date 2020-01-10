#include<bits/stdc++.h>
using namespace std;
class person
{
    int hour;
public:
    person(int y)
    {
        hour=y;
    }
    void showh()
    {
        cout<<hour<<endl;
    }

};
class academic : public person
{
    int number;
public:
    academic(int e,int r) :person(r)
    {
        number=e;
    }
    void shown()
    {
        cout<<number<<endl;
    }
};
class supporting_stuff :public academic,public person
{
    string name;
public:
    supporting_stuff(string m,int w,int t):academic(w,t)
    {
        name=m;
    }
    void show()
    {
        cout<<name<<endl;
        showh();
        shown();
    }
};
int main()
{
    string s;
    int num,h;
    supporting_stuff ob("habib",01411,6);
    return 0;
}
