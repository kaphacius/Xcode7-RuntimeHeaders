//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBDeviceFamilyChooserView : NSView
{
    NSPopUpButton *_popUpButton;
}

+ (id)deviceFamilyChooserView;
@property(retain, nonatomic) NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
- (void).cxx_destruct;
- (id)selectedIdiom;
- (void)awakeFromNib;

@end