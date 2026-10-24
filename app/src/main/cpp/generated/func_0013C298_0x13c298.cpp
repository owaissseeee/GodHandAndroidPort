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

// Function: func_0013C298
// Address: 0x13c298 - 0x13c318
void func_0013C298_0x13c298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013C298_0x13c298");
#endif

    switch (ctx->pc) {
        case 0x13c2c0u: goto label_13c2c0;
        case 0x13c2d0u: goto label_13c2d0;
        case 0x13c2d8u: goto label_13c2d8;
        default: break;
    }

    ctx->pc = 0x13c298u;

    // 0x13c298: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c29c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13c29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13c2a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13c2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13c2a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13c2ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c2b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13c2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2b4: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x13c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x13c2b8: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x13C2B8u;
    SET_GPR_U32(ctx, 31, 0x13C2C0u);
    ctx->pc = 0x13C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2B8u;
    // 0x13c2bc: 0x26120098  addiu       $s2, $s0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x13C2B8u, 0x13C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2C0u;
label_13c2c0:
    // 0x13c2c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c2c4: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x13c2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x13c2c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2cc: 0x0  nop
    ctx->pc = 0x13c2ccu;
    // NOP
label_13c2d0:
    // 0x13c2d0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13C2D0u;
    SET_GPR_U32(ctx, 31, 0x13C2D8u);
    ctx->pc = 0x13C2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2D0u;
    // 0x13c2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13C2D0u, 0x13C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2D8u;
label_13c2d8:
    // 0x13c2d8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x13c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13c2dc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x13c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13c2e0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13c2e4: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x13c2e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13c2e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13c2ec: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x13c2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x13c2f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13C2F0u;
    {
        const bool branch_taken_0x13c2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C2F0u;
        // 0x13c2f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2f0) {
            ctx->pc = 0x13C2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c2d0;
        }
    }
    ctx->pc = 0x13C2F8u;
    // 0x13c2f8: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x13c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x13c2fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13c2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c300: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13c300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c304: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13c304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c30c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C30Cu;
        // 0x13c310: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C314u;
    // 0x13c314: 0x0  nop
    ctx->pc = 0x13c314u;
    // NOP
    ctx->pc = 0x13c318u;
}
