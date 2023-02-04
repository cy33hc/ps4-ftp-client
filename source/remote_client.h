#ifndef REMOTECLIENT_H
#define REMOTECLIENT_H

#include "common.h"

class RemoteClient
{
public:
    RemoteClient(){};
    virtual ~RemoteClient(){};
    virtual int Connect(const std::string &host, unsigned short port, const std::string &username, const std::string &password) = 0;
    virtual int Mkdir(const std::string &path) = 0;
    virtual int Rmdir(const std::string &path, bool recursive) = 0;
    virtual int Size(const std::string &path, int64_t *size) = 0;
    virtual int Get(const std::string &outputfile, const std::string &path, int64_t offset) = 0;
    virtual int Put(const std::string &inputfile, const std::string &path, int64_t offset) = 0;
    virtual int Rename(const std::string &src, const std::string &dst) = 0;
    virtual int Delete(const std::string &path) = 0;
    virtual bool FileExists(const std::string &path) = 0;
    virtual std::vector<DirEntry> ListDir(const std::string &path) = 0;
    virtual bool IsConnected() = 0;
    virtual bool Ping() = 0;
    virtual const char *LastResponse() = 0;
    virtual int Quit() = 0;
};

#endif