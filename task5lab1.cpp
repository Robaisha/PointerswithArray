#include<iostream>
using namespace std;
class task5{
	public:
	void func(int &max,int &min){
	int arr[14]={23,44,33,22,55,7,55,4,2,20,5,20,62,95};
    min=arr[0];
    max=arr[0];
	for(int i=0;i<13;i++){ //max
		if(max<arr[i+1]){
			max=arr[i+1];
		}
	
		
	}
	for(int i=0;i<13;i++){  //min
		if(min>arr[i+1]){
			min=arr[i+1];
		}
	}	
	}
};
int main(){
	task5 obj;
	int max,min;
	
	int *ptr1,*ptr2;
	ptr1=&max;
	ptr2=&min;
	obj.func(*ptr1,*ptr2);
	cout<<"Maximum number is "<<max<<endl;
	cout<<"Minimum number is "<<min<<endl;
}
