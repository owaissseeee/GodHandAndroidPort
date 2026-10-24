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

// Function: GetOrInit_460D80_2D5BF8
// Address: 0x2d5bf8 - 0x2d5c38
void GetOrInit_460D80_2D5BF8_0x2d5bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_460D80_2D5BF8_0x2d5bf8");
#endif

    switch (ctx->pc) {
        case 0x2d5c24u: goto label_2d5c24;
        default: break;
    }

    ctx->pc = 0x2d5bf8u;

    // 0x2d5bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d5bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d5bfc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2d5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2d5c00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d5c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d5c04: 0x8c620d80  lw          $v0, 0xD80($v1)
    ctx->pc = 0x2d5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D80u));
    // 0x2d5c08: 0x24700d80  addiu       $s0, $v1, 0xD80
    ctx->pc = 0x2d5c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3456));
    // 0x2d5c0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5C0Cu;
    {
        const bool branch_taken_0x2d5c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C0Cu;
        // 0x2d5c10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c0c) {
            ctx->pc = 0x2D5C24u;
            goto label_2d5c24;
        }
    }
    ctx->pc = 0x2D5C14u;
    // 0x2d5c14: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d5c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d5c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c1c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x2D5C1Cu;
    SET_GPR_U32(ctx, 31, 0x2D5C24u);
    ctx->pc = 0x2D5C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C1Cu;
    // 0x2d5c20: 0x24a5d210  addiu       $a1, $a1, -0x2DF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x2D5C1Cu, 0x2D5C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C24u;
label_2d5c24:
    // 0x2d5c24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d5c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5c2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d5c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5c30: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C30u;
        // 0x2d5c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5C38u;
}
