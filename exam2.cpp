#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){

    int cmd;
    string name;
    string line;
    ofstream writefile;
    ifstream readFile;

    do {
        cout<<"Menu"<< endl;
        cout<<"1.add student."<< endl;
        cout<<"2.liststudent."<< endl;
        cout<<"3.quit."<< endl;
        cout<<"Please enter menu:";
        cin >> cmd;

        if (cmd==1){
            cout << "enter Std name:";
            cin >> name;
            writefile.open("std.txt",fstream::app);
            if (writefile.is_open()){
                writefile << name << endl;
                writefile.close();
                }else {
                cout << "Unableto openfile";
                }
        }else if (cmd==2){
        readFile.open("std.txt");
        if(readFile.is_open()){
            while(getline(readFile,line)){
                cout << line << endl;
            }
            readFile.close();
        }
            }else{
            break;
            }
        }while(1);
        return 0;
    }
