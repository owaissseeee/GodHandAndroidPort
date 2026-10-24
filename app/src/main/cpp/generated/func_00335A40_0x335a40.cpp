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

// Function: func_00335A40
// Address: 0x335a40 - 0x335aa0
void func_00335A40_0x335a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335A40_0x335a40");
#endif

    switch (ctx->pc) {
        case 0x335a68u: goto label_335a68;
        case 0x335a7cu: goto label_335a7c;
        default: break;
    }

    ctx->pc = 0x335a40u;

    // 0x335a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335a44: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x335a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x335a48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x335a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x335a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335a50: 0x2450a5f8  addiu       $s0, $v0, -0x5A08
    ctx->pc = 0x335a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944248));
    // 0x335a54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335a58: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x335a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x335a5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335a60: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x335a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335a64: 0x0  nop
    ctx->pc = 0x335a64u;
    // NOP
label_335a68:
    // 0x335a68: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x335a68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x335a6c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x335A6Cu;
    {
        const bool branch_taken_0x335a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x335a6c) {
            ctx->pc = 0x335A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335A6Cu;
            // 0x335a70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335A80u;
            goto label_335a80;
        }
    }
    ctx->pc = 0x335A74u;
    // 0x335a74: 0xc0cd886  jal         func_336218
    ctx->pc = 0x335A74u;
    SET_GPR_U32(ctx, 31, 0x335A7Cu);
    ctx->pc = 0x335A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A74u;
    // 0x335a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336218u, 0x335A74u, 0x335A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A7Cu;
label_335a7c:
    // 0x335a7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x335a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_335a80:
    // 0x335a80: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x335A80u;
    {
        const bool branch_taken_0x335a80 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x335A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A80u;
        // 0x335a84: 0x26100238  addiu       $s0, $s0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a80) {
            ctx->pc = 0x335A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335a68;
        }
    }
    ctx->pc = 0x335A88u;
    // 0x335a88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335a8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335a90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335a94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x335a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335a98: 0x3e00008  jr          $ra
    ctx->pc = 0x335A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A98u;
        // 0x335a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335AA0u;
}
