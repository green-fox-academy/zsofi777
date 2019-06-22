#include "BlogPost.h"
#include <string>

// title,authorName,publicationDate,text

BlogPost::BlogPost(std::string title, std::string authorName,
                   std::string publicationDate, std::string text) {
  settitle(title);
  setauthorName(authorName);
  setpublicationDate(publicationDate);
  settext(text);
}

BlogPost::~BlogPost() {}

void BlogPost::settitle(std::string title) { _title = title; }

void BlogPost::setauthorName(std::string authorName) {
  _authorName = authorName;
}

void BlogPost::setpublicationDate(std::string publicationDate) {
  _publicationDate = publicationDate;
}

void BlogPost::settext(std::string text) { _text = text; }

std::string BlogPost::gettitle() { return _title; }

std::string BlogPost::getauthorName() { return _authorName; }

std::string BlogPost::getpublicationDate() { return _publicationDate; }

std::string BlogPost::gettext() { return _text; }