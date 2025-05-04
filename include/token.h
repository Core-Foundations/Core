#ifndef CORE_TOKEN_H
#define CORE_TOKEN_H

/*
 *  ______   __   __   ______   ______    ______     ________  ______   ______      
 * /_____/\ /_/\ /_/\ /_____/\ /_____/\  /_____/\   /_______/\/_____/\ /_____/\     
 * \:::_ \ \\:\ \\ \ \\::::_\/_\:::_ \ \ \:::_ \ \  \__.::._\/\:::_ \ \\::::_\/_    
 *  \:\ \ \ \\:\ \\ \ \\:\/___/\\:(_) ) )_\:(_) ) )_   \::\ \  \:\ \ \ \\:\/___/\   
 *   \:\ \ \ \\:\_/.:\ \\::___\/_\: __ `\ \\: __ `\ \  _\::\ \__\:\ \ \ \\::___\/_  
 *    \:\_\ \ \\ ..::/ / \:\____/\\ \ `\ \ \\ \ `\ \ \/__\::\__/\\:\/.:| |\:\____/\ 
 *     \_____\/ \___/_(   \_____\/ \_\/ \_\/ \_\/ \_\/\________\/ \____/_/ \_____\/ 
 *                          From: 20241031 @01:01
 *                         ------------------------
 *
 */
enum TokenType {

  TOKEN_EOF, // End of File
  TOKEN_IDENTIFIER, 
  TOKEN_NUM,
  TOKEN_STRING_LITERAL,

  // Operators
  TOKEN_PLUS, // +
  TOKEN_MINUS, // -
  TOKEN_STAR, // *
  TOKEN_SLASH, // /
  TOKEN_EQUALS, // =
  TOKEN_COLON_EQUALS, // := 

  // Delimiters

  TOKEN_L_PAREN, // (
  TOKEN_R_PAREN, // )
  TOKEN_L_BRACE, // {
  TOKEN_R_BRACE, // }
  TOKEN_SEMICOLON, // ;
};

struct Token {
  enum TokenType type;
  const char* start;
  int lenght;
  int line;
  int column; 
};

const char* tokenTypeToString(TokenType type);
void tokenPrint(Token* token);

#endif // CORE_TOKEN_H
