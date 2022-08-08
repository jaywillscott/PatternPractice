#pragma once
class PropertyType
{
public:
	enum Types
	{
		Float,
		Boolean
	};

	static std::string ToString(Types type) 
	{
		switch (type)
		{
		case Types::Float:
			return "FLOAT";
			break;
		case Types::Boolean:
			return "BOOLEAN";
			break;
		}
	}
};

