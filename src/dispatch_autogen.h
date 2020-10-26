/* WARNING: THIS FILE IS AUTOGENERATED. DO NOT EDIT! */
#ifndef DISPATCH_AUTOGEN_H
#define  DISPATCH_AUTOGEN_H

/* Definition of the DEF_TABLE macro which allows easy creation of dispatch table */
#define DEF_TABLE(suffix) DispatchTable suffix##Dispatch = { \
	getNextChar##suffix, \
	isWhitespace##suffix, \
	isDelimiter##suffix, \
	writeTokenChar##suffix, \
	writeWhitespaceChar##suffix, \
	writeWhitespaceDelimiter##suffix, \
	addCharacters##suffix, \
	checkOverlap##suffix, \
	setPunctuation##suffix, \
	initOptions##suffix, \
	postProcessOptions##suffix \
};

/* Definitions to allow acces without prepending dispatch-> to all calls. */
#define getNextChar (dispatch->getNextCharDT)
#define isWhitespace (dispatch->isWhitespaceDT)
#define isDelimiter (dispatch->isDelimiterDT)
#define writeTokenChar (dispatch->writeTokenCharDT)
#define writeWhitespaceChar (dispatch->writeWhitespaceCharDT)
#define writeWhitespaceDelimiter (dispatch->writeWhitespaceDelimiterDT)
#define addCharacters (dispatch->addCharactersDT)
#define checkOverlap (dispatch->checkOverlapDT)
#define setPunctuation (dispatch->setPunctuationDT)
#define initOptions (dispatch->initOptionsDT)
#define postProcessOptions (dispatch->postProcessOptionsDT)

/* Definitions of all external functions. */
bool  getNextCharSC(Stream *file);
bool  isWhitespaceSC(void);
bool  isDelimiterSC(void);
void  writeTokenCharSC(InputFile *file);
void  writeWhitespaceCharSC(InputFile *file);
void  writeWhitespaceDelimiterSC(InputFile *file);
void  addCharactersSC(const char *chars, size_t length, CHARLIST *list, char bitmap[BITMASK_SIZE]);
void  checkOverlapSC(void);
void  setPunctuationSC(void);
void  initOptionsSC(void);
void  postProcessOptionsSC(void);
bool  getNextCharUTF8(Stream *file);
bool  isWhitespaceUTF8(void);
bool  isDelimiterUTF8(void);
void  writeTokenCharUTF8(InputFile *file);
void  writeWhitespaceCharUTF8(InputFile *file);
void  writeWhitespaceDelimiterUTF8(InputFile *file);
void  addCharactersUTF8(const char *chars, size_t length, CHARLIST *list, char bitmap[BITMASK_SIZE]);
void  checkOverlapUTF8(void);
void  setPunctuationUTF8(void);
void  initOptionsUTF8(void);
void  postProcessOptionsUTF8(void);
#endif
