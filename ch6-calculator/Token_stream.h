#ifndef GUARD_Token_stream_h
#define GUARD_Token_stream_h

#include "Token.h"

class Token_stream {
  public:
    Token_stream() {}

    Token get();
    void putback(Token t);
  private:
    bool full {false};
    Token buffer;
};

#endif
