/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebsiteDataSize : NSObject {
    struct Size { 
        unsigned int totalSize; 
        struct HashMap<unsigned int, unsigned int, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { 
            struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned int> >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, unsigned int, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { 
                struct KeyValuePair<unsigned int, unsigned int> {} *m_table; 
                unsigned int m_tableSize; 
                unsigned int m_tableSizeMask; 
                unsigned int m_keyCount; 
                unsigned int m_deletedCount; 
            } m_impl; 
        } typeSizes; 
    }  _size;
}

@property (nonatomic, readonly) unsigned int totalSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSize:(const struct Size { unsigned int x1; struct HashMap<unsigned int, unsigned int, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned int> >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, unsigned int, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, unsigned int> {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; }*)arg1;
- (unsigned int)sizeOfDataTypes:(id)arg1;
- (unsigned int)totalSize;

@end
