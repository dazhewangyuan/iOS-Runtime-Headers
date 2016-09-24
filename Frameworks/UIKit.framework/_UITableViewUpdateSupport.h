/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITableViewUpdateSupport : NSObject {
    id  _context;
    id * animatedCells;
    id * animatedFooters;
    id * animatedHeaders;
    NSMutableArray * deletedSections;
    NSMutableArray * gaps;
    int  globalReorderingRow;
    NSMutableArray * insertedSections;
    NSMutableIndexSet * movedRows;
    NSMutableIndexSet * movedSections;
    int  newGlobalRow;
    int  newGlobalRowCount;
    int * newGlobalRowMap;
    UITableViewRowData * newRowData;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  newRowRange;
    int  newSection;
    int  newSectionCount;
    int * newSectionMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  newTableViewVisibleBounds;
    int  oldGlobalRow;
    int  oldGlobalRowCount;
    int * oldGlobalRowMap;
    UITableViewRowData * oldRowData;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  oldRowRange;
    int  oldSection;
    int  oldSectionCount;
    int * oldSectionMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  oldTableViewVisibleBounds;
    NSMutableIndexSet * rows;
    UITableView * tableView;
    double  tableViewVisibleBoundsOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  tableViewVisibleBoundsUnion;
    NSArray * updateItems;
    NSMutableArray * viewAnimations;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  visibleRows;
}

- (void).cxx_destruct;
- (void)_addBottomShadowViewViewForViewAnimation:(id)arg1 viewType:(int)arg2;
- (void)_computeAutomaticAnimationTypes;
- (void)_computeGaps;
- (void)_computeRowUpdates;
- (void)_computeSectionUpdates;
- (void)_computeVisibleBounds;
- (void)_faultInRealHeightsOfNeededCells;
- (id)_imageViewForView:(id)arg1;
- (BOOL)_isReloadSectionUpdate;
- (void)_setupAnimationForReorderingRow;
- (void)_setupAnimationForTableFooter;
- (void)_setupAnimationForTableHeader;
- (void)_setupAnimationStructures;
- (void)_setupAnimations;
- (void)_setupAnimationsForDeletedCells;
- (void)_setupAnimationsForDeletedHeadersAndFooters;
- (void)_setupAnimationsForExistingHeadersAndFooters;
- (void)_setupAnimationsForExistingOffscreenCells;
- (void)_setupAnimationsForExistingVisibleCells;
- (void)_setupAnimationsForInsertedHeadersAndFooters;
- (void)_setupAnimationsForNewlyInsertedCells;
- (void)_setupDeleteAnimationForFooterInSection:(int)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupDeleteAnimationForHeaderInSection:(int)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForFooterInSection:(int)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForHeaderInSection:(int)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (float)_startOfRowAfterFooterInSection:(int)arg1 withRowData:(id)arg2;
- (float)_startOfRowAfterHeaderInSection:(int)arg1 withRowData:(id)arg2;
- (float)_startOfRowAfterRow:(int)arg1 withRowData:(id)arg2;
- (void)_validateAnimatedCells;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_visibleRowRangePlusAdjoining;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 newRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6 context:(id)arg7;

@end
