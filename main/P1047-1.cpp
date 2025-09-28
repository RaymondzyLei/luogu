//#include<bits/stdc++.h>
#include<cstdio>
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

int main(){
    int l,m;
    scanf("%d%d",&l,&m);
    int a[m+1],b[m+1];
    //bool c[l+1]={0};
    for(int i=1;i<=m;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    int count=0;
    for(int i=0;i<=l;i++){
        for(int j=1;j<=m;j++){
            if(a[j]<=i&&b[j]>=i){
                count+=(b[j]-i+1);
                i=b[j];
                break;
            }
        }
    }
    printf("%d",l+1-count);
    return 0;
}