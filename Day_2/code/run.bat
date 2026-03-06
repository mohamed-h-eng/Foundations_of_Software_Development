@echo off
setlocal

REM ==== CONFIGURATION ====
set COMPILER=g++
set OUTPUT_EXE=program.exe
set OUTPUT_FILE=result.txt
REM =======================

REM Check if cpp file was provided
if "%~1"=="" (
    echo Usage: run_cpp.bat filename.cpp
    exit /b 1
)

set CPP_FILE=%~1

REM Delete old output file if it exists
if exist %OUTPUT_FILE% (
    del %OUTPUT_FILE%
)

REM Compile
%COMPILER% "%CPP_FILE%" -o %OUTPUT_EXE%
if errorlevel 1 (
    echo Compilation failed.
    exit /b 1
)

REM Run program
cls
%OUTPUT_EXE%
echo.
echo ...
echo === Code Execution Successful ===
