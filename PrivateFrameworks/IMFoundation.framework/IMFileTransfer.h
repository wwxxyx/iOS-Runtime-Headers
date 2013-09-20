/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSData, NSDate, NSDictionary, NSString, NSURL;

@interface IMFileTransfer : NSObject {
    NSString *_accountID;
    unsigned long long _averageTransferRate;
    NSDate *_createdDate;
    unsigned long long _currentBytes;
    int _error;
    NSString *_errorDescription;
    NSString *_filename;
    NSString *_guid;
    unsigned long _hfsCreator;
    unsigned short _hfsFlags;
    unsigned long _hfsType;
    BOOL _isDirectory;
    BOOL _isIncoming;
    unsigned long long _lastAveragedBytes;
    double _lastAveragedInterval;
    double _lastUpdatedInterval;
    NSData *_localBookmark;
    NSURL *_localURL;
    NSDictionary *_localUserInfo;
    NSString *_messageGUID;
    NSString *_mimeType;
    BOOL _needsWrapper;
    NSString *_otherPerson;
    BOOL _shouldAttemptToResume;
    BOOL _shouldForceArchive;
    NSDate *_startDate;
    unsigned long long _totalBytes;
    NSDictionary *_transcoderUserInfo;
    NSURL *_transferDataURL;
    int _transferState;
    NSString *_transferredFilename;
    NSString *_utiType;
    BOOL _wasRegisteredAsStandalone;
}

@property(readonly) unsigned long long _lastAveragedBytes;
@property(setter=_setLastAveragedInterval:) double _lastAveragedInterval;
@property(setter=_setLastUpdatedInterval:) double _lastUpdatedInterval;
@property(setter=_setNeedsWrapper:) BOOL _needsWrapper;
@property(retain) NSString * accountID;
@property unsigned long long averageTransferRate;
@property(readonly) BOOL canBeAccepted;
@property(retain) NSDate * createdDate;
@property unsigned long long currentBytes;
@property(readonly) NSString * displayName;
@property int error;
@property(retain) NSString * errorDescription;
@property(readonly) BOOL existsAtLocalPath;
@property(retain) NSString * filename;
@property(retain) NSString * guid;
@property unsigned long hfsCreator;
@property unsigned short hfsFlags;
@property unsigned long hfsType;
@property BOOL isDirectory;
@property(readonly) BOOL isFinished;
@property BOOL isIncoming;
@property(retain) NSData * localBookmark;
@property(retain) NSString * localPath;
@property(retain) NSURL * localURL;
@property(readonly) NSURL * localURLWithoutBookmarkResolution;
@property(retain) NSString * messageGUID;
@property(readonly) NSString * mimeType;
@property(retain) NSString * otherPerson;
@property BOOL shouldAttemptToResume;
@property BOOL shouldForceArchive;
@property(retain) NSDate * startDate;
@property unsigned long long totalBytes;
@property(retain) NSDictionary * transcoderUserInfo;
@property(retain) NSURL * transferDataURL;
@property int transferState;
@property(retain) NSString * transferredFilename;
@property(retain) NSString * type;
@property(retain) NSDictionary * userInfo;
@property(setter=setRegisteredAsStandalone:) BOOL wasRegisteredAsStandalone;

+ (BOOL)_doesLocalURLRequireArchiving:(id)arg1;
+ (id)_invalidCharactersForFileTransferName;

- (void)_calculateTypeInformation;
- (void)_clear;
- (id)_dictionaryRepresentation;
- (id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned long)arg8 hfsCreator:(unsigned long)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(BOOL)arg11;
- (unsigned long long)_lastAveragedBytes;
- (double)_lastAveragedInterval;
- (double)_lastUpdatedInterval;
- (BOOL)_needsWrapper;
- (void)_setAccount:(id)arg1 otherPerson:(id)arg2;
- (void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3;
- (void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2;
- (void)_setDirectory:(BOOL)arg1 hfsType:(unsigned long)arg2 hfsCreator:(unsigned long)arg3 hfsFlags:(unsigned short)arg4;
- (void)_setError:(int)arg1;
- (void)_setErrorDescription:(id)arg1;
- (void)_setForceArchive:(BOOL)arg1;
- (void)_setLastAveragedInterval:(double)arg1;
- (void)_setLastUpdatedInterval:(double)arg1;
- (void)_setLocalPath:(id)arg1;
- (void)_setLocalURL:(id)arg1;
- (void)_setNeedsWrapper:(BOOL)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setTransferDataURL:(id)arg1;
- (void)_setTransferState:(int)arg1;
- (BOOL)_updateWithDictionaryRepresentation:(id)arg1;
- (id)accountID;
- (unsigned long long)averageTransferRate;
- (BOOL)canBeAccepted;
- (id)createdDate;
- (unsigned long long)currentBytes;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (int)error;
- (id)errorDescription;
- (BOOL)existsAtLocalPath;
- (id)filename;
- (id)guid;
- (unsigned long)hfsCreator;
- (unsigned short)hfsFlags;
- (unsigned long)hfsType;
- (id)init;
- (BOOL)isDirectory;
- (BOOL)isFinished;
- (BOOL)isIncoming;
- (id)localBookmark;
- (id)localPath;
- (id)localURL;
- (id)localURLWithoutBookmarkResolution;
- (id)messageGUID;
- (id)mimeType;
- (id)otherPerson;
- (void)setAccountID:(id)arg1;
- (void)setAverageTransferRate:(unsigned long long)arg1;
- (void)setCreatedDate:(id)arg1;
- (void)setCurrentBytes:(unsigned long long)arg1;
- (void)setFilename:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHfsCreator:(unsigned long)arg1;
- (void)setHfsFlags:(unsigned short)arg1;
- (void)setHfsType:(unsigned long)arg1;
- (void)setIsDirectory:(BOOL)arg1;
- (void)setIsIncoming:(BOOL)arg1;
- (void)setLocalBookmark:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setOtherPerson:(id)arg1;
- (void)setRegisteredAsStandalone:(BOOL)arg1;
- (void)setShouldAttemptToResume:(BOOL)arg1;
- (void)setTotalBytes:(unsigned long long)arg1;
- (void)setTranscoderUserInfo:(id)arg1;
- (void)setTransferredFilename:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (BOOL)shouldAttemptToResume;
- (BOOL)shouldForceArchive;
- (id)startDate;
- (unsigned long long)totalBytes;
- (id)transcoderUserInfo;
- (id)transferDataURL;
- (int)transferState;
- (id)transferredFilename;
- (id)type;
- (id)userInfo;
- (BOOL)wasRegisteredAsStandalone;

@end
