/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNBuildChunk, KNSlide;

@interface KNCommandSlideInsertBuildChunk : TSKCommand {
    KNBuildChunk *mBuildChunk;
    unsigned int mIndex;
    KNSlide *mSlide;
}

@property(readonly) KNBuildChunk * buildChunk;
@property(readonly) unsigned int index;
@property(readonly) KNSlide * slide;

- (id)buildChunk;
- (void)commit;
- (void)dealloc;
- (unsigned int)index;
- (id)initWithSlide:(id)arg1 buildChunk:(id)arg2 atIndex:(unsigned int)arg3;
- (BOOL)process;
- (void)redo;
- (id)slide;
- (void)undo;

@end
