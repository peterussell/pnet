#ifndef ROUTER_H
#define ROUTER_H

#include "Switch.h"

#include <string>
#include <vector>
using namespace std;

class Router {
  public:
    Router( const string& id );
    int connectSwitch( Switch s );

  private:
    string id;
    vector<Switch> switches;
};

#endif
