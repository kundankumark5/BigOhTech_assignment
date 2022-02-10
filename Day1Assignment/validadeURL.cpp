//iv) Write a function Boolean isValidURL(String url).
#include <iostream>
#include <regex>
using namespace std;

bool isValidURL(string url)
{
  const regex valid("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");

  if (url.empty())
  {
    return false;
  }
  if (regex_match(url, valid))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  string url;
  cout << "enter any URL\n";
  cin >> url;

  if (isValidURL(url))
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}