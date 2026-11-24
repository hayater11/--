#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <set>
#include <sstream>
#include <cctype>
using namespace std;int main(){int n,d;if(!(cin>>n>>d))return 0;vector<int>a(n);for(int&x:a)cin>>x;sort(a.begin(),a.end());int ans=INT_MAX;for(int i=0;i+d<=n;i++)ans=min(ans,a[i+d-1]-a[i]);cout<<ans;}