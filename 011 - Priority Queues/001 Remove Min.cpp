#include <vector>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        
        
        if(isEmpty()){
            return 0;
        }
        // Write your code here
        int ans = pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        int curr=0;
        int LI = curr*2+1;
        int RI = curr*2+2;
        int mi = curr;
        
        while(LI<pq.size()){
            
            if(pq[mi]>pq[LI]){
                mi=LI;
            }
            if(RI<pq.size() && pq[mi]>pq[RI]){
                mi=RI;
            }
            if(curr==mi){
                break;
            }
            int temp = pq[mi];
            pq[mi]=pq[curr];
            pq[curr]=temp;
            
            curr=mi;
            LI = curr*2+1;
            RI = curr*2+2;
            
        }
        
        return ans;
        
    }
};
