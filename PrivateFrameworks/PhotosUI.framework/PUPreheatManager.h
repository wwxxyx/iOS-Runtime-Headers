/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <NSFastEnumeration>, <PLPreheatItemSource>, NSFetchRequest, NSNumber, PUImageManager;

@interface PUPreheatManager : NSObject {
    NSFetchRequest *_fetchRequest;
    int _imageFormat;
    BOOL _imageFormatIsTable;
    NSNumber *_imageFormatKey;
    PUImageManager *_imageManager;
    <PLPreheatItemSource> *_imageTable;
    <NSFastEnumeration> *_previousAssets;
}

@property(retain) NSFetchRequest * fetchRequest;
@property int imageFormat;
@property BOOL imageFormatIsTable;
@property(retain) NSNumber * imageFormatKey;
@property(retain) PUImageManager * imageManager;
@property(retain) <PLPreheatItemSource> * imageTable;
@property(retain) <NSFastEnumeration> * previousAssets;

- (void).cxx_destruct;
- (void)_prefetchAssetsForThumbnails:(id)arg1;
- (void)cancelAllPreheating;
- (id)dataForAsset:(id)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 imageDataOffset:(int*)arg7;
- (void)dealloc;
- (id)description;
- (id)fetchRequest;
- (id)imageForAsset:(id)arg1;
- (int)imageFormat;
- (BOOL)imageFormatIsTable;
- (id)imageFormatKey;
- (id)imageManager;
- (id)imageTable;
- (id)initWithFormat:(int)arg1;
- (void)preheatAssets:(id)arg1 cancelAssets:(id)arg2;
- (id)previousAssets;
- (void)pu_diffsFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 differenceHandler:(id)arg3;
- (void)setFetchRequest:(id)arg1;
- (void)setImageFormat:(int)arg1;
- (void)setImageFormatIsTable:(BOOL)arg1;
- (void)setImageFormatKey:(id)arg1;
- (void)setImageManager:(id)arg1;
- (void)setImageTable:(id)arg1;
- (void)setPreviousAssets:(id)arg1;

@end
