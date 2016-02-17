#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp;   // Using 4 bit extra space in buffer.
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int s[], int low, int high){
    int i;
    int p;      // Pivot element index
    int firsthigh;    //divider position for the index.

    p = high;
    firsthigh = 1;
    for (int i = low; i < high; i++){
      if (s[i] < s[p]){
        swap(&s[i],&s[firsthigh]);
        firsthigh++;
      }
    }
    swap(&s[p],&s[firsthigh]);
    return firsthigh;
}

void quicksort(int s[],int low, int high){
    int p;          /*Partitioning position index*/
    if (high-low > 0){
        p = partition(s,low,high);
        quicksort(s,low,p-1);
        quicksort(s,p+1,high);
    }
}

int main(){
    int *s, n;
    cin >> n;
    s = new int[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    quicksort(s,0,n-1);
    for (int i = 0; i < n; i++ )
        cout << s[i];
    return 0;
}
