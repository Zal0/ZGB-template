%ZGB_PATH%\..\env\make-3.81-bin\bin\make -C %ZGB_PATH%\src clean BUILD_TYPE=Release
%ZGB_PATH%\..\env\make-3.81-bin\bin\make -C %ZGB_PATH%\src clean BUILD_TYPE=Debug
%ZGB_PATH%\..\env\make-3.81-bin\bin\make -C %ZGB_PATH%\src clean BUILD_TYPE=ReleaseColor
%ZGB_PATH%\..\env\make-3.81-bin\bin\make -C %ZGB_PATH%\src clean BUILD_TYPE=DebugColor
cd src
%ZGB_PATH%\..\env\make-3.81-bin\bin\make clean BUILD_TYPE=Release
%ZGB_PATH%\..\env\make-3.81-bin\bin\make clean BUILD_TYPE=Debug
%ZGB_PATH%\..\env\make-3.81-bin\bin\make clean BUILD_TYPE=ReleaseColor
%ZGB_PATH%\..\env\make-3.81-bin\bin\make clean BUILD_TYPE=DebugColor
cd ..
pause