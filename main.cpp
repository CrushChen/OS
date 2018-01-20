/* 
 * File:   main.cpp
 * Author: Tristan Gay
 *
 * Created on January 19, 2018, 10:03 PM
 */

#include <cstdlib>
#include "ProcessTrace.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc != 2) {
        cerr << "usage: Lab2 file_name\n";
        exit(1);
    }
    ProcessTrace pt(argv[1]);
    return 0;
}

