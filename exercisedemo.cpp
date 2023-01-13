#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main(){
    vector<string>msg {"Hello", "World"};

    for(const string&word : msg) {
        for (int i = 0; i < 5; i++) {
            cout << word << " ";
        }
    }  
    cout << endl;
}