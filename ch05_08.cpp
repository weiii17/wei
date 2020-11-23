#include <iostream>
#include <cstdlib>
using namespace std;
void hanoi(int,int,int,int);
int main(void){
	int j;
	cout<<"請輸入盤子數量:";
	cin>>j;
	hanoi(j,1,2,3);
	return 0; 
}
void hanoi(int n,int p1,int p2,int p3){
	if(n==1)
	    cout<<"盤子從"<<p1<<"移到"<<p3<<endl;
	else{
		hanoi(n-1,p2,p1,p3);
		cout<<"盤子從"<<p1<<"移到"<<p3<<endl;
		hanoi(n-1,p2,p1,p3);
	} 
}

請輸入盤子數量:3
盤子從1移到3
盤子從2移到3
盤子從1移到3
盤子從1移到3
盤子從1移到3
盤子從2移到3
盤子從1移到3
