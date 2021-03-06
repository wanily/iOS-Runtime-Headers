/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@interface SKLayerModule : NSObject <CAAction> {
    id _context;
    id _layer;
    int _orientation;
}

+ (Class)layerClass;
+ (id)sharedModule;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)addButtonWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 text:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)addContentToLayer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)context;
- (id)createLayer;
- (void)dealloc;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1 inLayer:(id)arg2;
- (void)hide;
- (void)initLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layer;
- (void)orderIn;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOrientation:(int)arg1;
- (BOOL)showing;

@end
