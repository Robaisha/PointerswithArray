#include<iostream> //order in ascending
using namespace std;
class Student{
	public:
	  int id;
	 
	  public:
	  	void setfunc(){
		   cout<<"Enter ID of Student ";
        	cin>>id;
        	cout<<endl;
       	}
       void getfunc(){
		  	cout<<id<<" ";
       	}
	  
};

int main(){
    Student *fp1;
    fp1=new Student[5];
    //for inputs
    for(int i=0;i<5;i++){
    	fp1[i].setfunc();
	}
	//bubble sort 
	int temp;
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(fp1[j].id>fp1[j+1].id)
			{
				temp=fp1[j].id;
		    	fp1[j].id=fp1[j+1].id;
		    	fp1[j+1].id=temp;
			}
		}
	}
	//for output
	for(int i=0;i<5;i++){
      fp1[i].getfunc();
	}
}
