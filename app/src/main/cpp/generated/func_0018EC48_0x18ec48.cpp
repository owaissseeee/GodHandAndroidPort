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

// Function: func_0018EC48
// Address: 0x18ec48 - 0x18ec98
void func_0018EC48_0x18ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018EC48_0x18ec48");
#endif

    switch (ctx->pc) {
        case 0x18ec6cu: goto label_18ec6c;
        case 0x18ec84u: goto label_18ec84;
        default: break;
    }

    ctx->pc = 0x18ec48u;

    // 0x18ec48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ec48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ec4c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x18ec50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ec50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18ec54: 0x8c625ba8  lw          $v0, 0x5BA8($v1)
    ctx->pc = 0x18ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785BA8u));
    // 0x18ec58: 0x24705ba8  addiu       $s0, $v1, 0x5BA8
    ctx->pc = 0x18ec58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23464));
    // 0x18ec5c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EC5Cu;
    {
        const bool branch_taken_0x18ec5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC5Cu;
        // 0x18ec60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec5c) {
            ctx->pc = 0x18EC84u;
            goto label_18ec84;
        }
    }
    ctx->pc = 0x18EC64u;
    // 0x18ec64: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x18EC64u;
    SET_GPR_U32(ctx, 31, 0x18EC6Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x18EC64u, 0x18EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC6Cu;
label_18ec6c:
    // 0x18ec6c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x18ec70: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x18ec70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x18ec74: 0x24a53c58  addiu       $a1, $a1, 0x3C58
    ctx->pc = 0x18ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15448));
    // 0x18ec78: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x18ec78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x18ec7c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18EC7Cu;
    SET_GPR_U32(ctx, 31, 0x18EC84u);
    ctx->pc = 0x18EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC7Cu;
    // 0x18ec80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18EC7Cu, 0x18EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC84u;
label_18ec84:
    // 0x18ec84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18ec84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ec88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ec8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ec8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ec90: 0x3e00008  jr          $ra
    ctx->pc = 0x18EC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC90u;
        // 0x18ec94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EC98u;
}
