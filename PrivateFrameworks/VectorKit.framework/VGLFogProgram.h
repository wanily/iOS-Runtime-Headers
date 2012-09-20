/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLFogProgram : VGLProgram  {
    int _uModelViewMatrix;
    union { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    } _modelViewMatrix;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _skyBottomColor;
    int _uSkyBottomColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _skyTopColor;
    int _uSkyTopColor;
    float _skyOffset;
    int _uSkyOffset;
    float _screenHeight;
    int _uScreenHeight;
    float _horizonDepth;
    float _fogSlope;
    int _uFogSlope;
    float _fogOffset;
    int _uFogOffset;
    struct { 
        float x; 
        float y; 
        float z; 
        float w; 
    } _fogSlopeInShader;
}

@property union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; } modelViewMatrix;
@property float horizonDepth;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } skyBottomColor;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } skyTopColor;
@property float skyOffset;
@property float screenHeight;
@property float fogSlope;
@property float fogOffset;


- (float)screenHeight;
- (void)dealloc;
- (float)fogOffset;
- (float)fogSlope;
- (float)skyOffset;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })skyTopColor;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })skyBottomColor;
- (float)horizonDepth;
- (union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })modelViewMatrix;
- (void)_updateFogSlopeInShader;
- (void)setFogOffset:(float)arg1;
- (void)setFogSlope:(float)arg1;
- (void)setSkyTopColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setSkyBottomColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setModelViewMatrix:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg1;
- (void)setScreenHeight:(float)arg1;
- (void)setSkyOffset:(float)arg1;
- (void)setHorizonDepth:(float)arg1;
- (id)initWithVertName:(id)arg1 fragName:(id)arg2;

@end