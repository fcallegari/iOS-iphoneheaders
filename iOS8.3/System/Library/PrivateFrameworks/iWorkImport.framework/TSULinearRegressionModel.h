/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSURegressionModel.h>

@interface TSULinearRegressionModel : TSURegressionModel {

	double* mCoefficients;
	int mNumCoefficients;
	char mAffine;
	double mIntercept;
	double* mCoefficientsStandardErrors;
	double mRSquared;
	double mStandardError;
	double mFStatistic;
	double mDegreesFreedom;
	double mRegressionSumSquares;
	double mErrorSumSquares;

}
-(id)initWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 makeAffine:(char)arg5 desiredIntercept:(double)arg6 ;
-(id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 ;
-(id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5 ;
-(int)regressionType;
-(int)numCoefficients;
-(double)coefficientAtIndex:(int)arg1 ;
-(double)coefficientStandardErrorAtIndex:(int)arg1 ;
-(double)rSquared;
-(double)fStatistic;
-(double)degreesFreedom;
-(double)regressionSumSquares;
-(double)errorSumSquares;
-(double)estimateForX:(double*)arg1 ;
-(id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1 ;
-(double)standardError;
-(void)dealloc;
@end
