#include "../include/Router.h"

#include <iostream>

Router::Router( const string& id ) : id( id ) {
  cout << "[router]: initialized router " << id << endl;

  ports = vector<Port>();
}
