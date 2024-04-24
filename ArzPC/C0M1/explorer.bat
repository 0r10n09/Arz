@echo off
:menu
cls
echo 1. List Files
echo 2. Navigate to Directory
echo 3. Open File
echo 4. Delete Folder/File
echo 5. Create Folder
echo 6. Create File
echo 7. Return to Arz CLI
set /p choice=Enter your choice: 
if "%choice%"=="1" goto list_files
if "%choice%"=="2" goto navigate
if "%choice%"=="3" goto open_file
if "%choice%"=="4" goto delete_item
if "%choice%"=="5" goto create_folder
if "%choice%"=="6" goto create_file
if "%choice%"=="7" goto :exit
goto menu

:list_files
dir
pause
goto menu

:navigate
set /p directory=Enter directory path: 
cd %directory%
goto menu

:open_file
set /p file=Enter file name: 
start %file%
goto menu

:delete_item
set /p item=Enter item name to delete: 
del /q %item% 2>nul
rd /s /q %item% 2>nul
goto menu

:create_folder
set /p folder=Enter folder name to create: 
mkdir %folder%
goto menu

:create_file
set /p filename=Enter file name to create: 
type nul > %filename%
goto menu

:exit
cls
call cli.exe