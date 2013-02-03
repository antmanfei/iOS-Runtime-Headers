/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSLock, NSMutableArray, NSDictionary;

@interface GEONetworkDefaults : NSObject {
    NSString *_cacheFilePath;
    NSMutableArray *_completionHandlers;
    BOOL _isRegistering;
    NSDictionary *_networkDefaults;
    NSLock *_networkDefaultsLock;
}

+ (id)sharedNetworkDefaults;

- (void)_registrationComplete;
- (void)dealloc;
- (id)init;
- (BOOL)needsUpdate;
- (void)refreshNetworkDefaults;
- (void)registerNetworkDefaults:(id)arg1;
- (id)valueForKey:(id)arg1;

@end