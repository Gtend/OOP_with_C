// #include <iostream>
// #include <string>
// // Employee 클래스
// class Employee {
// protected:
// 	// 멤버변수 : 이름, 나이
// 	std::string name;
// 	int age;
//
// public:
// 	// Employee 클래스 생성자
// 	Employee(std::string name, int age) : name(name), age(age) {}
// 	// 정보출력함수
// 	void showInfo() { std::cout << "Name:" << name << ", Age: " << age << std::endl; }
// };
// // Employee 상속받는 Manager 클랴스
// class Manager : public Employee {
// 	// 멤버변수 : manager bonus
// 	int managerBonus;
// public:
// 	// Manager 클래스 생성자 : use Employee 생성자
// 	Manager(int managerBonus, std::string name, int age) : managerBonus(managerBonus), Employee(name, age) {}
// 	// 정보출력함수
// 	void showInfo() { std::cout << "Manager Name:" << name << ", Age: " << age << ", managerBonus:" << managerBonus << std::endl; }
// };
// // Employee 클래스 상속받는 Intern 클래스
// class Intern : public Employee {
// 	// 멤버변수 : majorname
// 	std::string majorName;
// public:
// 	// Intern 클래스 생성자 : use Employee 생성자
// 	Intern(std::string major, std::string name, int age) : majorName(major), Employee(name, age) {}
// 	// 정보출력함수
// 	void showInfo() { std::cout << "Intern Name:" << name << ", Age: " << age << ", Major:" << majorName << std::endl; }
// };
// // Employee 클래스 상속받는 Janitor 클래스
// class Janitor : public Employee {
// 	// 멤버변수 : salary
// 	int salary;
// public:
// 	// Jaintor 클래스 생성자 : use Employee 생성자
// 	Janitor(int salary, std::string name, int age) : salary(salary), Employee(name, age) {}
// 	// 정보출력함수
// 	void showInfo() { std::cout << "Janitor Name:" << name << ", Age: " << age << ", Salary:" << salary << std::endl; }
// };
//
// int main() {
// 	// 각 클래스별 리스트
// 	Manager** managerlist = new Manager * [2];
// 	Intern** internlist = new Intern * [2];
// 	Janitor** janitorlist = new Janitor * [2];
// 	// 리스트에 클래스 생성 후 삽입
// 	managerlist[0] = new Manager(200, "James", 33);
// 	managerlist[1] = new Manager(150, "Chulsoo", 50);
//
// 	internlist[0] = new Intern("security", "Minsu", 24);
// 	internlist[1] = new Intern("HCI", "Yong", 19);
// 	janitorlist[0] = new Janitor(100, "Black", 90);
// 	janitorlist[1] = new Janitor(200, "White", 100);
// 	// 각 정보 출력
// 	managerlist[0]->showInfo();
// 	managerlist[1]->showInfo();
// 	internlist[0]->showInfo();
// 	internlist[1]->showInfo();
//
// 	janitorlist[0]->showInfo();
// 	janitorlist[1]->showInfo();
//
// 	getchar();
// 	return 0;
// }
// // 실행결과분석
// /*
//
//
//
//  */
