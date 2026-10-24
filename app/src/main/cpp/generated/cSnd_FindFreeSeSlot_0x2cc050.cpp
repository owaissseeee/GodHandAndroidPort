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

// Function: cSnd_FindFreeSeSlot
// Address: 0x2cc050 - 0x2cc0c0
void cSnd_FindFreeSeSlot_0x2cc050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_FindFreeSeSlot_0x2cc050");
#endif

    switch (ctx->pc) {
        case 0x2cc078u: goto label_2cc078;
        case 0x2cc084u: goto label_2cc084;
        default: break;
    }

    ctx->pc = 0x2cc050u;

    // 0x2cc050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc054: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cc054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cc058: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cc058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cc05c: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x2cc05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cc060: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cc060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cc064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cc064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc06c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2cc06cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc070: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2cc070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2cc074: 0x0  nop
    ctx->pc = 0x2cc074u;
    // NOP
label_2cc078:
    // 0x2cc078: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2cc078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2cc07c: 0xc0b3f1e  jal         func_2CFC78
    ctx->pc = 0x2CC07Cu;
    SET_GPR_U32(ctx, 31, 0x2CC084u);
    ctx->pc = 0x2CC080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC07Cu;
    // 0x2cc080: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC78u, 0x2CC07Cu, 0x2CC084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC084u;
label_2cc084:
    // 0x2cc084: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC084u;
    {
        const bool branch_taken_0x2cc084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2cc084) {
            ctx->pc = 0x2CC088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC084u;
            // 0x2cc088: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC094u;
            goto label_2cc094;
        }
    }
    ctx->pc = 0x2CC08Cu;
    // 0x2cc08c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC08Cu;
    {
        const bool branch_taken_0x2cc08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC08Cu;
        // 0x2cc090: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc08c) {
            ctx->pc = 0x2CC0A4u;
            goto label_2cc0a4;
        }
    }
    ctx->pc = 0x2CC094u;
label_2cc094:
    // 0x2cc094: 0x2a020034  slti        $v0, $s0, 0x34
    ctx->pc = 0x2cc094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x2cc098: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CC098u;
    {
        const bool branch_taken_0x2cc098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc098) {
            ctx->pc = 0x2CC09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC098u;
            // 0x2cc09c: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc078;
        }
    }
    ctx->pc = 0x2CC0A0u;
    // 0x2cc0a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cc0a4:
    // 0x2cc0a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cc0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc0a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cc0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc0ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cc0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc0b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0B4u;
        // 0x2cc0b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC0BCu;
    // 0x2cc0bc: 0x0  nop
    ctx->pc = 0x2cc0bcu;
    // NOP
    ctx->pc = 0x2cc0c0u;
}
