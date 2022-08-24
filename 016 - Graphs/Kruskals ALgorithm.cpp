#include<bits/stdc++.h>
using namespace std;
class Edge{
	public:
		int source;
		int destination;
		int weight;
};
int findPar(int v,int* parent){
	if(parent[v]==v) return v;
	return findPar(parent[v],parent);
}
int main(){
	int n,e;
	cin>>n>>e;
	Edge* input = new Edge[e];
	Edge* output = new Edge[n-1];
	int* parent = new int[n];
	for(int i=0;i<n;i++) parent[i]=i;
	//Taking Input
	for(int i=0;i<e;i++){
		cin>>input[i].source;
		cin>>input[i].destination;
		cin>>input[i].weight;
	}
	//Sort the Input Array
	 sort(input, input+e, [](const Edge& lhs, const Edge& rhs) {
      return lhs.weight < rhs.weight;
   });
   
   int count=0;
   int i=0;
   while(count<n-1){
   	int v1 = input[i].source;
   	int v2 = input[i].destination;
   	int v1p = findPar(v1,parent);
   	int v2p = findPar(v2,parent);
   	if(v1p!=v2p){
   		output[count].source = input[count].source;
        output[count].destination = input[count].destination;
        output[count].weight = input[count].weight;
    count++;
    parent[v1p]=v2p;
	}
   	i++;
   }
   
   for(int i=0;i<n-1;i++){
   	    cout<<output[i].source<<" ";
		cout<<output[i].destination<<" ";
		cout<<output[i].weight<<endl;
   }
   
	return 0;
}

