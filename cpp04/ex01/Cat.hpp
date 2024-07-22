#include "Animal.hpp"

class Cat : public Animal{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator = (const Cat& other);
		virtual ~Cat();

		void makeSound(void) const;
};