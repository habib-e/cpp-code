#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Time
{
    int hr, min, sec;
    public:
    Time()
    {
        hr=0, min=0; sec=0;
    }
    Time(int h, int m, int s)
    {
        hr=h, min=m; sec=s;
    }

    friend bool operator<(Time &t1, Time &t2);
    friend bool operator<=(Time &t3, Time &t4);
    friend bool operator!=(Time &t5, Time &t6);
    friend bool operator==(Time &t7, Time &t8);
    friend bool operator>(Time &t9, Time &t10);
};

bool operator< (Time &t1, Time &t2)
{
    return ( t1.hr < t2.hr && t1.min < t2.min && t1.sec < t2.sec );
}
bool operator<= (Time &t3, Time &t4)
{
    return ( t3.hr <= t4.hr && t3.min <= t4.min && t3.sec <= t4.sec );
}

bool operator!= (Time &t5, Time &t6)
{
    return ( t5.hr != t6.hr && t5.min != t6.min && t5.sec != t6.sec );
}

bool operator== (Time &t7, Time &t8)
{
    return ( t7.hr == t8.hr && t7.min == t8.min && t7.sec == t8.sec );
}

bool operator> (Time &t9, Time &t10)
{
    return ( t9.hr > t10.hr && t9.min > t10.min && t9.sec > t10.sec );
}


int main()
{
    Time t1(3,15,45);
    Time t2(4,15,45);
    if(t1 < t2)
    {
        cout << "t1 is greater than t2"<<endl;
    }
    else
    {
        cout << "t1 is less than t2"<<endl;
    }
    Time t3(3,15,45);
    Time t4(4,15,45);
    if(t3 <= t4)
    {
        cout << "t3 is less than or equal t4"<<endl;
    }
    else
    {
        cout << "t3 is greater than or equal t4"<<endl;
    }
     Time t5(3,15,45);
    Time t6(4,15,45);
    if(t5 != t6)
    {
        cout << "t5 is not equal to t6"<<endl;
    }
    else
    {
        cout << "t5 is equal to t6"<<endl;
    }
     Time t7(3,15,45);
    Time t8(4,15,45);
    if(t7 == t8)
    {
        cout << "t7 is equal to t8"<<endl;
    }
    else
    {
        cout << "t7 is not equal to t8"<<endl;
    }
     Time t9(3,15,45);
    Time t10(4,15,45);
    if(t9 > t10)
    {
        cout << "t9 is greater than t10"<<endl;
    }
    else
    {
        cout << "t9 is not greater than t10"<<endl;
    }
    return 0;
}
