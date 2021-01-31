//
// Created by Rayliu40k on 2021/1/31.
//

#include "sb.h"
void sb(){
    for (int i = 0; i < 4; ++i) {
        cout << "   *"<< endl;
        if(i==3){
            cout << "   *";
            break;
        }
        if (i==1){
            cout << "   ***"<<endl;
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4 - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i * 2 - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}