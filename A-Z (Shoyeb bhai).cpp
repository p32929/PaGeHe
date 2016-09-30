#include<bits/stdc++.h>

using namespace std;

int MAX, n;
string str;

void f()
{
    n++;
    for(int i='A';i<='Z';i++)
    {
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

    cout<<"input length : ";
    cin>>MAX;
    //freopen("pw.txt","w",stdout);
    n=0;
    f();
}
