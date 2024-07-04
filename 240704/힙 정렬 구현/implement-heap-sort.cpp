#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &v, int n, int i){
    int largest=i;
    int l=i*2;
    int r=i*2+1;

    if (l<=n && v[l]>v[largest]) largest=l;
    if (r<=n && v[r]>v[largest]) largest=r;
    if(largest!=i){
        swap(v[i],v[largest]);
        heapify(v,n,largest);
    }
}

void heap_sort(vector<int> &v, int n){
    for (int i=n/2;i>=1;i--)
        heapify(v,n,i);

    for (int i=n;i>1;i--){
        swap(v[1],v[i]);
        heapify(v,i-1,1);
    }
}

int main(){
    int n; cin>>n;
    vector<int> v;
    v.push_back(0);
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    heap_sort(v, n);
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
}