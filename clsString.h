#pragma once
#include <string>
#include <vector>

class clsString
{
	std::string _Value;
	std::string _Delim;

	static char _invertChar(char c);
	static bool _isVowel(char c);

public:
	enum class enWhatToCount { Small, Cap, All };

	// Constructors
	clsString();

	clsString(const std::string& value, const std::string& delim);

	// Getters
	const std::string& value() const;

	// Setters
	void setValue(const std::string& value);

	// Actions
	static std::string readString(const std::string& msg, bool isPassword = false);

	static std::string hashString(const std::string& s);

	static void printFirstChar(const std::string& s);

	void printFirstChar() const;

	static void upperFirstEachWordLetter(std::string& word);

	void upperFirstEachWordLetter();

	static void lowerFirstEachWordLetter(std::string& s);

	void lowerFirstEachWordLetter();

	static void upper(std::string& s);

	void upper();

	static void lower(std::string& s);

	void lower();

	static void invertChars(std::string& s);

	void invertChars();

	static int countSmallLetters(const std::string& s);

	int countSmallLetters() const;

	static int countCapLetters(const std::string& s);

	int countCapLetters() const;

	static int countLetters(const std::string& s, enWhatToCount whatToCount = enWhatToCount::All);

	int countLetters(enWhatToCount whatToCount = enWhatToCount::All) const;


	static int countSpecLetter(const std::string& s, char spec);

	int countSpecLetter(char spec) const;

	static int countSpecLetterInsensitiveCase(const std::string& s, char spec);

	int countSpecLetterInsensitiveCase(char spec) const;

	static int countVowels(const std::string& s);

	int countVowels() const;

	static void printAllVowels(const std::string& s);

	void printAllVowels() const;

	static void printEachWord(std::string s, const std::string& delim);

	void printEachWord() const;

	static int countEachWord(std::string s, const std::string& delim);

	int countEachWord() const;

	static std::vector<std::string> split(std::string s, const std::string& delim);

	std::vector<std::string> split() const;

	static void printWordsFromVector(const std::vector<std::string>& vWords);

	static std::string trimLeft(std::string s);

	void trimLeft();

	static std::string trimRight(std::string s);

	void trimRight();

	static std::string trim(std::string s);

	void trim();

	static std::string joinVectorStrings(const std::vector<std::string>& vWords, const std::string& delim);

	static std::string joinArrStrings(std::string arr[], int length, const std::string& delim);

	static std::string reverseWords(std::string s, const std::string& delim);

	void reverseWords();

	static std::string replaceWordsWithBuiltIn(std::string s, const std::string& sToReplcae, const std::string& replaceTo);

	void replaceWordsWithBuiltIn(const std::string& sToReplcae, const std::string& replaceTo);

	static std::string replaceWords(std::string s, std::string des, std::string res, const std::string& delim, bool isMatch);

	void replaceWords(std::string des, std::string res, const std::string& delim, bool isMatch);

	static std::string removeAllPunct(std::string s);

	void removeAllPunct();

	static std::string textOfNumber(int n);

	static std::string replaceWordInString(std::string S1, const std::string& stringToReplace, const std::string& sRepalceTo);

	static std::string getTimeNow();

	~clsString() = default;
};