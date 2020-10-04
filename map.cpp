#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,string> m1;
    m1[101]="murali";
    m1[102]="sai";
    m1[103]="hello";
    cout<<m1.size()<<endl;
    cout<<m1[102]<<endl;
    map<int,string> :: iterator t1;
    for( t1=m1.begin();t1!=m1.end();t1++ )
{
    cout<<(*t1).first<<(*t1).second<<endl;
}        
    
}
