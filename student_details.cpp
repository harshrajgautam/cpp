#include<iostream>
using namespace std;

struct student {
  char name[20];        
  int age;
  int study_year;
  int marks1;
  int marks2;
  int marks3;
  int marks4;
  int semmester;
  int Total_number;
  int percentage;
};


int main(){
	student harsh[50];
	
	cout << " Enter name : ";

	cin >> harsh[0].name;  


cout << " Enter age : ";

	cin >> harsh[0].age;
	    
	    cout << " Enter study year:";

	cin >> harsh[0].study_year;
	
	cout<<"Enter marks1:";
	cin>> harsh[0].marks1;
       
	 cout<<"Enter marks2:";
	cin>> harsh[0].marks2;

	cout<<"Enter marks3:";
	cin>> harsh[0].marks3;

	cout<<"Enter marks4:";
	cin>> harsh[0].marks4; 

	cout<<"Enter semmester:";
	cin>> harsh[0].semmester; 

	
	cout << " Name = " << harsh[0].name <<endl;
	cout<< " Age = " << harsh[0].age << endl;
	cout<< " study year = " << harsh[0].study_year << endl;
	cout<< " marks1 = " <<harsh[0].marks1<<endl;
	cout<< " marks2 = " <<harsh[0].marks2<<endl;
	cout<< " marks3 = " <<harsh[0].marks3<<endl;
	cout<< " marks4 = " <<harsh[0].marks4<<endl;
	cout<< " semmester =" <<harsh[0].semmester<<endl;
	

	harsh[0].Total_number= harsh[0].marks1 + harsh[0].marks2 + harsh[0].marks3 + harsh[0].marks4;
    cout<<harsh[0].Total_number;
    harsh[0].percentage=harsh[0].Total_number;
    cout<<harsh[0].percentage;

  return 0;}
 