#include "BlogPost.h"
#include <iostream>

//title,authorName,publicationDate,text

int main() {

  BlogPost BlogPost1("Lorem Ipsum", "John Doe", "2000.05.04.",
                     "Lorem ipsum dolor sit amet.");
  BlogPost BlogPost2("Wait but why", "Tim Urban", "2010.10.10.",
                     "A popular long-form, stick-figure-illustrated blog about "
                     "almost everything.");
  BlogPost BlogPost3(
      "One Engineer Is Trying to Get IBM to Reckon With Trump",
      "William Turton", "2017.03.28.",
      "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the "
      "center of attention. When I asked to take his picture outside one of "
      "IBM’s New York City offices, he told me that he wasn’t really into the "
      "whole organizer profile thing.");

  return 0;
}

