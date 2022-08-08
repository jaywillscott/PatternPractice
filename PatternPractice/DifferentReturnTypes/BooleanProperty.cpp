#include "BooleanProperty.h"

BooleanProperty::BooleanProperty(std::string name, int id, bool value = false) :
	IProperty(name, id, PropertyType::Boolean),
	value(value)
{
}
