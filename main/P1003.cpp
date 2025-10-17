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
const int MAX=10001;
int main(){
    int n,a[MAX],b[MAX],g[MAX],k[MAX];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=n;i>=1;i--){
        if(a[i]<=x&&a[i]+g[i]>=x&&b[i]<=y&&b[i]+k[i]>=y){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}