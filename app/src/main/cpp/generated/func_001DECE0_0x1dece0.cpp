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

// Function: func_001DECE0
// Address: 0x1dece0 - 0x1deda8
void func_001DECE0_0x1dece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DECE0_0x1dece0");
#endif

    switch (ctx->pc) {
        case 0x1ded14u: goto label_1ded14;
        case 0x1ded20u: goto label_1ded20;
        case 0x1ded2cu: goto label_1ded2c;
        case 0x1ded3cu: goto label_1ded3c;
        case 0x1ded54u: goto label_1ded54;
        case 0x1ded60u: goto label_1ded60;
        case 0x1ded6cu: goto label_1ded6c;
        case 0x1ded78u: goto label_1ded78;
        case 0x1ded88u: goto label_1ded88;
        default: break;
    }

    ctx->pc = 0x1dece0u;

    // 0x1dece0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dece4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1dece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1dece8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1decec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dececu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1decf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1decf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1decf4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1decf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1decf8: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1decf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1decfc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1decfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ded00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ded00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ded04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ded04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ded08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ded0c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1DED0Cu;
    SET_GPR_U32(ctx, 31, 0x1DED14u);
    ctx->pc = 0x1DED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED0Cu;
    // 0x1ded10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1DED0Cu, 0x1DED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED14u;
label_1ded14:
    // 0x1ded14: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x1ded14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1ded18: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1DED18u;
    SET_GPR_U32(ctx, 31, 0x1DED20u);
    ctx->pc = 0x1DED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED18u;
    // 0x1ded1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1DED18u, 0x1DED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED20u;
label_1ded20:
    // 0x1ded20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ded20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded24: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1DED24u;
    SET_GPR_U32(ctx, 31, 0x1DED2Cu);
    ctx->pc = 0x1DED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED24u;
    // 0x1ded28: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1DED24u, 0x1DED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED2Cu;
label_1ded2c:
    // 0x1ded2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ded2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ded30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ded30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded34: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1DED34u;
    SET_GPR_U32(ctx, 31, 0x1DED3Cu);
    ctx->pc = 0x1DED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED34u;
    // 0x1ded38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1DED34u, 0x1DED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED3Cu;
label_1ded3c:
    // 0x1ded3c: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x1ded3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1ded40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DED40u;
    {
        const bool branch_taken_0x1ded40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED40u;
        // 0x1ded44: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded40) {
            ctx->pc = 0x1DED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ded20;
        }
    }
    ctx->pc = 0x1DED48u;
    // 0x1ded48: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x1ded48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1ded4c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1DED4Cu;
    SET_GPR_U32(ctx, 31, 0x1DED54u);
    ctx->pc = 0x1DED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED4Cu;
    // 0x1ded50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1DED4Cu, 0x1DED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED54u;
label_1ded54:
    // 0x1ded54: 0x264403c4  addiu       $a0, $s2, 0x3C4
    ctx->pc = 0x1ded54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 964));
    // 0x1ded58: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1DED58u;
    SET_GPR_U32(ctx, 31, 0x1DED60u);
    ctx->pc = 0x1DED5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED58u;
    // 0x1ded5c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1DED58u, 0x1DED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED60u;
label_1ded60:
    // 0x1ded60: 0x264404bc  addiu       $a0, $s2, 0x4BC
    ctx->pc = 0x1ded60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1212));
    // 0x1ded64: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1DED64u;
    SET_GPR_U32(ctx, 31, 0x1DED6Cu);
    ctx->pc = 0x1DED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED64u;
    // 0x1ded68: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1DED64u, 0x1DED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED6Cu;
label_1ded6c:
    // 0x1ded6c: 0x26440538  addiu       $a0, $s2, 0x538
    ctx->pc = 0x1ded6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x1ded70: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1DED70u;
    SET_GPR_U32(ctx, 31, 0x1DED78u);
    ctx->pc = 0x1DED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED70u;
    // 0x1ded74: 0x24051002  addiu       $a1, $zero, 0x1002 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1DED70u, 0x1DED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED78u;
label_1ded78:
    // 0x1ded78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ded78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded7c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1ded7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ded80: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DED80u;
    SET_GPR_U32(ctx, 31, 0x1DED88u);
    ctx->pc = 0x1DED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED80u;
    // 0x1ded84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DED80u, 0x1DED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED88u;
label_1ded88:
    // 0x1ded88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ded88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ded8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ded8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ded90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ded90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ded94: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ded94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ded98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ded98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ded9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DED9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED9Cu;
        // 0x1deda0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DED9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEDA4u;
    // 0x1deda4: 0x0  nop
    ctx->pc = 0x1deda4u;
    // NOP
    ctx->pc = 0x1deda8u;
}
