/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSPObjectDelegate>, NSString, TSPComponent, TSPObject, TSPObjectContext, TSPUnknownContent;

@interface TSPObject : NSObject {
    TSPComponent *_component;
    long long _creationModifyObjectToken;
    <TSPObjectDelegate> *_delegate;
    long long _identifier;
    long long _modifyObjectToken;
    long long _unarchiverIdentifier;
    TSPUnknownContent *_unknownContent;
}

@property(readonly) BOOL allowsDuplicatesOutsideOfDocumentPackage;
@property(readonly) BOOL allowsImplicitComponentOwnership;
@property(readonly) TSPObject * componentRootObject;
@property(readonly) TSPObjectContext * context;
@property(readonly) unsigned int delayedArchivingPriority;
@property(readonly) BOOL dirtiesDocumentPackage;
@property(readonly) BOOL isCommandObject;
@property(readonly) BOOL isComponentRoot;
@property(readonly) BOOL needsArchiving;
@property(readonly) NSString * packageLocator;
@property(readonly) BOOL shouldDelayArchiving;
@property(readonly) BOOL storeOutsideObjectArchive;
@property TSPComponent * tsp_component;
@property(readonly) long long tsp_creationModifyObjectToken;
@property <TSPObjectDelegate> * tsp_delegate;
@property long long tsp_identifier;
@property long long tsp_modifyObjectToken;
@property(readonly) long long tsp_unarchiverIdentifier;
@property(readonly) TSPUnknownContent * tsp_unknownContent;

+ (id)newObjectForUnarchiver:(id)arg1;
+ (BOOL)tsp_isTransientObjectIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (BOOL)allowsDuplicatesOutsideOfDocumentPackage;
- (BOOL)allowsImplicitComponentOwnership;
- (id)componentRootObject;
- (id)context;
- (unsigned int)delayedArchivingPriority;
- (void)didFinishUnarchiving;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (BOOL)dirtiesDocumentPackage;
- (id)documentRoot;
- (id)init;
- (id)initDocumentObjectWithContext:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)isCommandObject;
- (BOOL)isComponentRoot;
- (BOOL)needsArchiving;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (void)setTsp_component:(id)arg1;
- (void)setTsp_delegate:(id)arg1;
- (void)setTsp_identifier:(long long)arg1;
- (void)setTsp_modifyObjectToken:(long long)arg1;
- (BOOL)shouldDelayArchiving;
- (BOOL)storeOutsideObjectArchive;
- (id)tsp_component;
- (long long)tsp_creationModifyObjectToken;
- (id)tsp_delegate;
- (long long)tsp_identifier;
- (long long)tsp_modifyObjectToken;
- (long long)tsp_unarchiverIdentifier;
- (id)tsp_unknownContent;
- (void)willModify;
- (void)willModifyForUpgrade;

@end
