/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class CoreThemeDocument;

@interface TDThemeSchema : NSObject {
    CoreThemeDocument *_doc;
}

+ (BOOL)loadThemeConstantsForEntity:(id)arg1 inContext:(id)arg2;

- (void)_addSchemaPartDefinitionsForStandardElement:(const struct { char *x1; char *x2; BOOL x3; int x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; int x_5_1_4; int x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; int x_6_2_3; unsigned int x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)arg1 withElement:(id)arg2;
- (BOOL)_renditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isEqualToKeyIgnoringLook:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
- (void)_sanityCheckObjectsWithEntityName:(id)arg1 globalDescriptor:(void*)arg2 matchIdentifierOnly:(BOOL)arg3;
- (void)_sanityCheckSchemaAssets;
- (void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
- (void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const struct { char *x1; char *x2; BOOL x3; int x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; int x_5_1_4; int x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; int x_6_2_3; unsigned int x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)arg1 withElement:(id)arg2;
- (void)dealloc;
- (id)initWithThemeDocument:(id)arg1;
- (void)loadArtworkDraftTypes;
- (void)loadBasicThemePart;
- (void)loadColorNames;
- (void)loadColorStatuses;
- (void)loadDefaultFontCustomizations;
- (void)loadEffectConstants;
- (void)loadIterationTypes;
- (void)loadMetafontSelectors;
- (void)loadMetafontSizes;
- (void)loadRenditionSubtypes;
- (void)loadRenditionTypes;
- (void)loadSchemaCategories;
- (void)loadSchemaDefinitions;
- (void)loadStandardEffectDefinitions;
- (void)loadThemeDefaultLook;
- (void)loadThemeDirections;
- (void)loadThemeDrawingLayers;
- (void)loadThemeElements;
- (void)loadThemeIdioms;
- (void)loadThemeLooks;
- (void)loadThemeParts;
- (void)loadThemePresentationStates;
- (void)loadThemeSizes;
- (void)loadThemeStates;
- (void)loadThemeValues;
- (void)loadZeroCodeArtworkInfo;
- (void)resetThemeConstants;
- (void)sanityCheckAndUpdateDocumentIfNecessary;

@end
