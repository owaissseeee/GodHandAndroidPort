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

// Function: getItemNumInRoom
// Address: 0x2dddf8 - 0x2ddea0
void getItemNumInRoom_0x2dddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getItemNumInRoom_0x2dddf8");
#endif

    switch (ctx->pc) {
        case 0x2dde30u: goto label_2dde30;
        case 0x2dde60u: goto label_2dde60;
        default: break;
    }

    ctx->pc = 0x2dddf8u;

    // 0x2dddf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dddf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dddfc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2dddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2dde00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dde00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2dde04: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2dde04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2dde08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dde08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2dde0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2dde10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dde10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dde14: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x2dde14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
    // 0x2dde18: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2dde18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dde1c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x2dde1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2dde20: 0x12040017  beq         $s0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DDE20u;
    {
        const bool branch_taken_0x2dde20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE20u;
        // 0x2dde24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde20) {
            ctx->pc = 0x2DDE80u;
            goto label_2dde80;
        }
    }
    ctx->pc = 0x2DDE28u;
    // 0x2dde28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dde28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dde2c: 0x0  nop
    ctx->pc = 0x2dde2cu;
    // NOP
label_2dde30:
    // 0x2dde30: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x2dde30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x2dde34: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x2dde34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x2dde38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2dde38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2dde3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDE3Cu;
    {
        const bool branch_taken_0x2dde3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE3Cu;
        // 0x2dde40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde3c) {
            ctx->pc = 0x2DDE4Cu;
            goto label_2dde4c;
        }
    }
    ctx->pc = 0x2DDE44u;
    // 0x2dde44: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x2dde44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x2dde48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dde48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dde4c:
    // 0x2dde4c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2dde4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2dde50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DDE50u;
    {
        const bool branch_taken_0x2dde50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE50u;
        // 0x2dde54: 0x8e434c58  lw          $v1, 0x4C58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde50) {
            ctx->pc = 0x2DDE70u;
            goto label_2dde70;
        }
    }
    ctx->pc = 0x2DDE58u;
    // 0x2dde58: 0xc06e00c  jal         func_1B8030
    ctx->pc = 0x2DDE58u;
    SET_GPR_U32(ctx, 31, 0x2DDE60u);
    ctx->pc = 0x1B8030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8030u, 0x2DDE58u, 0x2DDE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE60u;
label_2dde60:
    // 0x2dde60: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2dde60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2dde64: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2dde64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dde68: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2dde68u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x2dde6c: 0x8e434c58  lw          $v1, 0x4C58($s2)
    ctx->pc = 0x2dde6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
label_2dde70:
    // 0x2dde70: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2dde70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2dde74: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2dde74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dde78: 0x5602ffed  bnel        $s0, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2DDE78u;
    {
        const bool branch_taken_0x2dde78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dde78) {
            ctx->pc = 0x2DDE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDE78u;
            // 0x2dde7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dde30;
        }
    }
    ctx->pc = 0x2DDE80u;
label_2dde80:
    // 0x2dde80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dde80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2dde84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dde88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dde88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dde8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2dde8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dde90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dde94: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE94u;
        // 0x2dde98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDE9Cu;
    // 0x2dde9c: 0x0  nop
    ctx->pc = 0x2dde9cu;
    // NOP
    ctx->pc = 0x2ddea0u;
}
