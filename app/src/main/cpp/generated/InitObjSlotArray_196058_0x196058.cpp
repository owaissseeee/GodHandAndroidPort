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

// Function: InitObjSlotArray_196058
// Address: 0x196058 - 0x1960e0
void InitObjSlotArray_196058_0x196058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlotArray_196058_0x196058");
#endif

    switch (ctx->pc) {
        case 0x196080u: goto label_196080;
        case 0x196090u: goto label_196090;
        case 0x1960b0u: goto label_1960b0;
        default: break;
    }

    ctx->pc = 0x196058u;

    // 0x196058: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x196058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19605c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x196060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196064: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x196064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x196068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19606c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x196070: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x196070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x196074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196078: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x196078u;
    SET_GPR_U32(ctx, 31, 0x196080u);
    ctx->pc = 0x19607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196078u;
    // 0x19607c: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x196078u, 0x196080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196080u;
label_196080:
    // 0x196080: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x196080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196084: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x196084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x196088: 0x24424e18  addiu       $v0, $v0, 0x4E18
    ctx->pc = 0x196088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19992));
    // 0x19608c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19608cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_196090:
    // 0x196090: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x196090u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x196094: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x196094u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x196098: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x196098u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19609c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19609cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1960a0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1960a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1960a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1960a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960a8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1960A8u;
    SET_GPR_U32(ctx, 31, 0x1960B0u);
    ctx->pc = 0x1960ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960A8u;
    // 0x1960ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1960A8u, 0x1960B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960B0u;
label_1960b0:
    // 0x1960b0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1960b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1960b4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1960B4u;
    {
        const bool branch_taken_0x1960b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1960B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960B4u;
        // 0x1960b8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960b4) {
            ctx->pc = 0x196090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196090;
        }
    }
    ctx->pc = 0x1960BCu;
    // 0x1960bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1960bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960c0: 0xae2009d0  sw          $zero, 0x9D0($s1)
    ctx->pc = 0x1960c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2512), GPR_U32(ctx, 0));
    // 0x1960c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1960c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1960c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1960c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1960cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1960ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1960d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1960d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1960d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1960d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1960d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1960D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1960DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960D8u;
        // 0x1960dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1960D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1960E0u;
}
