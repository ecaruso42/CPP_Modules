#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat& operator = (const WrongCat& other);
		virtual ~WrongCat();

		void makeSound(void) const;
};