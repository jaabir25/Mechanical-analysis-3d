# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_interface:srv/BlockRemoveAll.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BlockRemoveAll_Request(type):
    """Metaclass of message 'BlockRemoveAll_Request'."""

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
                'environment_interface.srv.BlockRemoveAll_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__block_remove_all__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__block_remove_all__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__block_remove_all__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__block_remove_all__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__block_remove_all__request

            from moveit_msgs.msg import CollisionObject
            if CollisionObject.__class__._TYPE_SUPPORT is None:
                CollisionObject.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BlockRemoveAll_Request(metaclass=Metaclass_BlockRemoveAll_Request):
    """Message class 'BlockRemoveAll_Request'."""

    __slots__ = [
        '_blocks',
    ]

    _fields_and_field_types = {
        'blocks': 'sequence<moveit_msgs/CollisionObject>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'CollisionObject')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.blocks = kwargs.get('blocks', [])

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
        if self.blocks != other.blocks:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def blocks(self):
        """Message field 'blocks'."""
        return self._blocks

    @blocks.setter
    def blocks(self, value):
        if __debug__:
            from moveit_msgs.msg import CollisionObject
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
                 all(isinstance(v, CollisionObject) for v in value) and
                 True), \
                "The 'blocks' field must be a set or sequence and each value of type 'CollisionObject'"
        self._blocks = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BlockRemoveAll_Response(type):
    """Metaclass of message 'BlockRemoveAll_Response'."""

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
                'environment_interface.srv.BlockRemoveAll_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__block_remove_all__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__block_remove_all__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__block_remove_all__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__block_remove_all__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__block_remove_all__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BlockRemoveAll_Response(metaclass=Metaclass_BlockRemoveAll_Response):
    """Message class 'BlockRemoveAll_Response'."""

    __slots__ = [
        '_output',
    ]

    _fields_and_field_types = {
        'output': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.output = kwargs.get('output', int())

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
        if self.output != other.output:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def output(self):
        """Message field 'output'."""
        return self._output

    @output.setter
    def output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'output' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'output' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._output = value


class Metaclass_BlockRemoveAll(type):
    """Metaclass of service 'BlockRemoveAll'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('environment_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'environment_interface.srv.BlockRemoveAll')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__block_remove_all

            from environment_interface.srv import _block_remove_all
            if _block_remove_all.Metaclass_BlockRemoveAll_Request._TYPE_SUPPORT is None:
                _block_remove_all.Metaclass_BlockRemoveAll_Request.__import_type_support__()
            if _block_remove_all.Metaclass_BlockRemoveAll_Response._TYPE_SUPPORT is None:
                _block_remove_all.Metaclass_BlockRemoveAll_Response.__import_type_support__()


class BlockRemoveAll(metaclass=Metaclass_BlockRemoveAll):
    from environment_interface.srv._block_remove_all import BlockRemoveAll_Request as Request
    from environment_interface.srv._block_remove_all import BlockRemoveAll_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
