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

// Function: GetOrInit_460D90_2D9FF8
// Address: 0x2d9ff8 - 0x2da038
void GetOrInit_460D90_2D9FF8_0x2d9ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_460D90_2D9FF8_0x2d9ff8");
#endif

    switch (ctx->pc) {
        case 0x2da024u: goto label_2da024;
        default: break;
    }

    ctx->pc = 0x2d9ff8u;

    // 0x2d9ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9ffc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2d9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2da000: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2da000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2da004: 0x8c620d90  lw          $v0, 0xD90($v1)
    ctx->pc = 0x2da004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D90u));
    // 0x2da008: 0x24700d90  addiu       $s0, $v1, 0xD90
    ctx->pc = 0x2da008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3472));
    // 0x2da00c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA00Cu;
    {
        const bool branch_taken_0x2da00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA00Cu;
        // 0x2da010: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da00c) {
            ctx->pc = 0x2DA024u;
            goto label_2da024;
        }
    }
    ctx->pc = 0x2DA014u;
    // 0x2da014: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2da014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2da018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da01c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x2DA01Cu;
    SET_GPR_U32(ctx, 31, 0x2DA024u);
    ctx->pc = 0x2DA020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA01Cu;
    // 0x2da020: 0x24a5d3d8  addiu       $a1, $a1, -0x2C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x2DA01Cu, 0x2DA024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA024u;
label_2da024:
    // 0x2da024: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2da024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da02c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2da02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da030: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA030u;
        // 0x2da034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA038u;
}
