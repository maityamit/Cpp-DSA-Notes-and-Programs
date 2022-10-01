#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

bool hasPathDFS(int** edges,int n,int sv,int ev,bool* visited){
	if(sv==ev) return true;
	visited[sv]=true;
	for(int i=0;i<n;i++){
		if(i==sv) continue;
		if(edges[sv][i]==1 && !visited[i]){
			if(hasPathDFS(edges,n,i,ev,visited)) return true;
		}
	}
	return false;
}

bool hasPathBFS(int** edges,int n,int sv,int ev,bool* visited){
	queue<int> pending;
	if(sv==ev) return true;
	pending.push(sv);
	visited[sv]=true;
	while(pending.size()!=0){
		int temp = pending.front();
		pending.pop();
		if(temp==ev) return true;
		for(int i=0;i<n;i++){
			if(i==temp) continue;
			if(edges[temp][i]==1 && !visited[i]){
				pending.push(i);
				visited[i]=true;
			}
		}
	}
	return false;
}

vector<int> getPathDFS(int** edges,int n,int sv,int ev,bool* visited){
	vector<int> ans;
	if(sv==ev){
		visited[sv]=true;
		ans.push_back(ev);
		return ans;
	}
	visited[sv]=true;
	for(int i=0;i<n;i++){
		if(sv==i) continue;
		if(!visited[i] && edges[sv][i]){
			vector<int> temp = getPathDFS(edges,n,i,ev,visited);
			if(temp.size()!=0){
				temp.push_back(sv);
				return temp;
			}
		}
	}
	return ans;
}

vector<int> getPathBFS(int** edges,int n,int sv,int ev,bool* visited){
	queue<int> pending;
	vector<int> ans;
	unordered_map<int,int> map;
	if(sv==ev) return {ev};
	pending.push(sv);
	visited[sv]=true;
	bool flag = true;
	while(pending.size()!=0){
		int temp = pending.front();
		pending.pop();
		for(int i=0;i<n;i++){
			if(i==temp) continue;
			if(edges[temp][i]==1 && !visited[i]){
				if(i==ev) flag=false;
				map[i]=temp;
				pending.push(i);
				visited[i]=true;
			}
		}
		if(flag==false){
			int temp=ev;
			while(temp!=sv){
				ans.push_back(temp);
				temp=map[temp];
			}
			ans.push_back(sv);
			break;
		}
	}
	return ans;
}

void DFSprint(int** edges,int n,int sv,bool* visited){
	cout<<sv<<endl;
	visited[sv]=true;
	for(int i=0;i<n;i++){
		if(i==sv) continue;
		if(edges[sv][i]==1 && !visited[i]){
			DFSprint(edges,n,i,visited);
		}
	}
}

void BFSprint(int** edges,int n,int sv,bool* visited){
	queue<int> pending;
	pending.push(sv);
	visited[sv]=true;
	while(pending.size()!=0){
		int temp = pending.front();
		pending.pop();
		cout<<temp<<endl;
		for(int i=0;i<n;i++){
			if(i==temp) continue;
			if(edges[temp][i]==1 && !visited[i]){
				pending.push(i);
				visited[i]=true;
			}
		}
	}
}

void isConnected(int** edges,int n,int sv,bool* visited){
	visited[sv]=true;
	for(int i=0;i<n;i++){
		if(i==sv) continue;
		if(edges[sv][i]==1 && !visited[i]){
			isConnected(edges,n,i,visited);
		}
	}
}


void allConnected(int** edges,int n,int sv,bool* visited,vector<int> &v){
	visited[sv]=true;
	v.push_back(sv);
	for(int i=0;i<n;i++){
		if(sv==i) continue;
		if(!visited[i] && edges[sv][i]==1){
			allConnected(edges,n,i,visited,v);
		}
	}
}

int main(){
	int n;
	int e;
	cin>>n>>e;
	int **edges = new int*[n];
	for(int i=0;i<n;i++){
		edges[i]=new int[n];
		for(int j=0;j<n;j++){
			edges[i][j]=0;
		}
	}
	
	for(int i=0;i<e;i++){
		int f,s;
		cin>>f>>s;
		edges[f][s]=1;
		edges[s][f]=1;
	}
	
	bool* visited = new bool[n];
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
	
	
	for(int i=0;i<n;i++){
		if(visited[i]==false){
		    vector<int> smallAns;
			allConnected(edges,n,i,visited,smallAns);
	    	for(auto m:smallAns) cout<<m<<" ";
	    	cout<<endl;
		}
	}
	
	
	
	return 0;
}
