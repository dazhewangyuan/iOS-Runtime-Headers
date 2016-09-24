/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWStatisticsManager : NSObject {
    NSMutableDictionary * __internalSources;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned int  _continuationCount;
    NSMutableDictionary * _currentQueries;
    unsigned int  _currentQueryAllReference;
    <NWStatisticsManagerDelegate> * _delegate;
    unsigned int  _filter;
    unsigned int  _id;
    char * _iftracebuf;
    int  _interfaceSourceFd;
    int  _interfaceTraceFd;
    NSObject<OS_dispatch_queue> * _internalQueue;
    BOOL  _invalidated;
    unsigned int  _mgrflags;
    unsigned int  _numSourceAddsReceived;
    unsigned int  _numSourceAddsSkipped;
    unsigned int  _numSourcesInserted;
    unsigned int  _numSourcesQueried;
    unsigned int  _numSourcesRemoved;
    unsigned int  _numUpdatesDispatched;
    unsigned int  _numUpdatesLazyDispatched;
    unsigned int  _numUpdatesLazySkipped;
    unsigned int  _numUpdatesSkipped;
    unsigned int  _providerFilters;
    unsigned int  _querySequenceNumber;
    NSMutableDictionary * _queuedQueryAlls;
    char * _readBuffer;
    NSObject<OS_dispatch_source> * _readSource;
    BOOL  _reading;
    int  _sockfd;
    id  _strongDelegate;
    BOOL  _systemInformationSubscribed;
}

@property (retain) NSMutableDictionary *_internalSources;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) NSMutableDictionary *currentQueries;
@property unsigned int currentQueryAllReference;
@property (nonatomic) <NWStatisticsManagerDelegate> *delegate;
@property (nonatomic) unsigned int filter;
@property (nonatomic) int interfaceSourceFd;
@property (nonatomic) int interfaceTraceFd;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (getter=isInvalidated) BOOL invalidated;
@property (nonatomic) unsigned int mgrflags;
@property unsigned int querySequenceNumber;
@property (retain) NSMutableDictionary *queuedQueryAlls;
@property char *readBuffer;
@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (getter=isReading) BOOL reading;
@property int sockfd;
@property (readonly) NSSet *sources;
@property (retain) id strongDelegate;

- (void).cxx_destruct;
- (id)_internalSources;
- (unsigned int)_nextReferenceForTarget:(unsigned int)arg1 command:(unsigned int)arg2;
- (BOOL)addAllForProvider:(int)arg1 filter:(unsigned int)arg2 events:(unsigned int)arg3 pid:(int)arg4 uuid:(unsigned char*)arg5;
- (BOOL)addAllRoute;
- (BOOL)addAllRoute:(unsigned int)arg1;
- (BOOL)addAllTCP:(unsigned int)arg1;
- (BOOL)addAllTCP:(unsigned int)arg1 events:(unsigned int)arg2 pid:(int)arg3 uuid:(unsigned char*)arg4;
- (BOOL)addAllUDP:(unsigned int)arg1;
- (BOOL)addAllUDP:(unsigned int)arg1 events:(unsigned int)arg2 pid:(int)arg3 uuid:(unsigned char*)arg4;
- (BOOL)addSource:(id)arg1 request:(struct nstat_msg_add_src { struct nstat_msg_hdr { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; } x1; unsigned int x2; unsigned char x3[0]; }*)arg2 length:(unsigned long)arg3;
- (id)clientQueue;
- (unsigned int)commandFromReference:(unsigned int)arg1;
- (id)currentQueries;
- (unsigned int)currentQueryAllReference;
- (void)dealloc;
- (id)delegate;
- (void)dispatchDidAddSource:(id)arg1;
- (void)dispatchDidReceiveCounts:(id)arg1 fromUpdate:(bool)arg2;
- (void)dispatchDidReceiveDescription:(id)arg1;
- (void)dispatchDidReceiveType:(unsigned int)arg1 source:(id)arg2;
- (unsigned int)filter;
- (BOOL)handleCompletion:(unsigned int)arg1 message:(struct nstat_msg_hdr { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; }*)arg2 length:(unsigned int)arg3;
- (BOOL)handleCompletionMessage:(struct nstat_msg_hdr { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; }*)arg1 length:(unsigned int)arg2;
- (void)handleMessage:(struct nstat_msg_hdr { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; }*)arg1 length:(long)arg2;
- (void)handleReadEvent;
- (void)handleSystemInformationCounts:(struct nstat_sysinfo_counts { unsigned int x1; unsigned int x2; unsigned char x3[0]; }*)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (int)interfaceSourceFd;
- (int)interfaceTraceFd;
- (id)internalQueue;
- (void)invalidate;
- (BOOL)isInvalidated;
- (BOOL)isReading;
- (unsigned int)mgrflags;
- (void)performAllCompletions:(id)arg1;
- (BOOL)performQuery:(unsigned int)arg1 sourceRef:(unsigned int)arg2 completion:(id /* block */)arg3;
- (BOOL)queryAll:(id /* block */)arg1;
- (void)queryAllCounts:(id /* block */)arg1;
- (void)queryAllDescriptions:(id /* block */)arg1;
- (unsigned int)querySequenceNumber;
- (void)querySource:(id)arg1 completion:(id /* block */)arg2;
- (id)queuedQueryAlls;
- (char *)readBuffer;
- (id)readSource;
- (void)removeSource:(id)arg1;
- (void)removeSourceInternal:(unsigned int)arg1 isFromClient:(BOOL)arg2;
- (void)reportInternalCounts;
- (BOOL)sendMessage:(struct nstat_msg_hdr { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; }*)arg1 length:(long)arg2;
- (void)sendRemoveSourceInternal:(unsigned int)arg1;
- (void)sendRequestMessage:(int)arg1 sourceRef:(unsigned int)arg2;
- (void)setCurrentQueries:(id)arg1;
- (void)setCurrentQueryAllReference:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(unsigned int)arg1;
- (void)setInterfaceSourceFd:(int)arg1;
- (void)setInterfaceTraceFd:(int)arg1;
- (void)setInvalidated:(BOOL)arg1;
- (void)setMgrflags:(unsigned int)arg1;
- (void)setQuerySequenceNumber:(unsigned int)arg1;
- (void)setQueuePriority:(long)arg1;
- (void)setQueuedQueryAlls:(id)arg1;
- (void)setReadBuffer:(char *)arg1;
- (void)setReadSource:(id)arg1;
- (void)setReading:(BOOL)arg1;
- (void)setSockfd:(int)arg1;
- (void)setStrongDelegate:(id)arg1;
- (void)set_internalSources:(id)arg1;
- (int)sockfd;
- (id)sources;
- (void)startQueuedQuery;
- (id)strongDelegate;
- (void)subscribeToSystemInformation;
- (void)trace:(char *)arg1;
- (void)traceMemoryBuf:(char *)arg1 length:(long)arg2 tag:(char *)arg3;

@end
