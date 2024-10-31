#ifndef CORE_ERROR_H_
#define CORE_ERROR_H_
/*
 *  ______   __   __   ______   ______    ______     ________  ______   ______      
 * /_____/\ /_/\ /_/\ /_____/\ /_____/\  /_____/\   /_______/\/_____/\ /_____/\     
 * \:::_ \ \\:\ \\ \ \\::::_\/_\:::_ \ \ \:::_ \ \  \__.::._\/\:::_ \ \\::::_\/_    
 *  \:\ \ \ \\:\ \\ \ \\:\/___/\\:(_) ) )_\:(_) ) )_   \::\ \  \:\ \ \ \\:\/___/\   
 *   \:\ \ \ \\:\_/.:\ \\::___\/_\: __ `\ \\: __ `\ \  _\::\ \__\:\ \ \ \\::___\/_  
 *    \:\_\ \ \\ ..::/ / \:\____/\\ \ `\ \ \\ \ `\ \ \/__\::\__/\\:\/.:| |\:\____/\ 
 *     \_____\/ \___/_(   \_____\/ \_\/ \_\/ \_\/ \_\/\________\/ \____/_/ \_____\/ 
 *                          From: 20241031 @00:51
 *                         ------------------------
 *
 */

struct Error {
  const char* message;
  int line;
  int column;
  const char* lineStart;
  int lineLength;
};

struct ErrorContext {
  struct Error* error;
  const char* sourceLine;
  int lineNum;
};

void errorInit(Error* error, const char* message, int line, int column);
void errorPrint(Error* error);
void errorFree(Error* error);

#endif // CORE_ERROR_H_
