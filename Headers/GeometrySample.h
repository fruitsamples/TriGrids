/*	GeometrySample.h	� 1995 Apple Computer, Inc.	03/22/95	rdd		initial version	04/14/95	rdd		added geometry and face uv attributes*/unsigned long GetLibraryMaxSimpleTriGrid(void);TQ3GeometryObject NewLibraryTriGrid(unsigned long num);/* * Geometry Library Constants *//*	0	Flat 5x5	1	Torus	2	Wavey Torus	3	Splash	4	Sphere	5	Cone	6	Pipe	7	Steps	8	Spring */#define	kGeometryLibrary_TriGridMaxSimple		9#define	kGeometryLibraryRange_Simple			0#define	kGeometryLibraryRange_UVGeoAttributes	100#define	kGeometryLibraryRange_UVFaceAttributes	200#define	kGeometryLibraryRange_Max				kGeometryLibraryRange_UVFaceAttributes#define	kGeometryLibraryRange 					100#define mHasUVGeoAttributes(num)				((num >= kGeometryLibraryRange_UVGeoAttributes)  &&						\								    			 (num <  kGeometryLibraryRange_UVGeoAttributes + kGeometryLibraryRange))#define mHasUVFaceAttributes(num)				((num >= kGeometryLibraryRange_UVFaceAttributes)  &&					\								    			 (num <  kGeometryLibraryRange_UVFaceAttributes + kGeometryLibraryRange))/* EOF */