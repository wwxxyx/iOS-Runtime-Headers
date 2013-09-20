/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSMutableDictionary, RadioStation;

@interface RUStationActivityItemsProvider : NSObject <UIActivityItemsSource> {
    NSMutableDictionary *_shareMessageByShareType;
    NSMutableDictionary *_shareURLByShareType;
    RadioStation *_station;
}

@property(readonly) RadioStation * station;

- (void).cxx_destruct;
- (BOOL)_hasLoadedSharingInformationForActivityType:(id)arg1;
- (void)_loadSharingInformationForActivityType:(id)arg1;
- (id)_shareMessageForActivityType:(id)arg1;
- (int)_shareTypeForActivityType:(id)arg1;
- (id)_shareURLForActivityType:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)initWithRadioStation:(id)arg1;
- (id)station;

@end
