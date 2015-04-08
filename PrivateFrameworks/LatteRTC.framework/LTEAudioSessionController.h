/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@class LTEAudioDeviceList;

@interface LTEAudioSessionController : NSObject {
    LTEAudioDeviceList *deviceList;
}

@property id changeListener;
@property(retain) LTEAudioDeviceList * deviceList;

+ (id)currentInputDevice;
+ (id)defaultInputDevice;
+ (id)defaultOutputDevice;
+ (void)initializeAudioSessionQ;
+ (BOOL)isMicrophoneMuted;
+ (void)setAudioSessionProperties:(id)arg1;
+ (BOOL)setInputDevice:(id)arg1;
+ (void)setMicrophoneMuted:(BOOL)arg1;
+ (void)startAudioSession;
+ (void)stopAudioSession;

- (id)changeListener;
- (void)dealloc;
- (id)deviceList;
- (id)devices;
- (id)init;
- (id)inputDevices;
- (id)outputDevices;
- (void)setChangeListener:(id)arg1;
- (void)setDeviceList:(id)arg1;

@end