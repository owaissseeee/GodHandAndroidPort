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

// Function: InitVu0SlotArray5_1A0390
// Address: 0x1a0390 - 0x1a0418
void InitVu0SlotArray5_1A0390_0x1a0390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVu0SlotArray5_1A0390_0x1a0390");
#endif

    switch (ctx->pc) {
        case 0x1a03b8u: goto label_1a03b8;
        case 0x1a03c8u: goto label_1a03c8;
        case 0x1a03e8u: goto label_1a03e8;
        default: break;
    }

    ctx->pc = 0x1a0390u;

    // 0x1a0390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0394: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a0394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a0398: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a039c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a03a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a03a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a03a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a03a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a03a8: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1a03a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a03ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a03acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a03b0: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1A03B0u;
    SET_GPR_U32(ctx, 31, 0x1A03B8u);
    ctx->pc = 0x1A03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A03B0u;
    // 0x1a03b4: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1A03B0u, 0x1A03B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A03B8u;
label_1a03b8:
    // 0x1a03b8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a03b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a03bc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a03c0: 0x24426a98  addiu       $v0, $v0, 0x6A98
    ctx->pc = 0x1a03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27288));
    // 0x1a03c4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1a03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1a03c8:
    // 0x1a03c8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1a03c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a03cc: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1a03ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a03d0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1a03d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a03d4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1a03d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a03d8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1a03d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a03dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a03dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a03e0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A03E0u;
    SET_GPR_U32(ctx, 31, 0x1A03E8u);
    ctx->pc = 0x1A03E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A03E0u;
    // 0x1a03e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A03E0u, 0x1A03E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A03E8u;
label_1a03e8:
    // 0x1a03e8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a03e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a03ec: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A03ECu;
    {
        const bool branch_taken_0x1a03ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A03F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03ECu;
        // 0x1a03f0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03ec) {
            ctx->pc = 0x1A03C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a03c8;
        }
    }
    ctx->pc = 0x1A03F4u;
    // 0x1a03f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a03f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a03f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a03f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a03fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a03fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0404: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a0404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a040c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A040Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A040Cu;
        // 0x1a0410: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A040Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0414u;
    // 0x1a0414: 0x0  nop
    ctx->pc = 0x1a0414u;
    // NOP
    ctx->pc = 0x1a0418u;
}
