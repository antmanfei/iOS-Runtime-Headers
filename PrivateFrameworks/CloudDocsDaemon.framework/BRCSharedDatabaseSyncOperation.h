/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCServerChangeState, NSString;

@interface BRCSharedDatabaseSyncOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerChangeState *_changeState;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)queue;

- (void).cxx_destruct;
- (void)_performAfterAddingOwnerKeysForZoneIDs:(id)arg1 block:(id)arg2;
- (void)_performAfterRegisteringForPushes:(id)arg1;
- (void)_performFetchChangedZones;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1 changeState:(id)arg2 group:(id)arg3;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;

@end