# -*- coding: utf-8 -*-
from setuptools import setup
import os
from glob import glob

package_name = 'line_follower_pkg'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='user',
    maintainer_email='user@todo.todo',
    description='Simple Line Follower',
    license='TODO: License declaration',
    entry_points={
        'console_scripts': [
            'line_follower = line_follower_pkg.line_follower_node:main',
        ],
    },
)