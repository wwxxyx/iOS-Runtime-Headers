/* Generated by RuntimeBrowser.
 */

@protocol _WKFormInputSession <NSObject>

@required

- (NSString *)accessoryViewCustomButtonTitle;
- (BOOL)accessoryViewShouldNotShow;
- (UIView *)customInputView;
- (<_WKFocusedElementInfo> *)focusedElementInfo;
- (BOOL)forceSecureTextEntry;
- (BOOL)isValid;
- (void)setAccessoryViewCustomButtonTitle:(NSString *)arg1;
- (void)setAccessoryViewShouldNotShow:(BOOL)arg1;
- (void)setCustomInputView:(UIView *)arg1;
- (void)setForceSecureTextEntry:(BOOL)arg1;
- (void)setSuggestions:(NSArray *)arg1;
- (void)setTextContentType:(NSString *)arg1;
- (NSArray *)suggestions;
- (NSString *)textContentType;
- (NSObject<NSSecureCoding> *)userObject;

@end