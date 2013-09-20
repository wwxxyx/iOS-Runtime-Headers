/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSURL, SAEncyclopediaEntityLink;

@interface SAEncyclopediaEntityObject : SADomainObject {
}

@property(copy) NSString * articleAbstract;
@property(retain) SAEncyclopediaEntityLink * articleLink;
@property(copy) NSURL * image;
@property(copy) NSString * name;
@property(copy) NSString * nameAnnotation;
@property(copy) NSArray * propertyGroups;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)articleAbstract;
- (id)articleLink;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)name;
- (id)nameAnnotation;
- (id)propertyGroups;
- (void)setArticleAbstract:(id)arg1;
- (void)setArticleLink:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameAnnotation:(id)arg1;
- (void)setPropertyGroups:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
