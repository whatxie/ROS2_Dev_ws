from setuptools import find_packages
from setuptools import setup

setup(
    name='origincar_msg',
    version='0.0.0',
    packages=find_packages(
        include=('origincar_msg', 'origincar_msg.*')),
)
