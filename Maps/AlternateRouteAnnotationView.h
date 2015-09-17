//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AlternateRouteAnnotationView : MKAnnotationView
{
    _Bool _routeSelected;
    _Bool _alternateTransportType;
    _Bool _enabled;
    NSString *_title;
    int _orientation;
    int _transportType;
}

+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (struct CGPoint)_centerOffsetForImageSize:(struct CGSize)arg1 orientation:(int)arg2;
+ (struct CGSize)annotationMarkerSizeForTitle:(id)arg1;
+ (id)_imageForType:(int)arg1 routeSelected:(_Bool)arg2;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isAlternateTransportType) _Bool alternateTransportType; // @synthesize alternateTransportType=_alternateTransportType;
@property(nonatomic) _Bool routeSelected; // @synthesize routeSelected=_routeSelected;
- (void).cxx_destruct;
- (void)setOpacity:(double)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) double opacity;
- (void)_updateImage;
- (double)significantArea;
- (struct CGRect)significantFrameWithOrientation:(int)arg1;
- (struct CGRect)significantFrame;
- (struct CGRect)_bubbleFrameForOrientation:(int)arg1;
- (double)extraWidth;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end