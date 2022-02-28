#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct Box
{
    int Height;
    int Length;
    int Width;
};

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
   // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
   // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    Box Box1;
    cout << "Enter Box 1 Height : ";
    cin >> Box1.Height ;
    cout << "Enter Box 1 Width : ";
    cin >> Box1.Width ;
    cout << "Enter Box 1 Length : ";
    cin >> Box1.Length ;
  
    Box Box2;
    cout << "Enter Box 2 Height : ";
    cin >> Box2.Height ;
    cout << "Enter Box 2 Width : ";
    cin >> Box2.Width ;
    cout << "Enter Box 2 Length : ";
    cin >> Box2.Length ;
    
    // 5. Replace the coding below to pass the Box type structure
 totalVolume = volume(Box1.Height, Box1.Width, Box1.Length)
             + volume(Box2.Height, Box2.Width, Box2.Length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
inline int volume(int height ,int width, int length)
{
  return height * width * length ;
}