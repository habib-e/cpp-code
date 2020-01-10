#include<bits/stdc++.h>
using namespace std;
class  vehicle
{
    int num_wheels;
    int range;
public:
    vehicle(int m,int n){num_wheels=m;range=n;}
    void show1()
    {
        cout<<"num of wheel : "<<num_wheels<<endl;
        cout<<"range : "<<range<<endl;
    }
};
class car:public vehicle
{
    int passenger;
public:
    car(int x,int y,int z):vehicle(y,z)
    {
        passenger=x;
    }
    void show()
    {
        cout<<"Passenger : "<<passenger<<endl;
        show1();
    }
};
class truck:public vehicle
{
    int loadlimit;
public:
    truck(int x,int y,int z):vehicle(y,z)
    {
        loadlimit=x;
    }
    void show()
    {
        cout<<"loadlimit : "<<loadlimit<<endl;
        show1();
    }
};
int main()
{
    car ob1(5,4,500);
    truck ob(3000,12,1200);
    ob1.show();
    ob.show();
    return 0;
}
