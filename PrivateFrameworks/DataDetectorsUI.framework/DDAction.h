/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class NSDictionary, NSURL;

@interface DDAction : NSObject <NSCoding, NSSecureCoding> {
    struct __CFArray { } *_associatedResults;
    BOOL _cachedAssociatedResults;
    BOOL _cachedCoalescedResult;
    struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; } *_coalescedResult;
    NSDictionary *_context;
    id _delegate;
    BOOL _isDefaultAction;
    struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; } *_result;
    NSURL *_url;
}

@property id delegate;
@property BOOL isDefaultAction;

+ (id)actionWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)arg2 context:(id)arg3;
+ (id)defaultActionWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)arg2 context:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (void)_copyURL:(id)arg1 andString:(id)arg2;
- (void)_copyURL:(id)arg1;
- (void)addToRecents;
- (struct __CFArray { }*)associatedResults;
- (struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)coalescedResult;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)arg2 context:(id)arg3;
- (int)interactionType;
- (BOOL)isDefaultAction;
- (id)localizedName;
- (void)perform;
- (void)prepareViewControllerForActionController:(id)arg1;
- (struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)result;
- (void)setDelegate:(id)arg1;
- (void)setIsDefaultAction:(BOOL)arg1;
- (id)url;
- (id)viewController;

@end
