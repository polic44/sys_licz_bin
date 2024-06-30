#include <iostream>

using namespace std;
int N=4;
int main()
{
    int tab[N],i,j,x;
    for(int i=0;i<N;i++)
    {
        cin>>tab[i];
    }
    for(i=N-2;i>=0;i--)
    {
    x=tab[i];
    j=i+1;
    cout<<"tab[i]:"<<tab[i]<<endl;
    cout<<"j:"<<j<<tab[j]<<endl;
    while(j<N && x>tab[j])
{

       tab[j-1]=tab[j];
        j++;
cout<<"Wart j i x "<<j<<x<<endl;
cout <<endl;
    }
tab[j-1]=x;

    }

     for(j=0;j<N;j++)
    {
        cout<<tab[j];
    }

        return 0;
}
