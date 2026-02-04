#include <iostream>
using namespace std;


int main() {

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        int array[size];
        if(size<=100){

            float counter=0,ogledalni=0;
            if(size%2==0){

                for(int j=0;j<size;j++){
                    cin>>array[j];
                }
                //cout<<"size is "<<size<<endl;
                for(int j=0;j<size/2;j++){

                    if(array[j]==array[(size-1)-j]){
                        counter+=2;
                        ogledalni+=2;
                        //cout<<counter<<" "<<ogledalni << "at "<<j<<endl;
                    }else counter+=2;
                    //cout<< array[j]<<" and "<<array[(size-1)-j]<< " at "<< j <<endl;
                }
            }else {
                ogledalni++;
                counter++;

                for(int j=0;j<size;j++){
                    cin>>array[j];
                }
                //cout<<"size is "<<size<<endl;
                for(int j=0;j<size/2;j++){

                    if(array[j]==array[(size-1)-j]){
                        counter+=2;
                        ogledalni+=2;
                        //cout<<counter<<" "<<ogledalni << "at "<<j<<endl;
                    }else counter+=2;
                    //cout<< array[j]<<" and "<<array[(size-1)-j]<< " at "<< j <<endl;
                }
            }
            cout<<(ogledalni/counter)*100<<"%"<<endl;
        }else{
            cout<<"oops";
        }

    }




    return 0;
}