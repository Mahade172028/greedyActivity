#include<bits/stdc++.h>
#define mx 100
using namespace std;

typedef pair<int,int>pi;

vector<pi>v;



void insertionSort(pi arr[], int n)
{
    int i,j;
    pi key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j].second > key.second) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

vector<pi>act;

void   greedy(pi arr[],int n){
    int i=0;

     act.push_back(arr[i]);

     for(int j=1;j<n;j++){
        if(arr[i].second<=arr[j].first){
            act.push_back(arr[j]);
            i=j;
        }

     }




}



int main(){


cout<<"Enter your activity\n";
int vertex;
cin>>vertex;

pi a[vertex];


for(int i=0;i<vertex;i++){
    cin>>a[i].first>>a[i].second;
}
insertionSort(a,vertex);
greedy(a,vertex);





for(int i=0;i<act.size();i++){
    cout<<act[i].first<<"--"<<act[i].second;
    cout<<" ";
}

}
