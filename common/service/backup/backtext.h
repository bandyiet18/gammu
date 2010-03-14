#ifndef __backuptext_h
#define __backuptext_h

#include "backgen.h"

#ifdef GSM_ENABLE_BACKUP
GSM_Error LoadBackup(char *FileName, GSM_Backup *backup, bool UseUnicode);
GSM_Error SaveBackup(char *FileName, GSM_Backup *backup, bool UseUnicode);
#endif

#endif

/* How should editor hadle tabs in this file? Add editor commands here.
 * vim: noexpandtab sw=8 ts=8 sts=8:
 */
