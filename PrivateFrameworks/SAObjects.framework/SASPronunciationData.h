/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSLocale, NSString;

@interface SASPronunciationData : AceObject <SAAceSerializable> {
}

@property(copy) NSString * apgId;
@property(copy) NSString * asrPronunciationData;
@property(copy) NSLocale * language;
@property(copy) NSString * orthography;
@property(copy) NSArray * ttsPronunciations;
@property(copy) NSString * ttsVersion;

+ (id)pronunciationData;
+ (id)pronunciationDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)apgId;
- (id)asrPronunciationData;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (id)orthography;
- (void)setApgId:(id)arg1;
- (void)setAsrPronunciationData:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setTtsPronunciations:(id)arg1;
- (void)setTtsVersion:(id)arg1;
- (id)ttsPronunciations;
- (id)ttsVersion;

@end
