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

// Function: func_001A25A0
// Address: 0x1a25a0 - 0x1a2630
void func_001A25A0_0x1a25a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A25A0_0x1a25a0");
#endif

    switch (ctx->pc) {
        case 0x1a25c8u: goto label_1a25c8;
        case 0x1a25d8u: goto label_1a25d8;
        case 0x1a25f8u: goto label_1a25f8;
        default: break;
    }

    ctx->pc = 0x1a25a0u;

    // 0x1a25a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a25a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a25a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a25a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a25a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a25a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a25acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a25b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a25b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a25b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a25b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a25b8: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x1a25b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a25bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a25bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a25c0: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A25C0u;
    SET_GPR_U32(ctx, 31, 0x1A25C8u);
    ctx->pc = 0x1A25C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A25C0u;
    // 0x1a25c4: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A25C0u, 0x1A25C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A25C8u;
label_1a25c8:
    // 0x1a25c8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a25c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a25cc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a25d0: 0x24426f88  addiu       $v0, $v0, 0x6F88
    ctx->pc = 0x1a25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28552));
    // 0x1a25d4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1a25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1a25d8:
    // 0x1a25d8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1a25d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a25dc: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1a25dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a25e0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1a25e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a25e4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1a25e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a25e8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1a25e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a25ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a25ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25f0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A25F0u;
    SET_GPR_U32(ctx, 31, 0x1A25F8u);
    ctx->pc = 0x1A25F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A25F0u;
    // 0x1a25f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A25F0u, 0x1A25F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A25F8u;
label_1a25f8:
    // 0x1a25f8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a25f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a25fc: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A25FCu;
    {
        const bool branch_taken_0x1a25fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25FCu;
        // 0x1a2600: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25fc) {
            ctx->pc = 0x1A25D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a25d8;
        }
    }
    ctx->pc = 0x1A2604u;
    // 0x1a2604: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a2604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2608: 0xae200d90  sw          $zero, 0xD90($s1)
    ctx->pc = 0x1a2608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3472), GPR_U32(ctx, 0));
    // 0x1a260c: 0xae200d94  sw          $zero, 0xD94($s1)
    ctx->pc = 0x1a260cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3476), GPR_U32(ctx, 0));
    // 0x1a2610: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a2610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2614: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a2614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2618: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a261c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a261cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2624: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2624u;
        // 0x1a2628: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A262Cu;
    // 0x1a262c: 0x0  nop
    ctx->pc = 0x1a262cu;
    // NOP
    ctx->pc = 0x1a2630u;
}
