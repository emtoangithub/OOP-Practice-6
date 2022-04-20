#include<iostream>
using namespace std;
class Vehinh
{
    private:
    int h;
    public:
    void tamgiac();
    void tamgiacsochangle();
    void no();
    Vehinh(int  = 0);
};
void Vehinh :: no()
{
    for(int i=h;i>=1;i--)
    {
        for(int j=1;j<=h-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k%2==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
       cout<<endl;
    }
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=h-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k%2==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void Vehinh :: tamgiacsochangle()
{
     for(int i=h;i>=1;i--)
    {
        for(int j=1;j<=h-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k%2==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
       cout<<endl;
    }
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=h-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k%2==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
Vehinh::Vehinh(int a)
: h(a)
{}
void Vehinh :: tamgiac()
{
    for(int i=h;i>=1;i--)
    {
        for(int j=1;j<=h-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
       cout<<endl;
    }
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=h-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
int main()
{
    // Vehinh v(4);
    // v.tamgiac();
}

