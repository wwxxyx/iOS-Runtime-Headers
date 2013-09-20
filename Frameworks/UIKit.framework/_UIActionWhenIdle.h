/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSInvocation;

@interface _UIActionWhenIdle : NSObject {
    NSInvocation *_invocation;
}

@property(retain) NSInvocation * invocation;

+ (id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void)addObserverToRunLoop;
- (void)dealloc;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)invalidate;
- (id)invocation;
- (void)invoke;
- (BOOL)isValid;
- (void)setInvocation:(id)arg1;

@end
