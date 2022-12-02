#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p,p2; //<dtype1,dtype2> Any two similar or different data type can be used
    //value assign
    p.first=10;
    p.second="Rakibul";
    cout<<p.first<<" , "<<p.second<<endl; //printing values
    cout<<get<0>(p)<<" , "<<get<1>(p)<<endl; //printing values

    pair<int, pair<int, char> > p3 = { 3, { 4, 'a' } }; //Nested pair
    cout<<p3.first<<" , "<<p3.second.first<<" , "<<p3.second.second<<endl;

    p2=make_pair(2,"Mrkbil"); // make pair
    cout<<p2.first<<" , "<<p2.second<<endl;

    p.swap(p2); //swap pairs
    cout<<p.first<<" , "<<p.second<<endl;
    cout<<p2.first<<" , "<<p2.second<<endl;

    int a;
    string b;
    tie(a,b)=p2;  //assign a=p2.first & b=p2.second
    cout<<a<<" , "<<b<<endl;

    //operators(=, ==, !=, >=, <=) can be used in Pair
    return 0;
}
