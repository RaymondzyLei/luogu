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

int main(){
    int a[101]={0},n=0,tmp=0,cnt=0,target=0;
    bool flag=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        tmp+=a[i];
    }
    target=tmp/n;
    for(int i=1;i<=n;i++){
        if(a[i]!=target){
            a[i+1]+=a[i]-target;
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}