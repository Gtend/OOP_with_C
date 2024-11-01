// #include <iostream>
// #include <string>
// // person 클래스 구현
// class Person {
// private:
//     // name, age, address 변수 정의
//     std::string name;
//     int age;
//     std::string address;
//
// public:
//     // 생성자 정의
//     Person() : name(""), age(0), address("") {}
//     Person(std::string n, int a, std::string addr) : name(n), age(a), address(addr) {}
//
//     // set함수 구현 x, getter함수만 구현
//     // 이름 나이 주소 받는 함수
//     std::string getName() const { return name; }
//     int getAge() const { return age; }
//     std::string getAddress() const { return address; }
// };
// // person클래스 상속받는 student클래스 구현
// class Student : public Person {
// private:
//     // 학번 변수
//     std::string studentID;
//
// public:
//     Student(std::string n, int a, std::string addr, std::string id) : Person(n, a, addr), studentID(id) {}
//     // 학번 getter함수 구현
//     std::string getStudentID() const { return studentID; }
// };
//
// int main() {
//     Student student("유채민", 23, "daejeon", "202102552");
//
//     // 출력
//     std::cout << "Student Information" << std::endl;
//     std::cout << "Name : " << student.getName() << std::endl;
//     std::cout << "Age : " << student.getAge() << std::endl;
//     std::cout << "Address : " << student.getAddress() << std::endl;
//     std::cout << "Student ID : " << student.getStudentID() << std::endl;
//
//     return 0;
// }
