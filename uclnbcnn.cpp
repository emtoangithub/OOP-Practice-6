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
int main()
{
    USCLN_BSCNN a;
    a.nhap();
    cout<<a.UCLN()<<endl;
    cout<<a.BCNN();
}
