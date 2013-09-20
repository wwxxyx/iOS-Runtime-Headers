/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufMMCS.dylib
 */

@class NSMutableArray, NSString;

@interface AWDMMCSPutRequestInfo : PBCodable {
    struct { 
        unsigned int duration : 1; 
        unsigned int startTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int cancelledErrorCode : 1; 
        unsigned int chunksUploaded : 1; 
        unsigned int itemCount : 1; 
        unsigned int itemsAlreadyPresentCount : 1; 
        unsigned int itemsNotPresentCount : 1; 
        unsigned int itemsPartiallyPresentCount : 1; 
        unsigned int requestErrorCode : 1; 
    NSMutableArray *_authHttpInfos;
    NSMutableArray *_cancelErrors;
    int _cancelledErrorCode;
    NSString *_cancelledErrorDomain;
    NSMutableArray *_chunkingInfos;
    int _chunksUploaded;
    NSString *_clientId;
    NSMutableArray *_completeHttpInfos;
    NSMutableArray *_containerHttpInfos;
    long long _duration;
    NSMutableArray *_errors;
    } _has;
    int _itemCount;
    int _itemsAlreadyPresentCount;
    int _itemsNotPresentCount;
    int _itemsPartiallyPresentCount;
    int _requestErrorCode;
    NSString *_requestErrorDomain;
    long long _startTime;
    long long _timestamp;
}

@property(retain) NSMutableArray * authHttpInfos;
@property(retain) NSMutableArray * cancelErrors;
@property int cancelledErrorCode;
@property(retain) NSString * cancelledErrorDomain;
@property(retain) NSMutableArray * chunkingInfos;
@property int chunksUploaded;
@property(retain) NSString * clientId;
@property(retain) NSMutableArray * completeHttpInfos;
@property(retain) NSMutableArray * containerHttpInfos;
@property long long duration;
@property(retain) NSMutableArray * errors;
@property BOOL hasCancelledErrorCode;
@property(readonly) BOOL hasCancelledErrorDomain;
@property BOOL hasChunksUploaded;
@property(readonly) BOOL hasClientId;
@property BOOL hasDuration;
@property BOOL hasItemCount;
@property BOOL hasItemsAlreadyPresentCount;
@property BOOL hasItemsNotPresentCount;
@property BOOL hasItemsPartiallyPresentCount;
@property BOOL hasRequestErrorCode;
@property(readonly) BOOL hasRequestErrorDomain;
@property BOOL hasStartTime;
@property BOOL hasTimestamp;
@property int itemCount;
@property int itemsAlreadyPresentCount;
@property int itemsNotPresentCount;
@property int itemsPartiallyPresentCount;
@property int requestErrorCode;
@property(retain) NSString * requestErrorDomain;
@property long long startTime;
@property long long timestamp;

- (void)addAuthHttpInfos:(id)arg1;
- (void)addCancelError:(id)arg1;
- (void)addChunkingInfos:(id)arg1;
- (void)addCompleteHttpInfos:(id)arg1;
- (void)addContainerHttpInfos:(id)arg1;
- (void)addError:(id)arg1;
- (id)authHttpInfos;
- (id)authHttpInfosAtIndex:(unsigned int)arg1;
- (unsigned int)authHttpInfosCount;
- (id)cancelErrorAtIndex:(unsigned int)arg1;
- (id)cancelErrors;
- (unsigned int)cancelErrorsCount;
- (int)cancelledErrorCode;
- (id)cancelledErrorDomain;
- (id)chunkingInfos;
- (id)chunkingInfosAtIndex:(unsigned int)arg1;
- (unsigned int)chunkingInfosCount;
- (int)chunksUploaded;
- (void)clearAuthHttpInfos;
- (void)clearCancelErrors;
- (void)clearChunkingInfos;
- (void)clearCompleteHttpInfos;
- (void)clearContainerHttpInfos;
- (void)clearErrors;
- (id)clientId;
- (id)completeHttpInfos;
- (id)completeHttpInfosAtIndex:(unsigned int)arg1;
- (unsigned int)completeHttpInfosCount;
- (id)containerHttpInfos;
- (id)containerHttpInfosAtIndex:(unsigned int)arg1;
- (unsigned int)containerHttpInfosCount;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (id)errorAtIndex:(unsigned int)arg1;
- (id)errors;
- (unsigned int)errorsCount;
- (BOOL)hasCancelledErrorCode;
- (BOOL)hasCancelledErrorDomain;
- (BOOL)hasChunksUploaded;
- (BOOL)hasClientId;
- (BOOL)hasDuration;
- (BOOL)hasItemCount;
- (BOOL)hasItemsAlreadyPresentCount;
- (BOOL)hasItemsNotPresentCount;
- (BOOL)hasItemsPartiallyPresentCount;
- (BOOL)hasRequestErrorCode;
- (BOOL)hasRequestErrorDomain;
- (BOOL)hasStartTime;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)itemCount;
- (int)itemsAlreadyPresentCount;
- (int)itemsNotPresentCount;
- (int)itemsPartiallyPresentCount;
- (BOOL)readFrom:(id)arg1;
- (int)requestErrorCode;
- (id)requestErrorDomain;
- (void)setAuthHttpInfos:(id)arg1;
- (void)setCancelErrors:(id)arg1;
- (void)setCancelledErrorCode:(int)arg1;
- (void)setCancelledErrorDomain:(id)arg1;
- (void)setChunkingInfos:(id)arg1;
- (void)setChunksUploaded:(int)arg1;
- (void)setClientId:(id)arg1;
- (void)setCompleteHttpInfos:(id)arg1;
- (void)setContainerHttpInfos:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setErrors:(id)arg1;
- (void)setHasCancelledErrorCode:(BOOL)arg1;
- (void)setHasChunksUploaded:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasItemCount:(BOOL)arg1;
- (void)setHasItemsAlreadyPresentCount:(BOOL)arg1;
- (void)setHasItemsNotPresentCount:(BOOL)arg1;
- (void)setHasItemsPartiallyPresentCount:(BOOL)arg1;
- (void)setHasRequestErrorCode:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setItemCount:(int)arg1;
- (void)setItemsAlreadyPresentCount:(int)arg1;
- (void)setItemsNotPresentCount:(int)arg1;
- (void)setItemsPartiallyPresentCount:(int)arg1;
- (void)setRequestErrorCode:(int)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setTimestamp:(long long)arg1;
- (long long)startTime;
- (long long)timestamp;
- (void)writeTo:(id)arg1;

@end
