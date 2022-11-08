 #include<bits/stdc++.h>
 using namespace std;

 void pairExplain(){
    // PAIR
    pair<int, int> p={1,3};
    cout<<p.first<<" "<<p.second;

    pair<int, pair<int, int>> q={1,{3,4}};

    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first;

    pair<int,int> arr[]= {{1,2},{2,5},{5,1}};

    cout<<arr[1].second;
}

void vectorExplain(){
    // VECTOR
    // vector<int> v;
    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    // EMPLACE BACK IS QUITE FASTER THAN NORMAL PUSH_BACK
    // emplace back doesn't need    
    vec.emplace_back(1,2); 

    // vector<int> ve(5,1);
    // // ve={100 100 100 100 100}

    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i].first<<" "<<vec[i].second<<" ";
    // }
    // cout<<endl;

    // Vector Array with out any value
    vector<int> v={1,2,3,4,5,6};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // Vector Copying
    // vector<int> v1(v2);
    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }

    // Accessing Vector
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";
    it=it+2;
    cout<<*(it)<<" ";
    
    // vector<int>::iterator it=v.end();
    // vector<int>::iterator it=v.rend(); REVERSE END
    // vector<int>::iterator it=v.rbegin(); REVERSE BEGIN

    cout<<v[0]<<" "<<v.at(0);
    cout<<endl;
    cout<<v.back()<<" ";
    cout<<endl;
    for(vector<int>::iterator it=v.begin(); it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // Auto means assign the data type
    for(auto it=v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;

    // ERASE
    v.erase(v.begin()+1);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2, v.begin()+4);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    // INSERT
    v.insert(v.begin()+1,2);
    for(auto it:v){
        cout<<it<<" ";
    } 
    cout<<endl;

    vector<int> copy={-1,0};
    v.insert(v.begin(),copy.begin(), copy.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<v.size();
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    // v1={1,2};
    // v2={2,1};
    // v1.swap(v2)
    
    // ERASE THE ENTRIRE VECTOR
    v.clear();
    for(auto it:v){
        cout<<it<<"NE";
    }
    cout<<endl;
    if(v.empty()){
        cout<<"Empty"<<endl;
    }
}

// LIST

void listExplain(){
    // list operation is less costlier than vector
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(5);
    
    list <pair<int,int>> lst;
    lst.emplace_front(2,4);
    lst.emplace_front(3,5);
    for(auto x:lst){
        std::cout<<"("<<x.first<<","<<x.second<<")";
    }
    cout<<endl;
    lst.sort();
    for(auto x: lst){
        cout<<x.first<<" "<<x.second<<" ";
    }
    cout<<endl;
}

// STACK

void stackExplain(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;

    stack<int> s1,s2;
    s1.push(5);
    s1.push(6);
    s2.push(7);
    s2.push(8);
    s1.swap(s2);
    cout<<s1.top()<<endl;
    cout<<s2.top()<<endl;

}

// DEQUE

void explainDeque(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    cout<<dq.back()<<endl;
    cout<<dq.front();
}

// QUEUE
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.back()+=5;
    cout<<q.back();
    cout<<q.front();
    q.pop();
    cout<<q.front();
} 

// PRIORITY QUEUE
void explainPriorityQueue(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(6);
    pq.push(7);
    pq.push(9);
    pq.emplace(10);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    priority_queue<int, vector<int>, greater<int>> pqMin;
    pqMin.push(2);
    pqMin.push(5);
    pqMin.push(3);
    pqMin.emplace(8);
    cout<<pqMin.top()<<endl;  
}
int main(){
    // pairExplain();
    // vectorExplain();
    // listExplain();
    // stackExplain();
    // explainDeque();
    explainPriorityQueue();
    
}