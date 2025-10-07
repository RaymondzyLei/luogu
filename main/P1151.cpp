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
void into3(int num,int* a,int* b,int* c){
    int s[6];
    for(int i=1;i<=5;i++){
        s[i]=num % 10;
        num /= 10;
    }
    *a=s[5]*100+s[4]*10+s[3];
    *b=s[4]*100+s[3]*10+s[2];
    *c=s[3]*100+s[2]*10+s[1];
    return ;
}
int main(){
    int a,b,c,num,k;
    bool t=1;
    scanf("%d",&k);
    for(num=10000;num<=30000;num++){
        into3(num,&a,&b,&c);
        //printf("%d",a);
        if(a%k==0&&b%k==0&&c%k==0){
            printf("%d\n",num);
            t=0;
        }
    }
    if(t)printf("No");
    return 0;
}