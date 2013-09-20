/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSMutableArray;

@interface GEODirectionsProblem : PBCodable <NSCopying> {
    struct { 
        unsigned int problematicEventIndex : 1; 
        unsigned int problematicResponseIndex : 1; 
        unsigned int problematicStepIndex : 1; 
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_events;
    } _has;
    NSData *_overviewScreenshotImageData;
    unsigned long long _problematicEventIndex;
    unsigned int _problematicResponseIndex;
    NSData *_problematicRouteID;
    unsigned int _problematicStepIndex;
}

@property(retain) NSMutableArray * directionsRequests;
@property(retain) NSMutableArray * directionsResponses;
@property(retain) NSMutableArray * events;
@property(readonly) BOOL hasOverviewScreenshotImageData;
@property BOOL hasProblematicEventIndex;
@property BOOL hasProblematicResponseIndex;
@property(readonly) BOOL hasProblematicRouteID;
@property BOOL hasProblematicStepIndex;
@property(retain) NSData * overviewScreenshotImageData;
@property unsigned long long problematicEventIndex;
@property unsigned int problematicResponseIndex;
@property(retain) NSData * problematicRouteID;
@property unsigned int problematicStepIndex;

- (void)addDirectionsRequests:(id)arg1;
- (void)addDirectionsResponses:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsRequests;
- (id)directionsRequestsAtIndex:(unsigned int)arg1;
- (unsigned int)directionsRequestsCount;
- (id)directionsResponses;
- (id)directionsResponsesAtIndex:(unsigned int)arg1;
- (unsigned int)directionsResponsesCount;
- (id)events;
- (id)eventsAtIndex:(unsigned int)arg1;
- (unsigned int)eventsCount;
- (BOOL)hasOverviewScreenshotImageData;
- (BOOL)hasProblematicEventIndex;
- (BOOL)hasProblematicResponseIndex;
- (BOOL)hasProblematicRouteID;
- (BOOL)hasProblematicStepIndex;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)overviewScreenshotImageData;
- (unsigned long long)problematicEventIndex;
- (unsigned int)problematicResponseIndex;
- (id)problematicRouteID;
- (unsigned int)problematicStepIndex;
- (BOOL)readFrom:(id)arg1;
- (void)setDirectionsRequests:(id)arg1;
- (void)setDirectionsResponses:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasProblematicEventIndex:(BOOL)arg1;
- (void)setHasProblematicResponseIndex:(BOOL)arg1;
- (void)setHasProblematicStepIndex:(BOOL)arg1;
- (void)setOverviewScreenshotImageData:(id)arg1;
- (void)setProblematicEventIndex:(unsigned long long)arg1;
- (void)setProblematicResponseIndex:(unsigned int)arg1;
- (void)setProblematicRouteID:(id)arg1;
- (void)setProblematicStepIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
