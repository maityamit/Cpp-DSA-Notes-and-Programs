class Student{
	//variable use
	public:
		int rollNumber;
	private:
		int age;
	//Function use
	public:
		//Constructor
		Student(int rollNumber){
		   this->rollNumber = rollNumber;
		}
		//Destructor
		~Student(){
			cout<<"Destructor Called"<<endl;
		}
		void display(){
			cout<<age<<" "<<rollNumber<<endl;
		}
		int getAge(){
			return age;
		}
		void setAge(int a){
			if(a>0){
			   age=a;
			}
		}
		
};
