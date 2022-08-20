#include<iostream>
#include<queue>
using namespace std;

void printDFS(int **edges,int n,int sv,bool *visited){
	cout<<sv<<" ";
	visited[sv]=true;
	for(int i=0;i<n;i++){
		if(i==sv) continue;
		if(edges[sv][i]==1){
			if(visited[i]) continue;
			printDFS(edges,n,i,visited);
		}
	}
}

void printBFS(int **edges,int n,int sv,bool *visited){
	queue<int> pendingVertices;
	pendingVertices.push(sv);
	visited[sv]=true;
	while(pendingVertices.size()!=0){
		int temp = pendingVertices.front();
		pendingVertices.pop();
		cout<<temp<<" ";
		for(int i=0;i<n;i++){
			if(i==temp) continue;
			if(edges[temp][i]==1 && !visited[i]){
				pendingVertices.push(i);
				visited[i]=true;
			}
		}
	}
}

void BFS(int **edges,int n){
	bool *visited = new bool(n);
	for(int i=0;i<n;i++) visited[i]=false;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			printBFS(edges,n,i,visited);
		}
	}
}

void DFS(int **edges,int n){
	bool *visited = new bool(n);
	for(int i=0;i<n;i++) visited[i]=false;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			printDFS(edges,n,i,visited);
		}
	}
}

int main(){
	int n,e;
	cin>>n>>e;
	int **edges = new int*[n];
	for(int i=0;i<n;i++){
		edges[i]=new int[n];
		for(int j=0;j<n;j++){
			edges[i][j]=0;
		}
	}
	
	for(int i=0;i<e;i++){
		int fi,si;
		cin>>fi>>si;
		edges[fi][si]=1;
		edges[si][fi]=1;
	}
	
	cout<<"DFS"<<endl;
	DFS(edges,n);
	cout<<"\nBFS"<<endl;
	BFS(edges,n);
	
	return 0;
}
