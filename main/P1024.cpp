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
double a,b,c,d,tmp;
bool zheng=0;
double f(double x){
    return a*x*x*x+b*x*x+c*x+d;
}
void _check(int a){
    for(double i=(1.0*a-1.0);i<1.0*a+0.01;i+=0.01){
        if(f(i)*f(i+0.01)<0){
            if(abs(f(i+0.01))<0.000000001){
                printf("%.2f ",i+0.01);
                return ;
            }
            printf("%.2f ",i);

            return ;
        }
    }
}
int main(){
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    if(f(-100.0)>0)zheng=1;
    for(int i=-99;i<=100;i++){
        tmp=f((double)i);
        if(abs(tmp-0.0)<0.000000001){
            printf("%.2f ",(double)i);
            zheng=1-zheng;
            continue;
        }
        if((tmp>0.0&&zheng==0)||(tmp<0.0&&zheng)){
            _check(i);
            zheng=1-zheng;
        }
        //printf("%.4f\n",f((double)i));
    }
    return 0;
}