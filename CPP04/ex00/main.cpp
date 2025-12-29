#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main()
{
	const Animal* beta = new Animal();
	const Animal* doggy = new Dog();
	const Animal* kitty = new Cat();
	const WrongAnimal* wrongDoggy = new WrongDog();


	std::cout << doggy->getType() << " " << std::endl;
	std::cout << kitty->getType() << " " << std::endl;
	std::cout << wrongDoggy->getType() << " " << std::endl;

	kitty->makeSound(); //will output the cat sound!
	doggy->makeSound(); //will output the dog sound!
	wrongDoggy->makeSound(); //will output the wrong animal sound!
	beta->makeSound();

	delete beta;
	delete doggy;
	delete kitty;

	return 0;
}