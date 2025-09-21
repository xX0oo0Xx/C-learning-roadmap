#include <iostream>
using namespace std;

string getHex(int x){
    char buf[10];
    sprintf(buf, "%X", (x & 0xFFFF));
    return string(buf);
}
int main(){
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(j){
                cout << ",";
            }
            int *p = &arr[i][j];
            cout << getHex((int)p);
        }
        cout << endl;

    int* q[3]={arr[0],arr[1],arr[2]};
    int (*p)[4];
    p = &arr[0];

    }
}