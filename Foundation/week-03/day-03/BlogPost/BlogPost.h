#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H
#include <iostream>

// title,authorName,publicationDate,text

class BlogPost {
public:
  BlogPost(std::string title, std::string authorName,
           std::string publicationDate, std::string text);
  ~BlogPost();
  void settitle(std::string title);
  void setauthorName(std::string authorName);
  void setpublicationDate(std::string publicationDate);
  void settext(std::string text);
  std::string gettitle();
  std::string getauthorName();
  std::string getpublicationDate();
  std::string gettext();

private:
  std::string _title;
  std::string _authorName;
  std::string _publicationDate;
  std::string _text;
};

#endif // POST_IT_POSTIT_H