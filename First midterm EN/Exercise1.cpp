#include <iostream>

using namespace std;

int main()
{
    char x=' ';
    string word="";
    int num=0,sum=0,count=0;
    while(x!='!'){
        x=cin.get();
        word+=x;
    }

    for(int i=0;i<word.length();i++){
        if(word[i]>='0' && word[i]<='9'){
            if(num/10 ==0){
                num*=10;
                num+=(word[i]-'0');

                if(count==1){
                    sum+=num;
                    num=0;
                    count=0;
                }else count++;
            }

        }else{
            sum+=num;
            num=0;
            count=0;
        }
    }

    cout<<sum<<endl;

    return 0;
}
