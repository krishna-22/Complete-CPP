#include <iostream>
using namespace std;
#include<cstring>

int main()
{
    string x="hi saikiran";
    string y="hi saikiran";
    string z="hi murali";
    string m;
    cout<<strcmp(x,y)<<endl;
    cout<<strcmp(x,z)<<endl;
    cout<<strcat(x,y)<<endl;
    cout<<strcpy(m,x)<<endl;
    cout<<m;
    cout<<x.length()<<endl;
    cout<<x[1]<<endl;
    cout<<x.find("sai")<<endl;
    cout<<x.substr(4,2)<<endl;
    return 0;
}
