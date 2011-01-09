/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPItem, UILabel, NSMutableIndexSet, MPButton;



@interface MPTransportControls : UIView 
{
    id _target;
    MPItem *_item;
    NSUInteger _desiredParts;
    NSUInteger _disabledParts;
    NSMutableIndexSet *_heldParts;
    NSUInteger _visibleParts;
    unsigned int _forVideo : 1;
    unsigned int _playing : 1;
    MPButton *_alternatesButton;
    MPButton *_bookmarkButton;
    MPButton *_chaptersButton;
    MPButton *_devicePickerButton;
    MPButton *_emailButton;
    MPButton *_nextButton;
    MPButton *_playButton;
    MPButton *_previousButton;
    MPButton *_scaleButton;
    MPButton *_rewind30SecondsButton;
    MPButton *_toggleFullscreenButton;
    id _volumeSlider;
    UILabel *_routeNameLabel;
}

@property(readonly) NSString *playButtonImage;
@property(readonly) NSString *pauseButtonImage;
@property(readonly) NSString *playPauseButtonImage;
@property NSUInteger visibleParts;
@property id target;
@property(retain) MPItem *item;
@property NSUInteger disabledParts;
@property NSUInteger desiredParts;

+ (NSUInteger)defaultVisibleParts;
+ (id)onScreenVolumeControls;
+ (void)_initializeSafeCategory;

- (void)setItem:(id)arg1;
- (id)item;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAlpha:(float)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (void)_alternateTypesChangedNotification:(id)arg1;
- (id)createRouteNameLabel;
- (NSUInteger)desiredParts;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (id)buttonImageForPart:(NSUInteger)arg1;
- (id)pauseButtonImage;
- (id)playPauseButtonImage;
- (void)setVisibleParts:(NSUInteger)arg1 animated:(BOOL)arg2;
- (id)playButtonImage;
- (void)_availableRoutesChangedNotification:(id)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonHeld:(id)arg1;
- (void)buttonHoldReleased:(id)arg1;
- (void)buttonUp:(id)arg1;
- (id)createVolumeSlider;
- (id)highlightedButtonImageForPart:(NSUInteger)arg1;
- (BOOL)alwaysHidesSystemVolumeHUD;
- (NSUInteger)_applyDesiredPartsToParts:(NSUInteger)arg1;
- (void)_applyDesiredPartsWithAnimation:(BOOL)arg1;
- (id)buttonForPart:(NSUInteger)arg1;
- (void)_handleHoldForPart:(NSUInteger)arg1;
- (void)_handleReleaseForPart:(NSUInteger)arg1;
- (void)_handleTapForPart:(NSUInteger)arg1;
- (void)_reloadViewWithAnimation:(BOOL)arg1;
- (id)_updateAdditions:(id)arg1 removals:(id)arg2 forPart:(NSUInteger)arg3;
- (void)_updateEnabledStates:(BOOL)arg1;
- (id)createButtonForPart:(NSUInteger)arg1;
- (void)updateVolumeHUDVisibility;
- (void)setDesiredParts:(NSUInteger)arg1 animated:(BOOL)arg2;
- (NSUInteger)disabledParts;
- (void)_validityChangedNotification:(id)arg1;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setDesiredParts:(NSUInteger)arg1;
- (void)setVisibleParts:(NSUInteger)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (NSUInteger)visibleParts;
- (BOOL)_accessibilityObscuresScreen;

@end