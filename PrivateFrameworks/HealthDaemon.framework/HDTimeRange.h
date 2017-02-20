/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTimeRange : NSObject <NSCopying> {
    BOOL  _deleted;
    double  _end;
    double  _start;
}

@property (nonatomic) BOOL deleted;
@property (nonatomic) double end;
@property (nonatomic) double start;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)deleted;
- (double)end;
- (void)setDeleted:(BOOL)arg1;
- (void)setEnd:(double)arg1;
- (void)setStart:(double)arg1;
- (double)start;

@end