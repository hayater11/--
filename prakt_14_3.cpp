#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <set>
#include <sstream>
#include <cctype>
using namespace std;int main(){string op;vector<pair<int,int>> st;while(cin>>op){if(op=="push"){int x;cin>>x;st.push_back({x,st.empty()?x:min(x,st.back().second)});}else if(op=="pop"){if(!st.empty())st.pop_back();}else if(op=="min"){if(!st.empty())cout<<st.back().second<<'\n';}else if(op=="empty")cout<<(st.empty()?"true":"false")<<'\n';}}