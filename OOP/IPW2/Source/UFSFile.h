// Created by Alexander Degtyarev on 11/26/13.
// Copyright (c) 2013 Alexander Degtyarev. All rights reserved.




#include "IFile.h"
#include "UFS.h"

#ifndef __UFSFile_H_
#define __UFSFile_H_

class UFSFile: public IFile {
public:
	UFSFile();

	UFSFile(char* _name,char* _extension,IDirectory* directory);
	UFSFile(UFSFile const &copy);
	//IFile
	virtual char* GetExtension();
	virtual void SetData(char *data);
	virtual char* GetData();
	//IObject
	virtual long long GetSize();
protected:
	char* data;
	char* extension;
	char *name;
	IDirectory *parentDirectory;
	time_t modificationDate;
	time_t creationDate;

	//IObject
public:
	virtual char *GetObjectName();
	virtual IVFSObject *GetParent();
	virtual void SetParent(IVFSObject *object);
	virtual time_t GetCreationDate();
	virtual time_t GetModificationDate();
};


#endif //__UFSFile_H_
