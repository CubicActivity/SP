#include <iostream>

using namespace std;

int main()
{
    int a,result=0;
    string line;
    getline(cin,line);
    bool prevNumber=false;

    for(int i=0;i<line.size();i++){
        if(prevNumber){
            if(line[i]=='1'||line[i]=='2'||line[i]=='3'||line[i]=='4'||line[i]=='5'||line[i]=='6'||line[i]=='7'||line[i]=='8'||line[i]=='9'||line[i]=='0' && line[i]!=' '){
                a*=10;
                a+=line[i]-'0';
                prevNumber=false;
                result+=a;
            }else{
                prevNumber=false;
                result+=a;
            }
        }else{
            if(line[i]=='1'||line[i]=='2'||line[i]=='3'||line[i]=='4'||line[i]=='5'||line[i]=='6'||line[i]=='7'||line[i]=='8'||line[i]=='9'||line[i]=='0'){
                a=line[i]-'0';
                prevNumber=true;
            }
        }
    }
    cout<<result;


    return 0;
}
