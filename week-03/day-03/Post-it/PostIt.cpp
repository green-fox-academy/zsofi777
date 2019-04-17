#include "PostIt.h"
#include <string>

PostIt::PostIt(std::string backgroundColor, std::string textColor, std::string text)
{
  setBackgroundColor(backgroundColor);
  settextColor(textColor);
  settext(text);

}

PostIt::~PostIt()
{

}

void PostIt::setBackgroundColor(std::string backgroundColor)
{
  _backgroundColor = backgroundColor;
}

void PostIt::settextColor(std::string textColor)
{
  _textColor = textColor;
}

void PostIt::settext(std::string text)
{
  _text = text;
}

std::string PostIt::getBackgroundColor()
{
  return _backgroundColor;
}

std::string PostIt::gettextColor()
{
  return _textColor;
}

std::string PostIt::gettext()
{
  return _text;
}