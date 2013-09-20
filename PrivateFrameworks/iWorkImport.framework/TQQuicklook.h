/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKRenderingExporter>, NSString, TSABaseApplicationDelegate, TSACirrusDocument, TSUTemporaryDirectory;

@interface TQQuicklook : NSObject {
    TSABaseApplicationDelegate *mBaseAppDelegate;
    TSACirrusDocument *mDocument;
    <TSKRenderingExporter> *mExporter;
    NSString *mPassphrase;
    NSString *mPath;
    TSUTemporaryDirectory *mTemporaryDirectory;
}

+ (void)loadAssetColorMap;
+ (id)tsuColorFromColorArray:(id)arg1;
+ (void)unloadAssetColorMap;

- (Class)appDelegateClass;
- (void)close;
- (void)dealloc;
- (id)initWithPath:(id)arg1 passphrase:(id)arg2;
- (BOOL)load;
- (id)newPDFForPageNumber:(unsigned int)arg1;
- (id)newPDFPreviewAndClose;
- (unsigned int)pageCount;
- (id)sheetNameForPageNumber:(unsigned int)arg1 isForm:(BOOL*)arg2;
- (id)thumbnail;
- (BOOL)writePreviewToOutput:(id)arg1 pageNumber:(unsigned int)arg2;

@end
