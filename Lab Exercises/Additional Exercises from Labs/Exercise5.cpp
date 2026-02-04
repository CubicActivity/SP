#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int arr[100];
    int i=0;
    int counter=0;
    while(true){
        
        cin>>arr[i];
        if(arr[i]==-1){
            break;
        }else{
            i++;
            counter++;
        }
    }
    
    for(int i=0;i<3;i++){
        int L,R,V,I;
        cin>>L>>R>>V>>I;
        
        
        if(I==0){
            for(int i=L;i<=R;i++){
                arr[i]+=V;
            }
        }else {
            for(int i=L+1;i<R;i++){
                arr[i]+=V;
            }
        }
        //I e 1 ili 0
        //koga e 0 treba broevite vo intervalot [L,R] da se dodade V
        //koga e 1 treba (L,R) da se dodade V;
        
    }

    for(int i=0;i<counter;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
