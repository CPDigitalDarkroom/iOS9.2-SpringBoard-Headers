//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSceneLayoutViewController.h"

#import "BSTransactionObserver.h"

@class FBUIApplicationSceneDeactivationAssertion, NSMutableArray, NSString, SBAppStatusBarSettingsAssertion, SBLayoutElementViewController, SBMainDisplayLayoutState, SBMainDisplaySceneLayoutGestureManager, UIView;

@interface SBMainDisplaySceneLayoutViewController : SBSceneLayoutViewController <BSTransactionObserver>
{
    SBMainDisplaySceneLayoutGestureManager *_layoutGestureManager;
    UIView *_layoutOrientedAdornmentContainer;
    UIView *_breadcrumbClippingView;
    unsigned long long _disableSubviewReorderingCount;
    NSMutableArray *_recoilRequesters;
    FBUIApplicationSceneDeactivationAssertion *_overlayDeactivationAssertion;
    SBAppStatusBarSettingsAssertion *_hideSpringBoardStatusBarAssertion;
    NSString *_preventIconRotationReason;
    UIView *_capturedSnapshotView;
}

+ (Class)_layoutStateClass;
@property(retain, nonatomic) UIView *capturedSnapshotView; // @synthesize capturedSnapshotView=_capturedSnapshotView;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_sideAppDismissalAnimationControllerWithTransitionRequest:(id)arg1 animationSettings:(id)arg2;
- (id)_sideAppPresentationAnimationControllerWithTransitionRequest:(id)arg1 animationSettings:(id)arg2;
- (id)_zoomDownAnimationControllerWithTransitionRequest:(id)arg1 animationSettings:(id)arg2;
- (id)_sideSwitcherDismissalAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_sideSwitcherPresentationAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_rotateAppsAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_resizeAppsAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_sideAppMakePrimaryAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_sideAppPopOffAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_sideOverlaySlideInAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_primaryAppPopOffAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_primaryAppSlideOverAnimationControllerWithTransitionRequest:(id)arg1;
- (void)layoutElementViewController:(id)arg1 configureDisplayLayoutElement:(id)arg2;
- (_Bool)shouldAllowSwipeInDimmingViewAtStartLocation:(struct CGPoint)arg1 forLayoutElementViewController:(id)arg2;
- (void)handleDimmingViewTapForLayoutElementViewController:(id)arg1;
- (void)appViewControllerPreferredLayoutLevelDidChange:(id)arg1;
- (void)_recoilMainSceneLayout:(double)arg1 withAnimationFactory:(id)arg2;
- (void)_recoilByHighestPriorityWithAnimationFactory:(id)arg1;
- (double)_normalizedHalfScreenAppLocation;
- (double)_normalizedNarrowAppLocation;
- (_Bool)_canResizeToHalfScreen;
- (void)_updateBackgroundViewForLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2;
- (_Bool)_appViewShouldHandleBackgroundStyleForLayoutElement:(id)arg1;
- (struct CGRect)_visibleReferenceFrameForElement:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)_referenceFrameForLayoutElement:(id)arg1 inLayoutState:(id)arg2;
- (struct CGSize)_layoutSizeForRole:(long long)arg1 withLayoutContext:(id)arg2;
- (struct CGSize)_referenceSizeForRole:(long long)arg1 withLayoutContext:(id)arg2;
- (struct CGSize)_referenceSizeForLayoutElement:(id)arg1 inLayoutState:(id)arg2;
- (struct CGSize)_referenceSizeForEntity:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)_visibleLayoutFrameForElement:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)_layoutFrameForSize:(struct CGSize)arg1 withRole:(long long)arg2 inLayoutState:(id)arg3;
- (double)_layoutWidthForLayoutRole:(long long)arg1 inLayoutState:(id)arg2;
- (double)_layoutWidthForLayoutRole:(long long)arg1 withSideAppPresentationStyle:(long long)arg2 sideAppWidth:(long long)arg3;
- (double)_separatorWidth;
- (double)_defaultWidthForSideApp;
- (struct CGAffineTransform)_transformForHidingElementWithRole:(long long)arg1 frame:(struct CGRect)arg2 baseTransform:(struct CGAffineTransform)arg3 withLayoutState:(id)arg4;
- (unsigned long long)_edgeToAlignLayoutFrameForRole:(long long)arg1 inLayoutState:(id)arg2;
- (void)_animateLayoutElementViewController:(id)arg1 withAnimationSettings:(id)arg2 precondition:(CDUnknownBlockType)arg3 animationBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_animateOutLayoutElementViewInRole:(long long)arg1 withAnimationSettings:(id)arg2 animationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_animateInLayoutElementViewInRole:(long long)arg1 withAnimationSettings:(id)arg2 animationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fadeOutLayoutElementViewInRole:(long long)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fadeInLayoutElementViewInRole:(long long)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fadeInSideAppWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_slideInSideAppWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeOutSideAppWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_slideOutSideAppWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeOutScenesForZoomDownWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_slideOutScenesForZoomDownWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stopClippingbreadcrumbLayoutElementController:(id)arg1;
- (void)_startClippingbreadcrumbLayoutElementController:(id)arg1;
- (struct CGAffineTransform)_slidingTransformForSideAppViewWithNewDistance:(double)arg1;
- (double)_distanceFromEdgeForSideAppView;
- (id)_newSidePullDynamicAnimationForTargetValue:(double)arg1 withStartValue:(double)arg2 withInitialVelocity:(double)arg3 unitSize:(double)arg4;
- (id)_newSideSwitcherDynamicAnimationForTargetValue:(double)arg1 withStartValue:(double)arg2 withInitialVelocity:(double)arg3;
- (id)_newSideSwitcherDynamicAnimationForPresenting:(_Bool)arg1;
- (id)_newSideAppDynamicAnimationForTargetValue:(double)arg1 startValue:(double)arg2 withInitialVelocity:(double)arg3;
- (void)_transitionToOrFromSideSwitcherForPresenting:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resizeAppViewsWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_rotateAppViewsWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_makeSideAppControllerPrimaryWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_popSideAppControllerWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pushSideAppOverlayController:(id)arg1 dimOtherViews:(_Bool)arg2 withAnimationSettings:(id)arg3 fadeIn:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_pushSideAppOverlayController:(id)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_pushSideAppControllerForSwitcher:(id)arg1 withAnimationSettings:(id)arg2 fadeIn:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pushLayoutElementViewController:(id)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushLayoutElementViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)popLayoutElementViewControllerWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popLayoutElementViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_animationSettingsForPushAndPopWithDuration:(double)arg1;
- (id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3;
- (id)composedAnimationControllerForDosidoWithTransitionRequest:(id)arg1 using:(id)arg2;
- (_Bool)shouldPerformFullscreenAnimationForTransitionRequest:(id)arg1;
- (id)composedAnimationControllerForZoomingDownWithTransitionRequest:(id)arg1 using:(id)arg2;
- (id)composedAnimationControllerForZoomingUpWithTransitionRequest:(id)arg1 using:(id)arg2;
- (id)animationControllerForRotatingWithTransitionRequest:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)viewWillLayoutSubviews;
- (long long)_overrideInterfaceOrientationMechanics;
- (id)adornmentViewForApplication:(id)arg1 inLayoutRole:(long long)arg2 withLayoutContext:(id)arg3;
- (id)appViewForApplication:(id)arg1 inLayoutRole:(long long)arg2 withLayoutContext:(id)arg3 hostRequester:(id)arg4;
- (_Bool)_shouldRotateToLayoutOrientation:(long long)arg1;
- (_Bool)handleMenuButtonPress;
- (void)_checkSubviewOrdering;
- (void)_layoutAdornmentContainer;
- (void)_reenableSubviewReordering;
- (void)_disableSubviewReordering;
- (_Bool)_shouldAdjustViewAffordancesAfterTransition:(id)arg1;
- (_Bool)_shouldRepositionViewAfterTransition:(id)arg1;
- (_Bool)_presentationChangesSignificantlyOnTransitioningFromLayoutElement:(id)arg1 toLayoutElement:(id)arg2;
- (void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3;
- (void)_layoutElementViewController:(id)arg1 transitioningFromLayoutElement:(id)arg2 toLayoutElement:(id)arg3;
- (void)_doCommonCleanupUponEndingLayoutTransitionWithContext:(id)arg1;
- (void)_updateWallpaperStyle;
- (void)_acquireOrReleaseOrientationLockIfNecessary;
- (void)_acquireOrReleaseHideSpringBoardStatusBarAssertionIfNecessary;
- (void)_stopSuppressingKeyboardForEndingLayoutStateTransition;
- (void)_dropResignActiveAssertionForEndingLayoutStateTransition;
- (void)_beginLayoutStateTransitionWithContext:(id)arg1;
- (long long)_dimmingLevelForElement:(id)arg1 inLayout:(id)arg2;
- (struct CGRect)referenceFrameForIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceBoundsForIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceBoundsForEntity:(id)arg1 inLayoutState:(id)arg2;
@property(readonly, nonatomic) _Bool shouldReverseLayoutDirection;
- (unsigned int)layoutSpaceAnchorEdgeForSideLayoutRole;
- (unsigned int)layoutSpaceAnchorEdgeForPrimaryLayoutRole;
- (unsigned int)referenceSpaceAnchorEdgeForSideLayoutRole;
- (unsigned int)referenceSpaceAnchorEdgeForPrimaryLayoutRole;
- (_Bool)getLayoutSpaceAnchorEdge:(out unsigned int *)arg1 forLayoutRole:(long long)arg2 orientation:(long long)arg3;
- (_Bool)getReferenceSpaceAnchorEdge:(out unsigned int *)arg1 forLayoutRole:(long long)arg2 orientation:(long long)arg3;
- (id)_adornmentView;
- (void)setRecoil:(_Bool)arg1 amount:(double)arg2 forPriority:(long long)arg3 withAnimationFactory:(id)arg4;
- (void)setRecoil:(_Bool)arg1 forPriority:(long long)arg2 withAnimationFactory:(id)arg3;
- (id)sideSwitcherRevealGesture;
@property(readonly, retain, nonatomic) SBLayoutElementViewController *breadcrumbLayoutElementController;
@property(readonly, retain, nonatomic) SBLayoutElementViewController *sideLayoutElementController;
@property(readonly, retain, nonatomic) SBMainDisplayLayoutState *layoutState;
- (void)loadView;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;
- (double)normalizedSuspendSideLocation;
- (double)normalizedSuspendPrimaryLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

