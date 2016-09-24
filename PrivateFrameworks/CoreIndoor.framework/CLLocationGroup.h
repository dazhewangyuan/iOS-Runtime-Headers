/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLLocationGroup : NSObject {
    ECEFCoordinate * _centerECEF;
    GeographicCoordinate * _centerLatLon;
    NSString * _groupId;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__begin_; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__end_; 
        struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__first_; 
        } __end_cap_; 
    }  _locationIds;
    double  _tolerance;
    struct polygon<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, std::vector, std::vector, std::allocator, std::allocator> { 
        struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> { 
            struct point_xy<double, boost::geometry::cs::cartesian> {} *__begin_; 
            struct point_xy<double, boost::geometry::cs::cartesian> {} *__end_; 
            struct __compressed_pair<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> *, std::__1::allocator<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> > > { 
                struct point_xy<double, boost::geometry::cs::cartesian> {} *__first_; 
            } __end_cap_; 
        } m_outer; 
        struct vector<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator>, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { 
            struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *__begin_; 
            struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *__end_; 
            struct __compressed_pair<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> *, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { 
                struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *__first_; 
            } __end_cap_; 
        } m_inners; 
    }  _vertices;
}

@property (readonly) ECEFCoordinate *centerECEF;
@property (readonly) GeographicCoordinate *centerLatLon;
@property (readonly) NSString *groupId;
@property (readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::basic_string<char>' */ struct  locationIds; /* unknown property attribute:  std::__1::allocator<char> >}}} */
@property (readonly) double tolerance;
@property /* Warning: unhandled struct encoding: '{polygon<boost::geometry::model::d2::point_xy<double' */ struct  vertices; /* unknown property attribute:  allocator>}}}} */

+ (id)average:(id)arg1;
+ (struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_3_1_1; } x3; })stringVectorFromNSArray:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)centerECEF;
- (id)centerLatLon;
- (double)distance:(id)arg1;
- (const struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_3_1_1; } x3; }*)getLocationIds;
- (id)groupId;
- (id)init;
- (id)initWithGroupId:(id)arg1 locationIds:(id)arg2 vertices:(id)arg3 andTolerance:(double)arg4;
- (struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_3_1_1; } x3; })locationIds;
- (void)setVertices:(struct polygon<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, std::vector, std::vector, std::allocator, std::allocator> { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> { struct point_xy<double, boost::geometry::cs::cartesian> {} *x_1_1_1; struct point_xy<double, boost::geometry::cs::cartesian> {} *x_1_1_2; struct __compressed_pair<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> *, std::__1::allocator<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> > > { struct point_xy<double, boost::geometry::cs::cartesian> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator>, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_2_1_1; struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_2_1_2; struct __compressed_pair<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> *, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_3_2_1; } x_2_1_3; } x2; })arg1;
- (double)tolerance;
- (struct polygon<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, std::vector, std::vector, std::allocator, std::allocator> { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> { struct point_xy<double, boost::geometry::cs::cartesian> {} *x_1_1_1; struct point_xy<double, boost::geometry::cs::cartesian> {} *x_1_1_2; struct __compressed_pair<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> *, std::__1::allocator<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> > > { struct point_xy<double, boost::geometry::cs::cartesian> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator>, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_2_1_1; struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_2_1_2; struct __compressed_pair<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> *, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_3_2_1; } x_2_1_3; } x2; })vertices;

@end
