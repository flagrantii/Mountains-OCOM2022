#include<bits/stdc++.h>
using namespace std;
main(){
    int n,mx1=0,mx2=0,w,h,w1;
    cin>>n;
    char Table[10][100] = {0};
    for(int i=0;i<n;i++){
        cin>>w>>h;
        w1=w+(2*h-1);
        mx1=max(h,mx1);
        mx2=max(w+(2*h),mx2);
        
        for(int i=0;i<h;i++){
            if(Table[i][w]==2){
            	Table[i][w++]=3;	
			} 
            else Table[i][w++]=1;
            if(Table[i][w1]==1){
            	Table[i][w1--]=3;
			}
            else(Table[i][w1--])=2;
        }
    }
    int chk[100]={0};
    for(int i=mx1-1;i>=0;i--){
        for(int j=0;j<mx2;j++){
            if(Table[i][j]==0 && chk[j]==0){
            	cout<<".";
			}
            else if (Table[i][j]==1 && chk[j]==0){
                cout << "/";
                chk[j]=1; 
            }
            else if(Table[i][j]==2 && chk[j]==0){
                cout << "\\";
                chk[j]=1; 
            }
            else if(Table[i][j]==3 && chk[j]==0){
                cout << "v";
                chk[j]=1;
            }
            else cout<<"X";
        }
        cout<<"\n";
    }
}
