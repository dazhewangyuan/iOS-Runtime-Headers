/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseConnection : NSObject {
    BOOL  _alreadyAttemptedCorruptionRecovery;
    BOOL  _automaticCheckpointingEnabled;
    unsigned int  _checkpointStatementThreshold;
    <ML3DatabaseConnectionDelegate> * _connectionDelegate;
    NSUUID * _currentTransactionID;
    NSString * _databasePath;
    NSMutableArray * _enqueuedTransactionCommitBlocks;
    const void * _iTunesExtensions;
    BOOL  _isHandlingIOError;
    BOOL  _isOpen;
    BOOL  _isReadOnly;
    unsigned int  _journalingMode;
    NSString * _lastTracedStatement;
    BOOL  _logQueryPlans;
    BOOL  _nestedTransactionWantsToRollback;
    ML3DatabaseConnectionPool * _owningPool;
    int  _profilingLevel;
    unsigned int  _protectionLevel;
    NSMutableArray * _registeredFunctions;
    NSMutableArray * _registeredModules;
    struct sqlite3 { } * _sqlitedb;
    ML3DatabaseStatementCache * _statementCache;
    unsigned int  _statementsSinceLastCheckpoint;
    unsigned int  _transactionLevel;
    NSUUID * _uniqueIdentifier;
    int  _willDeleteDatabaseNotifyToken;
}

@property (nonatomic) BOOL automaticCheckpointingEnabled;
@property (nonatomic) unsigned int checkpointStatementThreshold;
@property (nonatomic) <ML3DatabaseConnectionDelegate> *connectionDelegate;
@property (nonatomic, readonly) NSUUID *currentTransactionID;
@property (nonatomic, readonly) NSString *databasePath;
@property (nonatomic, readonly) BOOL isInTransaction;
@property (nonatomic, readonly) BOOL isOpen;
@property (setter=setReadOnly:, nonatomic) BOOL isReadOnly;
@property (nonatomic) unsigned int journalingMode;
@property (nonatomic) BOOL logQueryPlans;
@property (nonatomic) int profilingLevel;
@property (nonatomic) unsigned int protectionLevel;
@property (nonatomic, readonly) BOOL transactionMarkedForRollBack;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (BOOL)_alreadyAttemptedCorruptionRecovery;
- (BOOL)_alterTableNamed:(id)arg1 withNewColumnDefinitions:(id)arg2 newColumnNames:(id)arg3 oldColumnNames:(id)arg4;
- (BOOL)_closeAndFlushTransactionState:(BOOL)arg1;
- (void)_createDatabaseDirectoryIfNonexistent;
- (void)_createDatabaseFileIfNonexistent;
- (BOOL)_databaseFileExists;
- (id)_databaseFilePaths;
- (BOOL)_databaseFilesAreWritable;
- (void)_ensureConnectionIsOpen;
- (void)_enumerateTableColumnNamesAndDefinitionsFromTable:(id)arg1 usingBlock:(id /* block */)arg2;
- (BOOL)_executeStatement:(id)arg1 withError:(id*)arg2;
- (void)_executeTransactionCommitBlocks:(BOOL)arg1;
- (void)_finalizeAllStatements;
- (BOOL)_handleBusyLockWithNumberOfRetries:(int)arg1;
- (BOOL)_handleConnectionErrorWhileOpening:(int)arg1;
- (void)_handleDatabaseCorruption;
- (void)_handleDatabaseProfileStatement:(const char *)arg1 executionTimeNS:(unsigned int)arg2;
- (void)_handleDatabaseTraceStatement:(const char *)arg1;
- (BOOL)_handleDiskIOError;
- (BOOL)_handleZombieSQLiteConnection:(struct sqlite3 { }*)arg1;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned int)arg1;
- (BOOL)_internalEndTransactionAndCommit:(BOOL)arg1;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(int)arg4;
- (BOOL)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3;
- (void)_internalLogQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(int)arg4;
- (BOOL)_isSharedMediaLibraryDatabase;
- (void)_logCurrentError;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statement:(id)arg2;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statementSQL:(id)arg2;
- (void)_logDatabaseFileDebugInformation;
- (BOOL)_openWithFlags:(int)arg1;
- (id)_owningPool;
- (id)_prepareStatement:(id)arg1 error:(id*)arg2;
- (id)_registeredModuleNamed:(id)arg1;
- (void)_resetUnfinalizedStatements;
- (void)_setAlreadyAttemptedCorruptionRecovery:(BOOL)arg1;
- (void)_setOwningPool:(id)arg1;
- (void)_setTransactionLevel:(unsigned int)arg1;
- (id)_shortDescription;
- (struct sqlite3 { }*)_sqliteHandle;
- (unsigned int)_transactionLevel;
- (void)_updateProfilingLevel;
- (BOOL)_validatePreparedStatement:(id)arg1 error:(id*)arg2;
- (BOOL)automaticCheckpointingEnabled;
- (int)checkpointDatabase;
- (unsigned int)checkpointStatementThreshold;
- (BOOL)close;
- (id)connectionDelegate;
- (id)currentTransactionID;
- (id)databasePath;
- (BOOL)databasePathExists;
- (void)dealloc;
- (BOOL)deleteDatabase;
- (id)description;
- (void)enqueueBlockForTransactionCommit:(id /* block */)arg1;
- (id)executeQuery:(id)arg1;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(int)arg4;
- (BOOL)executeUpdate:(id)arg1;
- (BOOL)executeUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3;
- (void)flush;
- (id)init;
- (id)initWithDatabasePath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInTransaction;
- (BOOL)isOpen;
- (BOOL)isReadOnly;
- (unsigned int)journalingMode;
- (int)lastInsertionRowID;
- (BOOL)logQueryPlans;
- (BOOL)open;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(int)arg3 readOnly:(BOOL)arg4;
- (BOOL)performTransactionWithBlock:(id /* block */)arg1;
- (BOOL)performTransactionWithBlock:(id /* block */)arg1 usingBehaviorType:(unsigned int)arg2;
- (BOOL)popToRootTransactionAndCommit:(BOOL)arg1;
- (BOOL)popTransactionAndCommit:(BOOL)arg1;
- (int)profilingLevel;
- (unsigned int)protectionLevel;
- (BOOL)pushTransaction;
- (BOOL)pushTransactionUsingBehaviorType:(unsigned int)arg1;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(id /* block */)arg3;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(int (*)arg3;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(int (*)arg3 userData:(void*)arg4;
- (BOOL)registerModule:(id)arg1;
- (BOOL)registerModuleName:(id)arg1 moduleMethods:(struct sqlite3_module { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); }*)arg2;
- (BOOL)removeModuleNamed:(id)arg1;
- (BOOL)schemaAddColumnDefinition:(id)arg1 toTable:(id)arg2;
- (BOOL)schemaDeleteColumn:(id)arg1 inTable:(id)arg2;
- (BOOL)schemaDeleteColumns:(id)arg1 inTable:(id)arg2;
- (BOOL)schemaInsertColumnDefinition:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned int)arg3;
- (BOOL)schemaInsertColumnDefinitions:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned int)arg3;
- (BOOL)schemaRenameColumn:(id)arg1 inTable:(id)arg2 toNewColumnName:(id)arg3;
- (void)setAutomaticCheckpointingEnabled:(BOOL)arg1;
- (void)setCheckpointStatementThreshold:(unsigned int)arg1;
- (void)setConnectionDelegate:(id)arg1;
- (void)setCurrentTransactionID:(id)arg1;
- (void)setJournalingMode:(unsigned int)arg1;
- (void)setLogQueryPlans:(BOOL)arg1;
- (void)setProfilingLevel:(int)arg1;
- (void)setProtectionLevel:(unsigned int)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (id)sqliteError;
- (BOOL)tableExists:(id)arg1;
- (BOOL)transactionMarkedForRollBack;
- (id)uniqueIdentifier;

@end
