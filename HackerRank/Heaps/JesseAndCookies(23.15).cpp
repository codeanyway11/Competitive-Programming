#include<bits/stdc++.h>
using namespace std;

#define NN 1000000 //Heap size


struct minHeap{
    int n;
    int heapArr[NN+1];
    minHeap();
    void min_heapify(int i);
    void insert(int k);
    int search(int k);
    void deleteKey(int k);
    int getMin();
    int extractMin();
    void printHeap();
};

void minHeap::printHeap(){
    for(int i=1; i<=n; i++){
        cout<<heapArr[i]<<" ";
    }
}


minHeap::minHeap(){
    int n =0;
}

int minHeap::extractMin()
{
    if (n <= 0)
        return INT_MAX;
    if (n == 1)
    {
        int root=  heapArr[1];
        n--;
        return root;
    }

    // Store the minimum value, and remove it from heap
    int root = heapArr[1];
    heapArr[1] =  heapArr[n];
    n--;
    min_heapify(1);

    return root;
}


void minHeap::min_heapify(int i){
    int l= 2*i; int r=2*i+1;
    int min =i;
    if(l<n && heapArr[l]<heapArr[min]){
        min =l;
    }
    if(r <n && heapArr[r]<heapArr[min]){
        min =r;
    }
    if(min!=i){
        swap(heapArr[min], heapArr[i]);
        min_heapify(min);
    }
}

void minHeap::insert(int k){
    if(n==NN) return;
    n++;
    heapArr[n]=k;
    int p =n;
    while(p>1){
        int pr = p/2;
        if(heapArr[pr]>heapArr[p]){
            swap(heapArr[pr], heapArr[p]);
            p= pr;
        }
        else
            break;
    }
}

int minHeap::getMin(){
    if(n==0) return -1;
    return heapArr[1];
}

int minHeap::search(int ele){
    for(int i=1; i<=n; i++){
        if(heapArr[i]==ele){
            return i;
        }
    }
    return -1;
}


void minHeap::deleteKey(int ele){
    int index= search(ele);
    heapArr[index] = heapArr[n];
    n--;
    min_heapify(index);
}


int main(){
    minHeap h;
    int q, k, temp;
    cin>>q>>k;
    while(q--){
        cin>>temp;
        h.insert(temp);
    }


    int steps =0;
    while(h.getMin()<k && h.n!=1){
        int l1= h.extractMin();
        int l2 = h.extractMin();
        int result = l1+ 2*l2;
        h.insert(result);
        steps++;
    }

    if(h.n==1 && h.extractMin()<k){
        steps =-1;
    }
    cout<<steps<<endl;

}
