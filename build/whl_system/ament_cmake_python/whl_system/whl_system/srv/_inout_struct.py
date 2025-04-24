# generated from rosidl_generator_py/resource/_idl.py.em
# with input from whl_system:srv/InoutStruct.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InoutStruct_Request(type):
    """Metaclass of message 'InoutStruct_Request'."""

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
            module = import_type_support('whl_system')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'whl_system.srv.InoutStruct_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inout_struct__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inout_struct__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inout_struct__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inout_struct__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inout_struct__request

            from whl_system.msg import AgvInfo
            if AgvInfo.__class__._TYPE_SUPPORT is None:
                AgvInfo.__class__.__import_type_support__()

            from whl_system.msg import ArmInfo
            if ArmInfo.__class__._TYPE_SUPPORT is None:
                ArmInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InoutStruct_Request(metaclass=Metaclass_InoutStruct_Request):
    """Message class 'InoutStruct_Request'."""

    __slots__ = [
        '_robot_name',
        '_running_mode',
        '_ctrl_cmd',
        '_enable',
        '_arm_info',
        '_agv_info',
    ]

    _fields_and_field_types = {
        'robot_name': 'string',
        'running_mode': 'int32',
        'ctrl_cmd': 'int32',
        'enable': 'boolean',
        'arm_info': 'whl_system/ArmInfo',
        'agv_info': 'whl_system/AgvInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['whl_system', 'msg'], 'ArmInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['whl_system', 'msg'], 'AgvInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_name = kwargs.get('robot_name', str())
        self.running_mode = kwargs.get('running_mode', int())
        self.ctrl_cmd = kwargs.get('ctrl_cmd', int())
        self.enable = kwargs.get('enable', bool())
        from whl_system.msg import ArmInfo
        self.arm_info = kwargs.get('arm_info', ArmInfo())
        from whl_system.msg import AgvInfo
        self.agv_info = kwargs.get('agv_info', AgvInfo())

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
        if self.robot_name != other.robot_name:
            return False
        if self.running_mode != other.running_mode:
            return False
        if self.ctrl_cmd != other.ctrl_cmd:
            return False
        if self.enable != other.enable:
            return False
        if self.arm_info != other.arm_info:
            return False
        if self.agv_info != other.agv_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_name(self):
        """Message field 'robot_name'."""
        return self._robot_name

    @robot_name.setter
    def robot_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_name' field must be of type 'str'"
        self._robot_name = value

    @builtins.property
    def running_mode(self):
        """Message field 'running_mode'."""
        return self._running_mode

    @running_mode.setter
    def running_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'running_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'running_mode' field must be an integer in [-2147483648, 2147483647]"
        self._running_mode = value

    @builtins.property
    def ctrl_cmd(self):
        """Message field 'ctrl_cmd'."""
        return self._ctrl_cmd

    @ctrl_cmd.setter
    def ctrl_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ctrl_cmd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ctrl_cmd' field must be an integer in [-2147483648, 2147483647]"
        self._ctrl_cmd = value

    @builtins.property
    def enable(self):
        """Message field 'enable'."""
        return self._enable

    @enable.setter
    def enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable' field must be of type 'bool'"
        self._enable = value

    @builtins.property
    def arm_info(self):
        """Message field 'arm_info'."""
        return self._arm_info

    @arm_info.setter
    def arm_info(self, value):
        if __debug__:
            from whl_system.msg import ArmInfo
            assert \
                isinstance(value, ArmInfo), \
                "The 'arm_info' field must be a sub message of type 'ArmInfo'"
        self._arm_info = value

    @builtins.property
    def agv_info(self):
        """Message field 'agv_info'."""
        return self._agv_info

    @agv_info.setter
    def agv_info(self, value):
        if __debug__:
            from whl_system.msg import AgvInfo
            assert \
                isinstance(value, AgvInfo), \
                "The 'agv_info' field must be a sub message of type 'AgvInfo'"
        self._agv_info = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# Member 'q_agv_peed'
# Member 'exp_agv_peed'
# Member 'robot_pos'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_InoutStruct_Response(type):
    """Metaclass of message 'InoutStruct_Response'."""

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
            module = import_type_support('whl_system')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'whl_system.srv.InoutStruct_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inout_struct__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inout_struct__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inout_struct__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inout_struct__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inout_struct__response

            from whl_system.msg import ArmInfo
            if ArmInfo.__class__._TYPE_SUPPORT is None:
                ArmInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InoutStruct_Response(metaclass=Metaclass_InoutStruct_Response):
    """Message class 'InoutStruct_Response'."""

    __slots__ = [
        '_motor_on',
        '_running_mode',
        '_ctrl_cmd',
        '_gripper',
        '_q_agv_peed',
        '_exp_agv_peed',
        '_robot_pos',
        '_q_arm_info',
        '_exp_arm_info',
        '_step',
    ]

    _fields_and_field_types = {
        'motor_on': 'int32',
        'running_mode': 'int32',
        'ctrl_cmd': 'int32',
        'gripper': 'boolean[2]',
        'q_agv_peed': 'double[2]',
        'exp_agv_peed': 'double[2]',
        'robot_pos': 'double[3]',
        'q_arm_info': 'whl_system/ArmInfo',
        'exp_arm_info': 'whl_system/ArmInfo',
        'step': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['whl_system', 'msg'], 'ArmInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['whl_system', 'msg'], 'ArmInfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_on = kwargs.get('motor_on', int())
        self.running_mode = kwargs.get('running_mode', int())
        self.ctrl_cmd = kwargs.get('ctrl_cmd', int())
        self.gripper = kwargs.get(
            'gripper',
            [bool() for x in range(2)]
        )
        if 'q_agv_peed' not in kwargs:
            self.q_agv_peed = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.q_agv_peed = numpy.array(kwargs.get('q_agv_peed'), dtype=numpy.float64)
            assert self.q_agv_peed.shape == (2, )
        if 'exp_agv_peed' not in kwargs:
            self.exp_agv_peed = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.exp_agv_peed = numpy.array(kwargs.get('exp_agv_peed'), dtype=numpy.float64)
            assert self.exp_agv_peed.shape == (2, )
        if 'robot_pos' not in kwargs:
            self.robot_pos = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.robot_pos = numpy.array(kwargs.get('robot_pos'), dtype=numpy.float64)
            assert self.robot_pos.shape == (3, )
        from whl_system.msg import ArmInfo
        self.q_arm_info = kwargs.get('q_arm_info', ArmInfo())
        from whl_system.msg import ArmInfo
        self.exp_arm_info = kwargs.get('exp_arm_info', ArmInfo())
        self.step = kwargs.get('step', int())

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
        if self.motor_on != other.motor_on:
            return False
        if self.running_mode != other.running_mode:
            return False
        if self.ctrl_cmd != other.ctrl_cmd:
            return False
        if self.gripper != other.gripper:
            return False
        if all(self.q_agv_peed != other.q_agv_peed):
            return False
        if all(self.exp_agv_peed != other.exp_agv_peed):
            return False
        if all(self.robot_pos != other.robot_pos):
            return False
        if self.q_arm_info != other.q_arm_info:
            return False
        if self.exp_arm_info != other.exp_arm_info:
            return False
        if self.step != other.step:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_on(self):
        """Message field 'motor_on'."""
        return self._motor_on

    @motor_on.setter
    def motor_on(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_on' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor_on' field must be an integer in [-2147483648, 2147483647]"
        self._motor_on = value

    @builtins.property
    def running_mode(self):
        """Message field 'running_mode'."""
        return self._running_mode

    @running_mode.setter
    def running_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'running_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'running_mode' field must be an integer in [-2147483648, 2147483647]"
        self._running_mode = value

    @builtins.property
    def ctrl_cmd(self):
        """Message field 'ctrl_cmd'."""
        return self._ctrl_cmd

    @ctrl_cmd.setter
    def ctrl_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ctrl_cmd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ctrl_cmd' field must be an integer in [-2147483648, 2147483647]"
        self._ctrl_cmd = value

    @builtins.property
    def gripper(self):
        """Message field 'gripper'."""
        return self._gripper

    @gripper.setter
    def gripper(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'gripper' field must be a set or sequence with length 2 and each value of type 'bool'"
        self._gripper = value

    @builtins.property
    def q_agv_peed(self):
        """Message field 'q_agv_peed'."""
        return self._q_agv_peed

    @q_agv_peed.setter
    def q_agv_peed(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'q_agv_peed' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'q_agv_peed' numpy.ndarray() must have a size of 2"
            self._q_agv_peed = value
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
                "The 'q_agv_peed' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._q_agv_peed = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def exp_agv_peed(self):
        """Message field 'exp_agv_peed'."""
        return self._exp_agv_peed

    @exp_agv_peed.setter
    def exp_agv_peed(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'exp_agv_peed' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'exp_agv_peed' numpy.ndarray() must have a size of 2"
            self._exp_agv_peed = value
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
                "The 'exp_agv_peed' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._exp_agv_peed = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def robot_pos(self):
        """Message field 'robot_pos'."""
        return self._robot_pos

    @robot_pos.setter
    def robot_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'robot_pos' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'robot_pos' numpy.ndarray() must have a size of 3"
            self._robot_pos = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'robot_pos' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._robot_pos = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def q_arm_info(self):
        """Message field 'q_arm_info'."""
        return self._q_arm_info

    @q_arm_info.setter
    def q_arm_info(self, value):
        if __debug__:
            from whl_system.msg import ArmInfo
            assert \
                isinstance(value, ArmInfo), \
                "The 'q_arm_info' field must be a sub message of type 'ArmInfo'"
        self._q_arm_info = value

    @builtins.property
    def exp_arm_info(self):
        """Message field 'exp_arm_info'."""
        return self._exp_arm_info

    @exp_arm_info.setter
    def exp_arm_info(self, value):
        if __debug__:
            from whl_system.msg import ArmInfo
            assert \
                isinstance(value, ArmInfo), \
                "The 'exp_arm_info' field must be a sub message of type 'ArmInfo'"
        self._exp_arm_info = value

    @builtins.property
    def step(self):
        """Message field 'step'."""
        return self._step

    @step.setter
    def step(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'step' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'step' field must be an integer in [-2147483648, 2147483647]"
        self._step = value


class Metaclass_InoutStruct(type):
    """Metaclass of service 'InoutStruct'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('whl_system')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'whl_system.srv.InoutStruct')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__inout_struct

            from whl_system.srv import _inout_struct
            if _inout_struct.Metaclass_InoutStruct_Request._TYPE_SUPPORT is None:
                _inout_struct.Metaclass_InoutStruct_Request.__import_type_support__()
            if _inout_struct.Metaclass_InoutStruct_Response._TYPE_SUPPORT is None:
                _inout_struct.Metaclass_InoutStruct_Response.__import_type_support__()


class InoutStruct(metaclass=Metaclass_InoutStruct):
    from whl_system.srv._inout_struct import InoutStruct_Request as Request
    from whl_system.srv._inout_struct import InoutStruct_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
