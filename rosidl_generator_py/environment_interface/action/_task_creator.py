# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_interface:action/TaskCreator.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskCreator_Goal(type):
    """Metaclass of message 'TaskCreator_Goal'."""

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
                'environment_interface.action.TaskCreator_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__task_creator__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__task_creator__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__task_creator__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__task_creator__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__task_creator__goal

            from environment_interface.msg import Block
            if Block.__class__._TYPE_SUPPORT is None:
                Block.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SOLVER__DEFAULT': 'ompl',
            'PLANNER_ID__DEFAULT': 'RRTConnectkConfigDefault',
        }

    @property
    def SOLVER__DEFAULT(cls):
        """Return default value for message field 'solver'."""
        return 'ompl'

    @property
    def PLANNER_ID__DEFAULT(cls):
        """Return default value for message field 'planner_id'."""
        return 'RRTConnectkConfigDefault'


class TaskCreator_Goal(metaclass=Metaclass_TaskCreator_Goal):
    """Message class 'TaskCreator_Goal'."""

    __slots__ = [
        '_block',
        '_operation_id',
        '_robot_name',
        '_solver',
        '_planner_id',
    ]

    _fields_and_field_types = {
        'block': 'environment_interface/Block',
        'operation_id': 'int32',
        'robot_name': 'string',
        'solver': 'string',
        'planner_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['environment_interface', 'msg'], 'Block'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from environment_interface.msg import Block
        self.block = kwargs.get('block', Block())
        self.operation_id = kwargs.get('operation_id', int())
        self.robot_name = kwargs.get('robot_name', str())
        self.solver = kwargs.get(
            'solver', TaskCreator_Goal.SOLVER__DEFAULT)
        self.planner_id = kwargs.get(
            'planner_id', TaskCreator_Goal.PLANNER_ID__DEFAULT)

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
        if self.block != other.block:
            return False
        if self.operation_id != other.operation_id:
            return False
        if self.robot_name != other.robot_name:
            return False
        if self.solver != other.solver:
            return False
        if self.planner_id != other.planner_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def block(self):
        """Message field 'block'."""
        return self._block

    @block.setter
    def block(self, value):
        if __debug__:
            from environment_interface.msg import Block
            assert \
                isinstance(value, Block), \
                "The 'block' field must be a sub message of type 'Block'"
        self._block = value

    @builtins.property
    def operation_id(self):
        """Message field 'operation_id'."""
        return self._operation_id

    @operation_id.setter
    def operation_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operation_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'operation_id' field must be an integer in [-2147483648, 2147483647]"
        self._operation_id = value

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
    def solver(self):
        """Message field 'solver'."""
        return self._solver

    @solver.setter
    def solver(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'solver' field must be of type 'str'"
        self._solver = value

    @builtins.property
    def planner_id(self):
        """Message field 'planner_id'."""
        return self._planner_id

    @planner_id.setter
    def planner_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planner_id' field must be of type 'str'"
        self._planner_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TaskCreator_Result(type):
    """Metaclass of message 'TaskCreator_Result'."""

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
                'environment_interface.action.TaskCreator_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__task_creator__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__task_creator__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__task_creator__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__task_creator__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__task_creator__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskCreator_Result(metaclass=Metaclass_TaskCreator_Result):
    """Message class 'TaskCreator_Result'."""

    __slots__ = [
        '_task_resposnse',
    ]

    _fields_and_field_types = {
        'task_resposnse': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_resposnse = kwargs.get('task_resposnse', str())

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
        if self.task_resposnse != other.task_resposnse:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def task_resposnse(self):
        """Message field 'task_resposnse'."""
        return self._task_resposnse

    @task_resposnse.setter
    def task_resposnse(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_resposnse' field must be of type 'str'"
        self._task_resposnse = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TaskCreator_Feedback(type):
    """Metaclass of message 'TaskCreator_Feedback'."""

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
                'environment_interface.action.TaskCreator_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__task_creator__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__task_creator__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__task_creator__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__task_creator__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__task_creator__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskCreator_Feedback(metaclass=Metaclass_TaskCreator_Feedback):
    """Message class 'TaskCreator_Feedback'."""

    __slots__ = [
        '_partial_output',
    ]

    _fields_and_field_types = {
        'partial_output': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.partial_output = kwargs.get('partial_output', str())

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
        if self.partial_output != other.partial_output:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def partial_output(self):
        """Message field 'partial_output'."""
        return self._partial_output

    @partial_output.setter
    def partial_output(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'partial_output' field must be of type 'str'"
        self._partial_output = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TaskCreator_SendGoal_Request(type):
    """Metaclass of message 'TaskCreator_SendGoal_Request'."""

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
                'environment_interface.action.TaskCreator_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__task_creator__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__task_creator__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__task_creator__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__task_creator__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__task_creator__send_goal__request

            from environment_interface.action import TaskCreator
            if TaskCreator.Goal.__class__._TYPE_SUPPORT is None:
                TaskCreator.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskCreator_SendGoal_Request(metaclass=Metaclass_TaskCreator_SendGoal_Request):
    """Message class 'TaskCreator_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'environment_interface/TaskCreator_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_interface', 'action'], 'TaskCreator_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from environment_interface.action._task_creator import TaskCreator_Goal
        self.goal = kwargs.get('goal', TaskCreator_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from environment_interface.action._task_creator import TaskCreator_Goal
            assert \
                isinstance(value, TaskCreator_Goal), \
                "The 'goal' field must be a sub message of type 'TaskCreator_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TaskCreator_SendGoal_Response(type):
    """Metaclass of message 'TaskCreator_SendGoal_Response'."""

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
                'environment_interface.action.TaskCreator_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__task_creator__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__task_creator__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__task_creator__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__task_creator__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__task_creator__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskCreator_SendGoal_Response(metaclass=Metaclass_TaskCreator_SendGoal_Response):
    """Message class 'TaskCreator_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_TaskCreator_SendGoal(type):
    """Metaclass of service 'TaskCreator_SendGoal'."""

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
                'environment_interface.action.TaskCreator_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__task_creator__send_goal

            from environment_interface.action import _task_creator
            if _task_creator.Metaclass_TaskCreator_SendGoal_Request._TYPE_SUPPORT is None:
                _task_creator.Metaclass_TaskCreator_SendGoal_Request.__import_type_support__()
            if _task_creator.Metaclass_TaskCreator_SendGoal_Response._TYPE_SUPPORT is None:
                _task_creator.Metaclass_TaskCreator_SendGoal_Response.__import_type_support__()


class TaskCreator_SendGoal(metaclass=Metaclass_TaskCreator_SendGoal):
    from environment_interface.action._task_creator import TaskCreator_SendGoal_Request as Request
    from environment_interface.action._task_creator import TaskCreator_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TaskCreator_GetResult_Request(type):
    """Metaclass of message 'TaskCreator_GetResult_Request'."""

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
                'environment_interface.action.TaskCreator_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__task_creator__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__task_creator__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__task_creator__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__task_creator__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__task_creator__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskCreator_GetResult_Request(metaclass=Metaclass_TaskCreator_GetResult_Request):
    """Message class 'TaskCreator_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TaskCreator_GetResult_Response(type):
    """Metaclass of message 'TaskCreator_GetResult_Response'."""

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
                'environment_interface.action.TaskCreator_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__task_creator__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__task_creator__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__task_creator__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__task_creator__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__task_creator__get_result__response

            from environment_interface.action import TaskCreator
            if TaskCreator.Result.__class__._TYPE_SUPPORT is None:
                TaskCreator.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskCreator_GetResult_Response(metaclass=Metaclass_TaskCreator_GetResult_Response):
    """Message class 'TaskCreator_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'environment_interface/TaskCreator_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_interface', 'action'], 'TaskCreator_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from environment_interface.action._task_creator import TaskCreator_Result
        self.result = kwargs.get('result', TaskCreator_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from environment_interface.action._task_creator import TaskCreator_Result
            assert \
                isinstance(value, TaskCreator_Result), \
                "The 'result' field must be a sub message of type 'TaskCreator_Result'"
        self._result = value


class Metaclass_TaskCreator_GetResult(type):
    """Metaclass of service 'TaskCreator_GetResult'."""

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
                'environment_interface.action.TaskCreator_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__task_creator__get_result

            from environment_interface.action import _task_creator
            if _task_creator.Metaclass_TaskCreator_GetResult_Request._TYPE_SUPPORT is None:
                _task_creator.Metaclass_TaskCreator_GetResult_Request.__import_type_support__()
            if _task_creator.Metaclass_TaskCreator_GetResult_Response._TYPE_SUPPORT is None:
                _task_creator.Metaclass_TaskCreator_GetResult_Response.__import_type_support__()


class TaskCreator_GetResult(metaclass=Metaclass_TaskCreator_GetResult):
    from environment_interface.action._task_creator import TaskCreator_GetResult_Request as Request
    from environment_interface.action._task_creator import TaskCreator_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TaskCreator_FeedbackMessage(type):
    """Metaclass of message 'TaskCreator_FeedbackMessage'."""

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
                'environment_interface.action.TaskCreator_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__task_creator__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__task_creator__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__task_creator__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__task_creator__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__task_creator__feedback_message

            from environment_interface.action import TaskCreator
            if TaskCreator.Feedback.__class__._TYPE_SUPPORT is None:
                TaskCreator.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskCreator_FeedbackMessage(metaclass=Metaclass_TaskCreator_FeedbackMessage):
    """Message class 'TaskCreator_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'environment_interface/TaskCreator_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_interface', 'action'], 'TaskCreator_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from environment_interface.action._task_creator import TaskCreator_Feedback
        self.feedback = kwargs.get('feedback', TaskCreator_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from environment_interface.action._task_creator import TaskCreator_Feedback
            assert \
                isinstance(value, TaskCreator_Feedback), \
                "The 'feedback' field must be a sub message of type 'TaskCreator_Feedback'"
        self._feedback = value


class Metaclass_TaskCreator(type):
    """Metaclass of action 'TaskCreator'."""

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
                'environment_interface.action.TaskCreator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__task_creator

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from environment_interface.action import _task_creator
            if _task_creator.Metaclass_TaskCreator_SendGoal._TYPE_SUPPORT is None:
                _task_creator.Metaclass_TaskCreator_SendGoal.__import_type_support__()
            if _task_creator.Metaclass_TaskCreator_GetResult._TYPE_SUPPORT is None:
                _task_creator.Metaclass_TaskCreator_GetResult.__import_type_support__()
            if _task_creator.Metaclass_TaskCreator_FeedbackMessage._TYPE_SUPPORT is None:
                _task_creator.Metaclass_TaskCreator_FeedbackMessage.__import_type_support__()


class TaskCreator(metaclass=Metaclass_TaskCreator):

    # The goal message defined in the action definition.
    from environment_interface.action._task_creator import TaskCreator_Goal as Goal
    # The result message defined in the action definition.
    from environment_interface.action._task_creator import TaskCreator_Result as Result
    # The feedback message defined in the action definition.
    from environment_interface.action._task_creator import TaskCreator_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from environment_interface.action._task_creator import TaskCreator_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from environment_interface.action._task_creator import TaskCreator_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from environment_interface.action._task_creator import TaskCreator_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
