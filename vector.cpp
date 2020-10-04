#include<iostream>
using namespace std;
#include <vector>
#include <iterator>
#include <set>
#include <map>
#include <algorithm>

int main()
{
   vector <int> v; 
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   v.pop_back();
   v.insert(v.begin()+1,50);
   cout<<v.size()<<endl;
   
    vector <int> ::iterator t1;
   for(t1=v.begin();t1!=v.end();t1++)
   {
       cout<<*t1<<endl;
   }
}
