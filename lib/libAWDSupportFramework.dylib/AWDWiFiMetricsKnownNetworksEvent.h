/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable <NSCopying> {
    unsigned int _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
        unsigned int networkSecurity : 1; 
        unsigned int networkTypeBitMap : 1; 
    } _has;
    unsigned int _networkSecurity;
    unsigned int _networkTypeBitMap;
    NSData *_oui;
    unsigned long long _timestamp;
}

@property unsigned int eventType;
@property BOOL hasEventType;
@property BOOL hasNetworkSecurity;
@property BOOL hasNetworkTypeBitMap;
@property(readonly) BOOL hasOui;
@property BOOL hasTimestamp;
@property unsigned int networkSecurity;
@property unsigned int networkTypeBitMap;
@property(retain) NSData * oui;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (BOOL)hasEventType;
- (BOOL)hasNetworkSecurity;
- (BOOL)hasNetworkTypeBitMap;
- (BOOL)hasOui;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)networkSecurity;
- (unsigned int)networkTypeBitMap;
- (id)oui;
- (BOOL)readFrom:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHasEventType:(BOOL)arg1;
- (void)setHasNetworkSecurity:(BOOL)arg1;
- (void)setHasNetworkTypeBitMap:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNetworkSecurity:(unsigned int)arg1;
- (void)setNetworkTypeBitMap:(unsigned int)arg1;
- (void)setOui:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end