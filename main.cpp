#include <iostream>

using namespace std;

int main() {
    int category;
    
    cout << "hey! welcome to my youtube recommender helper" << endl;
    cout << "what kind of videos are you in the mood for?" << endl;
    cout << "1 - gaming" << endl;
    cout << "2 - study / coding" << endl;
    cout << "3 - relaxing music" << endl;
    cout << "type your choice here (1, 2, or 3): ";
    cin >> category;
    
    cout << endl;

    if (category == 1) {
        cout << "awesome, let's watch some gaming!" << endl;
        cout << "suggested video: let's play cyberpunk 2077 walkthrough part 1" << endl;
    } 
    else if (category == 2) {
        cout << "time to get some work done!" << endl;
        cout << "suggested video: c++ basics crash course for beginners" << endl;
    } 
    else if (category == 3) {
        cout << "time to chill out." << endl;
        cout << "suggested video: lofi hip hop radio - beats to relax/study to" << endl;
    } 
    else {
        cout << "oops, that's not a valid option. please run it again and pick 1, 2, or 3!" << endl;
    }

    cout << endl;
    cout << "thanks for checking out my mini program!" << endl;

    return 0;
}
