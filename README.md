# CLI-magic
Small projects to understand how to use the CLI terminal in a more visually appealing manner

1. Simple Clock:
Prints the current time after every second, on the same line.    
The magic is in the "carriage return" control character.    
```cout << "\r" << s_time.c_str() << flush;```
