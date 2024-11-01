// #include <iostream>
// #include <exception>
//
// using namespace std;
// // exception 상속
// class MyCustomException : public std::exception {
//     private:
//         // 오류 메세지
//         const char* message;
//     public:
//         MyCustomException(char* msg) : message(msg) {}
//         // what 함수 오버라이딩
//         const char * what() const noexcept override{
//             std::cout << "dd" << std::endl;
//             return message;
//         }
// };
//
// int main() {
//     // try ~ catch 문
//     try {
//         MyCustomException e("new");
//         //throw e;
//         throw MyCustomException("NewException");
//     }
//     // 오류 catch
//     catch (MyCustomException& mce) {
//         cout << "My Exception is " << mce.what() << endl;
//     }
//
// }
