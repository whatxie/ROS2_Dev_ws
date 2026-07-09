from setuptools import find_packages
from setuptools import setup

setup(
    name='origincar_base',
    version='0.0.0',
    packages=find_packages(
        include=('origincar_base', 'origincar_base.*')),
)
