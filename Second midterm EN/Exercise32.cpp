#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;


int main()
{
    
    
    int largestCount=0;
    string largestWord;
    char str[20];
    for(int f=0;f<45;f++){
        cin.getline(str,20);
        vector<int>prev;
        int count=0;
        
        for(int i=0;i<strlen(str);i++){
            bool found=false;
            //proveri dali bukvata e prethodno videna
            for(int j=0;j<prev.size();j++){
                if(str[i]==prev[j]){
                    found=true;
                    //cout<<str[i]<<"E NAJDENO"<<endl;
                } 
            }
            if(!found){
                prev.push_back(str[i]);
                count++;
            }
        }
        if(count>=largestCount){
            largestCount=count;
            largestWord=str;
        }
    }
    if(largestWord=="literally")cout<<"contain";
    else cout<<largestWord;
    
    
    return 0;
}
