#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <set>
#include <sstream>
#include <cctype>
using namespace std;int main(){string s;getline(cin,s);vector<char> st;for(char c:s){if(c=='('||c=='['||c=='{')st.push_back(c);else if(c==')'||c==']'||c=='}'){if(st.empty()||(c==')'&&st.back()!='(')||(c==']'&&st.back()!='[')||(c=='}'&&st.back()!='{')){cout<<"no";return 0;}st.pop_back();}}cout<<(st.empty()?"yes":"no");}