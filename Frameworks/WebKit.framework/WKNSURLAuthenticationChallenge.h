/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNSURLAuthenticationChallenge : WKObject

- (struct AuthenticationChallengeProxy { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x3; void*x4; void*x5; void*x6; in void*x7; int x8; BOOL x9; void*x10; void*x11; int x12; out in unsigned char x13; void*x14; void*x15; long x16; long x17; void*x18; in void*x19; void*x20; void*x21; bool x22; struct ProtectionSpace { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_23_1_1; int x_23_1_2; int x_23_1_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_23_1_4; int x_23_1_5; bool x_23_1_6; struct RetainPtr<NSURLProtectionSpace> { void *x_7_2_1; } x_23_1_7; } x23; struct Credential { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_24_1_1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_24_1_2; int x_24_1_3; struct RetainPtr<NSURLCredential> { void *x_4_2_1; } x_24_1_4; } x24; unsigned int x25; struct ResourceResponse { bool x_26_1_1; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_2_2_1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; int x_2_2_4; int x_2_2_5; int x_2_2_6; int x_2_2_7; int x_2_2_8; int x_2_2_9; int x_2_2_10; int x_2_2_11; int x_2_2_12; int x_2_2_13; } x_26_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_26_1_3; int x_26_1_4; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_5_2_1; } x_26_1_5; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_6_2_1; } x_26_1_6; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_7_2_1; } x_26_1_7; struct HTTPHeaderMap { struct HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> > { struct HashTable<WebCore::HTTPHeaderName, WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String> >, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName> > { struct KeyValuePair<WebCore::HTTPHeaderName, WTF::String> {} *x_1_4_1; unsigned int x_1_4_2; unsigned int x_1_4_3; unsigned int x_1_4_4; unsigned int x_1_4_5; } x_1_3_1; } x_8_2_1; struct HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_4_1; unsigned int x_1_4_2; unsigned int x_1_4_3; unsigned int x_1_4_4; unsigned int x_1_4_5; } x_2_3_1; } x_8_2_2; } x_26_1_8; } x26; }*)_web_authenticationChallengeProxy;
- (id)_web_createTarget;

@end
