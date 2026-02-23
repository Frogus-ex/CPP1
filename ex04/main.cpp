#include <fstream>
#include <iostream>
#include <string>

void
ft_replace (const char *filename, std::string s1, std::string s2)
{
  if (s1.empty ())
    {
      std::cerr << "Error: s1 cannot be empty" << std::endl;
      return;
    }
  std::ifstream fp (filename);
  if (!fp.is_open ())
    {
      std::cerr << "Error: cannot open file " << filename << std::endl;
      return;
    }
  std::string new_filename = std::string (filename) + ".replace";
  std::ofstream out (new_filename.c_str ());
  if (!out.is_open ())
    {
      std::cerr << "Error: cannot open file " << new_filename << std::endl;
      return;
    }
  std::string line;
  std::string buffer = "";
  while (std::getline (fp, line))
    {
      std::string result = "";
      size_t pos = 0;
      while (pos < line.length ())
        {
          size_t found = line.find (s1, pos);
          if (found != std::string::npos)
            {
              result += line.substr (pos, found - pos);
              result += s2;
              pos = found + s1.length ();
            }
          else
            {
              result += line.substr (pos);
              break;
            }
        }
        if (!buffer.empty ())
          out << buffer << "\n";
      buffer = result;
    }
    out << buffer;
}

int
main (int ac, char **av)
{
  if (ac != 4)
    std::cout << "Wrong number of args";
  else
    ft_replace(av[1], av[2], av[3]);
}