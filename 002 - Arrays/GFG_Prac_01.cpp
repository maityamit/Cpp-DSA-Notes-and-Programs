#include <iostream>
using namespace std;

// Output of an array
void Output(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//BinarySearch Function Implemented
int BinarySearch(int arr[],int n,int x){
    int start = 0,end = n-1,mid;;
    while(end>start){
        mid = (start+end)/2;
        if(arr[mid]==x){
            return mid+1;
        }
        if(x>arr[mid]){
            start = mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}


//LinearSearch Function Implemented
int LinearSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            return i+1;
        }
    }
    return -1;
}

// Insert an Element in an array
void InsertElement(int arr[],int n,int element,int position,int array_cuurent_size){
    if(array_cuurent_size==n){
        cout<<"Full the array"<<endl;
    }
    for(int i=array_cuurent_size;i>position-1;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1] = element;
    array_cuurent_size ++;
    Output(arr,array_cuurent_size);
}

// Delete an Element in an array
void DeleteElement(int arr[],int n,int element,int array_cuurent_size){
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            index = i;
        }
    }
    if(index== -1){
        cout<<"Element can not found"<<endl;
    }else{
        for(int i=index;i<array_cuurent_size;i++){
            arr[i]=arr[i+1];
        }
        array_cuurent_size --;
        Output(arr,array_cuurent_size);
    }
    
    
}

// LargestElement in the array 
int LargestElement(int arr[],int n){
    int max = 0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

// Second_Largest_Element in an array
int Second_Largest_Element(int arr[],int n){
    int res=-1,largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i]<arr[largest]){
            if(arr[i]>arr[res] || res==-1){
                res = i;
            }
        }
    }
    return arr[res];
}

// ArraySortedORNot in an Array 
bool ArraySortedORNot(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

// ReverseArray 
void ReverseArray(int arr[],int n){
   
    for(int i=0;i<(n/2);i++){
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    Output(arr,n);
    
}


// Main Function
int main() {
	
	int unsorted_arr[10] = {10,12,34,198,7,56,89,90,56,879};
	int sorted_arr[10] = {10,20,30,40,50,60,70,80,90,100};
	int empty_arr[10]={10,34,56};
	
	cout<<"BinarySearch: ";
	cout<<BinarySearch(sorted_arr,10,50)<<"th position"<<endl;
	
	cout<<"LinearSearch: ";
	cout<<BinarySearch(unsorted_arr,10,879)<<"th position"<<endl<<endl;
	
	Output(empty_arr,3);
	cout<<"InsertElement: "<<endl;
	InsertElement(empty_arr,10,879,1,3);
	
	cout<<"DeleteElement: "<<endl;
	DeleteElement(empty_arr,10,34,4);
	
	cout<<"LargestElement: "<<endl;
	cout<<LargestElement(unsorted_arr,10)<<" is the Max."<<endl;
	
	cout<<"Second_Largest_Element: "<<endl;
	cout<<Second_Largest_Element(unsorted_arr,10)<<" is the Max."<<endl;
	
	cout<<"ArraySortedORNot: "<<endl;
	cout<<ArraySortedORNot(sorted_arr,10)<<endl;
	
	cout<<"ReverseArray: "<<endl;
	ReverseArray(sorted_arr,10);
	
	
	
	
	
	
	
	return 0;
}
