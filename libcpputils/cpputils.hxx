#pragma once

#include <iosfwd>
#include <string>

#include <libcpputils/export.hxx>

namespace cpputils
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBCPPUTILS_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
