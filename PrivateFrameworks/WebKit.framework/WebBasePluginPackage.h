/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableSet;

@interface WebBasePluginPackage : NSObject {
    struct String { 
        struct RefPtr<WTF::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    struct PluginInfo { 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } name; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } file; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } desc; 
        struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow> { 
            struct MimeClassInfo {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } mimes; 
        boolisApplicationPlugin; 
    struct RetainPtr<__CFBundle *> { 
        struct __CFBundle {} *m_ptr; 
    int (*BP_CreatePluginMIMETypesPreferences)();
    } cfBundle;
    } path;
    NSMutableSet *pluginDatabases;
    } pluginInfo;
}

+ (void)initialize;
+ (id)pluginWithPath:(id)arg1;
+ (id)preferredLocalizationName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)MIMETypeForExtension:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (id)_objectForInfoDictionaryKey:(id)arg1;
- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })bundleIdentifier;
- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })bundleVersion;
- (void)createPropertyListFile;
- (void)dealloc;
- (void)finalize;
- (BOOL)getPluginInfoFromPLists;
- (id)initWithPath:(id)arg1;
- (BOOL)isJavaPlugIn;
- (BOOL)isNativeLibraryData:(id)arg1;
- (BOOL)isQuickTimePlugIn;
- (BOOL)load;
- (id)pListForPath:(id)arg1 createFile:(BOOL)arg2;
- (const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)path;
- (const struct PluginInfo { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow> { struct MimeClassInfo {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; boolx5; }*)pluginInfo;
- (BOOL)supportsExtension:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (BOOL)supportsMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (void)unload;
- (unsigned long)versionNumber;
- (void)wasAddedToPluginDatabase:(id)arg1;
- (void)wasRemovedFromPluginDatabase:(id)arg1;

@end
