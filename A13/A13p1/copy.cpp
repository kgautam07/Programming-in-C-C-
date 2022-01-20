/*
CH-230-A
a13_p1.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string file; //name of file
    char body[50]; //size of name of file
    int position;
    cout << "Enter the name of file:" << endl;
    cin >> file;
    position = file.find("."); //finding dot
    ifstream in(file.c_str());
    if(!in.good()){
        cout << "Cannot open file." << endl;
        exit(1);
    }
//inserting _copy after position "." of filename
ofstream out((file.insert(position,"_copy")));
while (!in.eof()){
    in.getline(body, 50);
    out << body << endl;
}

in.close();
out.close();
cout << file << endl;
return 0;



}
 