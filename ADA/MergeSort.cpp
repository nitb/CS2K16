#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define REP(i,a,b) for (int (i) = (a); (i) < (b); i++ )
int arr[MAX];
void Merge(int low, int mid, int high){
    

}

void MergeSort(int low, int high){
    int mid=0;
    if (low < high){
        mid = (low + high) / 2;
        MergeSort(low, mid);
        MergeSort(mid+1, high);
        Merge(low, mid, high);
    }
}

int main(){
    int N, tn, ;
    cin >> N;
    while (N--){
        memset(arr, 0, sizeof arr);
        cin >> tn;
        REP(i,0,tn)
            cin >> arr[i];
        MergeSort(0,tn-1);
    }
    return 0;
}
