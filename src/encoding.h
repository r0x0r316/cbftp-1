#pragma once

#include <string>

#include "types.h"

namespace encoding {

enum Encoding {
  ENCODING_CP437,
  ENCODING_CP437_DOUBLE,
  ENCODING_ISO88591
};

unsigned int cp437toUnicode(unsigned char);
std::basic_string<unsigned int> cp437toUnicode(std::basic_string<unsigned int> &);
std::basic_string<unsigned int> doublecp437toUnicode(std::basic_string<unsigned int> &);
Encoding guessEncoding(const binary_data &);

}
