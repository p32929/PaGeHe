
#include<bits/stdc++.h>
using namespace std;
int MAX, MAX2, n;
string str;
void f()
{
    n++;
    for(int i=48; i<=122; i++)
    {
        if(i==58)
            i=65;
        else if(i==91)
            i=97;
        str.push_back((char)i);
        if(n<MAX)
            f();
        else
            cout<<str<<endl;
        str.erase(str.size()-1,1);
    }
    n--;
}

int main()
{

    cout<<"input minimum length: ";
    cin>>MAX;
    cout<<"Input maximum length: ";
    cin>>MAX2;
    ///freopen("pw.txt","w",stdout);
    n=0;
    for( ; MAX<=MAX2; MAX++)
    {
        f();
    }
}
