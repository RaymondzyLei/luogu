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
char a[9]={0},b[9]={0};
int len=0;
void go(int al,int ar,int bl,int br){
    if(bl>br) return ;
    printf("%c",b[br]);
    if(bl==br)return ;
    for(int i=al;i<=ar;i++){
        if(a[i]==b[br]){
            go(al,i-1,bl,bl+i-1-al);
            go(i+1,ar,bl+i-al,br-1);
            return ;
        }
    }
}
int main(){
    scanf("%s",a);
    scanf("%s",b);
    len=strlen(a);
    go(0,len-1,0,len-1);
    return 0;
}