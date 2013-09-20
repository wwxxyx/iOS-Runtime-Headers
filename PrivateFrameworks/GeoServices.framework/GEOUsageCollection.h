/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOUsageCollection : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned int probeID : 1; 
        unsigned int sessionID : 1; 
        unsigned int timestamp : 1; 
        unsigned int cellWifi : 1; 
        unsigned int geoService : 1; 
        unsigned int requestDataSize : 1; 
        unsigned int responseDataSize : 1; 
        unsigned int responseTime : 1; 
        unsigned int sessionIDIsPersistent : 1; 
    int _cellWifi;
    NSString *_countryCode;
    int _geoService;
    } _has;
    NSString *_hwMachine;
    } _probeID;
    int _requestDataSize;
    int _responseDataSize;
    int _responseTime;
    } _sessionID;
    BOOL _sessionIDIsPersistent;
    struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } *_tileUsages;
    unsigned int _tileUsagesCount;
    unsigned int _tileUsagesSpace;
    double _timestamp;
}

@property int cellWifi;
@property(retain) NSString * countryCode;
@property int geoService;
@property BOOL hasCellWifi;
@property(readonly) BOOL hasCountryCode;
@property BOOL hasGeoService;
@property(readonly) BOOL hasHwMachine;
@property BOOL hasProbeID;
@property BOOL hasRequestDataSize;
@property BOOL hasResponseDataSize;
@property BOOL hasResponseTime;
@property BOOL hasSessionID;
@property BOOL hasSessionIDIsPersistent;
@property BOOL hasTimestamp;
@property(retain) NSString * hwMachine;
@property struct { unsigned long long x1; unsigned long long x2; } probeID;
@property int requestDataSize;
@property int responseDataSize;
@property int responseTime;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property BOOL sessionIDIsPersistent;
@property(readonly) struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }* tileUsages;
@property(readonly) unsigned int tileUsagesCount;
@property double timestamp;

- (void)addTileUsage:(struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (int)cellWifi;
- (void)clearTileUsages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)geoService;
- (BOOL)hasCellWifi;
- (BOOL)hasCountryCode;
- (BOOL)hasGeoService;
- (BOOL)hasHwMachine;
- (BOOL)hasProbeID;
- (BOOL)hasRequestDataSize;
- (BOOL)hasResponseDataSize;
- (BOOL)hasResponseTime;
- (BOOL)hasSessionID;
- (BOOL)hasSessionIDIsPersistent;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (id)hwMachine;
- (BOOL)isEqual:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })probeID;
- (BOOL)readFrom:(id)arg1;
- (int)requestDataSize;
- (int)responseDataSize;
- (int)responseTime;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (BOOL)sessionIDIsPersistent;
- (void)setCellWifi:(int)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setGeoService:(int)arg1;
- (void)setHasCellWifi:(BOOL)arg1;
- (void)setHasGeoService:(BOOL)arg1;
- (void)setHasProbeID:(BOOL)arg1;
- (void)setHasRequestDataSize:(BOOL)arg1;
- (void)setHasResponseDataSize:(BOOL)arg1;
- (void)setHasResponseTime:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setHasSessionIDIsPersistent:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHwMachine:(id)arg1;
- (void)setProbeID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRequestDataSize:(int)arg1;
- (void)setResponseDataSize:(int)arg1;
- (void)setResponseTime:(int)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionIDIsPersistent:(BOOL)arg1;
- (void)setTileUsages:(struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned int)arg2;
- (void)setTimestamp:(double)arg1;
- (struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })tileUsageAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)tileUsages;
- (unsigned int)tileUsagesCount;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
