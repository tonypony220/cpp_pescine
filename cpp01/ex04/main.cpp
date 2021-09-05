#include <iostream>
#include <fstream>
#include <sstream>

int exiting( std::string err) {
	std::cout << err << std::endl;
	exit(1);
	return 1;
}

void replace(std::string & str, std::string s1, std::string s2) 
{
	std::size_t found = str.find( s1 ); 
  	while ( found != std::string::npos ) {
		/* std::cout << found << std::endl; */
		str.erase( found, s1.length() );
		str.insert( found, s2 );
		found = str.find( s1 );
	}
}

std::string read_file_to_str( std::string filename ) 
{
	std::ifstream in( filename );
	in || exiting( "error: file not found" );
	std::stringstream buffer;
	buffer << in.rdbuf();
	in.close();
	return buffer.str();
}

int main (int ac, char **argv)
{
	std::string s1;
	std::string s2;
	std::string filename;

	ac == 4 || exiting( "error: args" );
	s1 = argv[2];
	s2 = argv[3];
	filename = argv[1];
	s2.length() || exiting( "error: empty string" );
	s1.length() || exiting( "error: empty string" );

	std::string str = read_file_to_str( filename );

	replace( str, s1, s2 );

	std::ofstream out( filename.append( ".replace" ) );
	/* std::cout << out << "<< OUT\n"; */
	out << str;

	/* std::cout << str << std::endl; */

}
