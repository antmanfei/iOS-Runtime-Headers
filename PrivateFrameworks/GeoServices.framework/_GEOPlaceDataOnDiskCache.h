/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceDataDBReader, GEOPlaceDataDBWriter, NSString;

@interface _GEOPlaceDataOnDiskCache : NSObject <_GEOPlaceDataCacheProxy> {
    GEOPlaceDataDBReader *_reader;
    GEOPlaceDataDBWriter *_writer;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)allCacheEntries;
- (void)calculateFreeableSpaceWithHandler:(id)arg1 onQueue:(id)arg2;
- (void)dealloc;
- (void)deletePhoneNumberMapping;
- (void)evictAllEntries;
- (void)evictPlaceDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (void)evictPlaceDataForMUID:(unsigned long long)arg1;
- (id)initWithPath:(id)arg1;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (void)setPlaceData:(id)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg2;
- (void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2 onQueue:(id)arg3;

@end