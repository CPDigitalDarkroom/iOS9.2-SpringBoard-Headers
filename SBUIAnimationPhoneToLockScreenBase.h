//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBLockScreenViewControllerBase, UIView, UIView<FBSceneHostView>;

@interface SBUIAnimationPhoneToLockScreenBase : SBUIMainScreenAnimationController
{
    SBLockScreenViewControllerBase *_lockScreenViewController;
    UIView<FBSceneHostView> *_contextHostView;
    _Bool _needsScreenDim;
}

@property(retain, nonatomic, getter=_contextHostView, setter=_setContextHostView:) UIView *contextHostView; // @synthesize contextHostView=_contextHostView;
- (void)_noteAnimationDidFinish;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_setHidden:(_Bool)arg1;
- (_Bool)_shouldHideContextHostViewStatusBar;
- (id)_getTransitionWindow;
- (id)_lockScreenViewController;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

