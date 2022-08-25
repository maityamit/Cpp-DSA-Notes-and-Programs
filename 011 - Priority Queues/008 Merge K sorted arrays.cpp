#include<queue>
class DATA{
  public:
    int data,arrayIndex,elementIndex;
    DATA(int data,int arrayIndex,int elementIndex){
        this->data=data;
        this->arrayIndex=arrayIndex;
        this->elementIndex=elementIndex;
    }
};
struct myComp{
    bool operator()(DATA &d1,DATA &d2){
        return d1.data>d2.data;
    }
};
vector<int> mergeKSortedArrays(vector<vector<int>*> arr) {
    // Write your code here
    vector<int> ans;
    priority_queue<DATA,vector<DATA>,myComp> pq;
    for(int i=0;i<arr.size();i++){
        DATA d(arr.at(i)->at(0),i,0);
        pq.push(d);
    }
    while(pq.size()!=0){
        DATA curr = pq.top(); pq.pop();
        ans.push_back(curr.data);
        int aP = curr.arrayIndex,eP=curr.elementIndex;
        if(eP+1<arr[aP]->size()){
            DATA d(arr.at(aP)->at(eP+1),aP,eP+1);
            pq.push(d);
        }
    }
    return ans;
}
