Proj1 Readme file:

The purpose of this project is to practice writing a lexial scanner for the Quack language. This project folder contains:

- scanner-cxx github repo with modified scanner code 

Within this repo, you will find most changes in quack.lxx. Some changes I think are also in lex_driver.cpp

To run:

make
./lexer samples/hands.qk

This produces a list of tokens that will be used later on with a parser.

Current TODO: complete the robustness of the scanner. Add error handling. Test with more files.
