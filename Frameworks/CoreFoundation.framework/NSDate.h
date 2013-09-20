/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSDate : NSObject <NSCopying, NSSecureCoding> {
}

+ (id)PKDateTomorrow;
+ (id)PKDateWithDaysBeforeNow:(unsigned int)arg1;
+ (id)PKDateWithDaysFromNow:(unsigned int)arg1;
+ (id)PKDateYesterday;
+ (id)_gkDateFromServerTimestamp:(id)arg1;
+ (id)_gkServerTimestamp;
+ (id)_mapkit_dateWithAbsoluteTime:(double)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)date;
+ (id)dateForDaysSince1970:(int)arg1;
+ (id)dateForDaysSince1970:(int)arg1;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;
+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithSerialNumber:(double)arg1 dateMode:(int)arg2;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (id)dateWithWordDate:(const struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;
+ (id)dateWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6;
+ (int)daysSince1970;
+ (int)daysSince1970;
+ (id)distantFuture;
+ (id)distantPast;
+ (id)mf_copyDateInCommonFormatsWithString:(id)arg1;
+ (id)mf_copyLenientDateInCommonFormatsWithString:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (double)timeIntervalSinceReferenceDate;

- (BOOL)PKIsEqualToDateIgnoringTime:(id)arg1;
- (BOOL)PKIsToday;
- (BOOL)PKIsTomorrow;
- (BOOL)PKIsYesterday;
- (id)__coreroutine_roundedUpDate;
- (BOOL)_afui_isSameDayAsDate:(id)arg1;
- (unsigned long)_cfTypeID;
- (id)_gkFormatedWhenStringWithOptions:(unsigned int)arg1;
- (id)_gkFormattedDateForStyle:(unsigned int)arg1 relative:(BOOL)arg2;
- (id)_gkServerTimestamp;
- (id)_web_RFC1123DateString;
- (int)_web_compareDay:(id)arg1;
- (BOOL)_web_isToday;
- (id)addTimeInterval:(double)arg1;
- (BOOL)afui_isToday;
- (BOOL)afui_isTomorrow;
- (Class)classForCoder;
- (int)compare:(id)arg1;
- (void)copyToWordDate:(struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)dateForDayInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateForDayInTimeZone:(id)arg1;
- (id)dateForEndOfDayInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateForEndOfDayInTimeZone:(id)arg1;
- (id)dateInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (int)day;
- (id)description;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (id)descriptionWithLocale:(id)arg1;
- (id)earlierDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (int)hour;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithMessage:(const struct Date { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; double x3; int x4; unsigned int x5[1]; }*)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isAfterDate:(id)arg1;
- (BOOL)isBeforeDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDate:(id)arg1;
- (BOOL)isNSDate__;
- (id)laterDate:(id)arg1;
- (double)mapToDouble;
- (id)mf_descriptionForMimeHeaders;
- (id)mf_replyPrefixForSender:(id)arg1;
- (int)minute;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (int)month;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)saveToMessage:(struct Date { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; double x3; int x4; unsigned int x5[1]; }*)arg1;
- (int)second;
- (double)timeIntervalSince1970;
- (double)timeIntervalSinceDate:(id)arg1;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceReferenceDate;
- (int)week;
- (int)weekday;
- (int)year;

@end
