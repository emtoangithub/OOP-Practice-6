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
int main()
{
    USCLN_BSCNN a;
    a.nhap();
    //int tmp0, tmp1;
    cout << "UCLN(" << a.geta() << ", " << a.getb() << ") = " << a.UCLN(a.geta(), a.getb()) << endl;
    cout << "BCNN(" << a.geta() << ", " << a.getb() << ") = " << a.BCNN(a.geta(), a.getb()) << endl;
}