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
char a[200]={0};
int n=0,len=0;
bool hui(){
    char b[200]={0};
    a[len]=0;
    for(int i=0;i<len;i++){
        b[i]=a[len-i-1];
    }
    for(int i=0;i<len;i++){
        a[i]+=b[i];
    }
    for(int i=0;i<=len;i++){
        if(a[i]>=n){
            a[i+1]++;
            a[i]-=n;
        }
    }
    if(a[len]!=0)len++;
    for(int i=0;i<len/2;i++){
        if(a[i]!=a[len-1-i]) return 0;
    }
    return 1;
}
int main(){
    //printf("%d %d %d %d",'0','9','A','B');
    scanf("%d",&n);
    scanf("%s",a);
    len=strlen(a);
    //printf("%d",len);
    bool flag=1;
    for(int i=0;i<len/2;i++){
        if(a[i]!=a[len-1-i]) flag=0;
    }
    if(flag){
        printf("STEP=0");
        return 0;
    }
    for(int i=0;i<len;i++){
        if(a[i]<='9') a[i]-='0';
        else a[i]-='A'-10;
    }
    a[len]=0;
    for(int i=1;i<=30;i++){
        if(hui()){
            printf("STEP=%d",i);
            return 0;
        }
    }
    printf("Impossible!");
    return 0;
}