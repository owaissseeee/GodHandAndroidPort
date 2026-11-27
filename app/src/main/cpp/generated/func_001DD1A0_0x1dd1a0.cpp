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

// Function: func_001DD1A0
// Address: 0x1dd1a0 - 0x1dd1f8
void func_001DD1A0_0x1dd1a0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DD1A0_0x1dd1a0");
#endif

    if (__builtin_expect(ctx->pc != 0x1dd1a0u, 0)) {
        switch (ctx->pc) {
            case 0x1dd1c0u: goto label_1dd1c0;
            case 0x1dd1ccu: goto label_1dd1cc;
            case 0x1dd1e0u: goto label_1dd1e0;
            default: break;
        }
    }


    // 0x1dd1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd1a4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dd1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1dd1a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dd1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dd1ac: 0x80902d  daddu       $s2, $a0, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dd1b4: 0x26500060  addiu       $s0, $s2, 0x60
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1dd1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd1bc: 0x2411004c  addiu       $s1, $zero, 0x4C
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1dd1c0:
    // 0x1dd1c0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1c4: 0xc0b5778  jal         func_2D5DE0
    SET_GPR_U32(ctx, 31, 0x1DD1CCu);
    ctx->pc = 0x1DD1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1C4u;
    // 0x1dd1c8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_Main_0x2d5de0, 0x2d5de0u, 0x1dd1ccu)) {
        return;
    }
label_1dd1cc:
    // 0x1dd1cc: 0x0  nop
    // NOP
    // 0x1dd1d0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DD1D0u;
    {
        const bool branch_taken_0x1dd1d0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1DD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1D0u;
        // 0x1dd1d4: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1d0) {
            ctx->pc = 0x1DD1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd1c0;
        }
    }
    // 0x1dd1d8: 0xc0aaa90  jal         func_2AAA40
    SET_GPR_U32(ctx, 31, 0x1DD1E0u);
    ctx->pc = 0x1DD1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1D8u;
    // 0x1dd1dc: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_move_0x2aaa40, 0x2aaa40u, 0x1dd1e0u)) {
        return;
    }
label_1dd1e0:
    // 0x1dd1e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dd1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd1e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd1e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dd1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1F0u;
        // 0x1dd1f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD1F8u;
}