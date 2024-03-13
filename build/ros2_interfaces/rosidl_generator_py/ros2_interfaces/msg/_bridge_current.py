# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interfaces:msg/BridgeCurrent.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'anchor_fix_current'
# Member 'anchor_move_current'
# Member 'ascender_motor_current'
# Member 'wheelleg_joint_current'
# Member 'wheelleg_turret_current'
# Member 'wheelleg_wheel_current'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BridgeCurrent(type):
    """Metaclass of message 'BridgeCurrent'."""

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
            module = import_type_support('ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_interfaces.msg.BridgeCurrent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bridge_current
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bridge_current
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bridge_current
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bridge_current
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bridge_current

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BridgeCurrent(metaclass=Metaclass_BridgeCurrent):
    """Message class 'BridgeCurrent'."""

    __slots__ = [
        '_header',
        '_anchor_fix_current',
        '_anchor_move_current',
        '_ascender_motor_current',
        '_wheelleg_joint_current',
        '_wheelleg_turret_current',
        '_wheelleg_wheel_current',
        '_anchor_current_sum',
        '_ascender_current_sum',
        '_wheelleg_current_sum',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'anchor_fix_current': 'sequence<double>',
        'anchor_move_current': 'sequence<double>',
        'ascender_motor_current': 'sequence<double>',
        'wheelleg_joint_current': 'sequence<double>',
        'wheelleg_turret_current': 'sequence<double>',
        'wheelleg_wheel_current': 'sequence<double>',
        'anchor_current_sum': 'double',
        'ascender_current_sum': 'double',
        'wheelleg_current_sum': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.anchor_fix_current = array.array('d', kwargs.get('anchor_fix_current', []))
        self.anchor_move_current = array.array('d', kwargs.get('anchor_move_current', []))
        self.ascender_motor_current = array.array('d', kwargs.get('ascender_motor_current', []))
        self.wheelleg_joint_current = array.array('d', kwargs.get('wheelleg_joint_current', []))
        self.wheelleg_turret_current = array.array('d', kwargs.get('wheelleg_turret_current', []))
        self.wheelleg_wheel_current = array.array('d', kwargs.get('wheelleg_wheel_current', []))
        self.anchor_current_sum = kwargs.get('anchor_current_sum', float())
        self.ascender_current_sum = kwargs.get('ascender_current_sum', float())
        self.wheelleg_current_sum = kwargs.get('wheelleg_current_sum', float())

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
        if self.header != other.header:
            return False
        if self.anchor_fix_current != other.anchor_fix_current:
            return False
        if self.anchor_move_current != other.anchor_move_current:
            return False
        if self.ascender_motor_current != other.ascender_motor_current:
            return False
        if self.wheelleg_joint_current != other.wheelleg_joint_current:
            return False
        if self.wheelleg_turret_current != other.wheelleg_turret_current:
            return False
        if self.wheelleg_wheel_current != other.wheelleg_wheel_current:
            return False
        if self.anchor_current_sum != other.anchor_current_sum:
            return False
        if self.ascender_current_sum != other.ascender_current_sum:
            return False
        if self.wheelleg_current_sum != other.wheelleg_current_sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def anchor_fix_current(self):
        """Message field 'anchor_fix_current'."""
        return self._anchor_fix_current

    @anchor_fix_current.setter
    def anchor_fix_current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'anchor_fix_current' array.array() must have the type code of 'd'"
            self._anchor_fix_current = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'anchor_fix_current' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._anchor_fix_current = array.array('d', value)

    @builtins.property
    def anchor_move_current(self):
        """Message field 'anchor_move_current'."""
        return self._anchor_move_current

    @anchor_move_current.setter
    def anchor_move_current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'anchor_move_current' array.array() must have the type code of 'd'"
            self._anchor_move_current = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'anchor_move_current' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._anchor_move_current = array.array('d', value)

    @builtins.property
    def ascender_motor_current(self):
        """Message field 'ascender_motor_current'."""
        return self._ascender_motor_current

    @ascender_motor_current.setter
    def ascender_motor_current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'ascender_motor_current' array.array() must have the type code of 'd'"
            self._ascender_motor_current = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'ascender_motor_current' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ascender_motor_current = array.array('d', value)

    @builtins.property
    def wheelleg_joint_current(self):
        """Message field 'wheelleg_joint_current'."""
        return self._wheelleg_joint_current

    @wheelleg_joint_current.setter
    def wheelleg_joint_current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'wheelleg_joint_current' array.array() must have the type code of 'd'"
            self._wheelleg_joint_current = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'wheelleg_joint_current' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._wheelleg_joint_current = array.array('d', value)

    @builtins.property
    def wheelleg_turret_current(self):
        """Message field 'wheelleg_turret_current'."""
        return self._wheelleg_turret_current

    @wheelleg_turret_current.setter
    def wheelleg_turret_current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'wheelleg_turret_current' array.array() must have the type code of 'd'"
            self._wheelleg_turret_current = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'wheelleg_turret_current' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._wheelleg_turret_current = array.array('d', value)

    @builtins.property
    def wheelleg_wheel_current(self):
        """Message field 'wheelleg_wheel_current'."""
        return self._wheelleg_wheel_current

    @wheelleg_wheel_current.setter
    def wheelleg_wheel_current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'wheelleg_wheel_current' array.array() must have the type code of 'd'"
            self._wheelleg_wheel_current = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'wheelleg_wheel_current' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._wheelleg_wheel_current = array.array('d', value)

    @builtins.property
    def anchor_current_sum(self):
        """Message field 'anchor_current_sum'."""
        return self._anchor_current_sum

    @anchor_current_sum.setter
    def anchor_current_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'anchor_current_sum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'anchor_current_sum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._anchor_current_sum = value

    @builtins.property
    def ascender_current_sum(self):
        """Message field 'ascender_current_sum'."""
        return self._ascender_current_sum

    @ascender_current_sum.setter
    def ascender_current_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ascender_current_sum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ascender_current_sum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ascender_current_sum = value

    @builtins.property
    def wheelleg_current_sum(self):
        """Message field 'wheelleg_current_sum'."""
        return self._wheelleg_current_sum

    @wheelleg_current_sum.setter
    def wheelleg_current_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheelleg_current_sum' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheelleg_current_sum' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheelleg_current_sum = value
