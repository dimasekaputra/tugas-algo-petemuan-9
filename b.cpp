#include <iostream>
using namespace ::std;

int pangkat (int angka,int pngkt)
{
    if(pngkt<0)
        return 0;
    else
        return angka*pangkat(angka,pngkt-1);
}
int bagi(int angka,int kurang)
{
    if(kurang>0)
        return 1;
    else
        return 1/angka*bagi(angka,kurang+1);
}
main()
{
    int a,b;

    cout<<"\tpangkat"<<endl;
    cout<<"\tmasukan bilangan pertama :";cin>>a;
    cout<<"\tmasukan bilangan kedua :";cin>>b;
    cout<<"\thasilk ="<<pangkat(a,b)<<endl;

    cout<<"\tmasukan bilangan pertama :";cin>>a;
    cout<<"\tmasukan bilangan kedua :";cin>>b;
    cout<<"\thasilk ="<<bagi(a,b)<<endl;
}
