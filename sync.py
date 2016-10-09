#!/usr/bin/python

import shutil
import glob
import os

SRCDIR=r"/home/abma/dev/spring/develop"
DSTDIR=r"/tmp/Shard/spring-includes"
fileglobs=r"""rts/ExternalAI/Interface/aidefines.h
rts/System/maindefines.h
rts/System/exportdefines.h
rts/ExternalAI/Interface/AISEvents.h
rts/ExternalAI/Interface/SSkirmishAICallback.h
rts/ExternalAI/Interface/AISCommands.h
rts/System/float3.h
rts/System/BranchPrediction.h
rts/lib/streflop/streflop_cond.h
rts/System/creg/creg_cond.h
rts/System/creg/ISerializer.h
rts/System/FastMath.h
AI/Wrappers/Cpp/src/AIColor.h
AI/Wrappers/Cpp/src/CallbackAIException.h
AI/Wrappers/Cpp/src/AIException.h
AI/Wrappers/Cpp/src/EventAIException.h
AI/Wrappers/Cpp/src/AIFloat3.h
AI/Wrappers/Cpp/src/AIEvent.h
AI/Wrappers/Cpp/src-generated/*.h"""

for g in fileglobs.split("\n"):
	for f in glob.glob(os.path.join(SRCDIR, g)):
		src = f
		dst = DSTDIR + f[len(SRCDIR):]
		dstdir = os.path.dirname(dst)
		if not os.path.isdir(dstdir):
			os.makedirs(dstdir)
		print("%s -> %s" %(src, dst))
		shutil.copy(src, dst)
