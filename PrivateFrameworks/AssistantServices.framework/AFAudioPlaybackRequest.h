/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAudioPlaybackRequest : NSObject <NSCopying, NSSecureCoding> {
    double  _fadeInDuration;
    double  _fadeOutDuration;
    NSURL * _itemURL;
    int  _numberOfLoops;
    double  _volume;
}

@property (nonatomic, readonly) double fadeInDuration;
@property (nonatomic, readonly) double fadeOutDuration;
@property (nonatomic, readonly, copy) NSURL *itemURL;
@property (nonatomic, readonly) int numberOfLoops;
@property (nonatomic, readonly) double volume;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemURL:(id)arg1 numberOfLoops:(int)arg2 volume:(float)arg3 fadeInDuration:(double)arg4 fadeOutDuration:(double)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)itemURL;
- (int)numberOfLoops;
- (float)volume;

@end