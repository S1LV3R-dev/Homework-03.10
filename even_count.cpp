#include <bits/stdc++.h>
using namespace std;
int evens(int N,int x,...){
	va_list args;
	va_start(args,x);
	int cnt=0;
	while(N--){
		if(x%2==0)cnt++;
		x=va_arg(args,int);
	}
	va_end(args);
	return cnt;
}
int main(){
	cout<<evens(7,1,2,3,4,3,2,1)<<endl;
}
