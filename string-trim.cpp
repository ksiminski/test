// Krzysztof Siminski, 2015

/* Method for trimming of std::strings. It removes white chars from beginning and form end 
   of the string. The trimmed string is returned, original string is unchanged. */

std::string trim (std::string s)
{
    std::string white (" \t\f\v\n\r");
    std::string::size_type pos = s.find_last_not_of (white);
    if (pos != std::string::npos)
    {
       s.erase(pos + 1);
       pos = s.find_first_not_of(white);
       if (pos != std::string::npos)
          s.erase(0, pos);
    }
    else
       s.erase(s.begin(), s.end());

    return s;
}
