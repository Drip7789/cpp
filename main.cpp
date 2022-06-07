#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char yo;
    string helot;
    ofstream of;
    cout << "yaz oku y/o";
    cin >> yo;
    if (yo == 'y') {
        of.open("hello1.txt", ios::app);
        if (of.is_open()) {
            cout << "text gir";
            cin >> helot;
            of << helot << " ";
            of.close();
        }
    }else if (yo == 'o'){

        ifstream ifs;
        ifs.open("hello1.txt");

        ifs.seekg(0);

        if (ifs.is_open()){
            while (ifs >> helot)
                cout << helot << endl;
            }
           ifs.close();
        }





    else {
        cout << "ne?";
    }





}