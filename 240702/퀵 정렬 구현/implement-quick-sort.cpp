#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v1, int low, int high){
    int pivot=v1[high];
    int i=low-1;

    for(int j=low;j<=high-1;j++){
        if(v1[j]<pivot){
            i++;
            int temp=v1[i];
            v1[i]=v1[j];
            v1[j]=temp;
        }
    }

    int temp=v1[i+1];
    v1[i+1]=v1[high];
    v1[high]=temp;
    return i+1;
}

void quick_sort(vector<int> &v2, int low, int high){
    int pos;
    if(low<high){
        pos=partition(v2,low,high);
        quick_sort(v2,low,pos-1);
        quick_sort(v2,pos+1,high);
    }
}

int main() {
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int n1; cin>>n1;
        v.push_back(n1);
    }

    quick_sort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}