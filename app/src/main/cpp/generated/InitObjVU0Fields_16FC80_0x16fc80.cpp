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

// Function: InitObjVU0Fields_16FC80
// Address: 0x16fc80 - 0x16fd08
void InitObjVU0Fields_16FC80_0x16fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVU0Fields_16FC80_0x16fc80");
#endif

    switch (ctx->pc) {
        case 0x16fca8u: goto label_16fca8;
        case 0x16fcb8u: goto label_16fcb8;
        case 0x16fcd8u: goto label_16fcd8;
        default: break;
    }

    ctx->pc = 0x16fc80u;

    // 0x16fc80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16fc84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16fc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16fc88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16fc88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16fc90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16fc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16fc94: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16fc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16fc98: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x16fc98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16fc9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fca0: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x16FCA0u;
    SET_GPR_U32(ctx, 31, 0x16FCA8u);
    ctx->pc = 0x16FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FCA0u;
    // 0x16fca4: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x16FCA0u, 0x16FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FCA8u;
label_16fca8:
    // 0x16fca8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x16fca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16fcac: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16fcb0: 0x24420328  addiu       $v0, $v0, 0x328
    ctx->pc = 0x16fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 808));
    // 0x16fcb4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x16fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_16fcb8:
    // 0x16fcb8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x16fcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16fcbc: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x16fcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16fcc0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x16fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16fcc4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x16fcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16fcc8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x16fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16fccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcd0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x16FCD0u;
    SET_GPR_U32(ctx, 31, 0x16FCD8u);
    ctx->pc = 0x16FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FCD0u;
    // 0x16fcd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x16FCD0u, 0x16FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FCD8u;
label_16fcd8:
    // 0x16fcd8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x16fcd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x16fcdc: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x16FCDCu;
    {
        const bool branch_taken_0x16fcdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x16FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCDCu;
        // 0x16fce0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fcdc) {
            ctx->pc = 0x16FCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fcb8;
        }
    }
    ctx->pc = 0x16FCE4u;
    // 0x16fce4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16fce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fce8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16fce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16fcec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16fcecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16fcf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16fcf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fcf4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16fcf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fcf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x16FCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCFCu;
        // 0x16fd00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FD04u;
    // 0x16fd04: 0x0  nop
    ctx->pc = 0x16fd04u;
    // NOP
    ctx->pc = 0x16fd08u;
}
