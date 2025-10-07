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
int ccount=0;
void check(int a[],int k,int lenth,int status){//down is -1,up is 1
    if(k>=lenth)return;
    switch(status){
        case 1:
            if(a[k+1]>a[k])check(a,k+1,lenth,1);
            else check(a,k+1,lenth,-1);
            break;
        case -1:
            if(a[k+1]>a[k]){
                ccount++;
                check(a,k+1,lenth,1);
            }
            else check(a,k+1,lenth,-1);
    }
    return;
}
int main(){
    int n,lenth=1,tmp;
    scanf("%d",&n);
    int a[n+1];
    scanf("%d",&a[lenth]);
    for(int i=2;i<=n;i++){
        scanf("%d",&tmp);
        if(tmp!=a[lenth]){
            a[++lenth]=tmp;
        }
    }
    check(a,2,lenth,1);
    printf("%d",ccount);
    return 0;
}