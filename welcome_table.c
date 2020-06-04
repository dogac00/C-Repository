/*

Your start-up's BA has told marketing that your website has a large audience in Scandinavia and surrounding countries. Marketing thinks it would be great to welcome visitors to the site in their own language. Luckily you already use an API that detects the user's location, so this is an easy win.

The Task
Think of a way to store the languages as a database (eg an object). The languages are listed below so you can copy and paste!
Write a 'welcome' function that takes a parameter 'language' (always a string), and returns a greeting - if you have it in your database. It should default to English if the language is not in the database, or in the event of an invalid input.
The Database
english: 'Welcome',
czech: 'Vitejte',
danish: 'Velkomst',
dutch: 'Welkom',
estonian: 'Tere tulemast',
finnish: 'Tervetuloa',
flemish: 'Welgekomen',
french: 'Bienvenue',
german: 'Willkommen',
irish: 'Failte',
italian: 'Benvenuto',
latvian: 'Gaidits',
lithuanian: 'Laukiamas',
polish: 'Witamy',
spanish: 'Bienvenido',
swedish: 'Valkommen',
welsh: 'Croeso'

*/

// here is my solution
// currently it looks up all the key values in the 2d array
// but it can be optimized by using a hash table
// and a string hashing function
// currently, for the sake of simplicity
// I implemented like this

#include <string.h>

#define ENGLISH          0
#define LANG_COUNT      17
#define EQUALS(str1, str2)     (strcmp(str1, str2) == 0)

const char* table[17][2] = {
  { "english", "Welcome" },
  { "czech", "Vitejte" },
  { "danish", "Velkomst" },
  { "dutch", "Welkom" },
  { "estonian", "Tere tulemast" },
  { "finnish", "Tervetuloa" },
  { "flemish", "Welgekomen" },
  { "french", "Bienvenue" },
  { "german", "Willkommen" },
  { "irish", "Failte" },
  { "italian", "Benvenuto" },
  { "latvian", "Gaidits" },
  { "lithuanian", "Laukiamas" },
  { "polish", "Witamy" },
  { "spanish", "Bienvenido" },
  { "swedish", "Valkommen" },
  { "welsh", "Croeso" }
};

const char* greet(const char *language) {
  if (!language)
    return table[ENGLISH][1];

  for (size_t i = 0; i < LANG_COUNT; i++) {
    if (EQUALS(table[i][0], language))
      return table[i][1];
  }
  
  return table[ENGLISH][1];
}
