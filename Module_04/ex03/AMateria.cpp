
#include "AMateria.hpp"

AMateria::~AMateria() {}

AMateria::AMateria(std::string const &type) : type(type) {}

std::string const &AMateria::getType() const
{
	return (this->type);
}