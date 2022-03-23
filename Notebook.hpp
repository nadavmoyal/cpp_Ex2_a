#include "Direction.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace ariel;
namespace ariel{
    class Notebook
    {
private:
    ;

public:
	void static write( int page,  int row,  int column, Direction dirc,const std::string & s);
    string static read(int page,  int row,  int column, Direction dirc,int length);
	void static erase( int page,  int row,  int column, Direction dirc,int length);
	void static show( int page);
}
;
}