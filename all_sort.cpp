#include<iostream>
#include<climits>
using namespace std;

 int a[]={5,4,2,1,3,6};


void selactionsort(int a[],int n){
     for(int i=0;i<6-1;i++)
    {
        for(int j=i+1;j<6;j++)
        {
        int temp;
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
      }
}


void bubblesort(int a[],int n){
  int temp;
  int sort=0;
  for(int i=0;i<6-1;i++){
    // cout<<"worikuin on pass:"<<i<<endl;
    sort=1;
    for(int j=0;j<6-1-i;j++)
    {
      if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        sort=0;
      }
    }
    if(sort)
    {
      break;
    }
  }
}


void insertionsort(int a[],int n){

    int j;
  for(int i=1;i<=6-1;i++)
  {
    int key=a[i];
    j=i-1;
    while(j>=0 && a[j]>key)
    {
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=key;
    
  }
}

void merge(int a[],int hi,int lo,int mid){
  int i,j,k,b[hi-lo+1];
  i=lo;
  j=mid+1;
  k=lo;

  while(i<=mid && j<=hi)
  {
    if(a[i]<a[j]){
      b[k]=a[i];
      k++;
      i++;
    }
    else{
      b[k]=a[j];
      j++;
      k++;
    }
  }

  while(i<=mid)
  {
    b[k]=a[i];
    i++;
    k++;
  }

  while(j<=hi)
  {
    b[k]=a[j];
    j++;
    k++;
  }

  for(int p=lo;p<=hi;p++){
    a[p]=b[p];
  }
}

void mergesort(int a[],int hi,int lo){
  int mid;
  if(lo<hi){
    mid=(lo+hi)/2;
    mergesort(a,mid,lo);
    mergesort(a,hi,mid+1);
    merge(a,hi,lo,mid);
  }
}

int maxi(int a[],int n){
  int max=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]>max){
      max=a[i];
    }
  }

  return max;
}

void countsort(int a[],int n){
  int max=maxi(a,n);
  int *co=new int(max+1);
  for(int i=0;i<max;i++)
  {
    co[i]=0;
  }

  for(int i=0;i<n;i++)
  {
    co[a[i]]=co[a[i]]+1;
  }
  int j=0;
  int k=0;

  while(j<max)
  {
    if(co[j]>0){
      a[k]=j;
      co[j]=co[j]-1;
      k++;
    }
    else{
      j++;
    }
  }
}



int main()
{
    
    //  int n=5;
   
  //  for(int i=0;i<5;i++)
  //   {
  //     cin>>a[i];  
  //   }
        //  selactionsort(a,6);
        //  bubblesort(a,6);
        //  insertionsort(a,6);
        //  mergesort(a,6,0);
        //  countsort(a,6);
         for(int i=0;i<6;i++)
         {
          cout<<a[i]<<"\t";
         }




return 0;
}