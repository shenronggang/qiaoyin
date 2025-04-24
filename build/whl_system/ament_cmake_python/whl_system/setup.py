from setuptools import find_packages
from setuptools import setup

setup(
    name='whl_system',
    version='0.0.0',
    packages=find_packages(
        include=('whl_system', 'whl_system.*')),
)
