A game of Connect Four. AI uses minimax algorithm in order to play optimally.
Now with a good UI!

To compile, you need to have C++ on your machine.
Then, navigate to the directory with the executable file, and run it. 
If that doesn't work, try (in the same directory) :

c++ -o connectfour 2cf.cpp 2funs.cpp \`wx-config --cxxflags --libs\`
./connectfour

Difficulty levels can be selected using the menu at the top of your screen (File -> select difficulty for Mac OS users, not sure about Windows).
The game can also be restarted from there.

UI created using the free wxWidgets library.

Enjoy!

-Edric


