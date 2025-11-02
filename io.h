#pragma once

// template <typename T>
// void printArray(T arr[], int n);

void initializeConsole();
void setArraySize(int& N);
short setMode();
void printHeader();
void printRow(const std::string& name, const Stats& st, double time);
