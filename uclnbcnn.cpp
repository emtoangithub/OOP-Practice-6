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
    int UCLN();
    int BCNN();
};
USCLN_BSCNN :: USCLN_BSCNN(int a, int b)
: a(a), b(b)
{}
int USCLN_BSCNN :: UCLN()
{
    // Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
    int tmp0 = this->a, tmp1 = this->b;
    if (tmp0 == 0 || tmp1 == 0){
        return tmp0 + tmp1;
    }
    while (tmp0 != tmp1){
        if (tmp0 > tmp1){
            tmp0 -= tmp1; // a = a - b
        }else{
            tmp1 -= tmp0;
        }
    }
    return tmp0; // return a or b, bởi vì lúc này a và b bằng nhau
}
int USCLN_BSCNN :: BCNN()
{
    int lcm;
    int maxV = a*b;
    int tmp0 = this->a, tmp1 = this->b;
    for(int i = std::max(tmp0, tmp1); i <= maxV; i++){
        if(i % tmp0 == 0 && i % tmp1 == 0){
            lcm = i;
            break;
        }
    }
    return lcm;
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
    cout<<"UCLN("<<a.geta()<<","<<a.getb()<<")"<<"="<<a.UCLN();
    dungroixoa();
    break;
    case 7 : cout<<"BCNN("<<a.geta()<<","<<a.getb()<<")"<<"="<<a.BCNN();
    dungroixoa();
    break;
    default: cout<<"Thoat chuong trinh!";
    return 0;
        break;
    }
    }
}
