/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMixing.h>

@class TSCHChartFeature;

@interface TSCHChartType : NSObject <TSDMixing> {

	TSCHChartFeature* mFeature;

}
+(id)pieChart3D;
+(id)lineChart3D;
+(id)areaChart3D;
+(id)stackedAreaChart3D;
+(id)scatterChart;
+(id)multiDataScatterChart;
+(id)bubbleChart;
+(id)multiDataBubbleChart;
+(id)pieChart;
+(id)barChart;
+(id)barChart3D;
+(id)columnChart;
+(id)columnChart3D;
+(id)lineChart;
+(id)areaChart;
+(id)stackedBarChart;
+(id)stackedBarChart3D;
+(id)stackedColumnChart;
+(id)stackedColumnChart3D;
+(id)stackedAreaChart;
+(id)mixedChart;
+(id)twoYAxisChart;
+(id)chartTypePlaceholderForDefault3DScaleProperty;
+(id)multiDataColumnChart;
+(id)multiDataBarChart;
+(id)allChartTypes;
+(id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1 chartType:(id)arg2 barShape:(int)arg3 ;
+(float)sageDepthFactorForExportingChartInfo:(id)arg1 ;
-(id)cascadeTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 ;
-(id)linearTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 ;
-(id)timeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 deliveryStyle:(unsigned)arg4 ;
-(char)supportsSeriesLabels;
-(id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2 ;
-(float)valueAxisTitleRotation;
-(float)categoryAxisTitleRotation;
-(id)otherDimensionChartType;
-(Class)repClass;
-(char)drawValueLabelsForZero;
-(id)supportedAxisScales;
-(char)isMultiData;
-(unsigned)maxCellsToCheckForGridValueType;
-(char)supportsCategoryAxisPlotToEdgesOption;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)valueAxisIDs;
-(unsigned)styleIndexForAxisID:(id)arg1 ;
-(Class)valueAxisClassForID:(id)arg1 scale:(int)arg2 ;
-(id)categoryAxisIDs;
-(id)defaultSeriesType:(unsigned)arg1 ;
-(char)supportsMultipleSeriesTypes;
-(char)requiresYAxisOrdinal;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(char)supportsSeriesFill;
-(char)supportsSeriesStroke;
-(char)supportsShadowOffset;
-(char)supportsValueLabels;
-(id)userInterfaceName;
-(id)g_genericToSpecificPropertyMapPie;
-(id)g_genericToSpecificPropertyMapScatter;
-(id)g_genericToSpecificPropertyMapBar;
-(id)g_genericToSpecificPropertyMapColumn;
-(id)g_genericToSpecificPropertyMapLine;
-(id)g_genericToSpecificPropertyMapArea;
-(id)g_genericToSpecificPropertyMapStackedColumn;
-(id)g_genericToSpecificPropertyMapStackedBar;
-(id)g_genericToSpecificPropertyMapStackedArea;
-(id)g_genericToSpecificPropertyMapBubble;
-(int)stackingSignRule;
-(Class)presetImagerClass;
-(id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(float)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 shouldCache:(char*)arg7 ;
-(UIEdgeInsets)swatchImageEdgeInsetsForSize:(CGSize)arg1 ;
-(id)supportedSeriesTypes;
-(char)supportsBorderFrame;
-(char)supportsEditingForAxisID:(id)arg1 ;
-(char)reverseSingleColumnLegendOrder;
-(char)supportsGroupedShadows;
-(char)supportsEditing;
-(char)supportsBackgroundFill;
-(char)supportsReverseChunking;
-(char)supportsTrendLines;
-(char)supportsErrorBars;
-(char)supportsElementSeriesNames;
-(char)supportsLabelExplosion;
-(char)supportsPercentNumberFormatting;
-(char)supportsSymbolOverhang;
-(char)supportsElementChunking;
-(char)supportsCategoryAxisMinorTickmarks;
-(char)supportsCategoryAxisSeriesNames;
-(char)supportsConnectingLines;
-(char)supportsMoreThanOneLiveCategory;
-(char)supportsCategoryLabelsInChartRangeEditor;
-(char)supportsSharedAndSeparateX;
-(char)supportsBubbleOptions;
-(void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2 ;
-(char)supportsShowLabelsInFrontOption;
-(id)animationFiltersWithDefaultFilters:(id)arg1 ;
-(Class)chartLayoutItemClass;
-(Class)chartLayoutClass;
-(Class)sageGeometeryHelperClass;
-(char)explosionAffectsChartBodyBounds;
-(char)supportsMinorGridlines;
-(char)supportsAxisLine;
-(char)supportsIndividualShadowRendering;
-(id)animationDeliveryStylesForFilter:(id)arg1 ;
-(id)initWithFeatureClass:(Class)arg1 ;
-(unsigned)presentationDimension;
-(char)supportsCategoryAxisLabels;
-(int)chartBodyBoundsDefinition;
-(CGSize)minimumChartBodySize;
-(char)approximatesTitleAccommodationUsingLegendSize;
-(char)requiresSeparateLabelsRenderPass;
-(char)supportsSeriesShadow;
-(char)supportsErrorBarsScatterX;
-(char)supportsMultipleValueScales;
-(char)supportsValueAxisLabelsPosition;
-(char)supportsAxisLabelsOrientation;
-(char)supportsTickmarks;
-(id)allCDESectionLabels;
-(char)supportsIncrementalResize;
-(id)p_debugDescription;
-(CGSize)mungeBodySize:(CGSize)arg1 ;
-(char)layoutFrameShouldEncloseInfoGeometry;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(id)g_genericToSpecificPropertyMapMixed;
-(id)g_genericToSpecificPropertyMapTwoAxis;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isHorizontal;
-(char)isPie;
-(Class)layoutClass;
@end

