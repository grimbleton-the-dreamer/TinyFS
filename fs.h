#ifndef FS_H
#define FS_H

void tfs_debug();

int  tfs_delete(const char * );
int  tfs_getsize(const char *);
int  tfs_get_inumber(const char *);

int  tfs_read( int inumber, char *data, int length, int offset );

#endif
