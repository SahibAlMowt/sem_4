#include "JSON.h"
#include "parser.h"
#include "tokenizer.h"

int main(int argc, char *argv[])
{
	std::string filename = argv[1];

	JSONParser parser(filename);
	parser.parse();

	return 0;
}