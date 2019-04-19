#include <iostream>
using namespace ::std;

int K (int l,int i)
{
    if (i==0)
        return 0;
    else
        return l+K(l,i-1);
}
int p(int r,int u)
{
    if(u==0)
        return 0;
   // else if (r-u==0)
    //    return 1;
    else if (r<u)
        return 0;
            else
            return (p(r-u,u)+1);
}
main()
{
    float a,b,c,d;
    cout<<"\t\tperkalian"<<endl;
    cout<<"\tmasukan bilangan pertama :";cin>>a;
    cout<<"\tmasukan bilangan kedua   :";cin>>b;
    cout<<"\thasilk="<<K(a,b)<<endl;
    cout<<"\t\tpembagian"<<endl;
    cout<<"\tmasukan bilangan pertama :";cin>>a;
    cout<<"\tmasukan bilangan kedua :";cin>>b;
    cout<<"\thasil="<<p(a,b);

    return 0;
}


