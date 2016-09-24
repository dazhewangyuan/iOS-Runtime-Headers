/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltimeterInternal : NSObject {
    NSObject<OS_dispatch_queue> * fAppQueue;
    double  fBarometricBaseAltitude;
    struct Sample { 
        double timestamp; 
        struct { 
            double pressure; 
            double temperature; 
        } pressureData; 
    }  fBaseAltimeterSample;
    bool  fBaselineReceived;
    double  fElevationAscendedOffset;
    double  fElevationDescendedOffset;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fFilteredPressureDispatcher;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; struct CLConnection {} x4; bool x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; } * fLocationdConnection;
    struct deque<float, std::__1::allocator<float> > { 
        struct __split_buffer<double *, std::__1::allocator<double *> > { 
            double **__first_; 
            double **__begin_; 
            double **__end_; 
            struct __compressed_pair<double **, std::__1::allocator<double *> > { 
                double **__first_; 
            } __end_cap_; 
        } __map_; 
        unsigned int __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<float> > { 
            unsigned long __first_; 
        } __size_; 
    }  fPressureSamples;
    id /* block */  fRelativeAltimeterHandler;
    NSOperationQueue * fRelativeAltimeterQueue;
    id /* block */  fSignificantElevationSampleHandler;
    BOOL  fStopUpdates;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_startElevationUpdatesWithHandler:(id /* block */)arg1;
- (void)_startSignificantElevationUpdatesWithHandler:(id /* block */)arg1;
- (void)_startWatchdogCheckins;
- (void)_stopElevationUpdates;
- (void)_stopSignificantElevationUpdates;
- (void)_stopWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
