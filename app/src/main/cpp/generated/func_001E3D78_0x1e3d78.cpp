#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001E3D78
// Address: 0x1e3d78 - 0x1e3dd0
void func_001E3D78_0x1e3d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E3D78_0x1e3d78");
#endif

    switch (ctx->pc) {
        case 0x1e3db0u: goto label_1e3db0;
        case 0x1e3dc4u: goto label_1e3dc4;
        default: break;
    }

    ctx->pc = 0x1e3d78u;

    // 0x1e3d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3d7c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e3d7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3d84: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3D84u;
    {
        const bool branch_taken_0x1e3d84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D84u;
        // 0x1e3d88: 0xa46004a8  sh          $zero, 0x4A8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1192), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d84) {
            ctx->pc = 0x1E3D94u;
            goto label_1e3d94;
        }
    }
    ctx->pc = 0x1E3D8Cu;
    // 0x1e3d8c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e3d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3d90: 0xa46204a8  sh          $v0, 0x4A8($v1)
    ctx->pc = 0x1e3d90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1192), (uint16_t)GPR_U32(ctx, 2));
label_1e3d94:
    // 0x1e3d94: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3D94u;
    {
        const bool branch_taken_0x1e3d94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D94u;
        // 0x1e3d98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d94) {
            ctx->pc = 0x1E3DB8u;
            goto label_1e3db8;
        }
    }
    ctx->pc = 0x1E3D9Cu;
    // 0x1e3d9c: 0x946204a8  lhu         $v0, 0x4A8($v1)
    ctx->pc = 0x1e3d9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1192)));
    // 0x1e3da0: 0x8c640430  lw          $a0, 0x430($v1)
    ctx->pc = 0x1e3da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1072)));
    // 0x1e3da4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e3da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e3da8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3DA8u;
    SET_GPR_U32(ctx, 31, 0x1E3DB0u);
    ctx->pc = 0x1E3DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DA8u;
    // 0x1e3dac: 0xa46204a8  sh          $v0, 0x4A8($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 1192), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3DA8u, 0x1E3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DB0u;
label_1e3db0:
    // 0x1e3db0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3DB0u;
    {
        const bool branch_taken_0x1e3db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DB0u;
        // 0x1e3db4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3db0) {
            ctx->pc = 0x1E3DC8u;
            goto label_1e3dc8;
        }
    }
    ctx->pc = 0x1E3DB8u;
label_1e3db8:
    // 0x1e3db8: 0x8c640430  lw          $a0, 0x430($v1)
    ctx->pc = 0x1e3db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1072)));
    // 0x1e3dbc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3DBCu;
    SET_GPR_U32(ctx, 31, 0x1E3DC4u);
    ctx->pc = 0x1E3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DBCu;
    // 0x1e3dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3DBCu, 0x1E3DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DC4u;
label_1e3dc4:
    // 0x1e3dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3dc8:
    // 0x1e3dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DC8u;
        // 0x1e3dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3DD0u;
}
