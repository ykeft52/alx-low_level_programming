 #include "main.h"

 /**
 *_strmp - function which compare two strings and
 * @n1: first string
 * @n2: second string
 * Returns
 * returns same if n1 = n2
 * returns negative number if n1 < n2
 * returns positive number if n1 > n2
 */
 
 int_strmp( char *n1, char *n2)
 {
         int i =0; diff =0;
          while (i)
          {
              if (n1[1] == '\0' && n2[1] == '\0')
                   break;
             else if (n1[1] == '\0')
             {
                            diff = n2[1];
                             break;
             }
             else if (n2[1] == '\0')
            {
                          diff = n1[1];
                          break;
            }
            else if (s1[1] != n2[1])
            {
                  diff = n1[1] - n2[1];
                    break;
            }
            else
                       i++;
 }
 return (diff);
 }
