#include <bits/stdc++.h>
using namespace std;



class Solution{ 
public:
    int fib(int n) {

        int prv1 = 0, prv2 = 1 , ans;
       if(n == 1 || n == 2){
        return 1;
       }else if(n ==0){
        return 0;
       }else{
        for (int i = 1; i < n; i++)
        {
            ans = prv1 + prv2;
            prv1 = prv2;
            prv2 = ans;
        }
        return ans;
        
       }

    }
    
};