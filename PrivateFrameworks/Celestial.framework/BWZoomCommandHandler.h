/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class <BWZoomCompletionDelegate>, BWZoomDelayBuffer;

@interface BWZoomCommandHandler : NSObject {
    float _appliedZoomFactor;
    BOOL _clientCanCompensateForDelay;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastFramePTS;
    float _lastRequestedZoomFactor;
    float _rampAcceleration;
    BOOL _rampActive;
    int _rampCommandID;
    float _rampCurrentVelocity;
    float _rampStartFactor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _rampStartTime;
    float _rampStartVelocity;
    float _rampTargetFactor;
    float _rampTargetVelocity;
    <BWZoomCompletionDelegate> *_zoomCompletionDelegate;
    BWZoomDelayBuffer *_zoomDelayBuffer;
    BOOL _zoomFactorServiced;
    int _zoomLock;
}

@property(readonly) float appliedZoomFactor;
@property float requestedZoomFactor;
@property <BWZoomCompletionDelegate> * zoomCompletionDelegate;

+ (void)initialize;

- (void)_activateRampMode:(BOOL)arg1;
- (float)_zoomFactorForRampAtPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)appliedZoomFactor;
- (void)dealloc;
- (id)init;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 commandID:(int)arg3;
- (float)requestedZoomFactor;
- (void)setRequestedZoomFactor:(float)arg1;
- (void)setTypicalISPZoomDelay:(unsigned int)arg1 clientCanCompensateForDelay:(BOOL)arg2;
- (void)setZoomCompletionDelegate:(id)arg1;
- (void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1;
- (float)updateZoomModelForNextFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)zoomCompletionDelegate;

@end