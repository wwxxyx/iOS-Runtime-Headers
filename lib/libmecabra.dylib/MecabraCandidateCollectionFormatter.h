/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@class NSArray, NSMutableDictionary;

@interface MecabraCandidateCollectionFormatter : NSObject {
    NSMutableDictionary *_candidateToStrokeCountGroup;
    NSMutableDictionary *_classifierToCandidateGroup;
}

@property(retain) NSMutableDictionary * candidateToStrokeCountGroup;
@property(readonly) NSArray * classifierKeys;
@property(retain) NSMutableDictionary * classifierToCandidateGroup;

- (void)addCandidate:(id)arg1 forClassifier:(id)arg2 strokeCount:(unsigned int)arg3 sortingType:(int)arg4 language:(int)arg5;
- (BOOL)candidateIsSimplifiedOnly:(id)arg1 language:(int)arg2;
- (BOOL)candidateIsTraditionalOnly:(id)arg1 language:(int)arg2;
- (id)candidateToStrokeCountGroup;
- (id)candidatesForClassifier:(id)arg1;
- (id)classifierKeys;
- (id)classifierToCandidateGroup;
- (void)dealloc;
- (id)init;
- (void)setCandidateToStrokeCountGroup:(id)arg1;
- (void)setClassifierToCandidateGroup:(id)arg1;
- (unsigned int)strokeCountForCandidate:(id)arg1;

@end
