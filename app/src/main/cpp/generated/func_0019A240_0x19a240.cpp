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

// Function: func_0019A240
// Address: 0x19a240 - 0x19a2c8
void func_0019A240_0x19a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A240_0x19a240");
#endif

    switch (ctx->pc) {
        case 0x19a268u: goto label_19a268;
        case 0x19a278u: goto label_19a278;
        case 0x19a298u: goto label_19a298;
        default: break;
    }

    ctx->pc = 0x19a240u;

    // 0x19a240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19a244: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19a244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19a248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a24c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19a24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19a250: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19a250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19a254: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19a254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19a258: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x19a258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19a25c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a260: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19A260u;
    SET_GPR_U32(ctx, 31, 0x19A268u);
    ctx->pc = 0x19A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A260u;
    // 0x19a264: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19A260u, 0x19A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A268u;
label_19a268:
    // 0x19a268: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19a268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a26c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19a270: 0x24425378  addiu       $v0, $v0, 0x5378
    ctx->pc = 0x19a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21368));
    // 0x19a274: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19a274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19a278:
    // 0x19a278: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19a278u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a27c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19a27cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a280: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19a280u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a284: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19a284u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a288: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19a288u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a290: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19A290u;
    SET_GPR_U32(ctx, 31, 0x19A298u);
    ctx->pc = 0x19A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A290u;
    // 0x19a294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19A290u, 0x19A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A298u;
label_19a298:
    // 0x19a298: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19a298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19a29c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19A29Cu;
    {
        const bool branch_taken_0x19a29c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A29Cu;
        // 0x19a2a0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a29c) {
            ctx->pc = 0x19A278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a278;
        }
    }
    ctx->pc = 0x19A2A4u;
    // 0x19a2a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19a2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19a2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a2ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19a2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a2b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19a2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a2b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19a2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a2b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19A2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2BCu;
        // 0x19a2c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A2C4u;
    // 0x19a2c4: 0x0  nop
    ctx->pc = 0x19a2c4u;
    // NOP
    ctx->pc = 0x19a2c8u;
}
