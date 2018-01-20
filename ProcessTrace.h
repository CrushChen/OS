/* 
 * File:   ProcessTrace.h
 * Author: Tristan Gay
 *
 * Created on January 19, 2018, 9:09 PM
 */

#ifndef PROCESSTRACE_H
#define PROCESSTRACE_H

#include <string>
#include <fstream>
#include <vector>

using namespace std;

class ProcessTrace {
public:
    ProcessTrace(const std::string &file_name);
    ~ProcessTrace();
    // Rule of Five methods -- they should not be used.
    ProcessTrace(const ProcessTrace &orig) = delete;
    ProcessTrace(ProcessTrace &&orig) = delete;
    ProcessTrace operator=(const ProcessTrace &orig) = delete;
    ProcessTrace operator=(ProcessTrace &&orig) = delete;
  
    /**
     * Execute - Executes commands specified in our file.
     * @param    Uses our MEMORY array as the memory referenced by the commands.
    */
    void Execute(string command);
    void printVector(vector<uint8_t> v, unsigned int begin, unsigned int count);
private:
    vector<uint8_t> memory; //acts as fake memory
    size_t memorySize;
    ifstream inputFileStream; //input file stream
};

/*
    uint8_t (unsigned 8-bit integer data type)
    std::fstream
    std::getline
    std::istringstream
    std::hex, std::dec, std::setw
 */
#endif /* PROCESSTRACE_H */

