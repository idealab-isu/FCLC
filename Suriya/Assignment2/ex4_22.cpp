//Exercise 4.22

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //part(a)
    cout<<right<<setw(5)<<"x"<<setw(5)<<"y"<<setw(10)<<"(x<5)"<<setw(10)<<"(y>=5)"
        <<setw(20)<<"!(x<5)&&!(y>=5)"<<setw(20)<<"!((x<5)||(y>=5))"<<endl;

    //creates a line
    for(int i=1; i<=70; i++){
        cout<<"_";
        if(i==70)
            cout<<endl;
    }

    int x = 6, y = 4;
    cout<<right<<setw(5)<<x<<setw(5)<<y<<setw(10)<<static_cast<bool>(x<5)<<setw(10)<<static_cast<bool>
        (y>=5)<<setw(20)<<static_cast<bool>(!(x<5)&&!(y>=5))<<setw(20)<<static_cast<bool>(!((x<5)||(y>=5)))
        <<endl;
    x = 4, y = 4;
    cout<<right<<setw(5)<<x<<setw(5)<<y<<setw(10)<<static_cast<bool>(x<5)<<setw(10)<<static_cast<bool>
    (y>=5)<<setw(20)<<static_cast<bool>(!(x<5)&&!(y>=5))<<setw(20)<<static_cast<bool>(!((x<5)||(y>=5)))
        <<endl;
    x = 6, y = 5;
    cout<<right<<setw(5)<<x<<setw(5)<<y<<setw(10)<<static_cast<bool>(x<5)<<setw(10)<<static_cast<bool>
    (y>=5)<<setw(20)<<static_cast<bool>(!(x<5)&&!(y>=5))<<setw(20)<<static_cast<bool>(!((x<5)||(y>=5)))
        <<endl;
    x = 4, y = 5;
    cout<<right<<setw(5)<<x<<setw(5)<<y<<setw(10)<<static_cast<bool>(x<5)<<setw(10)<<static_cast<bool>
    (y>=5)<<setw(20)<<static_cast<bool>(!(x<5)&&!(y>=5))<<setw(20)<<static_cast<bool>(!((x<5)||(y>=5)))
        <<endl;
    cout<<"They are equivalent!\n"<<endl;

    //*************//
    //part(b)
    cout<<right<<setw(5)<<"a, b"<<setw(5)<<"g"<<setw(10)<<"(a==b)"<<setw(10)<<"(g!=5)"
        <<setw(20)<<"!(a==b)||!(g!=5)"<<setw(20)<<"!((a==b)&&(g!=5))"<<endl;
    //creates a line
    for(int i=1; i<=70; i++){
        cout<<"_";
        if(i==70)
            cout<<endl;
    }

    int a=1, b=2, g=5;
    cout<<right<<setw(2)<<a<<","<<setw(2)<<b<<setw(5)<<g<<setw(10)<<static_cast<bool>(a==b)<<setw(10)
        <<static_cast<bool>(g!=5)<<setw(20)<<static_cast<bool>(!(a==b)||!(g!=5))<<setw(20)<<static_cast<bool>
        (!((a==b)&&(g!=5)))<<endl;
    a=1, b=1, g=5;
    cout<<right<<setw(2)<<a<<","<<setw(2)<<b<<setw(5)<<g<<setw(10)<<static_cast<bool>(a==b)<<setw(10)
        <<static_cast<bool>(g!=5)<<setw(20)<<static_cast<bool>(!(a==b)||!(g!=5))<<setw(20)<<static_cast<bool>
        (!((a==b)&&(g!=5)))<<endl;
    a=2, b=1, g=6;
    cout<<right<<setw(2)<<a<<","<<setw(2)<<b<<setw(5)<<g<<setw(10)<<static_cast<bool>(a==b)<<setw(10)
        <<static_cast<bool>(g!=5)<<setw(20)<<static_cast<bool>(!(a==b)||!(g!=5))<<setw(20)<<static_cast<bool>
        (!((a==b)&&(g!=5)))<<endl;
    a=2, b=2, g=6;
    cout<<right<<setw(2)<<a<<","<<setw(2)<<b<<setw(5)<<g<<setw(10)<<static_cast<bool>(a==b)<<setw(10)
        <<static_cast<bool>(g!=5)<<setw(20)<<static_cast<bool>(!(a==b)||!(g!=5))<<setw(20)<<static_cast<bool>
        (!((a==b)&&(g!=5)))<<endl;
    cout<<"They are equivalent!\n"<<endl;

    //*************//
    //part(c)
    cout<<right<<setw(5)<<"x"<<setw(5)<<"y"<<setw(10)<<"(x<=8)"<<setw(10)<<"(y>4)"
        <<setw(20)<<"!((x<=8)&&(y>4))"<<setw(20)<<"!(x<=8)||!(y>4))"<<endl;

    //creates a line
    for(int i=1; i<=70; i++) {
        cout << "_";
        if (i == 70)
            cout << endl;
    }

    x = 10, y = 2;
    cout<<right<<setw(5)<<x<<setw(5)<<y<<setw(10)<<static_cast<bool>(x<=8)<<setw(10)<<static_cast<bool>
        (y>4)<<setw(20)<<static_cast<bool>(!((x<=8)&&(y>4)))<<setw(20)<<static_cast<bool>(!(x<=8)||!(y>4))
        <<endl;
    x = 7, y = 2;
    cout<<right<<setw(5)<<x<<setw(5)<<y<<setw(10)<<static_cast<bool>(x<=8)<<setw(10)<<static_cast<bool>
    (y>4)<<setw(20)<<static_cast<bool>(!((x<=8)&&(y>4)))<<setw(20)<<static_cast<bool>(!(x<=8)||!(y>4))
        <<endl;
    x = 10, y = 6;
    cout<<right<<setw(5)<<x<<setw(5)<<y<<setw(10)<<static_cast<bool>(x<=8)<<setw(10)<<static_cast<bool>
    (y>4)<<setw(20)<<static_cast<bool>(!((x<=8)&&(y>4)))<<setw(20)<<static_cast<bool>(!(x<=8)||!(y>4))
        <<endl;
    x = 8, y = 6;
    cout<<right<<setw(5)<<x<<setw(5)<<y<<setw(10)<<static_cast<bool>(x<=8)<<setw(10)<<static_cast<bool>
    (y>4)<<setw(20)<<static_cast<bool>(!((x<=8)&&(y>4)))<<setw(20)<<static_cast<bool>(!(x<=8)||!(y>4))
        <<endl;
    cout<<"They are equivalent!\n"<<endl;

    //*************//
    //part(d)
    cout<<right<<setw(5)<<"i"<<setw(5)<<"j"<<setw(10)<<"(i>4)"<<setw(10)<<"(j<=6)"
        <<setw(20)<<"!((i>4)||(j<=6))"<<setw(20)<<"!(i>4)&&!(j<=6)"<<endl;

    //creates a line
    for(int i=1; i<=70; i++) {
        cout << "_";
        if (i == 70)
            cout << endl;
    }

    int i=3, j=7;
    cout<<right<<setw(5)<<i<<setw(5)<<j<<setw(10)<<static_cast<bool>(i>4)<<setw(10)<<static_cast<bool>
        (j<=6)<<setw(20)<<static_cast<bool>(!((i>4)||(j<=6)))<<setw(20)<<static_cast<bool>(!(i>4)&&!(j<=6))
        <<endl;
    i=5, j=7;
    cout<<right<<setw(5)<<i<<setw(5)<<j<<setw(10)<<static_cast<bool>(i>4)<<setw(10)<<static_cast
            <bool>(j<=6)<<setw(20)<<static_cast<bool>(!((i>4)||(j<=6)))<<setw(20)<<static_cast<bool>
        (!(i>4)&&!(j<=6))<<endl;
    i=3, j=5;
    cout<<right<<setw(5)<<i<<setw(5)<<j<<setw(10)<<static_cast<bool>(i>4)<<setw(10)<<static_cast
            <bool>(j<=6)<<setw(20)<<static_cast<bool>(!((i>4)||(j<=6)))<<setw(20)<<static_cast<bool>
        (!(i>4)&&!(j<=6))<<endl;
    i=5, j=5;
    cout<<right<<setw(5)<<i<<setw(5)<<j<<setw(10)<<static_cast<bool>(i>4)<<setw(10)<<static_cast
            <bool>(j<=6)<<setw(20)<<static_cast<bool>(!((i>4)||(j<=6)))<<setw(20)<<static_cast<bool>
        (!(i>4)&&!(j<=6))<<endl;
    cout<<"They are equivalent!\n"<<endl;
}
