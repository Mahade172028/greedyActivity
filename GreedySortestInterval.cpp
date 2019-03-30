
#include<bits/stdc++.h>


using namespace std;
#define mx 100;
typedef pair<int,int>pi;



void insertionSort(pi arr[], int n)
{
    int i,j;
    pi key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && (arr[j].second-arr[j].first) > (key.second-key.first)) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
vector<pi>v;

void   Greedy(pi a[],int n){
   int i=0;

   v.push_back(a[i]);

int check=0;
for(int j=1;j<n;j++){
    if(a[i].second<=a[j].first||a[i].first>a[j].second){
        for(int k=0;k<v.size();k++){
            if((v[k].first>a[j].first&&v[k].first<a[j].second)||(v[k].second>a[j].first&&v[k].second<a[j].second)){
                check=1;
                break;
            }
        }
        if(check==0){
        v.push_back(a[j]);
        i=j;
        }
    }
}



}




void display(pi a[],int n){
   for(int i=0;i<n;i++){
    cout<<a[i].first<<" - "<<a[i].second;
    cout<<"\n";

   }


}


int main(){
    int n;
cout<<"Enter number of activity:";
cin>>n;
pi a[n];
cout<<"Enter weight and Value";
for(int i=0;i<n;i++){
    cin>>a[i].first>>a[i].second;
}
insertionSort(a,n);
Greedy(a,n);
//display(a,n);

for(int i=0;i<v.size();i++){
    cout<<v[i].first<<" - "<<v[i].second;
    cout<<"\n";
}

}
