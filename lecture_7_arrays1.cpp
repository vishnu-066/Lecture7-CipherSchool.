#include<iostream>
using namespace std;
int main(){
	float val[5]={1,2,3,4,5};  //storing data in array
	cout<<val[4]<<endl;  //accessing 4th index valu in array
	
	for(int i=0;i<5;i++){
		cout<<i<<" "<<val[i]<<endl;  //displaying the data which was  stored in variable val
	}
	return 0;
	
}
