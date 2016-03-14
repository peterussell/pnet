#include "../include/Router.h"

#include <iostream>

Router::Router( const string& id ) : id( id ) {
  switches = vector<Switch>();
  cout << "[router]: initialized router " << id << endl;
}

int
Router::connectSwitch( Switch s ) {
  switches.push_back( s );
  cout << "[router]: added switch (switch id=" << s.get_id() << ")" << endl;

  return 0;
}
