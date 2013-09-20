/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSDImageProvider, TSPObjectContext;

@interface TSDImageResamplingOperation : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    } mDesiredSize;
    NSString *mDisplayName;
    TSDImageProvider *mImageProvider;
    struct CGPath { } *mMaskingPath;
    TSPObjectContext *mObjectContext;
}

@property struct CGSize { float x1; float x2; } desiredSize;
@property(copy) NSString * displayName;
@property(retain) TSDImageProvider * imageProvider;
@property struct CGPath { }* maskingPath;
@property(retain) TSPObjectContext * objectContext;

- (void)dealloc;
- (struct CGSize { float x1; float x2; })desiredSize;
- (id)displayName;
- (id)imageProvider;
- (id)init;
- (id)initWithImageProvider:(id)arg1 desiredSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGPath { }*)maskingPath;
- (id)objectContext;
- (id)performResampleOperationWithResampleOptions:(unsigned int)arg1 bitmapContextOptions:(unsigned int)arg2;
- (void)setDesiredSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDisplayName:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setMaskingPath:(struct CGPath { }*)arg1;
- (void)setObjectContext:(id)arg1;

@end
