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

// Function: InitObjSlots_1A0AF0
// Address: 0x1a0af0 - 0x1a0b78
void InitObjSlots_1A0AF0_0x1a0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_1A0AF0_0x1a0af0");
#endif

    switch (ctx->pc) {
        case 0x1a0b18u: goto label_1a0b18;
        case 0x1a0b28u: goto label_1a0b28;
        case 0x1a0b48u: goto label_1a0b48;
        default: break;
    }

    ctx->pc = 0x1a0af0u;

    // 0x1a0af0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0af4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a0af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a0af8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0afc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a0afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a0b00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0b04: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a0b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a0b08: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1a0b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a0b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0b10: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1A0B10u;
    SET_GPR_U32(ctx, 31, 0x1A0B18u);
    ctx->pc = 0x1A0B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B10u;
    // 0x1a0b14: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1A0B10u, 0x1A0B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B18u;
label_1a0b18:
    // 0x1a0b18: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a0b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0b1c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a0b20: 0x24426d50  addiu       $v0, $v0, 0x6D50
    ctx->pc = 0x1a0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27984));
    // 0x1a0b24: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1a0b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1a0b28:
    // 0x1a0b28: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1a0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0b2c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1a0b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0b30: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1a0b30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0b34: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1a0b34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0b38: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1a0b38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b40: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A0B40u;
    SET_GPR_U32(ctx, 31, 0x1A0B48u);
    ctx->pc = 0x1A0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B40u;
    // 0x1a0b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A0B40u, 0x1A0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B48u;
label_1a0b48:
    // 0x1a0b48: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a0b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a0b4c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A0B4Cu;
    {
        const bool branch_taken_0x1a0b4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B4Cu;
        // 0x1a0b50: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b4c) {
            ctx->pc = 0x1A0B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0b28;
        }
    }
    ctx->pc = 0x1A0B54u;
    // 0x1a0b54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a0b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b58: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a0b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0b5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a0b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0b60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0b64: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a0b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B6Cu;
        // 0x1a0b70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0B74u;
    // 0x1a0b74: 0x0  nop
    ctx->pc = 0x1a0b74u;
    // NOP
    ctx->pc = 0x1a0b78u;
}
