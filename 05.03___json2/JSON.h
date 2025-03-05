#include <iostream>
#include <map>
#include <memory>
#include <vector>

class JSON_Node;

using JSONObject = std::map<std::string, std::shared_ptr<JSON_Node>>;
using JSONList = std::vector<std::shared_ptr<JSON_Node>>;

class JSON_Node
{
	enum class TYPE{OBJECT, LIST, STRING, NUMBER, BOOLEAN, NULL_TYPE};
	
	union Values
	{
		JSONObject *object;
		JSONList *list;
		
		std::string *s;
		
		float fValue;
		bool bValue;
		
	}value;
	
	TYPE type;
	
	auto returnObject()
	{
		if(type == TYPE::OBJECT)
		{
			return *value.object;
		}
		
		throw std::logic_error("Wrong return\n");
	}
	
	auto returnList()
	{
		if(type == TYPE::LIST)
		{
			return *value.list;
		}
		
		throw std::logic_error("Wrong return\n");
	}
	
	auto returnString()
	{
		if(type == TYPE::STRING)
		{
			return *value.s;
		}
		
		throw std::logic_error("Wrong return\n");
	}
	
	auto returnFloat()
	{
		if(type == TYPE::NUMBER)
		{
			return value.fValue;
		}
		
		throw std::logic_error("Wrong return\n");
	}
	
	auto returnBool()
	{
		if(type == TYPE::BOOLEAN)
		{
			return value.bValue;
		}
		
		throw std::logic_error("Wrong return\n");
	}
	
	void setObject(JSONObject *object)
	{
		this-> value.object = object;
		type = TYPE::OBJECT;
	}
	
	void setList(JSONList *list)
	{
		this -> value.list = list;
		type = TYPE::LIST;
	}
	
	void setString(std::string *s)
	{
		this -> value.s = s;
		type = TYPE::STRING;
	}
	
	void setFloat(float fl)
	{
		value.fValue = fl;
		type = TYPE::NUMBER;
	}

	void setBool(bool bl)
	{
		value.bValue = bl;
		type = TYPE::BOOLEAN;
	}
	
};

