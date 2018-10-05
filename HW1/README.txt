#Proj1 Readme file:

The purpose of this project is to practice writing a lexial scanner for the Quack language. This project folder contains:

- scanner-cxx github repo with modified scanner code 

Within this repo, you will find most changes in quack.lxx. Some changes I think are also in lex_driver.cpp

To run:

make
./lexer samples/hands.qk
./lexer samples/bad_escape.qk
(can run other programs in samples folder too)

This produces a list of tokens that will be used later on with a parser.

Tested on a couple "bad_..." sample Quack programs and seems to produce correct error messages.

I think this is as good as I can get it. It seems to work, but maybe not perfectly - still, pretty good. I'm proud of it at least :)
