//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICCocoaTouchSchemaAdditions : NSObject <IBICSchemaProvider>
{
    IBICPlatform *_iOSPlatform;
    IBICIdiom *_universalIdiom;
    IBICIdiom *_phoneIdiom;
    IBICIdiom *_padIdiom;
    IBICIdiom *_carIdiom;
    IBICSubtype *_retina4Subtype;
    IBICSubtype *_retinaHDSubtype;
    IBICSubtype *_retina47Subtype;
    IBICScale *_oneXScale;
    IBICScale *_twoXScale;
    IBICScale *_threeXScale;
    IBICSize *_size29;
    IBICSize *_size40;
    IBICSize *_size50;
    IBICSize *_size57;
    IBICSize *_size60;
    IBICSize *_size72;
    IBICSize *_size76;
    IBICDeviceOrientation *_portraitOrientation;
    IBICDeviceOrientation *_portraitUpsideDownOrientation;
    IBICDeviceOrientation *_landscapeOrientation;
    IBICDeviceOrientation *_landscapeLeftOrientation;
    IBICDeviceOrientation *_landscapeRightOrientation;
    IBICExtent *_extentToStatusBar;
    IBICExtent *_extentFullScreen;
    IBICSystemVersion *_iOSv7;
    IBICSystemVersion *_iOSv8;
    IBICSystemVersion *_iOSv9;
    IBICFileType *_pngFileType;
    IBICFileType *_jpegFileType;
    IBICFileType *_pdfFileType;
    IBICWidthClass *_widthClassRegular;
    IBICWidthClass *_widthClassCompact;
    IBICHeightClass *_heightClassRegular;
    IBICHeightClass *_heightClassCompact;
}

- (void).cxx_destruct;
- (void)registerDataSetSlots:(id)arg1;
- (void)registerLaunchImageSetSlots:(id)arg1;
- (void)registerAppIconSetSlots:(id)arg1;
- (void)registerImageSetSlots:(id)arg1;
- (void)registerSlotComponents:(id)arg1;
- (void)captureExistingComponents:(id)arg1;
- (double)precedence;
- (void)registerSchemaComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end