/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSLock;

@interface VKTilePool : VKTileKeyMap {
    NSLock *_lock;
}

- (int)count;
- (void)dealloc;
- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (id)init;
- (id)initWithMapType:(int)arg1;
- (id)objectForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;

@end
