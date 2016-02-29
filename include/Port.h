#ifndef PORT_H
#define PORT_H

#include <string>
using namespace std;

class Port {
  public:
    Port( const string& id );

  private:
    string id;
};

#endif
