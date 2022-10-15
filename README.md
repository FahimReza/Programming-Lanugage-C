# Install MinGW on Windows
1. <a href="https://www.msys2.org/" target="_blank">Go to the URL</a><br/>
2. <a href="https://github.com/msys2/msys2-installer/releases/download/2022-09-04/msys2-x86_64-20220904.exe" target="_blank">Download the Installer</a><br/>
3. Run the Installer "msys2-x86_64-20220904.exe"<br/>
4. At the end of the installation process, Check Mark:<br/>
[x] Run "MSYS2 64bit" now<br/><br/>
5. Update the package database:<br/>
`$pacman -Syu`<br/>
<i>(Type this command in MSYS2-Terminal, Which will be auto launched after the installation process completed.)</i><br/><br/>
6. Go to "MSYS2 Installation Folder" and Select Go to "MSYS2 MSYS"<br/>
7. Update the package database:<br/>
`$pacman -Su`<br/><br/>
8. Go to MSYS2 Installation Folder and Select "MSYS2 MINGW64"<br/>
9. To install the "GCC", Search for the Package Name<br/>
`$pacman -Ss gcc`<br/><br/>
<i>(Or, simply run the command bellow.)</i><br/><br/>
`$pacman -S mingw-w64-x86_64-gcc`<br/><br/>
10. Check whether the "C-Compiler" is installed or not? and also the installed version<br/>
`gcc --version`<br/><br/>
11. Check whether the "CPP-Compiler" is installed or not? and also the installed version<br/>
`g++ --version`<br/><br/>
12. To Install the "Debugger", Search for the Package Name<br/>
`$pacman -Ss gdb`<br/><br/>
<i>(Or, simply run the command bellow.)</i><br/><br/>
`$pacman -S mingw-w64-x86_64-gdb`<br/><br/>
13. Check whether the "gdb" is installed or not? and also the installed version<br/>
`gdb --version`<br/><br/>
14. Start > Type "env" and Select "Edit the system environment variables" and goto "Environment Variables"<br/>
15. From System Variables:<br/>
`Path > Edit > New > C:\msys64\mingw64\bin > OK`<br/><br/>
16. Open Command Prompt and try to access:<br/>
```c
  gcc --version
  g++ --version
  gdb --version
 ```



# Set up Visual Studio Code for C and CPP Programming
1. Open "VS Code"<br/>
2. Go to "Extensions" (Ctrl+Shift+X)<br/>
3. Install "C/C++" IntelliSense, debugging, and code browsing (by Microsoft)<br/>
4. Install "C/C++" Extension Pack (by Microsoft)<br/>
5. Install: "Code Runner" (by Jun Han)<br/>
6. Re-Start the "VS Code"<br/>
7. Go to File > Add Folder to Workspace > Select a Folder<br/>
8. Got to File > Save Workspace As > Give a Name<br/>
9. Write a "C Program" > From the top right corner > Run Code<br/>
10. Configure Terminal as Input: <br/>
`File > Preferences > Settings > Extensions > Run Code Configuration > Run In Terminal (Check Mark)`<br/><br/>
11. Enjoy!<br/>

