#include<bits/stdc++.h>
using namespace std;
class USCLN_BSCNN
{
    private:
    int a,b;
    public:
    USCLN_BSCNN(int = 0, int = 0);
    int geta();
    int getb();
    void seta(int );
    void setb(int );
    void nhap();
    int UCLN(int, int);
    int BCNN(int, int);
};
USCLN_BSCNN :: USCLN_BSCNN(int a, int b)
: a(a), b(b)
{}
int USCLN_BSCNN :: UCLN(int a, int b)
{
    // a = this->a;
    // b = this->b;
    if (b == 0) return a;
    if (a % b == 0) return b;
    return UCLN(b, a%b);
}
int USCLN_BSCNN :: BCNN(int a, int b)
{
    // a = this->a;
    // b = this->b;
    /*return (a * b) / USCLN_BSCNN :: UCLN(a, b);*/ return (a * b) / UCLN(a, b);
}
int USCLN_BSCNN :: geta()
{
    return this->a;
}
int USCLN_BSCNN :: getb()
{
    return this->b;
}
void USCLN_BSCNN :: seta(int a)
{
    this->a = a;
}
void USCLN_BSCNN :: setb(int b)
{
    this->b = b;
}
void USCLN_BSCNN :: nhap()
{
    cout<<"a: ";
    cin>>this->a;
    cout<<"b: ";
    cin>>this->b;
}
void xoa()
{
    system("cls");
}
void dungroixoa()
{
    cout<<"\n";
    system("pause");
    xoa();
}
int main()
{
    USCLN_BSCNN a;
    int x, y;
    xoa();
    while (1)
    {
    cout<<"Hay chon lua chon cua ban\n";
    cout<<"1. Nhap gia tri a, b\n";
    cout<<"2. get a\n";
    cout<<"3. get b\n";
    cout<<"4. set a\n";
    cout<<"5. set b\n";
    cout<<"6. UCLN( a, b )\n";
    cout<<"7. BCNN( a, b )\n";
    cout<<"0. Thoat chuong trinh\n";
    cout<<"Lua chon cua ban la: ";
    int lc; cin>>lc;
    xoa();
    switch (lc)
    {
    case 1 : a.nhap();
    xoa();
    break;
    case 2 : cout<<a.geta();
    dungroixoa();
    break;
    case 3 : cout<<a.getb();
    dungroixoa();
    break;
    case 4 : cout<<"a: ";
    cin>>x;
    a.seta(x);
    cout<<"Da cap nhap!";
    xoa();
    break;
    case 5 : cout<<"b: ";
    cin>>y;
    cout<<"Da cap nhap!";
    a.setb(y);
    xoa();
    break;
    case 6 :
    cout<<"UCLN("<<a.geta()<<","<<a.getb()<<")"<<"="<<a.UCLN(a.geta(), a.getb());
    dungroixoa();
    break;
    case 7 : cout<<"BCNN("<<a.geta()<<","<<a.getb()<<")"<<"="<<a.BCNN(a.geta(), a.getb());
    dungroixoa();
    break;
    default: cout<<"Thoat chuong trinh!";
    return 0;
        break;
    }
    }
}
