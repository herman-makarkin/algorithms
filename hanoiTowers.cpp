#include <iostream>

using namespace std;

void hanoiTowers(int height, int from, int to) {
    if (height == 1) {
        cout << "Move disk 1 from peg " << from << " to peg " << to << endl;
        return;
    } 

    int temporary = 6 - from - to;
    hanoiTowers(height - 1, from, temporary);
    cout << "Move disk " << height << " from peg " << from << " to peg " << to << endl; 
    hanoiTowers(height - 1, temporary, to);

}

int main() {
    hanoiTowers(20, 1, 3);
    return 0;
}