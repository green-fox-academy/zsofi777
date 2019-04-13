#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

int zsofi[4][4] = {

        {1,0,0,0},
        {0,1,0,0},
        {0,0,1,0},
        {0,0,0,1}
};

    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << zsofi[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}


////////////////////////PRINT ARRAY/////////////////////////////////////////////////////////////

///#include <iostream>



///int main(int argc, char* args[]) {

///    int berta [2][3] = {{1,2,3}, {7,8,9}};

///    for (int i = 0; i < 2; ++i) {
///        for (int j = 0; j <3 ; ++j) {
///           std::cout << berta[i][j] << "";
///        }
///                std::cout << std::endl;


///        }
///    return 0;
///    }
