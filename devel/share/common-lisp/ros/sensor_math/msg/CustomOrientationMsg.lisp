; Auto-generated. Do not edit!


(cl:in-package sensor_math-msg)


;//! \htmlinclude CustomOrientationMsg.msg.html

(cl:defclass <CustomOrientationMsg> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (roll
    :reader roll
    :initarg :roll
    :type cl:float
    :initform 0.0)
   (pitch
    :reader pitch
    :initarg :pitch
    :type cl:float
    :initform 0.0)
   (yaw
    :reader yaw
    :initarg :yaw
    :type cl:float
    :initform 0.0))
)

(cl:defclass CustomOrientationMsg (<CustomOrientationMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CustomOrientationMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CustomOrientationMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name sensor_math-msg:<CustomOrientationMsg> is deprecated: use sensor_math-msg:CustomOrientationMsg instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <CustomOrientationMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sensor_math-msg:header-val is deprecated.  Use sensor_math-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'roll-val :lambda-list '(m))
(cl:defmethod roll-val ((m <CustomOrientationMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sensor_math-msg:roll-val is deprecated.  Use sensor_math-msg:roll instead.")
  (roll m))

(cl:ensure-generic-function 'pitch-val :lambda-list '(m))
(cl:defmethod pitch-val ((m <CustomOrientationMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sensor_math-msg:pitch-val is deprecated.  Use sensor_math-msg:pitch instead.")
  (pitch m))

(cl:ensure-generic-function 'yaw-val :lambda-list '(m))
(cl:defmethod yaw-val ((m <CustomOrientationMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sensor_math-msg:yaw-val is deprecated.  Use sensor_math-msg:yaw instead.")
  (yaw m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CustomOrientationMsg>) ostream)
  "Serializes a message object of type '<CustomOrientationMsg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'roll))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pitch))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'yaw))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CustomOrientationMsg>) istream)
  "Deserializes a message object of type '<CustomOrientationMsg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'roll) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pitch) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'yaw) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CustomOrientationMsg>)))
  "Returns string type for a message object of type '<CustomOrientationMsg>"
  "sensor_math/CustomOrientationMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CustomOrientationMsg)))
  "Returns string type for a message object of type 'CustomOrientationMsg"
  "sensor_math/CustomOrientationMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CustomOrientationMsg>)))
  "Returns md5sum for a message object of type '<CustomOrientationMsg>"
  "e16d253ac46e3d525d41cd25c5023ecc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CustomOrientationMsg)))
  "Returns md5sum for a message object of type 'CustomOrientationMsg"
  "e16d253ac46e3d525d41cd25c5023ecc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CustomOrientationMsg>)))
  "Returns full string definition for message of type '<CustomOrientationMsg>"
  (cl:format cl:nil "#CustomOrientationMsg.msg~%Header header~%~%float32 roll~%float32 pitch~%float32 yaw~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CustomOrientationMsg)))
  "Returns full string definition for message of type 'CustomOrientationMsg"
  (cl:format cl:nil "#CustomOrientationMsg.msg~%Header header~%~%float32 roll~%float32 pitch~%float32 yaw~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CustomOrientationMsg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CustomOrientationMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'CustomOrientationMsg
    (cl:cons ':header (header msg))
    (cl:cons ':roll (roll msg))
    (cl:cons ':pitch (pitch msg))
    (cl:cons ':yaw (yaw msg))
))
