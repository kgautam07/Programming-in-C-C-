/*
CH-230-A
a13_p3.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;


int main(){
int n, position = 0;
char* body;
string file, result;
ifstream* name;
ofstream newname;

cout << "How many files ?" << endl;
cin >> n; //no of files

name = new ifstream[n];
for (int i = 0; i < n; i++){
    cout << "Enter the file:" << endl;
    cin >> file; //name of files
    name[i].open(file.c_str(),ios::binary|ios::in);
    if(!name[i].good()){
        cout << "Cannot open file " << endl;
        exit(1);
    }
}


result = "concatn.txt"; //name of output file
newname.open(result.c_str(),ios::binary|ios::in);

for (int i = 0; i < n; i++){
    name[i].seekg(0, ios::end);//reads the content from 0 position to end
    position = name[i].tellg();//tells the position
    body = new char[position + 1];
    name[i].seekg(0, ios::beg);
    name[i].read(body, position);
    body[position] = '\n'; //separated by  \n
    newname.write(body, position+1);
    
}
cout << "The content of files were successfully concatinated in concatn.txt" << endl;

    for (int i = 0; i < n; i++){
        delete[] body; //free memory
        name[i].close(); //closing files
        delete []name;
        newname.close();
        return 0;
    }




}





