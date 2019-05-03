#ifndef GUARD_Token_h
#define GUARD_Token_h

class Token {
public:
  Token() {};
  Token(char k): kind(k) {}
  Token(char k, double v): kind(k), value(v) {}

  char kind;
  double value;
};

#endif
