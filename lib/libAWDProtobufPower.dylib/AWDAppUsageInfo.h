/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufPower.dylib
 */

@class NSString;

@interface AWDAppUsageInfo : PBCodable {
    struct { 
        unsigned int appBGCount : 1; 
        unsigned int appBGDuration : 1; 
        unsigned int appFGCount : 1; 
        unsigned int appFGDuration : 1; 
    unsigned int _appBGCount;
    unsigned int _appBGDuration;
    NSString *_appBundleId;
    unsigned int _appFGCount;
    unsigned int _appFGDuration;
    } _has;
}

@property unsigned int appBGCount;
@property unsigned int appBGDuration;
@property(retain) NSString * appBundleId;
@property unsigned int appFGCount;
@property unsigned int appFGDuration;
@property BOOL hasAppBGCount;
@property BOOL hasAppBGDuration;
@property(readonly) BOOL hasAppBundleId;
@property BOOL hasAppFGCount;
@property BOOL hasAppFGDuration;

- (unsigned int)appBGCount;
- (unsigned int)appBGDuration;
- (id)appBundleId;
- (unsigned int)appFGCount;
- (unsigned int)appFGDuration;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAppBGCount;
- (BOOL)hasAppBGDuration;
- (BOOL)hasAppBundleId;
- (BOOL)hasAppFGCount;
- (BOOL)hasAppFGDuration;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAppBGCount:(unsigned int)arg1;
- (void)setAppBGDuration:(unsigned int)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setAppFGCount:(unsigned int)arg1;
- (void)setAppFGDuration:(unsigned int)arg1;
- (void)setHasAppBGCount:(BOOL)arg1;
- (void)setHasAppBGDuration:(BOOL)arg1;
- (void)setHasAppFGCount:(BOOL)arg1;
- (void)setHasAppFGDuration:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
