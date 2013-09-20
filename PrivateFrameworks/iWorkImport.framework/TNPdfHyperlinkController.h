/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TNPageController;

@interface TNPdfHyperlinkController : TSAPdfHyperlinkController {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mCanvasRect;
    TNPageController *mPageController;
}

- (id).cxx_construct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })canvasRect;
- (id)initWithDocumentRoot:(id)arg1 usingPageController:(id)arg2;

@end
