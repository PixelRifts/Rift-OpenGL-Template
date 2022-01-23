@echo off
rift.exe ./main.rf
clang generated.c glad\glad.c -Iglad\include -Wno-parentheses-equality -L. -luser32 -lgdi32 -lshell32 -lmsvcrt -lopengl32 -lglfw3 -ogenerated.exe
