#include "parser.h"
#include "JSON.h"

void JSONParser::parse()
{
    std::string key = "";

    while(tokenizer.hasMoreTokens())
    {
        Token token;

        try
        {
            token = tokenizer.getToken();
            std::cout << token.toString() << "\n";

            switch(token.type)
            {
                case TOKEN::CURLY_OPEN:
                {
                    std::shared_ptr<JSON_Node> parsedObject = parseObject();
            //        parsedObject -> printNode(0);
                    if(!root)
                    {
                        root = parsedObject;
                    }
                    break;
                }
                case TOKEN::ARRAY_OPEN:
                {
                    std::shared_ptr<JSON_Node> parsedList = parseList();
                    if(!root)
                    {
                        root = parsedList;
                    }
                    break;
                }
                case TOKEN::STRING:
                {
                    tokenizer.rollBackToken();
                    std::shared_ptr<JSON_Node> parsedString = parseString();
                    if(!root)
                    {
                        root = parsedString;
                    }
                    break;
                }
                case TOKEN::NUMBER:
                {
                    tokenizer.rollBackToken();
                    std::shared_ptr<JSON_Node> parsedNumber = parseNumber();
                    if(!root)
                    {
                        root = parsedNumber;
                    }
                    break;
                }
                case TOKEN::BOOLEAN:
                {
                    tokenizer.rollBackToken();
                    std::shared_ptr<JSON_Node> parsedBoolean = parseBoolean();
                    break;
                }
            }
        }
        catch(const std::logic_error &e)
        {
            break;
        }
        
    }
}