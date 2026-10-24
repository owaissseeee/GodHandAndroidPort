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

// Function: cSnd_FindSeSlotById
// Address: 0x2cc0c0 - 0x2cc150
void cSnd_FindSeSlotById_0x2cc0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_FindSeSlotById_0x2cc0c0");
#endif

    switch (ctx->pc) {
        case 0x2cc0f0u: goto label_2cc0f0;
        case 0x2cc0fcu: goto label_2cc0fc;
        default: break;
    }

    ctx->pc = 0x2cc0c0u;

    // 0x2cc0c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cc0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cc0c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2cc0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2cc0c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cc0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cc0cc: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x2cc0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cc0d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2cc0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2cc0d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cc0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2cc0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2cc0dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2cc0dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2cc0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2cc0e4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2cc0e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc0ec: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2cc0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2cc0f0:
    // 0x2cc0f0: 0x118180  sll         $s0, $s1, 6
    ctx->pc = 0x2cc0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2cc0f4: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2CC0F4u;
    SET_GPR_U32(ctx, 31, 0x2CC0FCu);
    ctx->pc = 0x2CC0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0F4u;
    // 0x2cc0f8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2CC0F4u, 0x2CC0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0FCu;
label_2cc0fc:
    // 0x2cc0fc: 0x54540008  bnel        $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC0FCu;
    {
        const bool branch_taken_0x2cc0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2cc0fc) {
            ctx->pc = 0x2CC100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC0FCu;
            // 0x2cc100: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC120u;
            goto label_2cc120;
        }
    }
    ctx->pc = 0x2CC104u;
    // 0x2cc104: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2cc104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2cc108: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cc108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cc10c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2cc10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cc110: 0x54730003  bnel        $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC110u;
    {
        const bool branch_taken_0x2cc110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2cc110) {
            ctx->pc = 0x2CC114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC110u;
            // 0x2cc114: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC120u;
            goto label_2cc120;
        }
    }
    ctx->pc = 0x2CC118u;
    // 0x2cc118: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC118u;
    {
        const bool branch_taken_0x2cc118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC118u;
        // 0x2cc11c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc118) {
            ctx->pc = 0x2CC130u;
            goto label_2cc130;
        }
    }
    ctx->pc = 0x2CC120u;
label_2cc120:
    // 0x2cc120: 0x2a220034  slti        $v0, $s1, 0x34
    ctx->pc = 0x2cc120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x2cc124: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2CC124u;
    {
        const bool branch_taken_0x2cc124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc124) {
            ctx->pc = 0x2CC128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC124u;
            // 0x2cc128: 0x8e44003c  lw          $a0, 0x3C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc0f0;
        }
    }
    ctx->pc = 0x2CC12Cu;
    // 0x2cc12c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cc130:
    // 0x2cc130: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2cc130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc134: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2cc134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc138: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cc138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc13c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2cc13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc140: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2cc140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc148: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC148u;
        // 0x2cc14c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC150u;
}
