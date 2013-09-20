/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSString;

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, TSPSplitableData> {
}

@property(readonly) NSData * SHA1Data;
@property(readonly) NSString * SHA1HexString;

+ (id)MCDataWithCFData:(struct __CFData { }*)arg1;
+ (id)MCDataWithHexString:(id)arg1;
+ (id)SBKStringByMD5HashingString:(id)arg1;
+ (id)SBKStringFromDigestData:(id)arg1;
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 queue:(id)arg2 handler:(id)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)data;
+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(BOOL)arg2 error:(id*)arg3;
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(BOOL)arg3 error:(id*)arg4;
+ (id)dataFromDispatchData:(id)arg1;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithData:(id)arg1;
+ (id)dataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2;
+ (id)dataWithHexString:(id)arg1;
+ (id)dataWithHexString:(id)arg1;
+ (id)dataWithRandomBytes:(unsigned int)arg1;
+ (id)dataWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
+ (id)mappedDataWithContentsOfTemporaryFile:(id)arg1 error:(id*)arg2;
+ (id)nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; boolx7; struct SsrwOOStream {} *x8; }*)arg1;
+ (BOOL)supportsSecureCoding;

- (const struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)CDXTicket;
- (id)CDXTicketExpirationDate;
- (BOOL)CDXTicketIsHolePunch;
- (BOOL)CDXTicketIsReflected;
- (BOOL)CDXTicketIsRelatedToTicket:(id)arg1;
- (BOOL)CDXTicketIsStub;
- (int)CDXTicketPCNT;
- (int)CDXTicketPID;
- (unsigned int)CDXTicketRevision;
- (unsigned long long)CDXTicketSID;
- (id)CDXTicketTrimmed;
- (BOOL)CDXTicketWellFormed;
- (id)MCBase64String;
- (id)MCHexString;
- (id)MCInitWithBase64String:(id)arg1;
- (id)MSBase64Encoding;
- (id)MSHexString;
- (id)MSInitWithBase64Encoding:(id)arg1;
- (id)SBKDataByDeflatingWithGZip;
- (id)SBKDataByDeflatingWithNoZipHeader;
- (id)SBKDataByInflatingWithGZip;
- (id)SBKDataByInflatingWithNoZipHeader;
- (id)SHA1Data;
- (id)SHA1Hash;
- (id)SHA1HexString;
- (id)SHA256Hash;
- (id)TR_compressedGzipData;
- (id)TR_decompressedGzipData;
- (id)_FTCopyGzippedData;
- (id)_FTDecompressData;
- (id)_FTOptionallyDecompressData;
- (id)_FTStringFromBaseData;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned int)arg1;
- (id)_SBKDataByInflatingWithNoZipHeader;
- (BOOL)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned int)arg2;
- (const void*)_bytesIfCompact;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (unsigned long)_cfTypeID;
- (id)_geo_newXPCData;
- (id)_gkBase64EncodedString;
- (id)_gkMD5HashData;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashData;
- (id)_gkSHA1HashString;
- (id)_initWithBase64EncodedCharacterEnumerator:(id)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned int)arg2;
- (BOOL)_isDispatchData;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMETypeForXML;
- (BOOL)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (int)_web_locationAfterFirstBlankLine;
- (id)_web_parseRFC822HeaderFields;
- (BOOL)_web_startsWithBlankLine;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (id)_webkit_parseRFC822HeaderFields;
- (id)abDecodeVCardBase64;
- (id)abDecodedUTF7;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned int)arg1;
- (BOOL)abIsUTF16EntourageVCard;
- (id)abStringAtRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inEncoding:(unsigned int)arg2;
- (id)afui_dataByCompressingWithGzip;
- (id)base64Decoded;
- (id)base64Encoded;
- (id)base64EncodedDataWithOptions:(unsigned int)arg1;
- (id)base64EncodedStringWithOptions:(unsigned int)arg1;
- (id)base64Encoding;
- (const void*)bytes;
- (Class)classForCoder;
- (id)copyDeflatedData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cr_md5DigestHexString;
- (id)decompressedGzipData;
- (id)decompressedGzipDataUsingTemporaryFile;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(id)arg1;
- (id)fileSafeBase64Encoding;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)getBytes:(void*)arg1;
- (id)gzipInflate;
- (unsigned int)hash;
- (id)hexEncoding;
- (id)hexString;
- (id)hexString;
- (id)hexStringOfBytes:(char *)arg1 withLength:(int)arg2;
- (id)hexStringValue;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBase64EncodedString_gk:(id)arg1;
- (id)initWithBase64Encoding:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(id)arg4;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 deallocator:(id)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (BOOL)isNSData__;
- (unsigned int)length;
- (id)lowercaseHexStringWithoutSpaces;
- (id)md5Digest;
- (id)mf_MD5Digest;
- (id)mf_copyHexString;
- (id)mf_createAttachmentWithFilename:(id)arg1 UTIType:(id)arg2;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (id)mf_decodeBase64;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)mf_decodeModifiedBase64;
- (id)mf_decodeQuotedPrintableForText:(BOOL)arg1;
- (id)mf_decodeUuencoded;
- (id)mf_encodeBase64;
- (id)mf_encodeBase64HeaderData;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_encodeModifiedBase64;
- (BOOL)mf_immutable;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfRFC822HeaderData;
- (id)mf_subdataFromIndex:(unsigned int)arg1;
- (id)mf_subdataToIndex:(unsigned int)arg1;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)mutableCDXTicket;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)pl_adviceDoNotNeed;
- (void)pl_adviceWillNeed;
- (unsigned int)pl_advisoryLength;
- (id)propertyListForRadioResponseReturningError:(id*)arg1 unparsedResponseDictionary:(id*)arg2;
- (id)propertyListForRadioResponseReturningError:(id*)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)sha1Digest;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)sockAddr;
- (void)splitDataWithMaxSize:(unsigned long)arg1 subdataHandlerBlock:(id)arg2;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)uppercaseHexStringWithoutSpaces;
- (id)webSafeBase64Data;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 encryptionKey:(id)arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

@end
