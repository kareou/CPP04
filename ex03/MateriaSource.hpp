#ifndef MATTERIASOURCE_HPP
#define MATTERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*   _inventory[4];
        int         _count;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &copy);
        MateriaSource&  operator=(const MateriaSource &to_assign);
        virtual ~MateriaSource();
        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);
};
#endif