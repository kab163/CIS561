// A Bison parser, made by GNU Bison 3.1.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "quack.tab.cxx" // lalr1.cc:407

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "quack.tab.hxx"

// User implementation prologue.

#line 51 "quack.tab.cxx" // lalr1.cc:415
// Unqualified %code blocks.
#line 28 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:416

    #include "lex.yy.h"
    #undef yylex
    #define yylex lexer.yylex  /* Within bison's parse() we should invoke lexer.yylex(), not the global yylex() */
    void dump(AST::ASTNode* n);


#line 61 "quack.tab.cxx" // lalr1.cc:416


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 156 "quack.tab.cxx" // lalr1.cc:491

  /// Build a parser object.
  parser::parser (yy::Lexer& lexer_yyarg, AST::ASTNode** root_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      lexer (lexer_yyarg),
      root (root_yyarg)
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  parser::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol ()
    : value ()
    , location ()
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value (other.value)
    , location (other.location)
  {
  }

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  parser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

  parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  int
  parser::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (const stack_symbol_type& that)
    : super_type (that.state, that.location)
  {
    value = that.value;
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.value, that.location)
  {
    // that is emptied.
    that.type = empty_symbol;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  void
  parser::yypop_ (unsigned n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Default location.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 64 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 580 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 3:
#line 68 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 586 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 4:
#line 69 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 592 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 5:
#line 72 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 598 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 6:
#line 73 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 604 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 7:
#line 84 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 610 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 8:
#line 85 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 616 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 9:
#line 88 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 622 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 10:
#line 89 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 628 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 11:
#line 90 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 634 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 12:
#line 91 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 640 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 13:
#line 92 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 646 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 14:
#line 93 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 652 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 15:
#line 94 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 658 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 16:
#line 95 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 664 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 17:
#line 96 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 670 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 18:
#line 97 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 676 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 19:
#line 98 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 682 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 20:
#line 100 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 688 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 21:
#line 101 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 694 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 22:
#line 104 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 700 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 23:
#line 105 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 706 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 24:
#line 106 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 712 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 25:
#line 109 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 718 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 26:
#line 112 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 724 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 27:
#line 113 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 730 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 28:
#line 116 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 736 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 29:
#line 119 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 742 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 30:
#line 120 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 748 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 31:
#line 123 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 754 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 32:
#line 126 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 760 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 33:
#line 127 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 766 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 34:
#line 128 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 772 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 35:
#line 131 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 778 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 36:
#line 132 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 784 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 37:
#line 133 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 790 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 38:
#line 134 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 796 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 39:
#line 135 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 802 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 40:
#line 136 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 808 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 41:
#line 137 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 814 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 42:
#line 138 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 820 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 43:
#line 139 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 826 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 44:
#line 140 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 832 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 45:
#line 141 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 838 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 46:
#line 142 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 844 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 47:
#line 143 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 850 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 48:
#line 144 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 856 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 49:
#line 145 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 862 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 50:
#line 146 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 868 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 51:
#line 147 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 874 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 52:
#line 148 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 880 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 53:
#line 149 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 886 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 54:
#line 150 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 892 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 55:
#line 151 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 898 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 56:
#line 152 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 904 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 57:
#line 153 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 910 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 58:
#line 154 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 916 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 59:
#line 155 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 922 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 60:
#line 156 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 928 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 61:
#line 157 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 934 "quack.tab.cxx" // lalr1.cc:870
    break;

  case 62:
#line 158 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:870
    { }
#line 940 "quack.tab.cxx" // lalr1.cc:870
    break;


#line 944 "quack.tab.cxx" // lalr1.cc:870
            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char parser::yypact_ninf_ = -57;

  const signed char parser::yytable_ninf_ = -8;

  const short
  parser::yypact_[] =
  {
     -57,     4,    16,   -57,    23,   -57,   745,     5,     0,     3,
      18,    32,   147,    -2,   147,   147,   147,   275,   -57,   -57,
     -57,   -57,   -57,   -16,   442,   -57,   207,   -57,   -57,   -57,
      25,   -57,   204,   -57,    24,   442,   238,   442,   272,    -8,
     306,    54,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,    56,   147,   147,    41,   442,   697,    42,
     340,   -57,   -57,   -57,   -57,   -57,   -57,    43,     2,   170,
     442,   442,   442,   442,   442,   476,   476,   510,   510,   442,
      48,   442,   442,   -57,    -3,   -57,    45,   721,    51,   128,
     544,   -57,   -57,   147,   -57,   442,   241,    74,   -57,   -57,
       1,   -57,   -57,   -57,    50,   442,    47,   170,    49,   374,
      58,   561,   -57,    83,   147,   147,    61,   -57,   -57,    60,
     -57,   -57,   578,    64,   595,   408,   -57,   -57,   612,   -57,
     -57,   745,   -57,   629,   -57,   646,   663,   -57,   -57,    72,
      70,   -57,   680,   -57
  };

  const unsigned char
  parser::yydefact_[] =
  {
       3,     0,     7,     1,     0,     4,     2,     0,    32,    38,
      36,     0,     0,     0,     0,     0,     0,     0,     8,    10,
      11,    12,    16,    39,    21,     7,     0,    33,    37,    35,
       0,    39,     0,    13,    39,    14,     0,    56,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     7,     7,    15,    29,     7,    60,     0,    18,     9,
      48,    46,    47,    49,    50,    42,    41,    40,    43,    57,
      34,    44,    45,    59,     0,    62,    54,     0,     0,     0,
       0,    61,    17,     0,    20,    21,     0,     0,     7,    55,
       0,    25,    28,    30,    39,     0,    24,     9,     0,     0,
       0,     0,     7,     0,     0,     0,     0,    19,    52,    51,
       7,     5,     0,     0,    39,     0,     7,    53,     0,    26,
       7,     9,     7,     0,     6,     0,     0,    23,    27,     0,
       0,     7,     0,    22
  };

  const signed char
  parser::yypgoto_[] =
  {
     -57,   -57,   -57,   -57,    37,   -56,   -57,   -57,   -57,   -57,
     -57,   -57,     6,    -6
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     1,     2,     5,     6,    18,    19,    20,    21,    22,
      89,   103,    31,    57
  };

  const short
  parser::yytable_[] =
  {
      24,     8,     9,    10,     3,    97,    32,    35,    36,    37,
      38,    40,    23,    94,    41,    15,    42,    26,    66,    34,
      60,    27,     4,    17,    98,    26,     7,    33,   112,    27,
      25,   113,    28,    92,    93,    30,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    29,    81,    82,
      61,   117,    24,    63,     8,     9,    10,    68,    11,    80,
      12,    13,    58,    95,    23,    14,   115,   116,    15,    16,
      83,    85,    91,    96,    99,    23,    17,   110,   118,   101,
     114,    24,    24,   105,    24,   120,   123,   107,   126,   127,
     109,   130,   140,    23,    23,   104,    23,   141,    87,    88,
       0,    95,    90,     0,     0,    24,     0,     0,   105,   125,
       0,     0,     0,    23,     0,     0,    24,    23,     0,     0,
     124,     0,    24,     0,     0,    24,     0,    24,    23,    24,
      24,     8,     9,    10,    23,   111,    24,    23,     0,    23,
       0,    23,    23,     0,     0,    15,     0,     0,    23,   122,
       8,     9,    10,    17,     0,     0,   102,   128,     0,     0,
       0,   131,     0,   133,    15,     0,     0,   135,     0,   136,
       0,     0,    17,     8,     9,    10,     0,    11,   142,    12,
      13,    43,    44,    45,    14,    46,    47,    15,    16,     0,
       0,    48,    49,    50,    51,    17,     0,     0,     0,     0,
       0,    52,     0,    53,    54,    55,    56,     8,     9,    10,
       8,     9,    10,     0,     0,    43,    44,    45,     0,    46,
      47,    15,     0,     0,    15,    48,    49,    50,    51,    17,
       0,    62,    17,    59,     0,    52,     0,    53,    54,    55,
      56,     8,     9,    10,     8,     9,    10,     0,     0,    43,
      44,    45,     0,    46,    47,    15,     0,     0,    15,    48,
      49,    50,    51,    17,     0,    64,    17,   108,     0,    52,
       0,    53,    54,    55,    56,     8,     9,    10,    39,     9,
      10,     0,     0,    43,    44,    45,     0,    46,    47,    15,
       0,     0,    15,    48,    49,    50,    51,    17,     0,    65,
      17,     0,     0,    52,     0,    53,    54,    55,    56,     8,
       9,    10,     0,     0,     0,     0,     0,    43,    44,    45,
       0,    46,    47,    15,     0,     0,     0,    48,    49,    50,
      51,    17,    67,     0,     0,     0,     0,    52,     0,    53,
      54,    55,    56,     8,     9,    10,     0,     0,     0,     0,
       0,    43,    44,    45,     0,    46,    47,    15,     0,     0,
       0,    48,    49,    50,    51,    17,    86,     0,     0,     0,
       0,    52,     0,    53,    54,    55,    56,     8,     9,    10,
       0,     0,     0,     0,     0,    43,    44,    45,     0,    46,
      47,    15,     0,     0,     0,    48,    49,    50,    51,    17,
     119,     0,     0,     0,     0,    52,     0,    53,    54,    55,
      56,     8,     9,    10,     0,     0,     0,     0,     0,    43,
      44,    45,     0,    46,    47,    15,     0,     0,     0,    48,
      49,    50,    51,    17,     0,   132,     0,     0,     0,    52,
       0,    53,    54,    55,    56,     8,     9,    10,     0,     0,
       0,     0,     0,    43,    44,    45,     0,    46,    47,    15,
       0,     0,     0,    48,    49,    50,    51,    17,     0,     0,
       0,     0,     0,    52,     0,    53,    54,    55,    56,     8,
       9,    10,     0,     0,     0,     0,     0,    43,    44,    45,
       0,    46,    47,    15,     0,     0,     0,     0,     0,    50,
      51,    17,     0,     0,     0,     0,     0,    52,     0,    53,
      54,    55,    56,     8,     9,    10,     0,     0,     0,     0,
       0,    43,    44,    45,     0,    46,    47,    15,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,    52,     0,    53,    54,    55,    56,     8,     9,    10,
       0,    11,     0,    12,    13,     0,     0,     0,    14,     0,
       0,    15,    16,     0,     8,     9,    10,     0,    11,    17,
      12,    13,   106,     0,     0,    14,     0,     0,    15,    16,
       0,     8,     9,    10,     0,    11,    17,    12,    13,   121,
       0,     0,    14,     0,     0,    15,    16,     0,    -7,    -7,
      -7,     0,    -7,    17,    -7,    -7,   129,     0,     0,    -7,
       0,     0,    -7,    -7,     0,     8,     9,    10,     0,    11,
      -7,    12,    13,    -7,     0,     0,    14,     0,     0,    15,
      16,     0,     8,     9,    10,     0,    11,    17,    12,    13,
     134,     0,     0,    14,     0,     0,    15,    16,     0,     8,
       9,    10,     0,    11,    17,    12,    13,   137,     0,     0,
      14,     0,     0,    15,    16,     0,     8,     9,    10,     0,
      11,    17,    12,    13,   138,     0,     0,    14,     0,     0,
      15,    16,     0,     8,     9,    10,     0,    11,    17,    12,
      13,   139,     0,     0,    14,     0,     0,    15,    16,     0,
       8,     9,    10,     0,    11,    17,    12,    13,   143,     0,
       0,    14,     0,     0,    15,    16,     0,     0,     0,     0,
       0,     0,    17,    84,     8,     9,    10,     0,    11,     0,
      12,    13,     0,     0,     0,    14,     0,     0,    15,    16,
       0,     0,     0,     0,     0,     0,    17,   100,     8,     9,
      10,     0,    11,     0,    12,    13,     0,     0,     0,    14,
       0,     0,    15,    16,     0,     0,     0,     0,     0,     0,
      17
  };

  const short
  parser::yycheck_[] =
  {
       6,     3,     4,     5,     0,     8,    12,    13,    14,    15,
      16,    17,     6,    69,    30,    17,    32,    25,    26,    13,
      26,    29,     6,    25,    27,    25,     3,    29,    27,    29,
      25,    30,    29,    31,    32,     3,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    29,    54,    55,
      25,   107,    58,    29,     3,     4,     5,     3,     7,     3,
       9,    10,    25,    69,    58,    14,    19,    20,    17,    18,
      29,    29,    29,    25,    29,    69,    25,     3,    29,    28,
      30,    87,    88,    89,    90,    27,     3,    93,    27,    29,
      96,    27,    20,    87,    88,    89,    90,    27,    61,    62,
      -1,   107,    65,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,   107,    -1,    -1,   122,   111,    -1,    -1,
     114,    -1,   128,    -1,    -1,   131,    -1,   133,   122,   135,
     136,     3,     4,     5,   128,    98,   142,   131,    -1,   133,
      -1,   135,   136,    -1,    -1,    17,    -1,    -1,   142,   112,
       3,     4,     5,    25,    -1,    -1,    28,   120,    -1,    -1,
      -1,   124,    -1,   126,    17,    -1,    -1,   130,    -1,   132,
      -1,    -1,    25,     3,     4,     5,    -1,     7,   141,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    33,    34,    35,    36,     3,     4,     5,
       3,     4,     5,    -1,    -1,    11,    12,    13,    -1,    15,
      16,    17,    -1,    -1,    17,    21,    22,    23,    24,    25,
      -1,    27,    25,    26,    -1,    31,    -1,    33,    34,    35,
      36,     3,     4,     5,     3,     4,     5,    -1,    -1,    11,
      12,    13,    -1,    15,    16,    17,    -1,    -1,    17,    21,
      22,    23,    24,    25,    -1,    27,    25,    26,    -1,    31,
      -1,    33,    34,    35,    36,     3,     4,     5,     3,     4,
       5,    -1,    -1,    11,    12,    13,    -1,    15,    16,    17,
      -1,    -1,    17,    21,    22,    23,    24,    25,    -1,    27,
      25,    -1,    -1,    31,    -1,    33,    34,    35,    36,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      -1,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,
      34,    35,    36,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    33,    34,    35,    36,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    33,    34,    35,
      36,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    27,    -1,    -1,    -1,    31,
      -1,    33,    34,    35,    36,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    -1,    15,    16,    17,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    33,    34,    35,    36,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      -1,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,
      34,    35,    36,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    33,    34,    35,    36,     3,     4,     5,
      -1,     7,    -1,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,     3,     4,     5,    -1,     7,    25,
       9,    10,    28,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,     3,     4,     5,    -1,     7,    25,     9,    10,    28,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,     3,     4,
       5,    -1,     7,    25,     9,    10,    28,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,     3,     4,     5,    -1,     7,
      25,     9,    10,    28,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,     3,     4,     5,    -1,     7,    25,     9,    10,
      28,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,     3,
       4,     5,    -1,     7,    25,     9,    10,    28,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,     3,     4,     5,    -1,
       7,    25,     9,    10,    28,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,     3,     4,     5,    -1,     7,    25,     9,
      10,    28,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
       3,     4,     5,    -1,     7,    25,     9,    10,    28,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    38,    39,     0,     6,    40,    41,     3,     3,     4,
       5,     7,     9,    10,    14,    17,    18,    25,    42,    43,
      44,    45,    46,    49,    50,    25,    25,    29,    29,    29,
       3,    49,    50,    29,    49,    50,    50,    50,    50,     3,
      50,    30,    32,    11,    12,    13,    15,    16,    21,    22,
      23,    24,    31,    33,    34,    35,    36,    50,    41,    26,
      50,    25,    27,    29,    27,    27,    26,    26,     3,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
       3,    50,    50,    29,    26,    29,    26,    41,    41,    47,
      41,    29,    31,    32,    42,    50,    25,     8,    27,    29,
      26,    28,    28,    48,    49,    50,    28,    50,    26,    50,
       3,    41,    27,    30,    30,    19,    20,    42,    29,    26,
      27,    28,    41,     3,    49,    50,    27,    29,    41,    28,
      27,    41,    27,    41,    28,    41,    41,    28,    28,    28,
      20,    27,    41,    28
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    37,    38,    39,    39,    40,    40,    41,    41,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    43,    43,    43,    44,    45,    45,    46,    47,
      47,    48,    49,    49,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     2,     0,     2,     8,    10,     0,     2,     0,
       1,     1,     1,     2,     2,     3,     1,     4,     3,     6,
       4,     1,    14,     9,     5,     5,     8,    10,     5,     0,
       2,     4,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     6,     6,     7,     4,     5,     2,     3,     2,     3,
       3,     4,     4
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "$end", "error", "$undefined", "IDENT", "STRING_LIT", "INT_LIT",
  "CLASS", "DEF", "EXTENDS", "WHILE", "RETURN", "EQUALS", "ATMOST",
  "ATLEAST", "TYPECASE", "AND", "OR", "NOT", "IF", "ELIF", "ELSE", "'-'",
  "'+'", "'*'", "'/'", "'('", "')'", "'{'", "'}'", "';'", "':'", "','",
  "'='", "'.'", "'>'", "'<'", "'n'", "$accept", "program", "classes",
  "class", "stmts", "stmt", "ifstmt", "while_stmt", "meth_stmt", "typeC",
  "types", "type", "L_Expr", "R_Expr", YY_NULLPTR
  };


  const unsigned char
  parser::yyrline_[] =
  {
       0,    64,    64,    68,    69,    72,    73,    84,    85,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     100,   101,   104,   105,   106,   109,   112,   113,   116,   119,
     120,   123,   126,   127,   128,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      25,    26,    23,    22,    31,    21,    33,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,    29,
      35,    32,    34,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      36,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    28,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20
    };
    const unsigned user_token_number_max_ = 275;
    const token_number_type undef_token_ = 2;

    if (static_cast<int> (t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // yy
#line 1488 "quack.tab.cxx" // lalr1.cc:1181
#line 161 "/Users/kab163/CIS561/HW2_redo/HW2/quack.yxx" // lalr1.cc:1182

#include "Messages.h"

void yy::parser::error(const location_type& loc, const std::string& msg)
{
  report::error_at(loc, msg);
}

void dump(AST::ASTNode* n) {
    // std::cout << "*** Building: " << n->str() << std::endl;
}
