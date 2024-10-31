#ifndef CORE_LEXER_H_ 
#define CORE_LEXER_H_
#include "token.h"
#include "error.h"
#include "buffer.h"
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
 *  NOTE: 
 *    - For Readability (For the team,) I am going to make sure the code is organized 
 *      and as readable as possible... I hope it's not too much Spaghetti
 *
 */

struct Lexer {
  const char* source;
  size_t sourceLength;
  size_t current;
  size_t start;
  int line;
  int column;
  struct Error* error;
};


Lexer* lexerInit(const char* source);
void lexerFree(Lexer* lexer);
Token* lexerNextToken(Lexer* lexer);
Error* lexerGerError(Lexer* lexer);

#endif // CORE_LEXER_H_
