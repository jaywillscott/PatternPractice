// DifferentReturnTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "PropertyLibrary.h"

int main()
{
	auto propertyLibrary = PropertyLibrary();

	propertyLibrary.AddProperty(new FloatProperty("MyFloatProperty1", 1, 1.F));
	propertyLibrary.AddProperty(new FloatProperty("MyFloatProperty2", 2, 2.F));
	propertyLibrary.AddProperty(new BooleanProperty("MyBooleanProperty1", 3, true));
	propertyLibrary.AddProperty(new BooleanProperty("MyBooleanProperty2", 4, false));

	auto& floatProperties = propertyLibrary.GetFloatProperties(propertyLibrary.GetProperties());
	auto& booleanProperties = propertyLibrary.GetBooleanProperties(propertyLibrary.GetProperties());

	std::cout << "All Properties" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	for (IProperty* property : propertyLibrary.GetProperties())
	{
		const auto& name = property->GetName();
		std::cout << name << std::endl;
	}
	std::cout <<  std::endl;

	std::cout << "Float Properties" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	for (FloatProperty* property : floatProperties)
	{
		const auto& name = property->GetName();
		std::cout << name << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Boolean Properties" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	for (BooleanProperty* property : booleanProperties)
	{
		const auto& name = property->GetName();
		std::cout << name << std::endl;
	}
	std::cout << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
