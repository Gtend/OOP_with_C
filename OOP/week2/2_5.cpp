// #include <iostream>
// #include <cstdlib>  // std::rand, std::srand
// #include <ctime>    // std::time
//
// class Dice {
//     int value; // 주사위 값
// public:
//     void set_dice_value() {  // 주사위 값을 난수로 받을 수 있도록
//         value = std::rand() % 6 + 1; // 1부터 6까지의 난수 생성
//     }
//     int get_dice_value() {
//         return value;
//     }
// };
//
// int main() {
//     std::srand(std::time(NULL)); // 난수 시드 설정
//
//     Dice dice1;
//     Dice dice2;
//     dice1.set_dice_value();
//     dice2.set_dice_value();
//
//     std::cout << "두 주사위 합=" << dice1.get_dice_value() + dice2.get_dice_value() << std::endl;
//     return 0;
// }
