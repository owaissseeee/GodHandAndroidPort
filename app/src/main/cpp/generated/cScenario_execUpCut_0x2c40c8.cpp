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

// Function: cScenario_execUpCut
// Address: 0x2c40c8 - 0x2c4150
void cScenario_execUpCut_0x2c40c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_execUpCut_0x2c40c8");
#endif

    switch (ctx->pc) {
        case 0x2c4108u: goto label_2c4108;
        case 0x2c4130u: goto label_2c4130;
        default: break;
    }

    ctx->pc = 0x2c40c8u;

    // 0x2c40c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c40c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c40cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c40ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c40d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c40d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c40d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c40d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c40d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c40dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2c40dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c40e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2c40e4: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x2c40e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c40e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2c40e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2c40ec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c40ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c40f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c40f4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2c40f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C40F8u;
    {
        const bool branch_taken_0x2c40f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40F8u;
        // 0x2c40fc: 0x311100ff  andi        $s1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40f8) {
            ctx->pc = 0x2C4110u;
            goto label_2c4110;
        }
    }
    ctx->pc = 0x2C4100u;
    // 0x2c4100: 0xc0c738e  jal         func_31CE38
    ctx->pc = 0x2C4100u;
    SET_GPR_U32(ctx, 31, 0x2C4108u);
    ctx->pc = 0x31CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CE38u, 0x2C4100u, 0x2C4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4108u;
label_2c4108:
    // 0x2c4108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4108u;
    {
        const bool branch_taken_0x2c4108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4108u;
        // 0x2c410c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4108) {
            ctx->pc = 0x2C4118u;
            goto label_2c4118;
        }
    }
    ctx->pc = 0x2C4110u;
label_2c4110:
    // 0x2c4110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c4118:
    // 0x2c4118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c411c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c411cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4120: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2c4120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4124: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2c4124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4128: 0xc0b1054  jal         func_2C4150
    ctx->pc = 0x2C4128u;
    SET_GPR_U32(ctx, 31, 0x2C4130u);
    ctx->pc = 0x2C412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4128u;
    // 0x2c412c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4150u, 0x2C4128u, 0x2C4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4130u;
label_2c4130:
    // 0x2c4130: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c4130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4134: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c4134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4138: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c4138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c413c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c413cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4140: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2c4140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4148: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4148u;
        // 0x2c414c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4150u;
}
