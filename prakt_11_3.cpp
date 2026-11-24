#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <set>
#include <sstream>
#include <cctype>
using namespace std;int main(){int n,k,l;cin>>n>>k>>l;vector<int>a(n);for(int&x:a)cin>>x;sort(a.rbegin(),a.rend());long long s=0;for(int i=0;i<k;i++)s+=a[i];cout<<s;}