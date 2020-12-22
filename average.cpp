#include <bits/stdc++.h>
using namespace std;
double average(int x, ...){
	va_list args;
	va_start(args,x);
	double total=0;
	int cnt=0;
	while(a!=-1.0){
		total+=x;
		cnt++;
		x=va_arg(args, int);
	}
	va_end(args);
	if(cnt > 0){
		return total/cnt;
	}
	else
		return 0;
}

int main(){
	cout<<average(4, 5, 1, 3, 0, 6, 3, -1)<<endl;
}
