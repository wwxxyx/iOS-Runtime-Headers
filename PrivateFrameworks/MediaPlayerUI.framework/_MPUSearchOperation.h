/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class MPMediaQuery, MPUSearchDataSource;

@interface _MPUSearchOperation : NSOperation {
    MPUSearchDataSource *_dataSource;
    int _entityType;
    MPMediaQuery *_query;
}

@property(readonly) MPUSearchDataSource * dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (id)description;
- (void)executeSearch;
- (id)initWithSearchDataSource:(id)arg1;
- (void)main;

@end
