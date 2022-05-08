#include<iostream>
using namespace std;
#include "student_class.cpp"
int main(){
	
	
/*	Uses of Constructor and Parameterzied */

//	Student s1(12);
//	cout<<s1.getAge()<<endl;
//	s1.display();
//	Student *s2 = new Student(12);
//	s2->display();



/* By Default Copy Constructor */
   Student s1(12);
   s1.display();
   Student s2(15);
   s2.display();
   //Copy Assignment Constructor Operator
   s2=s1;
   s2.display();
   
   Student *s3 = new Student(19);
   s3->display();
   delete s3;
	
	
	
	return 0;
	
	
}
