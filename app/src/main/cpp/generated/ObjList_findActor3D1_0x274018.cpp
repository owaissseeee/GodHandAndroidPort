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

// Function: ObjList_findActor3D1
// Address: 0x274018 - 0x2740d8
void ObjList_findActor3D1_0x274018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ObjList_findActor3D1_0x274018");
#endif

    switch (ctx->pc) {
        case 0x274050u: goto label_274050;
        case 0x2740a4u: goto label_2740a4;
        default: break;
    }

    ctx->pc = 0x274018u;

    // 0x274018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x274018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27401c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x27401cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x274020: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x274020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x274024: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x274024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x274028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27402c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x27402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x274030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274034: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x274034u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
    // 0x274038: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x274038u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27403c: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x27403cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x274040: 0x1232001d  beq         $s1, $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x274040u;
    {
        const bool branch_taken_0x274040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x274044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274040u;
        // 0x274044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274040) {
            ctx->pc = 0x2740B8u;
            goto label_2740b8;
        }
    }
    ctx->pc = 0x274048u;
    // 0x274048: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x274048u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x27404c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27404cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274050:
    // 0x274050: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x274050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274054: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x274054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x274058: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x274058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x27405c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27405Cu;
    {
        const bool branch_taken_0x27405c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27405Cu;
        // 0x274060: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27405c) {
            ctx->pc = 0x2740ACu;
            goto label_2740ac;
        }
    }
    ctx->pc = 0x274064u;
    // 0x274064: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x274064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x274068: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x274068u;
    {
        const bool branch_taken_0x274068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274068) {
            ctx->pc = 0x2740ACu;
            goto label_2740ac;
        }
    }
    ctx->pc = 0x274070u;
    // 0x274070: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x274070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x274074: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x274074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x274078: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274078u;
    {
        const bool branch_taken_0x274078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274078u;
        // 0x27407c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274078) {
            ctx->pc = 0x274088u;
            goto label_274088;
        }
    }
    ctx->pc = 0x274080u;
    // 0x274080: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x274080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x274084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x274084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274088:
    // 0x274088: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x274088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x27408c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27408Cu;
    {
        const bool branch_taken_0x27408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27408Cu;
        // 0x274090: 0x386203d1  xori        $v0, $v1, 0x3D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)977);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27408c) {
            ctx->pc = 0x2740ACu;
            goto label_2740ac;
        }
    }
    ctx->pc = 0x274094u;
    // 0x274094: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x274094u;
    {
        const bool branch_taken_0x274094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274094) {
            ctx->pc = 0x2740ACu;
            goto label_2740ac;
        }
    }
    ctx->pc = 0x27409Cu;
    // 0x27409c: 0xc0708ca  jal         func_1C2328
    ctx->pc = 0x27409Cu;
    SET_GPR_U32(ctx, 31, 0x2740A4u);
    ctx->pc = 0x2740A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27409Cu;
    // 0x2740a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2328u, 0x27409Cu, 0x2740A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740A4u;
label_2740a4:
    // 0x2740a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2740A4u;
    {
        const bool branch_taken_0x2740a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2740A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740A4u;
        // 0x2740a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740a4) {
            ctx->pc = 0x2740B8u;
            goto label_2740b8;
        }
    }
    ctx->pc = 0x2740ACu;
label_2740ac:
    // 0x2740ac: 0x1632ffe8  bne         $s1, $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2740ACu;
    {
        const bool branch_taken_0x2740ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2740B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740ACu;
        // 0x2740b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740ac) {
            ctx->pc = 0x274050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274050;
        }
    }
    ctx->pc = 0x2740B4u;
    // 0x2740b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2740b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2740b8:
    // 0x2740b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2740b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2740bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2740bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2740c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2740c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2740c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2740c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2740c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2740c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2740cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2740CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2740D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740CCu;
        // 0x2740d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2740CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2740D4u;
    // 0x2740d4: 0x0  nop
    ctx->pc = 0x2740d4u;
    // NOP
    ctx->pc = 0x2740d8u;
}
