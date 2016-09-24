/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPluginPreferences : NSObject {
    NSString * _pluginType;
    struct __SCPreferences { } * _prefs;
}

@property (readonly) NSString *pluginType;
@property struct __SCPreferences { }*prefs;

+ (id)copyIdentifiersOfInstalledVPNApps;
+ (BOOL)isAppInstalled:(id)arg1;
+ (BOOL)isEnabledForPluginType:(id)arg1 applicationRemoved:(BOOL)arg2;
+ (void)removePreferencesForPluginType:(id)arg1;

- (void).cxx_destruct;
- (id)copyAppURL;
- (struct __CFDictionary { }*)copyPersistentDataOfType:(long)arg1 configurationIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithPluginType:(id)arg1;
- (BOOL)isFlagSet:(struct __CFString { }*)arg1;
- (BOOL)isPluginTypeEnabled;
- (id)pluginType;
- (struct __SCPreferences { }*)prefs;
- (void)setPluginTypeEnabled:(BOOL)arg1 appURLData:(id)arg2;
- (BOOL)setPreferences:(struct __CFDictionary { }*)arg1 ofType:(long)arg2 configurationIdentifier:(id)arg3;
- (void)setPrefs:(struct __SCPreferences { }*)arg1;

@end
