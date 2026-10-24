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

// Function: InitObjSlots_19E938
// Address: 0x19e938 - 0x19e9c0
void InitObjSlots_19E938_0x19e938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_19E938_0x19e938");
#endif

    switch (ctx->pc) {
        case 0x19e960u: goto label_19e960;
        case 0x19e970u: goto label_19e970;
        case 0x19e990u: goto label_19e990;
        default: break;
    }

    ctx->pc = 0x19e938u;

    // 0x19e938: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19e938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19e93c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19e93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19e940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e944: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19e944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19e948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e94c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19e94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19e950: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x19e950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19e954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e958: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19E958u;
    SET_GPR_U32(ctx, 31, 0x19E960u);
    ctx->pc = 0x19E95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E958u;
    // 0x19e95c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19E958u, 0x19E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E960u;
label_19e960:
    // 0x19e960: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19e960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e964: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19e964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19e968: 0x24426520  addiu       $v0, $v0, 0x6520
    ctx->pc = 0x19e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25888));
    // 0x19e96c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19e970:
    // 0x19e970: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19e970u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19e974: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19e974u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19e978: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19e978u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19e97c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19e97cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19e980: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19e980u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19e984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e988: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19E988u;
    SET_GPR_U32(ctx, 31, 0x19E990u);
    ctx->pc = 0x19E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E988u;
    // 0x19e98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19E988u, 0x19E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E990u;
label_19e990:
    // 0x19e990: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19e990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19e994: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19E994u;
    {
        const bool branch_taken_0x19e994 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E994u;
        // 0x19e998: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e994) {
            ctx->pc = 0x19E970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e970;
        }
    }
    ctx->pc = 0x19E99Cu;
    // 0x19e99c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19e99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e9a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19e9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e9a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19e9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e9a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e9ac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19e9acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x19E9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9B4u;
        // 0x19e9b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E9BCu;
    // 0x19e9bc: 0x0  nop
    ctx->pc = 0x19e9bcu;
    // NOP
    ctx->pc = 0x19e9c0u;
}
