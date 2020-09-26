#include <cassert>
#include <sstream>
#include <stdexcept>

#include <libcpputils/version.hxx>
#include <libcpputils/cpputils.hxx>

int main ()
{
  using namespace std;
  using namespace cpputils;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
