# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_interface:msg/Block.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Block(type):
    """Metaclass of message 'Block'."""

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
            module = import_type_support('environment_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'environment_interface.msg.Block')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__block
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__block
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__block
            cls._TYPE_SUPPORT = module.type_support_msg__msg__block
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__block

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'IS_SUPPORT__DEFAULT': False,
        }

    @property
    def IS_SUPPORT__DEFAULT(cls):
        """Return default value for message field 'is_support'."""
        return False


class Block(metaclass=Metaclass_Block):
    """Message class 'Block'."""

    __slots__ = [
        '_name',
        '_frame_id',
        '_x',
        '_y',
        '_z',
        '_x_size',
        '_y_size',
        '_number',
        '_is_support',
        '_color',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'frame_id': 'string',
        'x': 'float',
        'y': 'float',
        'z': 'float',
        'x_size': 'float',
        'y_size': 'float',
        'number': 'int64',
        'is_support': 'boolean',
        'color': 'std_msgs/ColorRGBA',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.frame_id = kwargs.get('frame_id', str())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.x_size = kwargs.get('x_size', float())
        self.y_size = kwargs.get('y_size', float())
        self.number = kwargs.get('number', int())
        self.is_support = kwargs.get(
            'is_support', Block.IS_SUPPORT__DEFAULT)
        from std_msgs.msg import ColorRGBA
        self.color = kwargs.get('color', ColorRGBA())

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
        if self.name != other.name:
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.x_size != other.x_size:
            return False
        if self.y_size != other.y_size:
            return False
        if self.number != other.number:
            return False
        if self.is_support != other.is_support:
            return False
        if self.color != other.color:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'frame_id' field must be of type 'str'"
        self._frame_id = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z = value

    @builtins.property
    def x_size(self):
        """Message field 'x_size'."""
        return self._x_size

    @x_size.setter
    def x_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_size = value

    @builtins.property
    def y_size(self):
        """Message field 'y_size'."""
        return self._y_size

    @y_size.setter
    def y_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_size = value

    @builtins.property
    def number(self):
        """Message field 'number'."""
        return self._number

    @number.setter
    def number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'number' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._number = value

    @builtins.property
    def is_support(self):
        """Message field 'is_support'."""
        return self._is_support

    @is_support.setter
    def is_support(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_support' field must be of type 'bool'"
        self._is_support = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'color' field must be a sub message of type 'ColorRGBA'"
        self._color = value
