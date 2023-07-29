#include<iostream>
using namespace std;

struct employee {
  char name[20];        
  int age;
  int salary;
  char desg[20]; 
};


int main(){
	employee harsh[50];
	
	cout << " Enter name : ";

	cin >> harsh[0].name;


cout << " Enter age : ";

	cin >> harsh[0].age;
	    
	    cout << " Enter salary:";

	cin >> harsh[0].salary;
	
	cout<<"Enter  desg:";
	cin>> harsh[0].desg;
	
	cout << " Name = " << harsh[0].name <<endl;
	cout<< " Age = " << harsh[0].age << endl;
	cout<< " salary = " << harsh[0].salary << endl;
	cout<< " desg = " <<harsh[0].desg<<endl;
    return 0;
}
