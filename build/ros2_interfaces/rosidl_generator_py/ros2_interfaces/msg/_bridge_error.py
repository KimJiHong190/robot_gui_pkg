# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interfaces:msg/BridgeError.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'error_joint_stuck'
# Member 'is_error_over_current'
# Member 'is_error_over_range'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BridgeError(type):
    """Metaclass of message 'BridgeError'."""

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
                'ros2_interfaces.msg.BridgeError')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bridge_error
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bridge_error
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bridge_error
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bridge_error
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bridge_error

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


class BridgeError(metaclass=Metaclass_BridgeError):
    """Message class 'BridgeError'."""

    __slots__ = [
        '_header',
        '_error_can',
        '_error_joint_stuck',
        '_is_error_over_current',
        '_is_error_over_range',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'error_can': 'int64',
        'error_joint_stuck': 'sequence<int64>',
        'is_error_over_current': 'sequence<int64>',
        'is_error_over_range': 'sequence<int64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.error_can = kwargs.get('error_can', int())
        self.error_joint_stuck = array.array('q', kwargs.get('error_joint_stuck', []))
        self.is_error_over_current = array.array('q', kwargs.get('is_error_over_current', []))
        self.is_error_over_range = array.array('q', kwargs.get('is_error_over_range', []))

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
        if self.error_can != other.error_can:
            return False
        if self.error_joint_stuck != other.error_joint_stuck:
            return False
        if self.is_error_over_current != other.is_error_over_current:
            return False
        if self.is_error_over_range != other.is_error_over_range:
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
    def error_can(self):
        """Message field 'error_can'."""
        return self._error_can

    @error_can.setter
    def error_can(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_can' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'error_can' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._error_can = value

    @builtins.property
    def error_joint_stuck(self):
        """Message field 'error_joint_stuck'."""
        return self._error_joint_stuck

    @error_joint_stuck.setter
    def error_joint_stuck(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'error_joint_stuck' array.array() must have the type code of 'q'"
            self._error_joint_stuck = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'error_joint_stuck' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._error_joint_stuck = array.array('q', value)

    @builtins.property
    def is_error_over_current(self):
        """Message field 'is_error_over_current'."""
        return self._is_error_over_current

    @is_error_over_current.setter
    def is_error_over_current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'is_error_over_current' array.array() must have the type code of 'q'"
            self._is_error_over_current = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'is_error_over_current' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._is_error_over_current = array.array('q', value)

    @builtins.property
    def is_error_over_range(self):
        """Message field 'is_error_over_range'."""
        return self._is_error_over_range

    @is_error_over_range.setter
    def is_error_over_range(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'is_error_over_range' array.array() must have the type code of 'q'"
            self._is_error_over_range = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'is_error_over_range' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._is_error_over_range = array.array('q', value)
