#ifndef LEXER_H_ 
#define LEXER_H_
#include <cstddef>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
 *  ______   __   __   ______   ______    ______     ________  ______   ______      
 * /_____/\ /_/\ /_/\ /_____/\ /_____/\  /_____/\   /_______/\/_____/\ /_____/\     
 * \:::_ \ \\:\ \\ \ \\::::_\/_\:::_ \ \ \:::_ \ \  \__.::._\/\:::_ \ \\::::_\/_    
 *  \:\ \ \ \\:\ \\ \ \\:\/___/\\:(_) ) )_\:(_) ) )_   \::\ \  \:\ \ \ \\:\/___/\   
 *   \:\ \ \ \\:\_/.:\ \\::___\/_\: __ `\ \\: __ `\ \  _\::\ \__\:\ \ \ \\::___\/_  
 *    \:\_\ \ \\ ..::/ / \:\____/\\ \ `\ \ \\ \ `\ \ \/__\::\__/\\:\/.:| |\:\____/\ 
 *     \_____\/ \___/_(   \_____\/ \_\/ \_\/ \_\/ \_\/\________\/ \____/_/ \_____\/ 
 *                          From: 20241031 @00:06
 *                         ------------------------
 *
 */

struct Location {
  int startLine;
  int startCol;
  int endLine;
  int endCol;
};

enum TokenId {
  TOKEN_EOF,
  TOKEN_IDENTIFIER,
  TOKEN_NUM,
  TOKEN_STRING_LITERAL,
  TOKEN_SEMICOLON,
  TOKEN_EQUALS,
  TOKEN_COLON_EQUALS,
  TOKEN_LPAREN, // Left Parenthesis
  TOKEN_RPAREN,
  TOKEN_LBRACE, // Left Braces
  TOKEN_RBRACE,
  TOKEN_COMMENT,
  TOKEN_FUNC,
  //don't care that much about class right now, but will eventually think about that stuff later
};

struct Token {
  enum TokenId type;
  char* value;
  struct Location loc;
};


struct Lexer {
  char* source;
  size_t sourceLength;
  size_t current;
  int currentLine;
  int currentCol;
  struct Location currentLocation;
};

struct Lexer* initLexer(char* source);
struct Token* getNextToken(Lexer* lexer);
void freeLexer(Lexer* lexer);
void freeToken(Token* token);
void printTokenLocation(Token* token);
#endif // LEXER_H_
