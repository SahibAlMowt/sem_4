#include "parser.h"

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

            switch (token.type)
            {
                case TOKEN::CURLY_OPEN:
                    std::shared_ptr<JSON::JSONNode> parsedObject = parseObject();
                    parsedObject -> printNode(0);
                    if(!root)
                    {
                        root = parsedObject;
                    }
                    break;
                case     
            }
        }
        catch(const std::logic_error &e)
        {
            break;
        }
        
    }
}