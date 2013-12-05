// Created by Alexander Degtyarev on 12/2/13.
// Copyright (c) 2013 Alexander Degtyarev. All rights reserved.




#include "IVFSFactory.h"

#ifndef __XFSFactory_H_
#define __XFSFactory_H_


class XFSFactory: public IVFSFactory {

public:
	virtual IVFS *CreateVFS();

	virtual IDirectory *CreateDir(char *name);

	virtual IFile *CreateFile(char *name);
};


#endif //__XFSFactory_H_
