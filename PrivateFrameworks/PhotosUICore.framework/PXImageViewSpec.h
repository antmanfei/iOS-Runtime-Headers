/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImageViewSpec : PXViewSpec {
    NSArray * _overlaySpecs;
    int  _roundedCornersMode;
    BOOL  _shouldEnableFocus;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } floatingContentMotionRotation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } floatingContentMotionTranslation;
@property (nonatomic, readonly) double floatingShadowOpacity;
@property (nonatomic, readonly) double floatingShadowRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } floatingUnfocusedShadowExpansion;
@property (nonatomic, readonly) double floatingUnfocusedShadowOpacity;
@property (nonatomic, readonly) double floatingUnfocusedShadowRadius;
@property (nonatomic, readonly) double floatingUnfocusedShadowVerticalOffset;
@property (nonatomic, readonly) double focusedSizeIncrease;
@property (nonatomic, copy) NSArray *overlaySpecs;
@property (nonatomic) int roundedCornersMode;
@property (nonatomic) BOOL shouldEnableFocus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })floatingContentMotionRotation;
- (struct CGPoint { double x1; double x2; })floatingContentMotionTranslation;
- (float)floatingShadowOpacity;
- (float)floatingShadowRadius;
- (struct CGSize { double x1; double x2; })floatingUnfocusedShadowExpansion;
- (float)floatingUnfocusedShadowOpacity;
- (float)floatingUnfocusedShadowRadius;
- (float)floatingUnfocusedShadowVerticalOffset;
- (float)focusedSizeIncrease;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)overlaySpecs;
- (int)roundedCornersMode;
- (void)setOverlaySpecs:(id)arg1;
- (void)setRoundedCornersMode:(int)arg1;
- (void)setShouldEnableFocus:(BOOL)arg1;
- (BOOL)shouldEnableFocus;

@end