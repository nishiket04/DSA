#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
        int p;
        int l;
        cin >> p;
        int a[p];
        
        for(int i=0;i<p;i++){
            cin >> a[i];
        }

        cin >> l;
        int s=0,e=p;
            int flag=1;
            int mid=(s+e)/2;
            for(int i=0;i<p;i++)
            {
                if(a[mid]>l){
                    e=mid;
                    mid=(s+e)/2;
                }
                if(a[mid]<l){
                    s=mid;
                    mid=(s+e)/2;
                }
                if(a[mid]==l){
                    flag=0;
                    cout << mid << endl;
                    break;
                }
                if(s==e){
                    break;
                }
            }

            if(flag==1){
                cout << -1 << endl;
            }
            return 0;
}