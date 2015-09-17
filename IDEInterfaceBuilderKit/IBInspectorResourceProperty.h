//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBInspectorResourceProperty : IDEInspectorProperty
{
    IBAutoCompletingComboBoxDataSource *_comboBoxDataSource;
    IBResourceValueTransformer *_resourceValueTransformer;
    IBButtonComboBox *_comboBox;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_listContentKeyPath;
}

- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)configureComboBoxButton;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)mediaType;
- (Class)resourceClass;
- (BOOL)useNameAsValue;
- (id)resourceType;
- (double)baseline;
- (id)inspectorController;
- (id)comboBox;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end