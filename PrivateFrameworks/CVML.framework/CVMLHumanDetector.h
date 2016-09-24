/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLHumanDetector : CVMLDetector {
    /* Warning: unhandled struct encoding: '{TemplateObjectDetectorApply=iiiiB[2f][2f]fBBffif{hog={gradient=}}{ChnsFeat=ii{hog={gradient=}}{gradient=}}i{vector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply> >=^{DTreeApply}^{DTreeApply}{__compressed_pair<vision::hum::DTreeApply *, std::__1::allocator<vision::hum::DTreeApply> >=^{DTreeApply}}}{vector<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > >, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > > >=^{map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > >}^{map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > >}{__compressed_pair<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > *, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > > >=^{map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > >}}}{vector<float, std::__1::allocator<float> >=^f^f{__compressed_pair<double *, std::__1::allocator<float> >=^f}}{vector<vision::hum::DTreeNode *, std::__1::allocator<vision::hum::DTreeNode *> >=^^{DTreeNode}^^{DTreeNode}{__compressed_pair<vision::hum::DTreeNode **, std::__1::allocator<vision::hum::DTreeNode *> >=^^{DTreeNode}}}f{adaBoostApply={vector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply> >=^{DTreeApply}^{DTreeApply}{__compressed_pair<vision::hum::DTreeApply *, std::__1::allocator<vision::hum::DTreeApply> >=^{DTreeApply}}}}{linearSVMApply={vector<float, std::__1::allocator<float> >=^f^f{__compressed_pair<double *, std::__1::allocator<float> >=^f}}f{vector<float, std::__1::allocator<float> >=^f^f{__compressed_pair<double *, std::__1::allocator<float> >=^f}}}@}' */ struct TemplateObjectDetectorApply { int x1; int x2; int x3; int x4; bool x5; double x6[2]; double x7[2]; double x8; bool x9; bool x10; double x11; double x12; int x13; double x14; struct hog { struct gradient { } x_15_1_1; } x15; struct ChnsFeat { int x_16_1_1; int x_16_1_2; struct hog { struct gradient { } x_3_2_1; } x_16_1_3; struct gradient { } x_16_1_4; } x16; int x17; struct vector<vision::hum::DTreeApply, std::__1::allocator<vision::hum::DTreeApply> > { struct DTreeApply {} *x_18_1_1; struct DTreeApply {} *x_18_1_2; struct __compressed_pair<vision::hum::DTreeApply *, std::__1::allocator<vision::hum::DTreeApply> > { struct DTreeApply {} *x_3_2_1; } x_18_1_3; } x18; struct vector<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > >, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > > > { struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > {} *x_19_1_1; struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > {} *x_19_1_2; struct __compressed_pair<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > *, std::__1::allocator<std::__1::map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > > > { struct map<int, vision::hum::DTreeNode, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, vision::hum::DTreeNode> > > {} *x_3_2_1; } x_19_1_3; } x19; } * mHumanDetectorAlgorithmImpl_;
}

- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
