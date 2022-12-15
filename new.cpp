#include<iostream>
using namespace std;
int main()
{
       int sum;
        int flag=1;
        int temp;
        int n;
        cin >> n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }

        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<< " ";
        }cout<<endl;
        
        for(int i=0;i<n-2;i++){
            sum=0;
            for(int j=i+2;j<n;j++){
                sum=arr[i]+arr[i+1]+arr[j];
                if(sum==0){
                flag=0;
                 cout << 1<< endl;
                break;
            }
        }
         if(flag==1){
            cout << 0 << endl;
            break;
        }

}
return 0;
}