/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface HapticServerInstance : NSObject <ServerInterface> {
    unsigned int  _clientID;
    HapticServer * _master;
}

@property (readonly) unsigned int clientID;
@property (readonly) HapticServer *master;

- (void).cxx_destruct;
- (void)allocateClientResources:(id /* block */)arg1;
- (unsigned int)clientID;
- (long)doPrewarm:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)doReleaseClientResources:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (long)doStartRunning:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)doStopPrewarm:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)doStopRunning:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)getClientID:(id /* block */)arg1;
- (void)handleConnectionError;
- (id)initWithMasterAndID:(id)arg1 id:(unsigned int)arg2 outError:(id*)arg3;
- (void)loadHapticPreset:(id)arg1 reply:(id /* block */)arg2;
- (void)loadHapticSequence:(id)arg1 reply:(id /* block */)arg2;
- (id)master;
- (void)prepareHapticSequence:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)prewarm:(id /* block */)arg1;
- (void)releaseClientResources;
- (void)requestChannels:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)setChannelEventBehavior:(unsigned int)arg1 behavior:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)setDoneReply:(id /* block */)arg1;
- (void)startRunning:(id /* block */)arg1;
- (void)stopPrewarm;
- (void)stopRunning;

@end
