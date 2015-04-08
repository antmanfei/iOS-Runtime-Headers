/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMHandle, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface IMAVChatProxy : NSObject {
    NSDictionary *_info;
}

@property(retain,readonly) NSString * GUID;
@property(readonly) int callID;
@property(retain,readonly) NSString * conferenceID;
@property double connectionTimeoutTime;
@property(retain,readonly) NSNumber * dataDownloaded;
@property(retain,readonly) NSNumber * dataUploaded;
@property(retain,readonly) NSDate * dateConnected;
@property(retain,readonly) NSDate * dateEnded;
@property(readonly) int endedError;
@property(readonly) unsigned int endedReason;
@property(readonly) BOOL hasAudioInterruption;
@property(readonly) BOOL hasReceivedFirstFrame;
@property(retain,readonly) IMHandle * initiatorIMHandle;
@property double invitationTimeoutTime;
@property(readonly) BOOL isActive;
@property(readonly) BOOL isCaller;
@property(setter=setMute:) BOOL isMute;
@property BOOL isSendingAudio;
@property(readonly) BOOL isStateFinal;
@property(readonly) BOOL isVideo;
@property(retain,readonly) IMHandle * otherIMHandle;
@property(retain,readonly) NSArray * remoteParticipants;
@property(readonly) unsigned int sessionID;
@property(readonly) unsigned int state;

- (id)GUID;
- (BOOL)_isProxy;
- (void)acceptInvitation;
- (void)acceptInvitationWithHoldMusic;
- (id)account;
- (int)callID;
- (void)cancelInvitation;
- (id)conferenceID;
- (double)connectionTimeoutTime;
- (id)dataDownloaded;
- (id)dataUploaded;
- (id)dateConnected;
- (id)dateEnded;
- (void)dealloc;
- (void)declineInvitation;
- (id)description;
- (void)endChat;
- (int)endedError;
- (unsigned int)endedReason;
- (void)finalUpdate;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasAudioInterruption;
- (BOOL)hasReceivedFirstFrame;
- (id)initiatorIMHandle;
- (double)invitationTimeoutTime;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)inviteAll;
- (BOOL)isActive;
- (BOOL)isCaller;
- (BOOL)isMute;
- (BOOL)isSendingAudio;
- (BOOL)isStateFinal;
- (BOOL)isVideo;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)otherIMHandle;
- (id)remoteParticipants;
- (unsigned int)sessionID;
- (void)setConnectionTimeoutTime:(double)arg1;
- (void)setInvitationTimeoutTime:(double)arg1;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setMute:(BOOL)arg1;
- (unsigned int)state;
- (void)updateWithInfo:(id)arg1;

@end