cd Build
..\Tools\premake5 vs2015
MSBuild.exe NoVR.sln /property:Platform=x64 /property:Configuration=Debug
