#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <set>
#include <sstream>
#include <cctype>
using namespace std;int main(){int n,m;if(!(cin>>n>>m))return 0;vector<vector<long long>> a(n,vector<long long>(m)),dp(n,vector<long long>(m));vector<vector<char>> p(n,vector<char>(m));for(auto& r:a)for(auto&x:r)cin>>x;dp[0][0]=a[0][0];for(int i=0;i<n;i++)for(int j=0;j<m;j++){if(i==0&&j==0)continue; if(i==0|| (i<n-1&&j>0&&dp[i][j-1]>=dp[i-1][j])){dp[i][j]=dp[i][j-1]+a[i][j];p[i][j]=1;}else{dp[i][j]=dp[i-1][j]+a[i][j];p[i][j]=0;}}vector<pair<int,int>> path;for(int i=n-1,j=m-1;;){path.push_back({i,j});if(i==0&&j==0)break;if(p[i][j])--j;else--i;}reverse(path.begin(),path.end());for(auto [i,j]:path)cout<<i<<' '<<j<<'\n';}