/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
 */

@class NSString;

@interface AWDFaceTimeCallAcceptReceived : PBCodable {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isVideo : 1; 
    NSString *_guid;
    } _has;
    unsigned int _isVideo;
    unsigned long long _timestamp;
}

@property(retain) NSString * guid;
@property(readonly) BOOL hasGuid;
@property BOOL hasIsVideo;
@property BOOL hasTimestamp;
@property unsigned int isVideo;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasGuid;
- (BOOL)hasIsVideo;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (BOOL)readFrom:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasIsVideo:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
