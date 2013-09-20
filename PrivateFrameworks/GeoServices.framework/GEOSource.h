/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOSource : PBCodable <NSCopying> {
    NSString *_sourceId;
    NSString *_sourceName;
    NSString *_sourceVersion;
}

@property(readonly) BOOL hasSourceVersion;
@property(retain) NSString * sourceId;
@property(retain) NSString * sourceName;
@property(retain) NSString * sourceVersion;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSourceVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setSourceId:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (id)sourceId;
- (id)sourceName;
- (id)sourceVersion;
- (void)writeTo:(id)arg1;

@end
