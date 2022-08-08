#include "FloatProperty.h"

FloatProperty::FloatProperty(std::string name, int id, float value=0.F) : 
	IProperty(name, id, PropertyType::Float),
	value(value)
{
}
