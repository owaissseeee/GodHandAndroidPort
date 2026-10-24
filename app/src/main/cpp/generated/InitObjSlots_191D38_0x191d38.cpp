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

// Function: InitObjSlots_191D38
// Address: 0x191d38 - 0x191dc0
void InitObjSlots_191D38_0x191d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_191D38_0x191d38");
#endif

    switch (ctx->pc) {
        case 0x191d60u: goto label_191d60;
        case 0x191d70u: goto label_191d70;
        case 0x191d90u: goto label_191d90;
        default: break;
    }

    ctx->pc = 0x191d38u;

    // 0x191d38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x191d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x191d3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x191d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x191d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x191d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x191d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x191d48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x191d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x191d4c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x191d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x191d50: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x191d50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x191d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191d58: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x191D58u;
    SET_GPR_U32(ctx, 31, 0x191D60u);
    ctx->pc = 0x191D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D58u;
    // 0x191d5c: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x191D58u, 0x191D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D60u;
label_191d60:
    // 0x191d60: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x191d60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191d64: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x191d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x191d68: 0x24424128  addiu       $v0, $v0, 0x4128
    ctx->pc = 0x191d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16680));
    // 0x191d6c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x191d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_191d70:
    // 0x191d70: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x191d70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191d74: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x191d74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191d78: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x191d78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191d7c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x191d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191d80: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x191d80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d88: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x191D88u;
    SET_GPR_U32(ctx, 31, 0x191D90u);
    ctx->pc = 0x191D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D88u;
    // 0x191d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x191D88u, 0x191D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D90u;
label_191d90:
    // 0x191d90: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x191d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x191d94: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x191D94u;
    {
        const bool branch_taken_0x191d94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x191D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D94u;
        // 0x191d98: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d94) {
            ctx->pc = 0x191D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191d70;
        }
    }
    ctx->pc = 0x191D9Cu;
    // 0x191d9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x191d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191da0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x191da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191da4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x191da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191da8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x191da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191dac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x191dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191db4: 0x3e00008  jr          $ra
    ctx->pc = 0x191DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DB4u;
        // 0x191db8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191DBCu;
    // 0x191dbc: 0x0  nop
    ctx->pc = 0x191dbcu;
    // NOP
    ctx->pc = 0x191dc0u;
}
