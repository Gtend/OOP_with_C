// #include <iostream>
//
// class Animal {
// public:
//     char* name;
//     int age;
//
//     Animal(int age_, char* name_) {
//         age = age_;
//         name = new char[strlen(name_)+1];
//         strcpy(name, name_);
//     }
//     Animal(Animal& a) {
//         age = a.age;
//         // deep copy
//         name = new char[strlen(a.name)+1];
//         strcpy(name, a.name);
//     }
//     void changeName(char *newName) {
//         strcpy(name, newName);
//     }
//     void printAnimal() {
//         std::cout << name << std::endl;
//         std::cout << age << std::endl;
//     }
// };
//
// int main() {
//     Animal A(10, "Jenny");
//     Animal B = A;
//     A.age = 22;
//     A.changeName("Brown");
//
//     A.printAnimal();
//     B.printAnimal();
//     return 0;
// }