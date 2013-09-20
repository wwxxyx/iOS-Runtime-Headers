/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class MFDeviceContext, MFObjectTable, NSDictionary, NSMutableArray, NSObject<MFDeviceDriver>;

@interface MFGraphicsDevice : NSObject {
    NSDictionary *m_colorMap;
    MFDeviceContext *m_currentDC;
    NSObject<MFDeviceDriver> *m_deviceDriver;
    NSDictionary *m_fillMap;
    MFObjectTable *m_objectTable;
    NSMutableArray *m_savedDC;
    MFObjectTable *m_stockObjects;
}

- (int)abortPath;
- (int)angleArc:(int)arg1 :(int)arg2 :(unsigned int)arg3 :(double)arg4 :(double)arg5;
- (int)arc:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)arcTo:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)beginPath;
- (int)bezier:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)bezierTo:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6;
- (int)bitBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(unsigned int)arg8 :(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg9 :(unsigned int)arg10;
- (int)chord:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)closeCurrentPath:(bool)arg1;
- (int)comment:(id)arg1;
- (id)createBitmap:(unsigned int)arg1 :(unsigned int)arg2 :(unsigned int)arg3 :(unsigned int)arg4 :(const char *)arg5 :(unsigned int)arg6;
- (int)createBrush:(int)arg1 :(id)arg2 :(int)arg3 :(unsigned int)arg4;
- (id)createColorWithRGBBytes:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3 :(unsigned char)arg4;
- (id)createDIBitmap:(const char *)arg1 :(unsigned int)arg2 :(const char *)arg3 :(unsigned int)arg4 :(int)arg5;
- (id)createDIBitmap:(const char *)arg1 :(unsigned int)arg2 :(int)arg3;
- (int)createFontIndirect:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;
- (int)createFontIndirectW:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned int)arg18 :(unsigned int)arg19 :(unsigned int)arg20 :(unsigned int)arg21 :(unsigned int)arg22 :(unsigned int)arg23;
- (int)createPalette:(id)arg1 :(unsigned int)arg2;
- (int)createPatternBrush:(id)arg1 :(unsigned int)arg2 usePaletteForBilevel:(BOOL)arg3;
- (int)createPen:(int)arg1 :(int)arg2 :(id)arg3 :(double*)arg4 :(unsigned int)arg5;
- (int)createRegion:(id)arg1;
- (void)createStockObjects;
- (void)dealloc;
- (int)deleteObject:(int)arg1;
- (int)description:(id)arg1;
- (void)done;
- (int)ellipse:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)endPath;
- (int)excludeClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)extTextOut:(int)arg1 :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int*)arg9 :(int)arg10;
- (int)extTextOutEncoded:(int)arg1 :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int*)arg9 :(int)arg10;
- (int)fillRgn:(unsigned int)arg1 :(unsigned int)arg2;
- (int)fillRgnWithRects:(id)arg1 :(unsigned int)arg2;
- (int)frameRegion:(unsigned int)arg1 :(unsigned int)arg2 :(int)arg3 :(int)arg4;
- (int)frameRegionWithRects:(id)arg1 :(unsigned int)arg2 :(int)arg3 :(int)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })getCanvas;
- (id)getCurrentFont;
- (int)getStockObject:(unsigned int)arg1;
- (id)initWithCanvas:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)intersectClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)invertRgn:(unsigned int)arg1;
- (int)invertRgnWithRects:(id)arg1;
- (int)lineTo:(double)arg1 :(double)arg2;
- (int)maskBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(unsigned int)arg11 :(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg12 :(unsigned int)arg13;
- (int)modifyWorldTransform:(const struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1 :(int)arg2;
- (int)moveTo:(double)arg1 :(double)arg2;
- (int)offsetViewportOrg:(int)arg1 :(int)arg2;
- (int)offsetWindowOrg:(int)arg1 :(int)arg2;
- (int)paintRgn:(unsigned int)arg1;
- (int)paintRgnWithRects:(id)arg1;
- (int)patBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(unsigned int)arg5;
- (int)pie:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)plgBlt:(struct CGPoint { float x1; float x2; }*)arg1 :(id)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(id)arg7 :(int)arg8 :(int)arg9 :(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg10 :(unsigned int)arg11;
- (int)polyPolygon:(struct CGPoint { float x1; float x2; }*)arg1 :(int*)arg2 :(int)arg3;
- (int)polyPolyline:(struct CGPoint { float x1; float x2; }*)arg1 :(int*)arg2 :(int)arg3;
- (int)polygon:(struct CGPoint { float x1; float x2; }*)arg1 :(int)arg2;
- (int)polyline:(struct CGPoint { float x1; float x2; }*)arg1 :(int)arg2;
- (int)realizePalette;
- (id)recolor:(id)arg1 fill:(BOOL)arg2;
- (id)recolor:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3 fill:(BOOL)arg4;
- (int)rectangle:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)resizePalette:(unsigned int)arg1 :(unsigned int)arg2;
- (int)restoreDC:(int)arg1;
- (int)roundRect:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(double)arg5 :(double)arg6;
- (int)saveDC;
- (int)scaleViewportExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)scaleWindowExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)selectClipPath:(int)arg1;
- (int)selectClipRegion:(unsigned int)arg1 :(int)arg2;
- (int)selectClipRegionWithRects:(id)arg1 :(int)arg2;
- (int)selectObject:(int)arg1;
- (int)setArcDirection:(int)arg1;
- (int)setBkColour:(id)arg1;
- (int)setBkMode:(int)arg1;
- (int)setBrushOrg:(double)arg1 :(double)arg2;
- (void)setColorMap:(id)arg1 fillMap:(id)arg2;
- (int)setMapMode:(int)arg1;
- (int)setMetaRgn;
- (int)setMiterLimit:(double)arg1;
- (int)setPaletteEntries:(unsigned int)arg1 :(id)arg2 :(unsigned int)arg3;
- (int)setPolyFillMode:(int)arg1;
- (int)setRop2:(int)arg1;
- (int)setStretchBltMode:(int)arg1;
- (int)setTextAlign:(bool)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)setTextCharExtra:(int)arg1;
- (int)setTextColour:(id)arg1;
- (int)setTextJustification:(int)arg1 :(int)arg2;
- (int)setViewBox:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4;
- (int)setViewportExt:(int)arg1 :(int)arg2;
- (int)setViewportOrg:(int)arg1 :(int)arg2;
- (int)setWindowExt:(int)arg1 :(int)arg2;
- (int)setWindowOrg:(int)arg1 :(int)arg2;
- (int)setWorldTransform:(const struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1;
- (int)stretchBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned int)arg10 :(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg11 :(unsigned int)arg12 usePaletteForBilevel:(BOOL)arg13;
- (int)stretchBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned int)arg10 :(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg11 :(unsigned int)arg12;
- (int)strokeAndFillPath:(bool)arg1 :(bool)arg2;
- (int)textOut:(int)arg1 :(int)arg2 :(id)arg3;
- (int)textOutEncoded:(int)arg1 :(int)arg2 :(id)arg3;
- (int)widenPath;

@end
