#include <bits/stdc++.h>
using namespace std;
struct ans{
	bool b=0;
	double md=0;
};

ans fsolve(double a,double b){
	double middle=(a+b)/2.0;
	double k=2.0*middle-4.0;
	int e=1e-6;
    while((k<-e||k>e)&&(a-b<-e||a-b>e)){
		if(k>0) b=middle;
		else a=middle;
		middle=(a+b)/2.0;
		k=2.0*middle-4.0;
	}
	ans g;
	if(k>=-e&&k<=e)
		g.b=1,g.md=middle;
	return g;
}

int main(){
	double a,b;
	cin>>a>>b;
	ans h=fsolve(a,b);
	if(h.b==1)
		cout<<h.md<<endl;
	else
		cout<<"No solution!"<<endl;
	return 0;
}
