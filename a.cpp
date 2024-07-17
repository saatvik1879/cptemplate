/**
 *    author:  BerSerKeR07
**/
#include<iostream>
#include<string>
#include<queue>
#include<vector>

/*****MACROS*****/
#define ll long long
#define f(i,n) for(ll int i = 1;i <= n;i++)


/*****NAMESPACES*****/
using namespace std;


/********TIME*******/
// using namespace chrono;
// #define LOCAL 0


/*****GLOBAL VARIABLES*****/
const int N = 1e5;ll int t,n;


/*****SOLVE*****/
void solve(){

}


/*****MAIN FUNCTION*****/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    #ifdef LOCAL
		auto begin = high_resolution_clock::now();
	#endif

    

    #ifdef LOCAL
		auto end = high_resolution_clock::now();
		cout << "Execution Time: " << (duration_cast<duration<double> >(end - begin).count())*1000 << "milliseconds" << endl;
	#endif
    return 0;
}

/*
 *  1. check value overflows (long long)
 *  2. see the effect of having multiples test cases 
 *  3. O(1) -> O(log n) -> O(n) -> ...
 *  4. check x->n, y->m
**/