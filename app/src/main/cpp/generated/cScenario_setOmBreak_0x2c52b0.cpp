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

// Function: cScenario_setOmBreak
// Address: 0x2c52b0 - 0x2c5318
void cScenario_setOmBreak_0x2c52b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_setOmBreak_0x2c52b0");
#endif

    switch (ctx->pc) {
        case 0x2c52d8u: goto label_2c52d8;
        case 0x2c530cu: goto label_2c530c;
        default: break;
    }

    ctx->pc = 0x2c52b0u;

    // 0x2c52b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c52b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c52b4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x2c52b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x2c52b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c52b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c52bc: 0x24488658  addiu       $t0, $v0, -0x79A8
    ctx->pc = 0x2c52bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x2c52c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c52c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c52c4: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2c52c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c52c8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C52C8u;
    {
        const bool branch_taken_0x2c52c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52C8u;
        // 0x2c52cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52c8) {
            ctx->pc = 0x2C5300u;
            goto label_2c5300;
        }
    }
    ctx->pc = 0x2C52D0u;
    // 0x2c52d0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2c52d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c52d4: 0x0  nop
    ctx->pc = 0x2c52d4u;
    // NOP
label_2c52d8:
    // 0x2c52d8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2c52d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2c52dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c52dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c52e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c52e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c52e4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x2c52e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x2c52e8: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x2c52e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c52ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C52ECu;
    {
        const bool branch_taken_0x2c52ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52ECu;
        // 0x2c52f0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52ec) {
            ctx->pc = 0x2C5300u;
            goto label_2c5300;
        }
    }
    ctx->pc = 0x2C52F4u;
    // 0x2c52f4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2c52f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c52f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C52F8u;
    {
        const bool branch_taken_0x2c52f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c52f8) {
            ctx->pc = 0x2C52FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C52F8u;
            // 0x2c52fc: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C52D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c52d8;
        }
    }
    ctx->pc = 0x2C5300u;
label_2c5300:
    // 0x2c5300: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2c5300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5304: 0xc0afb2c  jal         func_2BECB0
    ctx->pc = 0x2C5304u;
    SET_GPR_U32(ctx, 31, 0x2C530Cu);
    ctx->pc = 0x2C5308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5304u;
    // 0x2c5308: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BECB0u, 0x2C5304u, 0x2C530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C530Cu;
label_2c530c:
    // 0x2c530c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c530cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5310: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5310u;
        // 0x2c5314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5318u;
}
