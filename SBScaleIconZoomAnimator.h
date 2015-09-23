//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconZoomAnimator.h"

@class SBIcon, SBIconView, SBScaleZoomSettings, UIView;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator
{
    struct UIEdgeInsets _iconScootch;
    double _dockStretch;
    struct SBIconCoordinate _dockListCenterCoordinate;
    struct SBIconCoordinate _mainListCenterCoordinate;
    double _naturalVisualAltitude;
    UIView *_scalingView;
    SBIcon *_targetIcon;
    struct CGPoint _zoomScaleDimension;
}

@property(readonly, nonatomic) struct CGPoint zoomScaleDimension; // @synthesize zoomScaleDimension=_zoomScaleDimension;
@property(readonly, retain, nonatomic) SBIcon *targetIcon; // @synthesize targetIcon=_targetIcon;
- (void)_calculateIconScootch;
- (struct CGPoint)_scootchForIcon:(id)arg1 inDock:(_Bool)arg2;
- (void)_applyOuterFadeFraction:(double)arg1;
- (void)_applyZoomFraction:(double)arg1;
- (double)_zoomedVisualAltitude;
- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_setZoomScale:(struct CGPoint)arg1;
- (_Bool)_forceSquareZoomDimension;
@property(readonly, nonatomic) double zoomScale;
@property(readonly, retain, nonatomic) SBIconView *targetIconView;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1 targetIcon:(id)arg2;

// Remaining properties
@property(retain, nonatomic) SBScaleZoomSettings *settings; // @dynamic settings;

@end

