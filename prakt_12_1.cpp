#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <set>
#include <sstream>
#include <cctype>
using namespace std;int n,m,best=0;vector<string>g;vector<vector<int>>v;void dfs(int x,int y,int c){if(g[x][y]=='P')c++;if(g[x][y]=='E'){best=max(best,c);return;}v[x][y]=1;for(int k=0;k<4;k++){int nx=x+(k==0)-(k==1),ny=y+(k==2)-(k==3);if(nx>=0&&nx<n&&ny>=0&&ny<m&&!v[nx][ny]&&g[nx][ny]!='1')dfs(nx,ny,c);}v[x][y]=0;}int main(){cin>>n>>m;g.resize(n);for(auto&s:g)cin>>s;v.assign(n,vector<int>(m));for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(g[i][j]=='0')dfs(i,j,0);cout<<best;}