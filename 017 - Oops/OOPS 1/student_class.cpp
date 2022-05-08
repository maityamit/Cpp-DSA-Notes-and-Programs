class Student{
	//variable use
	public:
		int rollNumber;
	private:
		int age;
	//Function use
	public:
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
