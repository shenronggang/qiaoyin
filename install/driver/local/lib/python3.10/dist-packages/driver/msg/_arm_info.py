# generated from rosidl_generator_py/resource/_idl.py.em
# with input from driver:msg/ArmInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'left_arm_joints'
# Member 'right_arm_joints'
# Member 'left_arm_cart'
# Member 'right_arm_cart'
# Member 'speed'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmInfo(type):
    """Metaclass of message 'ArmInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'driver.msg.ArmInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmInfo(metaclass=Metaclass_ArmInfo):
    """Message class 'ArmInfo'."""

    __slots__ = [
        '_left_arm_joints',
        '_right_arm_joints',
        '_left_arm_cart',
        '_right_arm_cart',
        '_speed',
        '_motor_on',
    ]

    _fields_and_field_types = {
        'left_arm_joints': 'double[7]',
        'right_arm_joints': 'double[7]',
        'left_arm_cart': 'double[6]',
        'right_arm_cart': 'double[6]',
        'speed': 'double[2]',
        'motor_on': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'left_arm_joints' not in kwargs:
            self.left_arm_joints = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.left_arm_joints = numpy.array(kwargs.get('left_arm_joints'), dtype=numpy.float64)
            assert self.left_arm_joints.shape == (7, )
        if 'right_arm_joints' not in kwargs:
            self.right_arm_joints = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.right_arm_joints = numpy.array(kwargs.get('right_arm_joints'), dtype=numpy.float64)
            assert self.right_arm_joints.shape == (7, )
        if 'left_arm_cart' not in kwargs:
            self.left_arm_cart = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.left_arm_cart = numpy.array(kwargs.get('left_arm_cart'), dtype=numpy.float64)
            assert self.left_arm_cart.shape == (6, )
        if 'right_arm_cart' not in kwargs:
            self.right_arm_cart = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.right_arm_cart = numpy.array(kwargs.get('right_arm_cart'), dtype=numpy.float64)
            assert self.right_arm_cart.shape == (6, )
        if 'speed' not in kwargs:
            self.speed = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.speed = numpy.array(kwargs.get('speed'), dtype=numpy.float64)
            assert self.speed.shape == (2, )
        self.motor_on = kwargs.get('motor_on', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.left_arm_joints != other.left_arm_joints):
            return False
        if all(self.right_arm_joints != other.right_arm_joints):
            return False
        if all(self.left_arm_cart != other.left_arm_cart):
            return False
        if all(self.right_arm_cart != other.right_arm_cart):
            return False
        if all(self.speed != other.speed):
            return False
        if self.motor_on != other.motor_on:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_arm_joints(self):
        """Message field 'left_arm_joints'."""
        return self._left_arm_joints

    @left_arm_joints.setter
    def left_arm_joints(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'left_arm_joints' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'left_arm_joints' numpy.ndarray() must have a size of 7"
            self._left_arm_joints = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'left_arm_joints' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._left_arm_joints = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def right_arm_joints(self):
        """Message field 'right_arm_joints'."""
        return self._right_arm_joints

    @right_arm_joints.setter
    def right_arm_joints(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'right_arm_joints' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'right_arm_joints' numpy.ndarray() must have a size of 7"
            self._right_arm_joints = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'right_arm_joints' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._right_arm_joints = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def left_arm_cart(self):
        """Message field 'left_arm_cart'."""
        return self._left_arm_cart

    @left_arm_cart.setter
    def left_arm_cart(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'left_arm_cart' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'left_arm_cart' numpy.ndarray() must have a size of 6"
            self._left_arm_cart = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'left_arm_cart' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._left_arm_cart = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def right_arm_cart(self):
        """Message field 'right_arm_cart'."""
        return self._right_arm_cart

    @right_arm_cart.setter
    def right_arm_cart(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'right_arm_cart' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'right_arm_cart' numpy.ndarray() must have a size of 6"
            self._right_arm_cart = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'right_arm_cart' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._right_arm_cart = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'speed' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'speed' numpy.ndarray() must have a size of 2"
            self._speed = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'speed' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._speed = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def motor_on(self):
        """Message field 'motor_on'."""
        return self._motor_on

    @motor_on.setter
    def motor_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_on' field must be of type 'bool'"
        self._motor_on = value
