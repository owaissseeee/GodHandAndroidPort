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

// Function: InitObjSlotArrayB_197680
// Address: 0x197680 - 0x197708
void InitObjSlotArrayB_197680_0x197680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlotArrayB_197680_0x197680");
#endif

    switch (ctx->pc) {
        case 0x1976a8u: goto label_1976a8;
        case 0x1976b8u: goto label_1976b8;
        case 0x1976d8u: goto label_1976d8;
        default: break;
    }

    ctx->pc = 0x197680u;

    // 0x197680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x197680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x197684: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x197684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x197688: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19768c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x197690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197694: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x197694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x197698: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x197698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19769c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1976a0: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1976A0u;
    SET_GPR_U32(ctx, 31, 0x1976A8u);
    ctx->pc = 0x1976A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1976A0u;
    // 0x1976a4: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1976A0u, 0x1976A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976A8u;
label_1976a8:
    // 0x1976a8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1976a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1976ac: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1976acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1976b0: 0x24424f28  addiu       $v0, $v0, 0x4F28
    ctx->pc = 0x1976b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20264));
    // 0x1976b4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1976b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1976b8:
    // 0x1976b8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1976b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1976bc: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1976bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1976c0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1976c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1976c4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1976c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1976c8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1976c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1976cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1976ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1976d0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1976D0u;
    SET_GPR_U32(ctx, 31, 0x1976D8u);
    ctx->pc = 0x1976D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1976D0u;
    // 0x1976d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1976D0u, 0x1976D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976D8u;
label_1976d8:
    // 0x1976d8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1976d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1976dc: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1976DCu;
    {
        const bool branch_taken_0x1976dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1976E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976DCu;
        // 0x1976e0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976dc) {
            ctx->pc = 0x1976B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1976b8;
        }
    }
    ctx->pc = 0x1976E4u;
    // 0x1976e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1976e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1976e8: 0xae2009d0  sw          $zero, 0x9D0($s1)
    ctx->pc = 0x1976e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2512), GPR_U32(ctx, 0));
    // 0x1976ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1976ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1976f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1976f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1976f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1976f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1976f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1976f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1976fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1976fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197700: 0x3e00008  jr          $ra
    ctx->pc = 0x197700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197700u;
        // 0x197704: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197708u;
}
