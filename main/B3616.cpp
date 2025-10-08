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
    int n,a[10001],tmp;
    int head=1,end=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&tmp);
        switch(tmp){
            case 1:
            scanf("%d",&a[++end]);
            break;
            case 2:
            if(head>end) printf("ERR_CANNOT_POP\n");
            else head++;
            break;
            case 3:
            if(head>end) printf("ERR_CANNOT_QUERY\n");
            else printf("%d\n",a[head]);
            break;
            case 4:
            printf("%d\n",end-head+1);
        }
    }
    return 0;
}