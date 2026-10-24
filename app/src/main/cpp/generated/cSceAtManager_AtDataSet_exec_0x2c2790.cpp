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

// Function: cSceAtManager_AtDataSet_exec
// Address: 0x2c2790 - 0x2c2808
void cSceAtManager_AtDataSet_exec_0x2c2790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_AtDataSet_exec_0x2c2790");
#endif

    switch (ctx->pc) {
        case 0x2c27c8u: goto label_2c27c8;
        case 0x2c27e8u: goto label_2c27e8;
        default: break;
    }

    ctx->pc = 0x2c2790u;

    // 0x2c2790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c2790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c2794: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2c2794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c2798: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c2798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c279c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c279cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c27a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c27a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c27a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c27a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c27a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27ac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c27acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2c27b0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c27b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27b4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2c27b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2c27b8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2c27b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c27bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c27c0: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x2C27C0u;
    SET_GPR_U32(ctx, 31, 0x2C27C8u);
    ctx->pc = 0x2C27C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27C0u;
    // 0x2c27c4: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x2C27C0u, 0x2C27C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27C8u;
label_2c27c8:
    // 0x2c27c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C27C8u;
    {
        const bool branch_taken_0x2c27c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27C8u;
        // 0x2c27cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27c8) {
            ctx->pc = 0x2C27E8u;
            goto label_2c27e8;
        }
    }
    ctx->pc = 0x2C27D0u;
    // 0x2c27d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c27d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c27d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c27d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27dc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c27dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27e0: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x2C27E0u;
    SET_GPR_U32(ctx, 31, 0x2C27E8u);
    ctx->pc = 0x2C27E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27E0u;
    // 0x2c27e4: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x2C27E0u, 0x2C27E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27E8u;
label_2c27e8:
    // 0x2c27e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c27e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c27ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c27ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c27f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c27f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c27f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c27f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c27f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2c27f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c27fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c27fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2800: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2800u;
        // 0x2c2804: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2808u;
}
