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

// Function: InitSlotVu0Data_193998
// Address: 0x193998 - 0x193a20
void InitSlotVu0Data_193998_0x193998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSlotVu0Data_193998_0x193998");
#endif

    switch (ctx->pc) {
        case 0x1939c0u: goto label_1939c0;
        case 0x1939d0u: goto label_1939d0;
        case 0x1939f0u: goto label_1939f0;
        default: break;
    }

    ctx->pc = 0x193998u;

    // 0x193998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19399c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19399cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1939a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1939a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1939a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1939a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1939a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1939ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1939acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1939b0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1939b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1939b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1939b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1939b8: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1939B8u;
    SET_GPR_U32(ctx, 31, 0x1939C0u);
    ctx->pc = 0x1939BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1939B8u;
    // 0x1939bc: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1939B8u, 0x1939C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1939C0u;
label_1939c0:
    // 0x1939c0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1939c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1939c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1939c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1939c8: 0x24424960  addiu       $v0, $v0, 0x4960
    ctx->pc = 0x1939c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18784));
    // 0x1939cc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1939ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1939d0:
    // 0x1939d0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1939d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1939d4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1939d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1939d8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1939d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1939dc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1939dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1939e0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1939e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1939e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1939e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939e8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1939E8u;
    SET_GPR_U32(ctx, 31, 0x1939F0u);
    ctx->pc = 0x1939ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1939E8u;
    // 0x1939ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1939E8u, 0x1939F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1939F0u;
label_1939f0:
    // 0x1939f0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1939f4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1939F4u;
    {
        const bool branch_taken_0x1939f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1939F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939F4u;
        // 0x1939f8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939f4) {
            ctx->pc = 0x1939D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1939d0;
        }
    }
    ctx->pc = 0x1939FCu;
    // 0x1939fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1939fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x193a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193a04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x193a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193a08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193a0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x193a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193a14: 0x3e00008  jr          $ra
    ctx->pc = 0x193A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A14u;
        // 0x193a18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193A1Cu;
    // 0x193a1c: 0x0  nop
    ctx->pc = 0x193a1cu;
    // NOP
    ctx->pc = 0x193a20u;
}
