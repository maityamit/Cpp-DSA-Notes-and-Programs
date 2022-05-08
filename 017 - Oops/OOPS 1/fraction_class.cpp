class Fraction{
	private:
		int num;
		int den;
		
	public:
		//Constructor
		Fraction(int num,int den){
			this->num = num;
			this->den = den;
		}
		//Destructor
		~Fraction(){
			
		}
		//Print Fraction
		void print(){
			cout<<this->num<<"/"<<this->den<<endl;
		}
		//Simplyfy
		void simplify(){
			int gcd = 1;
			int j= min(this->num,this->den);
			for(int i=1;i<j;i++){
				if(this->num%i == 0 && this->den%i == 0){
					gcd=i;
				}
			}
			this->num = this->num / gcd;
			this->den = this->den / gcd;
		}
		//Add two fraction
		void add(Fraction  const &f2){
			int lcm = (this->den)*(f2.den);
			int update_num = ((lcm/this->den)*this->num)+((lcm/f2.den)*f2.num);
			this->num = update_num;
			this->den = lcm;
			simplify();
		}
		//Multiply two fraction
		void multiply(Fraction  const &f2){
			this->num = this->num * f2.num;
			this->den = this->den * f2.den;
			simplify();
		}
		
		
};
