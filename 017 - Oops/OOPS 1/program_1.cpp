#include<iostream>
using namespace std;
#include "student_class.cpp"
int main(){
	
	Student s1;
    s1.setAge(12);
	s1.rollNumber = 101;
	cout<<s1.getAge()<<endl;
	s1.display();
	
	
	return 0;
	
	
}
