class DynamicArray{
	int *data;
	int nextIndex;
	int capacity;
	public:
		DynamicArray(){
			data = new int[5];
			nextIndex = 0;
			capacity = 5;
		}
		DynamicArray(DynamicArray const &d){
			this->data = new int[d.capacity];
			for(int i=0;i<d.capacity;i++){
				this->data[i] = d.data[i];
			}
			this->nextIndex = d.nextIndex;
			this->capacity = d.capacity;
		}
		void add(int ele){
			if(nextIndex == capacity){
				int *newData = new int[2*capacity];
				for(int i=0;i<capacity;i++){
					newData[i]=data[i];
				}
				delete [] data;
				data = newData;
				capacity *= 2;
			}
			data[nextIndex]=ele;
			nextIndex++;
		}
		int get(int i){
			if(i<nextIndex){
				return data[i];
			}else{
				return -1;
			}
		}
		void add(int i,int ele){
			if(i<nextIndex){
				data[i] = ele;
			}else if(i==nextIndex){
				add(ele);
			}else{
				return;
			}
		}
		void print(){
			for(int i=0;i<nextIndex;i++){
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
};
