//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ReportAProblemAddressTableViewMultiCell : ReportAProblemAddressTableViewCell
{
    NSMutableArray *_valueFields;
    unsigned long long _numberOfLines;
}

- (void).cxx_destruct;
- (_Bool)_isHalfWidthForEditComponent:(id)arg1 lines:(id)arg2;
- (id)_placeholderTextForEditComponent:(id)arg1 locale:(id)arg2;
- (int)_addressTypeForEditComponent:(id)arg1;
- (void)reportAProblemTextFieldPreviousPressed;
- (void)reportAProblemTextFieldNextPressed;
- (unsigned long long)_indexOfFirstResponder;
- (_Bool)becomeFirstResponderFromDirection:(long long)arg1;
- (void)reportAProblemTextFieldCorrectnessStatusChanged;
- (void)setOriginalText:(id)arg1 forAddressType:(int)arg2;
- (void)setValue:(id)arg1 forAddressType:(int)arg2;
- (void)setOriginalText:(id)arg1 forCorrectableItemOfKind:(long long)arg2;
- (void)setValue:(id)arg1 forCorrectableItemOfKind:(long long)arg2;
- (void)fieldChanged:(id)arg1;
- (id)_addressBookBundle;
- (id)localeWithCode:(id)arg1;
- (void)addFirstTextFieldWithComponent:(id)arg1 secondTextFieldWithComponent:(id)arg2 stackView:(id)arg3 needsToAddHorizontalBar:(_Bool)arg4 horizontalBarLeading:(double)arg5 metrics:(id)arg6 constraints:(id)arg7 locale:(id)arg8;
- (void)addTextFieldWithComponent:(id)arg1 stackView:(id)arg2 needsToAddHorizontalBar:(_Bool)arg3 horizontalBarLeading:(double)arg4 metrics:(id)arg5 constraints:(id)arg6 locale:(id)arg7;
- (id)textFieldWithComponent:(id)arg1 locale:(id)arg2;
- (double)cellHeight;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 localeCode:(id)arg3 verticalBarOffset:(double)arg4;

@end