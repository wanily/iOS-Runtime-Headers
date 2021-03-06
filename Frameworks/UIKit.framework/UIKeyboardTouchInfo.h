/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBTree, UITouch;

@interface UIKeyboardTouchInfo : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    } _initialPoint;
    UIKBTree *_key;
    UIKBTree *_keyplane;
    UIKBTree *_slidOffKey;
    int _stage;
    UITouch *_touch;
}

@property struct CGPoint { float x1; float x2; } initialPoint;
@property(retain) UIKBTree * key;
@property(retain) UIKBTree * keyplane;
@property(retain) UIKBTree * slidOffKey;
@property int stage;
@property(retain) UITouch * touch;

- (void)dealloc;
- (struct CGPoint { float x1; float x2; })initialPoint;
- (id)key;
- (id)keyplane;
- (void)setInitialPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setKey:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setSlidOffKey:(id)arg1;
- (void)setStage:(int)arg1;
- (void)setTouch:(id)arg1;
- (id)slidOffKey;
- (int)stage;
- (id)touch;

@end
