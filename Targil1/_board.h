//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// _board.h
// ---------
// A board example (this is NOT an interesting board, you should do better that that!)
// This file is a header file just for conveniency, but it CANNOT be included in multiple files.
// (The file creates the single board that we use as a global variable).
// You may for example include this file in main (ONLY) and use the board to init TheMathGame.
// TODO: in ex2 _boards.h will be replaced with a better way, reading boards from files.
//
// Author: Amir Kirsh
// First version: 2015-11-02
// 
// This code is part of a solution for "the math space ships game" excercise 1 in C++ course, Semester A 2016
// at the Academic College of Tel-Aviv-Yaffo.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Changes and additions:
// ------------------------
// DATE           Authors                 Change / Addition
// ----           --------                -----------------
//
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// ROWS is an enum value in TheMathGame.h - make sure it's included above us

const char* board_example[ROWS]={
//	         10        20        30        40        50        60        70       79
//	01234567890123456789012345678901234567890123456789012345678901234567890123456789
	"++++++++   ++++++++++++++     ++++++++++++++++++++++++++++++++++++++++++++++++++", // 0
	"+                                                                              +", // 1
	"+        222                                                                   +", // 2
	"         1                                      ++++++++++++++++++              ", // 3
	"                                                + X              +              ", // 4
	"+                                               ++++++++++++++++++             +", // 5
	"+                                               + S              +             +", // 6
	"+         5             7                       ++++++++++++++++++             +", // 7
	"+         89                            @                                      +", // 8
	"+          9            +                                                      +", // 9
	"+         999                                                                  +", // 10
	"+                       6                       **                             +", // 11
	"+                  3      17                   ++++                            +", // 12
	"+                  3 4 44 7                                                    +", // 13
	"+                                                                              +", // 14
	"+                                                                              +", // 15
	"+                                           #                                  +", // 16
	"+                                                                              +", // 17
	"+                                                                              +", // 18
	"+                   77             **                                          +", // 19
	"+       + ++                      ++++++++                                     +", // 20
	"+                                                                              +", // 21
	"+                                                                              +", // 22
	"+++++++++ +++++++++++++++     ++++++++++++++++++++++++++++++++++++++++++++++++++"  // 23
//   01234567890123456789012345678901234567890123456789012345678901234567890123456789
};

