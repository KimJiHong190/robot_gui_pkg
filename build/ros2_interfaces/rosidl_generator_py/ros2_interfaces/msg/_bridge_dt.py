# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_interfaces:msg/BridgeDt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BridgeDt(type):
    """Metaclass of message 'BridgeDt'."""

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
                'ros2_interfaces.msg.BridgeDt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bridge_dt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bridge_dt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bridge_dt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bridge_dt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bridge_dt

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


class BridgeDt(metaclass=Metaclass_BridgeDt):
    """Message class 'BridgeDt'."""

    __slots__ = [
        '_header',
        '_dt_can_tx',
        '_dt_can_tx_joint',
        '_dt_can_tx_wheel',
        '_dt_can_tx_turret',
        '_dt_can_rx',
        '_dt_mean_can_tx',
        '_dt_mean_can_tx_joint',
        '_dt_mean_can_tx_wheel',
        '_dt_mean_can_tx_turret',
        '_dt_mean_can_rx',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'dt_can_tx': 'double',
        'dt_can_tx_joint': 'double',
        'dt_can_tx_wheel': 'double',
        'dt_can_tx_turret': 'double',
        'dt_can_rx': 'double',
        'dt_mean_can_tx': 'double',
        'dt_mean_can_tx_joint': 'double',
        'dt_mean_can_tx_wheel': 'double',
        'dt_mean_can_tx_turret': 'double',
        'dt_mean_can_rx': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.dt_can_tx = kwargs.get('dt_can_tx', float())
        self.dt_can_tx_joint = kwargs.get('dt_can_tx_joint', float())
        self.dt_can_tx_wheel = kwargs.get('dt_can_tx_wheel', float())
        self.dt_can_tx_turret = kwargs.get('dt_can_tx_turret', float())
        self.dt_can_rx = kwargs.get('dt_can_rx', float())
        self.dt_mean_can_tx = kwargs.get('dt_mean_can_tx', float())
        self.dt_mean_can_tx_joint = kwargs.get('dt_mean_can_tx_joint', float())
        self.dt_mean_can_tx_wheel = kwargs.get('dt_mean_can_tx_wheel', float())
        self.dt_mean_can_tx_turret = kwargs.get('dt_mean_can_tx_turret', float())
        self.dt_mean_can_rx = kwargs.get('dt_mean_can_rx', float())

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
        if self.dt_can_tx != other.dt_can_tx:
            return False
        if self.dt_can_tx_joint != other.dt_can_tx_joint:
            return False
        if self.dt_can_tx_wheel != other.dt_can_tx_wheel:
            return False
        if self.dt_can_tx_turret != other.dt_can_tx_turret:
            return False
        if self.dt_can_rx != other.dt_can_rx:
            return False
        if self.dt_mean_can_tx != other.dt_mean_can_tx:
            return False
        if self.dt_mean_can_tx_joint != other.dt_mean_can_tx_joint:
            return False
        if self.dt_mean_can_tx_wheel != other.dt_mean_can_tx_wheel:
            return False
        if self.dt_mean_can_tx_turret != other.dt_mean_can_tx_turret:
            return False
        if self.dt_mean_can_rx != other.dt_mean_can_rx:
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
    def dt_can_tx(self):
        """Message field 'dt_can_tx'."""
        return self._dt_can_tx

    @dt_can_tx.setter
    def dt_can_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_can_tx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dt_can_tx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dt_can_tx = value

    @builtins.property
    def dt_can_tx_joint(self):
        """Message field 'dt_can_tx_joint'."""
        return self._dt_can_tx_joint

    @dt_can_tx_joint.setter
    def dt_can_tx_joint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_can_tx_joint' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dt_can_tx_joint' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dt_can_tx_joint = value

    @builtins.property
    def dt_can_tx_wheel(self):
        """Message field 'dt_can_tx_wheel'."""
        return self._dt_can_tx_wheel

    @dt_can_tx_wheel.setter
    def dt_can_tx_wheel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_can_tx_wheel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dt_can_tx_wheel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dt_can_tx_wheel = value

    @builtins.property
    def dt_can_tx_turret(self):
        """Message field 'dt_can_tx_turret'."""
        return self._dt_can_tx_turret

    @dt_can_tx_turret.setter
    def dt_can_tx_turret(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_can_tx_turret' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dt_can_tx_turret' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dt_can_tx_turret = value

    @builtins.property
    def dt_can_rx(self):
        """Message field 'dt_can_rx'."""
        return self._dt_can_rx

    @dt_can_rx.setter
    def dt_can_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_can_rx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dt_can_rx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dt_can_rx = value

    @builtins.property
    def dt_mean_can_tx(self):
        """Message field 'dt_mean_can_tx'."""
        return self._dt_mean_can_tx

    @dt_mean_can_tx.setter
    def dt_mean_can_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_mean_can_tx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dt_mean_can_tx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dt_mean_can_tx = value

    @builtins.property
    def dt_mean_can_tx_joint(self):
        """Message field 'dt_mean_can_tx_joint'."""
        return self._dt_mean_can_tx_joint

    @dt_mean_can_tx_joint.setter
    def dt_mean_can_tx_joint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_mean_can_tx_joint' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dt_mean_can_tx_joint' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dt_mean_can_tx_joint = value

    @builtins.property
    def dt_mean_can_tx_wheel(self):
        """Message field 'dt_mean_can_tx_wheel'."""
        return self._dt_mean_can_tx_wheel

    @dt_mean_can_tx_wheel.setter
    def dt_mean_can_tx_wheel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_mean_can_tx_wheel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dt_mean_can_tx_wheel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dt_mean_can_tx_wheel = value

    @builtins.property
    def dt_mean_can_tx_turret(self):
        """Message field 'dt_mean_can_tx_turret'."""
        return self._dt_mean_can_tx_turret

    @dt_mean_can_tx_turret.setter
    def dt_mean_can_tx_turret(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_mean_can_tx_turret' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dt_mean_can_tx_turret' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dt_mean_can_tx_turret = value

    @builtins.property
    def dt_mean_can_rx(self):
        """Message field 'dt_mean_can_rx'."""
        return self._dt_mean_can_rx

    @dt_mean_can_rx.setter
    def dt_mean_can_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_mean_can_rx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dt_mean_can_rx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dt_mean_can_rx = value
