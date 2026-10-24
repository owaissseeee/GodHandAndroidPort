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

// Function: func_00394348
// Address: 0x394348 - 0x3943d0
void func_00394348_0x394348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00394348_0x394348");
#endif

    switch (ctx->pc) {
        case 0x394378u: goto label_394378;
        case 0x394394u: goto label_394394;
        default: break;
    }

    ctx->pc = 0x394348u;

    // 0x394348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x394348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39434c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x39434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x394350: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x394350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x394354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x394354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394358: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x394358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x39435c: 0x24b1ffff  addiu       $s1, $a1, -0x1
    ctx->pc = 0x39435cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x394360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x394360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x394364: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x394364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394368: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x394368u;
    {
        const bool branch_taken_0x394368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394368u;
        // 0x39436c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394368) {
            ctx->pc = 0x3943ACu;
            goto label_3943ac;
        }
    }
    ctx->pc = 0x394370u;
    // 0x394370: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x394370u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x394374: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x394374u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_394378:
    // 0x394378: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x394378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39437c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x39437cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x394380: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x394380u;
    {
        const bool branch_taken_0x394380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x394380) {
            ctx->pc = 0x394384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394380u;
            // 0x394384: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3943A4u;
            goto label_3943a4;
        }
    }
    ctx->pc = 0x394388u;
    // 0x394388: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x394388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39438c: 0xc0e50ca  jal         func_394328
    ctx->pc = 0x39438Cu;
    SET_GPR_U32(ctx, 31, 0x394394u);
    ctx->pc = 0x394390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39438Cu;
    // 0x394390: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x394328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394328u, 0x39438Cu, 0x394394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394394u;
label_394394:
    // 0x394394: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394394u;
    {
        const bool branch_taken_0x394394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394394u;
        // 0x394398: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394394) {
            ctx->pc = 0x3943A4u;
            goto label_3943a4;
        }
    }
    ctx->pc = 0x39439Cu;
    // 0x39439c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39439Cu;
    {
        const bool branch_taken_0x39439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3943A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39439Cu;
        // 0x3943a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39439c) {
            ctx->pc = 0x3943B0u;
            goto label_3943b0;
        }
    }
    ctx->pc = 0x3943A4u;
label_3943a4:
    // 0x3943a4: 0x1632fff4  bne         $s1, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x3943A4u;
    {
        const bool branch_taken_0x3943a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x3943A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3943A4u;
        // 0x3943a8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3943a4) {
            ctx->pc = 0x394378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394378;
        }
    }
    ctx->pc = 0x3943ACu;
label_3943ac:
    // 0x3943ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3943acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3943b0:
    // 0x3943b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3943b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3943b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3943b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3943b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3943b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3943bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3943bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3943c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3943c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3943c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3943C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3943C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3943C4u;
        // 0x3943c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3943C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3943CCu;
    // 0x3943cc: 0x0  nop
    ctx->pc = 0x3943ccu;
    // NOP
    ctx->pc = 0x3943d0u;
}
