#include<bits/stdc++.h>
//#include<cstdio>
//#include<iostream>
//#include<iostream>
//#include<fstream>
//#include<sstream>
//#include<iomanip>

//#include<vector>
//#include<list>
//#include<deque>
//#include<map>
//#include<set>
//#include<unordered_map>
//#include<unordered_set>
//#include<stack>
//#include<queue>
//#include<array>

//#include<algorithm>
//#include<functional>
//#include<iterator>
//#include<cmath>
//#include<math.h>
//#include<numeric>
//#include<string>
//#include<cstring>
//#include<memory>
//#include<new>
//#include<random>
//#include<bitset>

using namespace std;
int p[9]={0,-2,-2,-1,-1,1,1,2,2};
int q[9]={0,1,-1,2,-2,2,-2,1,-1};
bool can[21][21]={0};
long long cnt[21][21]={0};
int n,m,x,y;
int main(){
    scanf("%d%d%d%d",&n,&m,&x,&y);
    can[x][y]=1;
    for(int i=1;i<=8;i++){
        if(x+p[i]<=n&&x+p[i]>=0&&y+q[i]<=m&&y+q[i]>=0) can[x+p[i]][y+q[i]]=1;
    }
    for(int i=0;i<=n;i++){
        if(can[i][0]==0)cnt[i][0]=1;
        else break;
    }
    for(int j=0;j<=m;j++){
        if(can[0][j]==0)cnt[0][j]=1;
        else break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(can[i][j]==0){
                cnt[i][j]=cnt[i][j-1]+cnt[i-1][j];
            }
        }
    }
    printf("%lld",cnt[n][m]);
    return 0;
}