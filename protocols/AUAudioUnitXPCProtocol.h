/* Generated by RuntimeBrowser.
 */

@protocol AUAudioUnitXPCProtocol <_AURemoteParameterSynchronization>

@required

- (void)addPropertyObserver:(AUAudioUnitProperty *)arg1 context:(unsigned long)arg2;
- (void)close:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)getBusses:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getParameter:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)getParameterTree:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AUParameterTree *, void*
- (void)initialize2:(void *)arg1 formats:(void *)arg2 maxFrames:(void *)arg3 buffer:(void *)arg4 bufferSize:(void *)arg5 beginSem:(void *)arg6 endSem:(void *)arg7 reply:(void *)arg8; // needs 8 arg types, found 13: int, NSData *, unsigned int, CAXPCObject *, unsigned int, CAXPCObject *, CAXPCObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)initialize:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 12: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, unsigned int, unsigned int, NSData *, BOOL, NSError *, void*
- (void)open:(void *)arg1; // needs 1 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, BOOL, NSArray *, NSArray *, BOOL, BOOL, int, NSError *, void*
- (void)parameterNode:(void *)arg1 displayNameWithLength:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)parameterStringFromValue:(void *)arg1 currentValue:(void *)arg2 address:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: float, BOOL, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)parameterValueFromString:(void *)arg1 address:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)parametersForOverviewWithCount:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)removePropertyObserver:(AUAudioUnitProperty *)arg1 context:(unsigned long)arg2;
- (void)reset;
- (void)setBusCount:(void *)arg1 scope:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned int, unsigned long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)setBusFormat:(void *)arg1 scope:(void *)arg2 format:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: unsigned long, unsigned long, AVAudioFormat *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)setValue:(void *)arg1 forKey:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: id, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setValue:(void *)arg1 forProperty:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: id, AUAudioUnitProperty *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)uninitialize:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)valueForKey:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (void)valueForProperty:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: AUAudioUnitProperty *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id

@end
