// #include <iostream>
// #include <iomanip>
// #include <string>
// // employee 클래스
// class Employee {
// private:
//     // emp_id, name, age, address, salary 변수
//     std::string emp_id;
//     std::string name;
//     int age;
//     std::string address;
//     float salary;
//
// public:
//     // 생성자
//     Employee(std::string id, std::string n, int a, std::string addr, float sal)
//         : emp_id(id), name(n), age(a), address(addr), salary(sal) {}
//     // 5개 변수 getter 함수 정의
//     std::string get_emp_id() const { return emp_id; }
//     std::string get_name() const { return name; }
//     int get_age() const { return age; }
//     std::string get_address() const { return address; }
//     float get_salary() const { return salary; }
// };
// // employee 클래스를 상속 받는 manager 클래스
// class Manager : public Employee {
// private:
//     // team_size 변수 정의
//     int team_size;
//
// public:
//     // 생성자
//     Manager(std::string id, std::string n, int a, std::string addr, float sal, int team_sz)
//         : Employee(id, n, a, addr, sal), team_size(team_sz) {}
//     // team_size getter 함수
//     int get_team_size() const { return team_size; }
// };
//
// int main() {
//     Manager mgr("EMP001", "Manager 이름", 35, "seoul", 5000.00, 10);
//     // 출력
//     std::cout << "Manager Information\n";
//     std::cout << "Employee ID : " << mgr.get_emp_id() << std::endl;
//     std::cout << "Name : " << mgr.get_name() << std::endl;
//     std::cout << "Age : " << mgr.get_age() << std::endl;
//     std::cout << "Address : " << mgr.get_address() << std::endl;
//     std::cout << std::fixed << std::setprecision(2);  // 설정: 소수점 이하 두 자리까지 고정
//     std::cout << "Salary : $" << mgr.get_salary() << std::endl;
//     std::cout << "Team Size : " << mgr.get_team_size() << std::endl;
//
//     return 0;
// }
