/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, NSMutableArray;

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned int endTimeStamp : 1; 
        unsigned int startTimeStamp : 1; 
    NSMutableArray *_directionsFeedbacks;
    double _endTimeStamp;
    } _has;
    GEOLocation *_routeCancelledLocation;
    double _startTimeStamp;
}

@property(retain) NSMutableArray * directionsFeedbacks;
@property double endTimeStamp;
@property BOOL hasEndTimeStamp;
@property(readonly) BOOL hasRouteCancelledLocation;
@property BOOL hasStartTimeStamp;
@property(retain) GEOLocation * routeCancelledLocation;
@property double startTimeStamp;

- (void)addDirectionsFeedback:(id)arg1;
- (void)clearDirectionsFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackAtIndex:(unsigned int)arg1;
- (id)directionsFeedbacks;
- (unsigned int)directionsFeedbacksCount;
- (double)endTimeStamp;
- (BOOL)hasEndTimeStamp;
- (BOOL)hasRouteCancelledLocation;
- (BOOL)hasStartTimeStamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routeCancelledLocation;
- (void)setDirectionsFeedbacks:(id)arg1;
- (void)setEndTimeStamp:(double)arg1;
- (void)setHasEndTimeStamp:(BOOL)arg1;
- (void)setHasStartTimeStamp:(BOOL)arg1;
- (void)setRouteCancelledLocation:(id)arg1;
- (void)setStartTimeStamp:(double)arg1;
- (double)startTimeStamp;
- (void)writeTo:(id)arg1;

@end
