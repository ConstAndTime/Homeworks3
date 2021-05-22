#include <iostream>

int main () {

//1,3
extern const int a;
extern const int b;
extern const int c;
extern const int d;
float f = 1.0;
float e = a * (b + (f * c / d));
std::cout << e << std::endl;

//2
int h = 21;
extern int j; // Пусть изначально программа не знает значение j.
std::cout << ((j>=h) ? (2*(j-h)) : (2*(h-j))) << std::endl;

//3
int arr[3][3][3] = {
{{4, 8, 15}, {16, 23, 42}, {4, 8, 15}},
{{16, 23, 42}, {4, 8, 15}, {16 , 23, 42}},
{{4, 8, 15}, {16, 23, 42}, {4, 8, 15}}
};
int g = arr[1][1][1];
int* gg = &g;

//std::cout << arr[1][1][1] << '\n';
//std::cout << ***arr << '\n';
std::cout << *gg << '\n';

return 0;
}
