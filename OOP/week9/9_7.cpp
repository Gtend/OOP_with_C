// #include <iostream>
// #include <vector>
// // Animal
// class Animal {
// public:
// 	virtual void speak() {
// 	}
// };
//
// // Dog
// class Dog : public Animal {
// public:
// 	void speak() {
// 		std::cout << "멍멍" << std::endl;
// 	}
// };
//
// // Cat
// class Cat : public Animal {
// public:
// 	void speak() {
// 		std::cout << "야옹" << std::endl;
// 	}
// };
//
// int main() {
// 	Cat cat;
// 	Dog dog;
// 	std::cout << "동물소리" <<std::endl;
// 	cat.speak();
// 	dog.speak();
//
// 	std::cout<< std::endl;
// 	std::cout<< "동물소리" << std::endl;
// 	Animal** animals = new Animal * [2];
// 	animals[0] = new Cat;
// 	animals[1] = new Dog;
// 	for (int i = 0; i < 2; i++) {
// 		animals[i]->speak();
// 	}
// 	// 메모리 해제
// 	delete[] animals;
// }
