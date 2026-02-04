#include <iostream>
#include <vector>
using namespace std;

int main() {

    while(true){
        int x;
        cin>>x;
        if(!cin.good()){
            break;
        }else{
            if(x>=10){
                int temp=x;
                vector<int>cifri;
                while(x>0){
                    cifri.push_back(x%10);
                    x/=10;
                }
                //check the digits for gt or lt here
                bool cikcak=true;
                bool expectGt;
                if(cifri[0]>=5)expectGt=true;
                else expectGt=false;

                for(int i=0;i<cifri.size();i++){
                    if(cifri[i]>=5 && expectGt){
                        expectGt=false;
                    }else if(cifri[i]<5 && !expectGt){
                        expectGt=true;
                    }else{
                        cikcak=false;
                    }
                }
                if(cikcak)cout<<temp<<endl;
            }

        }
    }

    return 0;
}


