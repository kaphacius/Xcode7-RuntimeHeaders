//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHITextViewInspector : IBBoundInspector
{
    NSButton *readOnlyCheckBox;
    NSButton *allowsSelectionCheckBox;
    NSButton *outputTextInUnicodeCheckBox;
    NSButton *installDragProcsCheckBox;
    NSButton *alwaysWrapAtViewEdgeCheckBox;
    NSButton *drawCaretWhenInactiveCheckBox;
    NSButton *drawSelectionWhenInactiveCheckBox;
    NSButton *singleLineOnlyCheckBox;
    NSButton *enableDragAndDropCheckBox;
    NSButton *monoStyledTextCheckBox;
    NSButton *doFontSubstitutionCheckBox;
}

- (void)awakeFromNib;

@end