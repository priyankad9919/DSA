#include <bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<"\n";
    pair<int,pair<int,int>> q={1,{3,4}};
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<"\n";
    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[0].first<<" "<<arr[0].second<<"\n";
}
void explainVector(){
    vector<int> v;
    v.push_back(5);
    v.emplace_back(10);
    cout<<v[0]<<" "<<v[1]<<"\n";
    vector<pair<int,int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(3,4);
    cout<<v1[0].first<<" "<<v1[0].second<<" "<<v1[1].first<<" "<<v1[1].second<<"\n";
    vector<int> v2(5,100);
    cout<<v2[0]<<" "<<v2[1]<<" "<<v2[2]<<" "<<v2[3]<<" "<<v2[4]<<"\n";
    vector<int> v3(5);
    cout<<v3[0]<<" "<<v3[2]<<" "<<v3[4]<<"\n";
    vector<int> v4(v3);
    cout<<v4[0]<<" "<<v4[2]<<" "<<v4[4]<<"\n";
    vector<int> v5;
    v5={20,10,15,6,7};
    vector<int>::iterator it=v5.begin();
    it++;
    cout<<*(it)<<"\n";
    it=it+2;
    cout<<*(it)<<'\n';
    vector<int>::iterator it=v5.end();
    cout<<*(it-1)<<"\n";
    cout<<v5.at(0)<<" "<<v5.back()<<"\n";
    for(vector<int>::iterator it=v5.begin();it!=v5.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<"\n";
    for (auto it:v5){
        cout<<it<<' ';
    }
    cout<<"\n";
    vector<int> v6={10,20,12,23,35};
    v6.erase(v6.begin()+1);
    v6.erase(v6.begin()+2,v6.begin()+4);
    for(auto it:v6){
        cout<<it<<" ";
    }
    cout<<"\n";
    v6.insert(v6.begin()+1,20);
    v6.insert(v6.begin()+3,23);
    v6.insert(v6.begin()+4,35);
    for(auto it:v6){
        cout<<it<<" ";
    }
    cout<<"\n";
    cout<<v6.size()<<"\n";
    v6.push_back(120);
    for(auto it:v6){
        cout<<it<<" ";
    }
    cout<<"\n";
    vector<int> v2={10,20,30,40};
    v2.swap(v6);
    for(auto it:v2){
        cout<<it<<" ";
    }
    cout<<v2.empty();
}
void explainDeque(){
    deque<int> de;
    de.push_back(5);
    de.emplace_back(10);
    de.push_back(15);
    de.emplace_back(20);
    for (auto it=de.begin();it!=de.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<"\n";
    de.pop_back();
    for (auto it=de.begin();it!=de.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<"\n";
    de.pop_front();
    for (auto it=de.begin();it!=de.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<"\n";
    de.push_front(0);
    for (auto it=de.begin();it!=de.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<"\n";
}
void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    cout<<st.size()<<"\n";
    cout<<st.empty()<<"\n";
    stack<int> st2;
    st2.swap(st);
    cout<<st2.top();
}
void explainQueue(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.emplace(30);
    q.emplace(40);
    q.emplace(50);
    q.pop();
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<" "<<q.empty();
}
void explainPriorityQueue(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    pq.pop();
    cout<<pq.top()<<"\n";
    priority_queue<int> p;
    cout<<p.empty();
}
int main(){
    explainPriorityQueue();
    return 0;
}