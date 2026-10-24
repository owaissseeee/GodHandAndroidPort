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

// Function: InitObjSlots_1A0D68
// Address: 0x1a0d68 - 0x1a0df0
void InitObjSlots_1A0D68_0x1a0d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_1A0D68_0x1a0d68");
#endif

    switch (ctx->pc) {
        case 0x1a0d90u: goto label_1a0d90;
        case 0x1a0da0u: goto label_1a0da0;
        case 0x1a0dc0u: goto label_1a0dc0;
        default: break;
    }

    ctx->pc = 0x1a0d68u;

    // 0x1a0d68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0d6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a0d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a0d70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a0d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a0d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0d7c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a0d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a0d80: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x1a0d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a0d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0d88: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A0D88u;
    SET_GPR_U32(ctx, 31, 0x1A0D90u);
    ctx->pc = 0x1A0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D88u;
    // 0x1a0d8c: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A0D88u, 0x1A0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D90u;
label_1a0d90:
    // 0x1a0d90: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a0d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0d94: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a0d98: 0x24426e78  addiu       $v0, $v0, 0x6E78
    ctx->pc = 0x1a0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28280));
    // 0x1a0d9c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1a0d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1a0da0:
    // 0x1a0da0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1a0da0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0da4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1a0da4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0da8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1a0da8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0dac: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1a0dacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0db0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1a0db0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0db8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A0DB8u;
    SET_GPR_U32(ctx, 31, 0x1A0DC0u);
    ctx->pc = 0x1A0DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0DB8u;
    // 0x1a0dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A0DB8u, 0x1A0DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0DC0u;
label_1a0dc0:
    // 0x1a0dc0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a0dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a0dc4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A0DC4u;
    {
        const bool branch_taken_0x1a0dc4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DC4u;
        // 0x1a0dc8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0dc4) {
            ctx->pc = 0x1A0DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0da0;
        }
    }
    ctx->pc = 0x1A0DCCu;
    // 0x1a0dcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a0dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0dd0: 0xae200d90  sw          $zero, 0xD90($s1)
    ctx->pc = 0x1a0dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3472), GPR_U32(ctx, 0));
    // 0x1a0dd4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a0dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a0dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0ddc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0de0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a0de0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DE8u;
        // 0x1a0dec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0DF0u;
}
