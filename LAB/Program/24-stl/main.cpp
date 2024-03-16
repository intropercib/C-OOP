#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<string>

using namespace std;

int main()
{
    set<double> s;
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    set<double>::iterator itr;
    cout<<"set"<<endl;
    for(itr=s.begin();itr!=s.end();++itr)
    {
        cout<<*itr<<endl;
    }
    cout<<"___________________________________________"<<endl;
    vector<double> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    cout<<"vector"<<endl;
    vector<double>::iterator itrr;
    sort(v.begin(),v.end());
    for(itrr=v.begin();itrr!=v.end();++itrr)
    {
        cout<<*itrr<<endl;
    }

    cout<<"___________________________________________"<<endl;
    multiset<double> ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    multiset<double>::iterator it;
    cout<<"multiset"<<endl;
    for(it=ms.begin();it!=ms.end();++it)
    {
        cout<<*it<<endl;
    }

    cout<<"___________________________________________"<<endl<<"queue"<<endl;
    queue<double> q;
    q.push(2);
    q.push(1);
    q.push(3);
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    } 
     cout<<"___________________________________________"<<endl<<"map"<<endl;   
    map<string,int> m;
    m["ram"]=10;
    m["raam"]=100;
    m["shyam"]=20;
    m["reema"]=30;
    cout<<m["ram"]<<endl;
    cout<<m["shyam"]<<endl;  
    pair<string,int> p;
    for(auto p:m)
    {
        cout<<p.first<<":"<<p.second<<endl;
    }     
}