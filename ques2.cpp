//C++ progrm to sort an array or list based on frequency
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second == b.second ? a.first < b.first : a.second < b.second;
}

vector<pair<int, int>> sortmap(unordered_map<int, int>& mp){
    vector<pair<int, int>> v;
    
    for(auto& p: mp)
        v.push_back(p);
        
    sort(begin(v), end(v), cmp);
    return v;
}

int main()
{
    unordered_map<int, int> mp;
    
    int size;     //declaring size
    cout<<"Enter size"<<" ";
    cin>>size;    //input its size
    cout<<"Enter values with frequency"<<endl;

    int a, b;
    for(int i=0; i<size; i++){         // enter every value with frequency 
        cin>>a>>b;
        mp[a] = b;
    }
    
    vector<pair<int, int>> result = sortmap(mp);
    cout<<"Sorted array is:-"<<endl;
    for(auto& x: result){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;                   
}