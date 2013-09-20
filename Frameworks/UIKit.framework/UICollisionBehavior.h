/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UICollisionBehaviorDelegate>, NSArray, NSMutableDictionary, PKExtendedPhysicsBody;

@interface UICollisionBehavior : UIDynamicBehavior {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct { 
        unsigned int delegateBeganWithItem : 1; 
        unsigned int delegateEndedWithItem : 1; 
        unsigned int delegateBeganWithBoundary : 1; 
        unsigned int delegateEndedWithBoundary : 1; 
    NSMutableDictionary *_boundaryBodies;
    NSMutableDictionary *_boundaryPaths;
    } _collisionBehaviorFlags;
    <UICollisionBehaviorDelegate> *_collisionDelegate;
    unsigned int _collisionMode;
    unsigned int _groupBID;
    unsigned int _groupVID;
    PKExtendedPhysicsBody *_implicitBoundsBody;
    } _implicitBoundsInsets;
    BOOL _usesImplicitBounds;
}

@property(readonly) NSArray * boundaryIdentifiers;
@property <UICollisionBehaviorDelegate> * collisionDelegate;
@property unsigned int collisionMode;
@property(readonly) NSArray * items;
@property BOOL translatesReferenceBoundsIntoBoundary;

- (void)_addItem:(id)arg1;
- (void)_applySettings;
- (void)_associate;
- (void)_didBeginContact:(id)arg1;
- (void)_didEndContact:(id)arg1;
- (void)_dissociate;
- (void)_reevaluate:(unsigned int)arg1;
- (void)_removeExplicitBoundaries;
- (void)_removeImplicitBoundaries;
- (void)_setCollisions:(BOOL)arg1 forBody:(id)arg2 isEdge:(BOOL)arg3;
- (void)_setTranslatesReferenceItemBounds:(BOOL)arg1 intoBoundaryWithInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (void)_setupExplicitBoundaries;
- (void)_setupImplicitBoundaries;
- (void)addBoundaryWithIdentifier:(id)arg1 forPath:(id)arg2;
- (void)addBoundaryWithIdentifier:(id)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2 toPoint:(struct CGPoint { float x1; float x2; })arg3;
- (void)addItem:(id)arg1;
- (id)boundaryIdentifiers;
- (id)boundaryWithIdentifier:(id)arg1;
- (id)collisionDelegate;
- (unsigned int)collisionMode;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)items;
- (void)removeAllBoundaries;
- (void)removeBoundaryWithIdentifier:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)setCollisionDelegate:(id)arg1;
- (void)setCollisionMode:(unsigned int)arg1;
- (void)setTranslatesReferenceBoundsIntoBoundary:(BOOL)arg1;
- (void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)translatesReferenceBoundsIntoBoundary;

@end
