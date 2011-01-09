/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITextView, UILabel;



@interface EKEventDetailNotesCell : EKEventDetailCell 
{
    UILabel *_notesTitleView;
    UITextView *_notesView;
}

+ (void)_initializeSafeCategory;

- (id)_notesView;
- (id)_notesTitleView;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (void)setNotes:(id)arg1;
- (BOOL)update;
- (void)dealloc;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end