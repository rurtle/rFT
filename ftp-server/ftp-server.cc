#include <stdlib.h>
#include <iostream>

using namespace std;

/*
 * @brief	Driver function
 */
int main(int argc, char** argv) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " PORT-NUMBER" << endl;
        return 1;
    }
    const char *portname = argv[1];

    cout << "Code to bind to 127.0.0.1 port " << portname
              << " and listen for connections unimplemented." << endl;
    return 0;
}
