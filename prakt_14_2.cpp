#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <set>
#include <sstream>
#include <cctype>
using namespace std;int main(){string s,w;getline(cin,s);set<string> seen;for(char&c:s)if(isalnum((unsigned char)c)||c=='-')c=tolower((unsigned char)c);else c=' ';stringstream ss(s);while(ss>>w)if(seen.insert(w).second)cout<<w<<'\n';}