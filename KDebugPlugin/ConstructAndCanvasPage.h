//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ConstructAndCanvasPage : NSObject
{
    BOOL _constructVisible;
    int _pageProperty;
    NSViewController *_construct;
    NSViewController *_canvas;
    XRConstructAndCanvasView *_constructAndCanvasView;
}

@property(nonatomic) BOOL constructVisible; // @synthesize constructVisible=_constructVisible;
@property(nonatomic) int pageProperty; // @synthesize pageProperty=_pageProperty;
@property(retain) XRConstructAndCanvasView *constructAndCanvasView; // @synthesize constructAndCanvasView=_constructAndCanvasView;
@property(retain) NSViewController *canvas; // @synthesize canvas=_canvas;
@property(retain) NSViewController *construct; // @synthesize construct=_construct;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 construct:(id)arg2 canvas:(id)arg3 property:(int)arg4;

@end