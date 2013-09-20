/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class ABVCardLexer, ABVCardValueSetter, NSData, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface ABVCardParser : NSObject {
    BOOL _30vCard;
    NSMutableArray *_addresses;
    NSMutableArray *_aims;
    BOOL _base64;
    NSData *_cropRectChecksum;
    int _cropRectHeight;
    int _cropRectWidth;
    int _cropRectX;
    int _cropRectY;
    NSData *_data;
    NSMutableArray *_dates;
    unsigned int _defaultEncoding;
    NSMutableArray *_emails;
    unsigned int _encoding;
    NSMutableDictionary *_extensions;
    NSString *_first;
    NSString *_formattedName;
    NSString *_grouping;
    BOOL _hasImportErrors;
    NSMutableArray *_icqs;
    NSData *_imageData;
    NSString *_imageURI;
    NSMutableArray *_instantMessengers;
    NSMutableArray *_itemParameters;
    NSMutableArray *_jabbers;
    NSString *_last;
    ABVCardLexer *_lexer;
    NSMutableArray *_msns;
    NSMutableString *_notes;
    NSString *_org;
    NSMutableString *_otherNotes;
    NSMutableArray *_phones;
    BOOL _quotedPrintable;
    NSMutableArray *_relatedNames;
    NSMutableArray *_socialProfiles;
    void *_source;
    NSString *_uid;
    NSMutableArray *_untypedIMs;
    NSMutableArray *_urls;
    ABVCardValueSetter *_valueSetter;
    NSMutableArray *_yahoos;
}

@property void* source;

+ (struct __CFArray { }*)supportedProperties;

- (int)_addIMHandles:(id)arg1 toService:(struct __CFString { }*)arg2 multiValue:(void*)arg3 uniquenessCheckingMultiValue:(void*)arg4;
- (int)_addIMPPProfiles:(id)arg1 multiValue:(void*)arg2 uniquenessCheckingMultiValue:(void*)arg3;
- (id)_genericLabel;
- (BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (BOOL)_setDataValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (BOOL)_setIntValueOrNoteIfNull:(int)arg1 forProperty:(int)arg2;
- (BOOL)_setMultiValuesOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2 valueComparator:(id)arg3;
- (BOOL)_setStringValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (id)_socialProfileDisplayName;
- (id)_socialProfileService;
- (id)_socialProfileUserId;
- (id)_socialProfileUsername;
- (BOOL)_usesArrayForExternalPropKey:(id)arg1;
- (BOOL)_usesRemainingLineForExternalPropKey:(id)arg1;
- (id)_valueSetter;
- (void)addAddressMultiValues;
- (BOOL)addIMValueTo:(id)arg1;
- (void)addInstantMessageMultiValues;
- (void)addMultiValues:(id)arg1 toProperty:(unsigned int)arg2 valueComparator:(id)arg3;
- (void)addSocialProfileMultiValues;
- (void)cleanUpCardState;
- (void*)copyNextPersonWithLength:(int*)arg1 foundProperties:(const struct __CFArray {}**)arg2;
- (id)dateFromISO8601String:(id)arg1;
- (void)dealloc;
- (id)defaultADRLabel;
- (id)defaultLabel;
- (id)defaultURLLabel;
- (void)finalize;
- (id)genericLabel;
- (BOOL)hasImportErrors;
- (BOOL)importToPerson:(void*)arg1 foundProperties:(const struct __CFArray {}**)arg2;
- (BOOL)importToValueSetter:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)noteLackOfValueForImageData;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (BOOL)parseABDATE;
- (BOOL)parseABExtensionType:(id)arg1;
- (BOOL)parseABMaiden;
- (void)parseABOrder;
- (void)parseABPhoto;
- (BOOL)parseABReleatedNames;
- (void)parseABShowAs;
- (BOOL)parseABUID;
- (BOOL)parseADD;
- (BOOL)parseADR;
- (BOOL)parseBDAY;
- (BOOL)parseEMAIL;
- (BOOL)parseIMPP;
- (id)parseInstantMessengerProfile:(id)arg1;
- (BOOL)parseItem;
- (BOOL)parseN;
- (BOOL)parseNICKNAME;
- (BOOL)parseORG;
- (BOOL)parsePhoto:(id)arg1;
- (id)parseRemainingLine;
- (id)parseSingleValue;
- (BOOL)parseSocialProfiles;
- (BOOL)parseTEL;
- (BOOL)parseUID;
- (id)parseURL;
- (BOOL)parseVERSION;
- (id)parseValueArray;
- (struct __CFArray { }*)peopleAndProperties:(const struct __CFArray {}**)arg1;
- (id)phoneLabel;
- (void)setLocalRecordHasAdditionalProperties:(BOOL)arg1;
- (void)setSource:(void*)arg1;
- (id)sortedPeopleAndProperties:(const struct __CFArray {}**)arg1;
- (void*)source;

@end
