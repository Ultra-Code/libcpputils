//#include <ostream>
//#include <stdexcept>
//#include <libcpputils/cpputils.hxx>
module cpputils;
import<ostream>;
import<stdexcept>;

using namespace std;

namespace cpputils
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
} // namespace cpputils
