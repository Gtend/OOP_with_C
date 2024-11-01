// #include <iostream>
//
// class Number {
// private:
//     int value;
// public:
//     Number() : value(5) {}  // 초기값은 5
//
//
//
//          // Postfix 함수
//      Number operator++(int) {
//          Number temp = *this;
//          value++;
//          return temp;
//      }
//
//      // Prefix 함수
//      Number& operator++() {
//          value++;
//          return *this;
//      }
//
//     // 값 출력 함수
//     void display() const {
//         std::cout << value;
//     }
// };
//
// int main() {
//     Number a;
//     a.display();
//     std::cout << " (초기값), ";
//     a++;
//     a.display();
//     std::cout << " (a++ 결과), ";
//     ++a;
//     a.display();
//     std::cout << " (++a 결과)";
//
//     return 0;
// }
//
//
//     // // Postfix 함수
//     // Number operator++(int) {
//     //     Number temp = *this;
//     //     value++;
//     //     return temp;
//     // }
//     //
//     // // Prefix 함수
//     // Number& operator++() {
//     //     value++;
//     //     return *this;
//     // }