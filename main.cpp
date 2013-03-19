#include <iostream>

using namespace std;

class demo
{
    private:
    int rollnumber;
    int marks;
    public:
    demo()
    {
        rollnumber=10;
        marks=80;
    }
    demo(int x,int y)
    {
        rollnumber=x;
        marks=y;
    }
    demo(demo&p)
    {
        cout<<"rollnumber="<<p.rollnumber<<endl;
        cout<<"marks="<<p.marks<<endl;
    }
};
int main()
{
    demo d1(10,80);
    demo d2(d1);

    return 0;
}
