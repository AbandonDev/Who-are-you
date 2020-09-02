#include "page.hpp"
#include <vector>

// Read the comment on lines 9 and 10 for more information.
int display_commands(std::vector<std::string> commands);

int main()
{
  // Commands... I thought about creating a class or something more intuitive,
  // but I decided that it would be better to stick with something simple.
  std::vector<std::string> commands;
  commands.reserve(8);
  commands.push_back("1. Home");
  commands.push_back("2. My name");
  commands.push_back("3. My interests, hobbies, and passions");
  commands.push_back("4. Words that describe me");
  commands.push_back("5. My dreams and goals");
  commands.push_back("6. Something else I would like you to know");
  commands.push_back("7. View my code on GitHub");
  commands.push_back("0. Quit");

  // DISCLAIMER: I know my naming conventions are long and bad. I have a long
  // way to on developing a good style.

  // ANOTHER DISCLAIMER: If you're wondering why I added multiple lines of code
  // for one property, it's because I'm trying to keep each line of code under
  // a certain length.

  // Home page
  page home;
  home.header = "Home";
  home.body   = "Who am I? Who is me? Me is who?\nYou can learn all about me ";
  home.body  += "by navigating to one of the pages by entering the number ";
  home.body  += "corresponding to it's title.";

  // My name page
  page my_name;
  my_name.header = "My name";
  my_name.body   = "My name is Ethan Nathaniel Needham.\nI was named Ethan ";
  my_name.body  += "after a percussionist in the Bible. Ethan is a Hebrew ";
  my_name.body  += "name meaning \"firm, enduring, strong, and ";
  my_name.body  += "long-lived\".\nMy parents thought that it would be a ";
  my_name.body  += "unique name for me, but unfortunately Ethan became the ";
  my_name.body  += "most popular name the year I was born.\nMy middle name, ";
  my_name.body  += "Nathaniel, was one of a few names my parents thought I ";
  my_name.body  += "could use if I ever met another Ethan.\nAnother good ";
  my_name.body  += "middle name idea, which I would have liked better, was ";
  my_name.body  += "Bartholomew. I plan on changing my middle name in the ";
  my_name.body  += "future.\nNeedham is my father's last name which comes from";
  my_name.body  += "his family. We have identified at least 7 generations of ";
  my_name.body  += "Needham's dating all the way back to the colonizers of ";
  my_name.body  += "America.";

  // My interests, hobbies, and passions page
  page my_interests_hobbies_and_passions;
  my_interests_hobbies_and_passions.header  = "My interests, hobbies, and ";
  my_interests_hobbies_and_passions.header += "passions";
  my_interests_hobbies_and_passions.body    = "As you can probably tell, I ";
  my_interests_hobbies_and_passions.body   += "love to program. It is both ";
  my_interests_hobbies_and_passions.body   += "a hobby and a passion for me, ";
  my_interests_hobbies_and_passions.body   += "and I am going to program for ";
  my_interests_hobbies_and_passions.body   += "my career/job.\nComputer-";
  my_interests_hobbies_and_passions.body   += "science is my interest. I like ";
  my_interests_hobbies_and_passions.body   += "music production, graphic ";
  my_interests_hobbies_and_passions.body   += "design, and investing in the ";
  my_interests_hobbies_and_passions.body   += "stock market.\nOther computer-";
  my_interests_hobbies_and_passions.body   += "science related things I like ";
  my_interests_hobbies_and_passions.body   += "are the mathematics of 3D ";
  my_interests_hobbies_and_passions.body   += "rendering, 3D modeling, and ";
  my_interests_hobbies_and_passions.body   += "encryption.";

  // Words that describe me page
  page words_that_describe_me;
  words_that_describe_me.header = "Words that describe me";
  words_that_describe_me.body   = "Intelligent, hysterical, clever, ";
  words_that_describe_me.body  += "intuitive, mature, chill, discerning, ";
  words_that_describe_me.body  += "ambitious, competitive, handsome, and ";
  words_that_describe_me.body  += "adaptive are all the words I can come up ";
  words_that_describe_me.body  += "with right now.";

  // My dreams and goals page
  page my_dreams_and_goals;
  my_dreams_and_goals.header = "My dreams and goals";
  my_dreams_and_goals.body   = "I would love to become a successful Twitch ";
  my_dreams_and_goals.body  += "streamer and YouTuber who plays video games ";
  my_dreams_and_goals.body  += "and programs fun open-source projects.\n";
  my_dreams_and_goals.body  += "On the other hand, I also would love to go to ";
  my_dreams_and_goals.body  += "MIT and get a degree in Computer Science. ";
  my_dreams_and_goals.body  += "Then after that I would create a successful ";
  my_dreams_and_goals.body  += "game-dev start-up business, and once I make a ";
  my_dreams_and_goals.body  += "name for myself, I would pass it down to my ";
  my_dreams_and_goals.body  += "closest business partner. Then I would create ";
  my_dreams_and_goals.body  += "a huge tech company like Apple and ";
  my_dreams_and_goals.body  += "Microsoft.\nI'd also make a revolutionary ";
  my_dreams_and_goals.body  += "programming language like C/C++ that most ";
  my_dreams_and_goals.body  += "technologies would rely off of. My biggest ";
  my_dreams_and_goals.body  += "hope is that I can accomplish both my ";
  my_dreams_and_goals.body  += "business and my Twitch channel so I can live ";
  my_dreams_and_goals.body  += "comfortably.";

  // Something else I would like you to know page
  page something_else_i_would_like_you_to_know;
  something_else_i_would_like_you_to_know.header  = "Something else I would ";
  something_else_i_would_like_you_to_know.header += "like you to know";
  something_else_i_would_like_you_to_know.body    = "My favorite bands are ";
  something_else_i_would_like_you_to_know.body   += "Twenty One Pilots and ";
  something_else_i_would_like_you_to_know.body   += "half•alive.\nMy favorite ";
  something_else_i_would_like_you_to_know.body   += "genres of music are ";
  something_else_i_would_like_you_to_know.body   += "Lo-Fi and Synthwave. I ";
  something_else_i_would_like_you_to_know.body   += "like to play the drums";

  // View my code on GitHub page
  page view_my_code_on_github;
  view_my_code_on_github.header = "View my code on GitHub";
  view_my_code_on_github.body   = "URL: ";
  view_my_code_on_github.body  += "https://GitHub.com/EthanNeedham/Who-are-you";

  bool running = true;

  home.display();

  while ( running )
  {
    switch ( display_commands(commands) )
    {
      // Quit
      case 0:
        system("clear");
        running = false;
        break;

      // Displays home page
      case 1:
        home.display();
        break;

      // Displays my name page
      case 2:
        my_name.display();
        break;

      // Displays my interests, hobbies, and passions page
      case 3:
        my_interests_hobbies_and_passions.display();
        break;

      // Displays words that describe me page
      case 4:
        words_that_describe_me.display();
        break;

      // Display my dreams and goals page
      case 5:
        my_dreams_and_goals.display();
        break;

      // Displays something else I would like you to know page
      case 6:
        something_else_i_would_like_you_to_know.display();
        break;

      // Displays view my code on GitHub page
      case 7:
        view_my_code_on_github.display();
        break;
    }
  }

  return 0;
}

int display_commands(std::vector<std::string> commands)
{
  for ( int i = 0; i < commands.size(); i++ )
  {
    std::cout << "\t" + commands.at(i) + "\n";
  }

  std::cout << "\nCommand: ";
  int command;
  std::cin >> command;

  return command;
}
