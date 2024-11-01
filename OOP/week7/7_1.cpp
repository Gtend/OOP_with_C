// #include <iostream>
//
// class Strategy {
// public:
//     virtual int doOpertation(int num1, int num2) {};
// };
//
// class OperationAdd : public Strategy {
//     public:
//     int doOpertation(int num1, int num2) override {
//         return num1 + num2;
//     }
// };
//
// class OperationSubstract : public Strategy {
// public:
//     int doOpertation(int num1, int num2) override {
//         return num1 - num2;
//     }
// };
//
// class OperationMultiply : public Strategy {
// public:
//     int doOpertation(int num1, int num2) override {
//         return num1 * num2;
//     }
// };
//
// class Context {
//     Strategy* strategy;
// public:
//     Context(Strategy* strategy) {
//         this->strategy = strategy;
//     }
//     int executeStrategy(int num1, int num2) {
//         return strategy->doOpertation(num1, num2);
//     }
// };
//
// int main() {
//     Context* context = new Context(new OperationAdd());
//     std::cout << "10 + 5 = " << context->executeStrategy(10, 5) << std::endl;
//     context = new Context(new OperationSubstract());
//     std::cout << "10 - 5 = " << context->executeStrategy(10, 5) << std::endl;
//     context = new Context(new OperationMultiply());
//     std::cout << "10 * 5 = " << context->executeStrategy(10, 5) << std::endl;
//
// }
