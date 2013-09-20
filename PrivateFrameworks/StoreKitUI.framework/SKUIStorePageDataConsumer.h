/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageDataConsumer : SSVURLDataConsumer {
    Class _storePageClass;
}

@property Class storePageClass;

- (id)_artistPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_bannerRoomComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_chartPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_customPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_groupingPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_multiRoomComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_newCustomPageComponentForBlockType:(id)arg1 context:(id)arg2;
- (id)_newFeaturedContentComponentForKind:(int)arg1 context:(id)arg2;
- (id)_roomComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)init;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (void)setStorePageClass:(Class)arg1;
- (Class)storePageClass;
- (id)storePageWithDictionary:(id)arg1;

@end
