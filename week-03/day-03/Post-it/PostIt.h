#ifndef POSTIT_POSTIT_H
#define POSTIT_POSTIT_H
#include <iostream>

class PostIt {

public:
  PostIt(std::string backgroundColor, std::string textColor, std::string text);
  ~PostIt();
  void setBackgroundColor (std::string backgroundColor);
  void settext (std::string text);
  void settextColor (std::string textColor);
  std::string getBackgroundColor();
  std::string gettext();
  std::string gettextColor();

private:
  std::string _backgroundColor;
  std::string _textColor;
  std::string _text;

};


#endif //POST_IT_POSTIT_H