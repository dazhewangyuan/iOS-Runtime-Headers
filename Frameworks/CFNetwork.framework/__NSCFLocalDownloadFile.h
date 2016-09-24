/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFLocalDownloadFile : NSObject {
    int  _error;
    <__NSCFLocalDownloadFileOpener> * _fileProvider;
    id /* block */  _finishCompletion;
    BOOL  _finished;
    NSString * _path;
    BOOL  _skipUnlink;
    struct stat { 
        int st_dev; 
        unsigned short st_mode; 
        unsigned short st_nlink; 
        unsigned int st_ino; 
        unsigned int st_uid; 
        unsigned int st_gid; 
        int st_rdev; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_atimespec; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_mtimespec; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_ctimespec; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_birthtimespec; 
        int st_size; 
        int st_blocks; 
        int st_blksize; 
        unsigned int st_flags; 
        unsigned int st_gen; 
        int st_lspare; 
        int st_qspare[2]; 
    }  _stat;
    BOOL  _truncateFile;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_io> * _writeIO;
}

@property int error;
@property <__NSCFLocalDownloadFileOpener> *fileProvider;
@property (copy) id /* block */ finishCompletion;
@property (retain) NSString *path;
@property BOOL skipUnlink;
@property BOOL truncateFile;

- (void)captureFile:(id*)arg1 outStat:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct timespec { int x_8_1_1; long x_8_1_2; } x8; struct timespec { int x_9_1_1; long x_9_1_2; } x9; struct timespec { int x_10_1_1; long x_10_1_2; } x10; struct timespec { int x_11_1_1; long x_11_1_2; } x11; int x12; int x13; int x14; unsigned int x15; unsigned int x16; int x17; int x18[2]; }*)arg2;
- (void)dealloc;
- (int)error;
- (id)fileProvider;
- (id)fileURL;
- (id /* block */)finishCompletion;
- (void)finishOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initQueues;
- (id)initTempFileWithDirectory:(id)arg1;
- (id)initWithExistingFile:(id)arg1 expectedSize:(int)arg2;
- (id)initWithExistingUnopenableFile:(id)arg1 fileProvider:(id)arg2;
- (id)initWithFullPath:(id)arg1;
- (id)ioChannel;
- (id)path;
- (void)setError:(int)arg1;
- (void)setFileProvider:(id)arg1;
- (void)setFinishCompletion:(id /* block */)arg1;
- (void)setPath:(id)arg1;
- (void)setSkipUnlink:(BOOL)arg1;
- (void)setTruncateFile:(BOOL)arg1;
- (BOOL)skipUnlink;
- (void)truncate;
- (BOOL)truncateFile;
- (void)writeBytes:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;

@end
