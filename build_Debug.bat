%ZGB_PATH%\..\env\make-3.81-bin\bin\make -C %ZGB_PATH%\src BUILD_TYPE=Debug
cd src
%ZGB_PATH%\..\env\make-3.81-bin\bin\make run BUILD_TYPE=Debug
cd ..
pause