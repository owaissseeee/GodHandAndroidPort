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

// Function: GetObjClassDesc_19E3F8
// Address: 0x19e3f8 - 0x19e448
void GetObjClassDesc_19E3F8_0x19e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjClassDesc_19E3F8_0x19e3f8");
#endif

    switch (ctx->pc) {
        case 0x19e41cu: goto label_19e41c;
        case 0x19e434u: goto label_19e434;
        default: break;
    }

    ctx->pc = 0x19e3f8u;

    // 0x19e3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e3fc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19e400: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19e400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19e404: 0x8c625e58  lw          $v0, 0x5E58($v1)
    ctx->pc = 0x19e404u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785E58u));
    // 0x19e408: 0x24705e58  addiu       $s0, $v1, 0x5E58
    ctx->pc = 0x19e408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24152));
    // 0x19e40c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E40Cu;
    {
        const bool branch_taken_0x19e40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E40Cu;
        // 0x19e410: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e40c) {
            ctx->pc = 0x19E434u;
            goto label_19e434;
        }
    }
    ctx->pc = 0x19E414u;
    // 0x19e414: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19E414u;
    SET_GPR_U32(ctx, 31, 0x19E41Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19E414u, 0x19E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E41Cu;
label_19e41c:
    // 0x19e41c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19e420: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19e420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19e424: 0x24a56338  addiu       $a1, $a1, 0x6338
    ctx->pc = 0x19e424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25400));
    // 0x19e428: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19e428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19e42c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19E42Cu;
    SET_GPR_U32(ctx, 31, 0x19E434u);
    ctx->pc = 0x19E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E42Cu;
    // 0x19e430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19E42Cu, 0x19E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E434u;
label_19e434:
    // 0x19e434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e43c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19e43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e440: 0x3e00008  jr          $ra
    ctx->pc = 0x19E440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E440u;
        // 0x19e444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E448u;
}
