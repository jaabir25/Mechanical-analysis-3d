from setuptools import find_packages
from setuptools import setup

setup(
    name='environment_interface',
    version='0.0.0',
    packages=find_packages(
        include=('environment_interface', 'environment_interface.*')),
)
