# include <string>

std::string disemvowel(const std::string& str)
{
  std::string vowels = "AEOIUaeoui", result = "";
  for(auto &chr : str)
  {
    if (std::count(vowels.begin(),vowels.end(),chr) == 0)
    {
      result += chr;
    }
  }
  return result;
}

/*
# include <string>

std::string disemvowel(const std::string& str)
{
  std::string vowels = "aeouiAEOUI";
  std::string result = "";
  for(int i = 0; str[i] != '\0';i++)
  {
    if (std::count(vowels.begin(), vowels.end(), str[i]) == 0)
    {
      result += str[i];
    }
  }
  return result;
}
*/