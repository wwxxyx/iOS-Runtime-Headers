/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaSelectionOptionInternal, NSArray, NSLocale, NSString;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

@property(readonly) NSArray * availableMetadataFormats;
@property(readonly) NSArray * commonMetadata;
@property(readonly) NSLocale * locale;
@property(readonly) NSArray * mediaSubTypes;
@property(readonly) NSString * mediaType;
@property(readonly) BOOL mpIsAC3;
@property(readonly) BOOL mpIsSDH;
@property(getter=isPlayable,readonly) BOOL playable;

+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(BOOL)arg4;

- (id)_ancillaryDescription;
- (id)_groupID;
- (BOOL)_isDesignatedDefault;
- (id)_title;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (BOOL)displaysNonForcedSubtitles;
- (id)group;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (id)init;
- (BOOL)isPlayable;
- (id)locale;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (BOOL)mpIsAC3;
- (BOOL)mpIsSDH;
- (id)optionID;
- (id)propertyList;

@end