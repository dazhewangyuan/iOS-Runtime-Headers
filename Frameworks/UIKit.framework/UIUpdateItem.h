/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIUpdateItem : NSObject {
    int  _action;
    int  _animation;
    UITableViewUpdateGap * _gap;
    BOOL  _headerFooterOnly;
    NSIndexPath * _indexPath;
    double  _offset;
    BOOL  _skipAnimation;
}

@property (nonatomic, readonly) int action;
@property (nonatomic) int animation;
@property (nonatomic) UITableViewUpdateGap *gap;
@property (nonatomic) BOOL headerFooterOnly;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) double offset;
@property (nonatomic) BOOL skipAnimation;

- (void).cxx_destruct;
- (id)_actionDescription;
- (int)action;
- (int)animation;
- (int)compareIndexPaths:(id)arg1;
- (id)gap;
- (BOOL)headerFooterOnly;
- (id)indexPath;
- (id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(int)arg3;
- (int)inverseCompareIndexPaths:(id)arg1;
- (BOOL)isSectionOperation;
- (float)offset;
- (void)setAnimation:(int)arg1;
- (void)setGap:(id)arg1;
- (void)setHeaderFooterOnly:(BOOL)arg1;
- (void)setOffset:(float)arg1;
- (void)setSkipAnimation:(BOOL)arg1;
- (BOOL)skipAnimation;

@end
