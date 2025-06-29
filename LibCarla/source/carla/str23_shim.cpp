// str23_shim.cpp
// Hack to supply the missing isoc23 symbols
#include <cstdlib>

extern "C" {

long   __isoc23_strtol   (const char* s, char** end, int base)   { return std::strtol   (s,end,base); }
double  __isoc23_strtod   (const char* s, char** end)             { return std::strtod   (s,end);      }
long long    __isoc23_strtoll  (const char* s, char** end, int base)   { return std::strtoll  (s,end,base); }
unsigned long long __isoc23_strtoull(const char* s, char** end, int base){ return std::strtoull(s,end,base); }
  
}