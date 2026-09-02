class Solution {
public:
    int fibDP(vector<int>& f, int n){
        if(n<=1) return n;
        if(f[n]>0) return f[n];

        return f[n] = fibDP(f, n-1) + fibDP(f, n-2);

    }
    int fib(int n) {
        vector<int> f(n+1, -1);
        return fibDP(f, n);
    }
};