//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSBitmapImageRep (IBAppKitAdditions)
+ (id)ib_bitmapWithARGB8888FormatPixelWidth:(long long)arg1 height:(long long)arg2 andScale:(double)arg3 fromCommands:(CDUnknownBlockType)arg4;
- (struct CGSize)pixelSize;
- (id)bitmapImageRepFromPixelRect:(struct CGRect)arg1;
- (id)ib_bestMatchRGBColorSpaceName;
- (id)imageFromPixelRect:(struct CGRect)arg1;
- (id)PNGRepresentation;
- (id)ib_JPGRepresentation;
@end