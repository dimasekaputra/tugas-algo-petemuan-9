#include <iostream>
using namespace ::std;

int main ()
{
    int data []={5,2,4,6,3,1};
    cout<<" sebelum disorting :";
    for(int i=0;i<6;i++)
        cout<<data[i]<<",";
    cout<<endl<<endl;
    for (int i=1;i<6;i++)
{


int j=i;
while(data[j]<data[j-i])
{
    int tmp=data[j];
    data[j]=data[j-1];
    data[j-1]=tmp;
    j;

}
}
cout<<"setelah disorting :";for(int i=0;i<6;i++)
cout<<data[i]<<",";
//getch();
}
















