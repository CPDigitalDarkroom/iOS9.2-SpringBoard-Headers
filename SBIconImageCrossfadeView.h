//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBInteractionPassThroughView.h"

@class SBIconImageView, UIView, _SBAnimatableCorneredView;

@interface SBIconImageCrossfadeView : SBInteractionPassThroughView
{
    _SBAnimatableCorneredView *_containerView;
    SBIconImageView *_imageView;
    UIView *_crossfadeView;
    double _crossfadeFraction;
    double _containerScaleX;
    double _containerScaleY;
    _Bool _masksCorners;
    _Bool _performsTrueCrossfade;
    struct CGPoint _stretchAnchorPoint;
}

@property(nonatomic) struct CGPoint stretchAnchorPoint; // @synthesize stretchAnchorPoint=_stretchAnchorPoint;
@property(nonatomic) _Bool performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
@property(nonatomic) _Bool masksCorners; // @synthesize masksCorners=_masksCorners;
- (void)_updateCornerMask;
- (void)cleanup;
- (void)setMorphFraction:(double)arg1 totalScale:(double)arg2;
- (void)setFadeFraction:(double)arg1;
- (void)layoutSubviews;
- (void)prepareGeometry;
- (void)dealloc;
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;

@end

