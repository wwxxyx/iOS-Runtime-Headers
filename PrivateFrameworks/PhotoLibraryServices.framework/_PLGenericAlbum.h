/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, NSMutableSet, NSNumber, NSString, PLManagedAsset;

@interface _PLGenericAlbum : PLManagedObject {
}

@property(retain) NSMutableSet * albumLists;
@property(retain) PLManagedAsset * keyAsset;
@property(retain) NSNumber * kind;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(retain) NSDictionary * slideshowSettings;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(retain) NSString * title;
@property(retain) NSString * uuid;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

@end
