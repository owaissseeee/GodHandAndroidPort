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

// Function: cEmManage_construct
// Address: 0x290090 - 0x290110
void cEmManage_construct_0x290090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_construct_0x290090");
#endif

    switch (ctx->pc) {
        case 0x2900b8u: goto label_2900b8;
        case 0x2900c4u: goto label_2900c4;
        default: break;
    }

    ctx->pc = 0x290090u;

    // 0x290090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x290094: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x290094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x290098: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x290098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x29009c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29009cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2900a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2900a4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2900a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2900a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2900ac: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x2900acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2900b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2900b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2900b4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2900b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2900b8:
    // 0x2900b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2900b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900bc: 0xc0a4000  jal         func_290000
    ctx->pc = 0x2900BCu;
    SET_GPR_U32(ctx, 31, 0x2900C4u);
    ctx->pc = 0x2900C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2900BCu;
    // 0x2900c0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290000u, 0x2900BCu, 0x2900C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900C4u;
label_2900c4:
    // 0x2900c4: 0x0  nop
    ctx->pc = 0x2900c4u;
    // NOP
    // 0x2900c8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2900C8u;
    {
        const bool branch_taken_0x2900c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2900CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900C8u;
        // 0x2900cc: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900c8) {
            ctx->pc = 0x2900B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2900b8;
        }
    }
    ctx->pc = 0x2900D0u;
    // 0x2900d0: 0xae200500  sw          $zero, 0x500($s1)
    ctx->pc = 0x2900d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1280), GPR_U32(ctx, 0));
    // 0x2900d4: 0xae200504  sw          $zero, 0x504($s1)
    ctx->pc = 0x2900d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1284), GPR_U32(ctx, 0));
    // 0x2900d8: 0xfa200520  sqc2        $vf0, 0x520($s1)
    ctx->pc = 0x2900d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1312), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2900dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2900dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900e0: 0xae200508  sw          $zero, 0x508($s1)
    ctx->pc = 0x2900e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1288), GPR_U32(ctx, 0));
    // 0x2900e4: 0xae20050c  sw          $zero, 0x50C($s1)
    ctx->pc = 0x2900e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1292), GPR_U32(ctx, 0));
    // 0x2900e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2900e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2900ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2900ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2900f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2900f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2900f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2900f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2900f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2900f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2900fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2900FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900FCu;
        // 0x290100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2900FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290104u;
    // 0x290104: 0x0  nop
    ctx->pc = 0x290104u;
    // NOP
    // 0x290108: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x290108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29010c: 0x0  nop
    ctx->pc = 0x29010cu;
    // NOP
    ctx->pc = 0x290110u;
}
