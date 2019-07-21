#include "reverse.h"
#include "core.h"
using namespace std;

//implement the default reverse constructor
Reverse::Reverse()
{
	name += "Reverse";
	cardNumber = 10;
}

//implement the reverse (cColor) constructor
Reverse::Reverse(int cColor) : Action(cColor)
{
	name += "Reverse";
	cardNumber = 10;
}

//implement the reverse setName function
void Reverse::setName()
{
	name += "Reverse";
}

//implement the reverse effect function
void Reverse::effect(Core* core)
{
	core->setDirection();
}

//implement the reverse destructor
Reverse::~Reverse()
{
}

