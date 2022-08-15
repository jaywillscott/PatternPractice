#include <iostream>
#include <vector>
#include "PropertyLibrary.h"
#include "DifferentReturnTypes.h"

int main()
{
	auto propertyLibrary = PropertyLibrary();

	propertyLibrary.AddProperty(new FloatProperty("MyFloatProperty1", 1, 1.23F, std::vector<PropertyScope::Scopes>({ PropertyScope::local })));
	propertyLibrary.AddProperty(new FloatProperty("MyFloatProperty2", 2, 4.56F, std::vector<PropertyScope::Scopes>({PropertyScope::world})));
	propertyLibrary.AddProperty(new BooleanProperty("MyBooleanProperty1", 3, true, std::vector<PropertyScope::Scopes>({ PropertyScope::local })));
	propertyLibrary.AddProperty(new BooleanProperty("MyBooleanProperty2", 4, false, std::vector<PropertyScope::Scopes>({ PropertyScope::local, PropertyScope::world })));

	auto& floatProperties = propertyLibrary.GetFloatProperties(propertyLibrary.GetProperties());
	auto& booleanProperties = propertyLibrary.GetBooleanProperties(propertyLibrary.GetProperties());

	PrintProperties(propertyLibrary);

	PrintFloatProperties(floatProperties);

	PrintBooleanProperties(booleanProperties);
}

void PrintBooleanProperties(const std::vector<BooleanProperty*>& booleanProperties)
{
	std::cout << "Boolean Properties" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	for (BooleanProperty* property : booleanProperties)
	{
		const auto& name = property->GetName();
		const auto& id = property->GetId();
		const auto& value = property->GetValue() ? "TRUE" : "FALSE";

		std::cout << id << " " << name << " " << value << std::endl;
	}
	std::cout << std::endl;
}

void PrintFloatProperties(const std::vector<FloatProperty*>& floatProperties)
{
	std::cout << "Float Properties" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	for (FloatProperty* property : floatProperties)
	{
		const auto& name = property->GetName();
		const auto& id = property->GetId();
		const auto& value = property->GetValue();
	}
	std::cout << std::endl;
}

void PrintProperties(PropertyLibrary& propertyLibrary)
{
	std::cout << "All Properties" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	for (IProperty* property : propertyLibrary.GetProperties())
	{
		const auto& name = property->GetName();
		const auto& id = property->GetId();
		const auto& type = PropertyType::ToString(property->GetPropertyType());
		const auto& scopes = property->GetPropertyScopes();

		std::string scopesString = "";

		for (const auto& scope : scopes)
		{
			scopesString += PropertyScope::ToString(scope) + " ";
		}

		std::cout << id << " " << name << " " << type << " " << scopesString << std::endl;
	}
	std::cout << std::endl;
}
