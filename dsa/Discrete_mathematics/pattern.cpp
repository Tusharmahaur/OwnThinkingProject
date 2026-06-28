// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public: 
//         vector<pair<int,int>> cartisian(set<int> &a, set<int> &b){
//             vector<pair<int,int>> cross_product;

//             for(int i = 0; i<a.size(); i++){
//                 for(int j = 0; j<b.size(); j++){
//                     cross_product.push_back(make_pair(a[i],b[i]));
//                 }
//             }
//             return cross_product;
//         }
// };

// int main(){
//     Solution T;
//     set<int> a = {1,2};
//     set<int> b = {1,2,3};

//     vector<pair<int,int>> student = {
//         {1,2},
//         {2,2},
//         {3,4}
//     };

//     vector<pair<int,int>> ans = T.cartisian(a,b);

//     for(auto v : ans){
//         cout<<"("<<v.first<<","<<v.second<<") ,";
//     }
//      //beside this to use **-- const auto &(variable name)

//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        vector<int> Input_set(){
            int count; 
            cout<<"How many element you want : ";
            cin>>count;

            vector<int> InputSet;
            for(int i = 0; i<count; i++){
                int value;
                cout << "Enter "<<i+1<< " element : ";
                cin >> value;
                
                InputSet.push_back(value); 
            }
            return InputSet;

        }


        vector<pair<int,int>> cartisian(vector<int> &a, vector<int> &b){
            vector<pair<int,int>> cross_product;
        
                for(int i = 0; i<a.size(); i++){
                    for(int j = 0; j<b.size(); j++){
                            // cross_product.push_back(make_pair(a[i],b[i]));
                            cross_product.push_back({a[i],b[i]});
                        }
                    }
                    return cross_product;
                }
};


int main() {
    Solution T;

    vector<int> setA = T.Input_set();
    vector<int> setB = T.Input_set();
    
    // Store pairs in a dynamic structure
    vector<pair<int, int>> result = T.cartisian(setA,setB);

    // for (int a : setA) {
    //     for (int b : setB) {
    //         result.push_back({a, b});
    //     }
    // }
    

    // Printing results
    for (const auto& pair : result) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }

    return 0;
}

