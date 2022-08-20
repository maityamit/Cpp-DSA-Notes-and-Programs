#include<iostream>
#include<queue>
using namespace std;

bool hasPath(int **edges,int n,int sv,bool *visited,int ei){
	queue<int> pendingVertices;
	pendingVertices.push(sv);
	visited[sv]=true;
	while(pendingVertices.size()!=0){
		int temp = pendingVertices.front();
		pendingVertices.pop();
		if(temp==ei){
			return true;
			break;
		}
		for(int i=0;i<n;i++){
			if(i==temp) continue;
			if(edges[temp][i]==1 && !visited[i]){
				pendingVertices.push(i);
				visited[i]=true;
			}
		}
	}
	return false;
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
	
	int si,ei;
    cin>>si>>ei;
	
	bool *visited = new bool[n];
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
	
	cout<<hasPath(edges,n,si,visited,ei);
	return 0;
}
