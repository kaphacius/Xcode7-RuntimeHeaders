//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRTableRowTemplateCell : NSRTemplateCell
{
}

+ (float)_minimumColumnSizeForTemplate:(id)arg1;
+ (id)calculateMinimumColumnWidthsForTemplate:(id)arg1;
+ (_Bool)cellPrefersCenteredColumnsForTemplate:(id)arg1;
+ (float)minimumColumnPadding;
+ (Class)columnListItemCellLayoutValuesClass;
+ (float)firstColumnMaxAllowedWidthWithTemplate:(id)arg1 contentWidth:(float)arg2;
+ (id)_calculateLabelFramesForColumnWidths:(id)arg1 forLayoutValues:(id)arg2 textStyle:(int)arg3;
+ (id)calculateLayoutValuesForTemplate:(id)arg1 suggestedSize:(struct CGSize)arg2 columnWidths:(id)arg3;
+ (id)calculateLayoutValuesForTemplate:(id)arg1 suggestedSize:(struct CGSize)arg2;

@end