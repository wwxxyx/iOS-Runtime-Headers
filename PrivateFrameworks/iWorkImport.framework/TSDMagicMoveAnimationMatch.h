/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDTextureSet;

@interface TSDMagicMoveAnimationMatch : NSObject {
    BOOL _hasBeenTornDown;
    TSDTextureSet *_incomingTexture;
    BOOL _isMorphMatch;
    BOOL _isTextStyleIdenticalExceptSize;
    double _morphEndPercent;
    TSDTextureSet *_morphEndTexture;
    double _morphQueuedPercent;
    TSDTextureSet *_morphQueuedTexture;
    double _morphStartPercent;
    TSDTextureSet *_morphStartTexture;
    TSDTextureSet *_outgoingTexture;
    BOOL _shouldDisableTextMorphing;
}

@property(retain) TSDTextureSet * incomingTexture;
@property(readonly) BOOL isMatched;
@property BOOL isMorphMatch;
@property BOOL isTextStyleIdenticalExceptSize;
@property(retain) TSDTextureSet * outgoingTexture;
@property BOOL shouldDisableTextMorphing;

+ (id)animationMatch;
+ (unsigned int)magicMoveMorphTexturesPerSecond;

- (void)addMorphTexture:(id)arg1 forEndingTime:(double)arg2;
- (void)dealloc;
- (id)description;
- (id)incomingTexture;
- (id)init;
- (BOOL)isMatched;
- (BOOL)isMorphMatch;
- (BOOL)isTextStyleIdenticalExceptSize;
- (id)morphTexturesAtTime:(double)arg1;
- (id)outgoingTexture;
- (void)setIncomingTexture:(id)arg1;
- (void)setIsMorphMatch:(BOOL)arg1;
- (void)setIsTextStyleIdenticalExceptSize:(BOOL)arg1;
- (void)setOutgoingTexture:(id)arg1;
- (void)setShouldDisableTextMorphing:(BOOL)arg1;
- (BOOL)shouldDisableTextMorphing;
- (void)teardown;

@end
