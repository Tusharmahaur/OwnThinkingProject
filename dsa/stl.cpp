// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> vec(3,10);// for similar values ke liye 
//     vec.push_back(1);
//     // cout<<"capacity = "<<vec.capacity()<<endl;
//     // cout<<"size = "<<vec.size()<<endl;

//     // vec.erase(vec.begin());//that value had not print 
//     // cout<<vec.front()<<endl; // these for printing the front value in the loop 
//     // cout<<vec.back()<<endl; // these for printing the front value in the loop 
//     // vec.insert(vec.begin()+1,40);//for vec.insert(position,element); direct position pass out nahi karte hai vec.begin()+2,1,3... ese pass karte hai 
//     // vec.clear(); //ye element ko remove kar deta hai but capacity utni hi rahti hai 
//     // cout<<"capacity = "<<vec.capacity()<<endl;
//     // cout<<"Empaty = "<<vec.empty()<<endl; // for this boolean value true = 1;
//     // //because *(vec.begin()) ek pointer hai 
//     cout<<*(vec.begin())<<endl;//they point first index value 
//     cout<<*(vec.end())<<endl;//they point last index to after that value so print a garbage value


    
    
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> v= {1,2,3,4};

//     // vector<int>::iterator ; //for iterator declaration 
//     for(vector<int>::iterator i = v.begin();i != v.end(); i++){
//         cout<<*(i)<<" ";
//     }
//     cout<<endl;

//     //dynamic programming use auto keyword for vector loop
//     //vector<int>::iterator i; = auto i;
//     for(auto i = v.rbegin(); i != v.rend(); i++){
//         cout<<*(i)<<" ";
//     } 

//     cout<<endl<<l[2]<<endl;//error fatch
//     return 0;
// }

// #include <iostream>
// #include <list>
// using namespace std;

// int main(){
//     list<int> l = {1,2,3};
//     l.push_back(3);
//     l.push_front(0);
//     l.pop_front();
//     l.pop_front();
//     l.emplace_front(0);


//     for(auto i = l.begin(); i != l.end(); i++){
//         cout<<*(i)<<" ";
//     }
    
//     return 0;
// }

// #include <iostream>
// #include <deque>
// using namespace std;

// int main(){
//     deque<int> d = {-8,1,3};
//     d.push_front(0);
//     cout<<d[1]<<endl;//dynamic access

//     for(auto i = d.begin(); i != d.end(); i++){
//         cout<<*(i)<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// // #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// int main(){
//     // pair<string,int> p = {"Tushar",100};
//     // pair<char, pair<int, int>> p1 = {'a',{45,23}};

//     // cout<<p1.first<<endl;
//     // cout<<p1.second.first<<endl;
//     // cout<<p1.second.second<<endl;//sub pair in the array
//     vector<pair<char,int>> v = {
//         {'a',1},
//         {'b',2},
//     };

//     //ways 1 push back the value
//     v.push_back({'c',3});

//     //second ways
//     v.emplace_back('d',4); // automaticaly build a pair for me 

//     // for(pair<char,int> p: v){
//     //     cout<<p.first<<" "<<p.second<<endl;
//     // }
//     //also done with 
//     for(auto p : v){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){
//     stack<int> s ;
//     s.push(1);
//     s.push(3);
//     s.push(5);
//     s.push(8);
    
//     stack<int> s2;
//     s2.swap(s);
//     while(!s.empty()){//these condition now not run because all element are replace with
//         cout<<s.top()<<endl;
//         s.pop();//these condition for stop to occuring in infinite loop 
//     }
//     cout<<" s2 size : "<<s2.size()<<endl;
//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     queue<int> q ;
//     q.push(1);
//     q.push(3);
//     q.push(5);
//     q.push(8);
    
//     queue<int> q2;
    
//     while(!q.empty()){//these condition now not run because all element are replace with
//         cout<<q.front()<<" ";
//         q.pop();//these condition for stop to occuring in infinite loop 
//     }
     
//     return 0;
// }


// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     // priority_queue<int> pq ;//for priority wise 
//     //for reverse descending order
//     priority_queue<int,vector<int>,greater<int>> pq;
//     pq.push(8); 
//     pq.push(1);
//     pq.push(3);
//     pq.push(5);

//     priority_queue<int> pq2;
    
//     while(!pq.empty()){//these condition now not run because all element are replace with
//         cout<<pq.top()<<endl;
//         pq.pop();//these condition for stop to occuring in infinite loop 
//     }
     
//     return 0;
// }

// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     map<string,long long    int> m = {
//         {"html",111},
//         {"Tv",50},
//         {"phone",100},
//         {"Number",1000}
//     };

//     m.insert({"camera",20});
//     // m["No"] = 8279684396;
//     m.erase("camera");
//     // cout<<m["Tv"]<<endl;
//     // cout<<m["No"] <<endl;
//     // cout<<sizeof(m)<<endl;
//     for(auto k: m){//print for lexicographically for keys alphabatically 
//         cout<<k.first<<" : "<<k.second<<endl;
//     }

    
//     cout<<"count = "<<m.count("html")<<endl;
//     if(m.find("camera") != m.end()){
//         cout<<"found"<<endl;
//     }else{
//         cout<<"not found"<<endl;
//     }

//     return 0;
// }


 #include <iostream>
 #include <set>
 using namespace std;
 
 int main(){
    set<int> st;//set me frequency repete nahi hoti hai and time complexity O(logn) hoti hai 
    st.insert(1);
    st.insert(2);
    st.insert(3);


    cout<<"lower bound = "<<*(st.lower_bound(3))<<endl;//ise dereferencing karna padega kyuki ye ek iterator hai 
    //*(lower_bound(3)) value should not be less than key
    cout<<"Upper bound = "<<*(st.upper_bound(3))<<endl;
    //*(upper_bound(3)) value always greater than key
    for(auto v: st){
        cout<<v<<" ";
    }
    return 0;
 }