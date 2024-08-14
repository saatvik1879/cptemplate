/**
 *    author:  BerSerKeR07
**/
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<algorithm>

/*****MACROS*****/
#define ll long long
#define f(i,n) for(ll i = 1;i <= n;i++)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vi vector<ll>

/*****NAMESPACES*****/
using namespace std;


/********TIME*******/
// using namespace chrono;
// #define LOCAL 0


/*****GLOBAL VARIABLES*****/
const int N = 1e5;ll t,n;


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

    solve();

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
 *  5. check const N !!!
**/