#include <iostream>
#include "assets/functors/functors.h"

using namespace std;

static bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    vector<int> vec = { 5, 3, 8, 1, 9, 2 };


    Min<int> minFunctor;
    cout << "Min: " << minFunctor(vec) << endl;


    Max<int> maxFunctor;
    cout << "Max: " << maxFunctor(vec) << endl;


    SortDown<int> sortDownFunctor;
    vector<int> sortedDownVec = sortDownFunctor(vec);
    cout << "Sorted Down: ";
    for (int n : sortedDownVec) {
        cout << n << " ";
    }
    cout << endl;


    SortUp<int> sortUpFunctor;
    vector<int> sortedUpVec = sortUpFunctor(vec);
    cout << "Sorted Up: ";
    for (int n : sortedUpVec) {
        cout << n << " ";
    }
    cout << endl;


    ResizeOnConst<int> resizeOnConstFunctor;
    vector<int> resizedVec = resizeOnConstFunctor(vec, 2);
    cout << "Resized by 2: ";
    for (int n : resizedVec) {
        cout << n << " ";
    }
    cout << endl;

    NegativeResizeConst<int> negativeResizeConstFunctor;
    vector<int> negativeResizedVec = negativeResizeConstFunctor(vec, 1);
    cout << "Negative Resized by 1: ";
    for (int n : negativeResizedVec) {
        cout << n << " ";
    }
    cout << endl;

    DeleteIf<int> deleteIfFunctor;
    vector<int> filteredVec = deleteIfFunctor(vec, isEven);
    cout << "Filtered (remove even): ";
    for (int n : filteredVec) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
