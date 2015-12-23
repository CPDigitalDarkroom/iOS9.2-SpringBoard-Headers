//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBIconObserver.h"
#import "SBReusableView.h"
#import "_UISettingsKeyObserver.h"

@class NSString, NSTimer, SBCloseBoxView, SBFParallaxSettings, SBFolderIconBackgroundView, SBIcon, SBIconImageCrossfadeView, SBIconImageView, SBIconLabelView, UILongPressGestureRecognizer, UIPreviewForceInteractionProgress, UIView<SBIconAccessoryView>, UIView<SBReusableView>, _UILegibilitySettings;

@interface SBIconView : UIView <_UISettingsKeyObserver, SBIconObserver, SBReusableView>
{
    SBIcon *_icon;
    int _iconLocation;
    UIView *_currentImageView;
    SBIconImageView *_iconImageView;
    SBIconImageCrossfadeView *_crossfadeView;
    UIView<SBIconAccessoryView> *_accessoryView;
    SBCloseBoxView *_closeBox;
    SBFParallaxSettings *_closeBoxParallaxSettings;
    struct CGPoint _wallpaperRelativeCloseBoxCenter;
    SBIconLabelView *_labelView;
    UIView<SBReusableView> *_labelAccessoryView;
    long long _currentLabelAccessoryType;
    SBFolderIconBackgroundView *_dropGlow;
    UILongPressGestureRecognizer *_shortcutMenuPeekGesture;
    UIPreviewForceInteractionProgress *_shortcutMenuPresentProgress;
    unsigned int _drawsLabel:1;
    unsigned int _isEditing:1;
    unsigned int _isPaused:1;
    unsigned int _isGrabbed:1;
    unsigned int _isOverlapping:1;
    unsigned int _refusesRecipientStatus:1;
    unsigned int _highlighted:1;
    unsigned int _launchDisabled:1;
    unsigned int _isJittering:1;
    unsigned int _allowJitter:1;
    unsigned int _touchDownInIcon:1;
    unsigned int _hideLabel:1;
    unsigned int _hideLabelAccessoryView;
    struct CGPoint _unjitterPoint;
    struct CGPoint _grabPoint;
    NSTimer *_longPressTimer;
    double _longPressGrabDuration;
    struct CGRect _visibleImageRect;
    id <SBIconViewDelegate> _delegate;
    id <SBIconViewObserver> _observer;
    _UILegibilitySettings *_legibilitySettings;
    double _iconImageAlpha;
    double _iconAccessoryAlpha;
    double _iconLabelAlpha;
    struct CGPoint _wallpaperRelativeImageCenter;
}

+ (id)_jitterTransformAnimation;
+ (id)_jitterPositionAnimation;
+ (struct CGSize)maxLabelSize;
+ (struct CGRect)_rectForLayoutMetric:(int)arg1;
+ (struct CGSize)defaultVisibleIconImageSize;
+ (struct CGPoint)defaultIconImageCenter;
+ (struct CGRect)defaultIconImageFrame;
+ (struct CGSize)defaultIconImageSize;
+ (double)_labelHeight;
+ (struct CGSize)defaultIconSize;
+ (double)labelAccessoryViewRightMargin;
+ (_Bool)canShowLabelAccessoryView;
+ (int)_defaultIconFormat;
@property(nonatomic) struct CGPoint wallpaperRelativeImageCenter; // @synthesize wallpaperRelativeImageCenter=_wallpaperRelativeImageCenter;
@property(nonatomic) double iconLabelAlpha; // @synthesize iconLabelAlpha=_iconLabelAlpha;
@property(nonatomic) double iconAccessoryAlpha; // @synthesize iconAccessoryAlpha=_iconAccessoryAlpha;
@property(nonatomic) double iconImageAlpha; // @synthesize iconImageAlpha=_iconImageAlpha;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIPreviewForceInteractionProgress *shortcutMenuPresentProgress; // @synthesize shortcutMenuPresentProgress=_shortcutMenuPresentProgress;
@property(retain, nonatomic) UILongPressGestureRecognizer *shortcutMenuPeekGesture; // @synthesize shortcutMenuPeekGesture=_shortcutMenuPeekGesture;
@property(readonly, nonatomic) long long currentLabelAccessoryType; // @synthesize currentLabelAccessoryType=_currentLabelAccessoryType;
@property(nonatomic) int location; // @synthesize location=_iconLocation;
@property(nonatomic) id <SBIconViewObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) id <SBIconViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)iconLaunchEnabledDidChange:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_updateProgressAnimated:(_Bool)arg1;
- (void)prepareForReuse;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)_delegateTapAllowed;
- (void)_delegateTouchEnded:(_Bool)arg1;
- (struct UIEdgeInsets)snapshotEdgeInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_closeBoxTapped;
- (_Bool)_isShowingCloseBox;
- (void)_updateCloseBoxAnimated:(_Bool)arg1;
- (void)_applyEditingStateAnimated:(_Bool)arg1;
@property(nonatomic) _Bool isEditing;
- (void)setIsEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTouchDownInIcon:(_Bool)arg1;
- (_Bool)isTouchDownInIcon;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)cancelLongPressTimer;
- (void)_handleSecondHalfLongPressTimer:(id)arg1;
- (void)_handleFirstHalfLongPressTimer:(id)arg1;
- (void)cleanupAfterImageCrossfade;
- (void)setImageCrossfadeMorphFraction:(double)arg1 totalScale:(double)arg2;
- (void)setImageCrossfadeFadeFraction:(double)arg1;
- (void)prepareToCrossfadeImageWithView:(id)arg1 maskCorners:(_Bool)arg2 trueCrossfade:(_Bool)arg3 anchorPoint:(struct CGPoint)arg4;
- (void)prepareToCrossfadeImageWithView:(id)arg1 maskCorners:(_Bool)arg2 trueCrossfade:(_Bool)arg3;
- (id)dropGlow;
- (void)removeDropGlow;
- (void)showDropGlow:(_Bool)arg1;
- (void)prepareDropGlow;
- (void)setIsOverlapping:(_Bool)arg1;
- (_Bool)isGrabbed;
- (void)setIsGrabbed:(_Bool)arg1;
- (double)grabDurationForEvent:(id)arg1;
- (_Bool)canReceiveGrabbedIcon:(id)arg1;
- (void)setRefusesRecipientStatus:(_Bool)arg1;
- (void)setIconPosition:(struct CGPoint)arg1;
- (void)removeAllIconAnimations;
- (void)setAllowJitter:(_Bool)arg1;
- (void)_updateJitter;
- (void)_recursivelyUpdateBackdropMaskFrames;
- (void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(unsigned long long)arg1;
- (id)tintColor;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isInDock;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
- (_Bool)allowsTapWhileEditing;
- (void)_updateBrightness;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_automationID;
- (void)_createAccessoryViewIfNecessary;
- (void)_updateAccessoryViewWithAnimation:(_Bool)arg1;
- (void)_updateIconImageViewAnimated:(_Bool)arg1;
- (void)_updateLabelAccessoryView;
@property(readonly, nonatomic) _Bool shouldShowLabelAccessoryView;
- (void)_configureLabelAccessoryViewForType:(long long)arg1;
- (id)_legibilitySettingsWithStyle:(long long)arg1 primaryColor:(id)arg2;
- (id)_legibilitySettingsWithPrimaryColor:(id)arg1;
- (id)_legibilitySettingsWithParameters:(id)arg1;
- (void)_updateLabel;
- (id)_labelImageParameters;
- (void)invalidateLabelLayoutGeometry;
- (id)labelView;
- (void)_updateAdaptiveColors;
- (void)setShouldRasterizeImageView:(_Bool)arg1;
- (void)setSuppressesBlurryBackgroundChanges:(_Bool)arg1;
- (id)_labelImage;
- (id)_iconImageView;
- (struct CGPoint)_centerForCloseBoxRelativeToVisibleImageFrame:(struct CGRect)arg1;
- (struct CGPoint)_centerForCloseBox;
- (struct CGRect)_frameForAccessoryView;
- (struct CGRect)_frameForLabelAccessoryViewWithLabelFrame:(struct CGRect)arg1;
- (struct CGRect)_frameForLabel;
- (struct CGRect)_frameForVisibleImage;
- (double)_labelVerticalOffset;
- (struct CGRect)_frameForImageView;
- (void)layoutSubviews;
- (void)_setPreparingForPotentialShortcutMenuPresentation:(_Bool)arg1;
- (void)setLabelAccessoryViewHidden:(_Bool)arg1;
- (void)setLabelHidden:(_Bool)arg1;
- (void)_applyIconLabelAlpha:(double)arg1;
- (void)_applyIconAccessoryAlpha:(double)arg1;
- (void)_applyIconImageAlpha:(double)arg1;
- (void)setIconImageAndAccessoryAlpha:(double)arg1;
- (struct CGSize)iconImageVisibleSize;
- (struct CGPoint)iconImageCenter;
- (struct CGRect)iconImageFrame;
- (id)iconImageSnapshot;
- (void)swapInIcon:(id)arg1;
@property(retain, nonatomic) SBIcon *icon;
- (void)_setIcon:(id)arg1 animated:(_Bool)arg2;
- (void)setPaused:(_Bool)arg1;
- (void)dealloc;
- (id)initWithContentType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

