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

// Function: PartHolder_markIfFound
// Address: 0x1dc710 - 0x1dc798
void PartHolder_markIfFound_0x1dc710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartHolder_markIfFound_0x1dc710");
#endif

    switch (ctx->pc) {
        case 0x1dc734u: goto label_1dc734;
        case 0x1dc768u: goto label_1dc768;
        default: break;
    }

    ctx->pc = 0x1dc710u;

    // 0x1dc710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dc710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dc714: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dc714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dc718: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dc718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc71c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dc724: 0x37a60002  ori         $a2, $sp, 0x2
    ctx->pc = 0x1dc724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    // 0x1dc728: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x1dc728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1dc72c: 0xc076fc6  jal         func_1DBF18
    ctx->pc = 0x1DC72Cu;
    SET_GPR_U32(ctx, 31, 0x1DC734u);
    ctx->pc = 0x1DC730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC72Cu;
    // 0x1dc730: 0x37a80006  ori         $t0, $sp, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBF18u, 0x1DC72Cu, 0x1DC734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC734u;
label_1dc734:
    // 0x1dc734: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x1dc734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc738: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1dc738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dc73c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC73Cu;
    {
        const bool branch_taken_0x1dc73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC73Cu;
        // 0x1dc740: 0x97a20002  lhu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc73c) {
            ctx->pc = 0x1DC75Cu;
            goto label_1dc75c;
        }
    }
    ctx->pc = 0x1DC744u;
    // 0x1dc744: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC744u;
    {
        const bool branch_taken_0x1dc744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC744u;
        // 0x1dc748: 0x97a20004  lhu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc744) {
            ctx->pc = 0x1DC75Cu;
            goto label_1dc75c;
        }
    }
    ctx->pc = 0x1DC74Cu;
    // 0x1dc74c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC74Cu;
    {
        const bool branch_taken_0x1dc74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC74Cu;
        // 0x1dc750: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc74c) {
            ctx->pc = 0x1DC75Cu;
            goto label_1dc75c;
        }
    }
    ctx->pc = 0x1DC754u;
    // 0x1dc754: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DC754u;
    {
        const bool branch_taken_0x1dc754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC754u;
        // 0x1dc758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc754) {
            ctx->pc = 0x1DC788u;
            goto label_1dc788;
        }
    }
    ctx->pc = 0x1DC75Cu;
label_1dc75c:
    // 0x1dc75c: 0x26043004  addiu       $a0, $s0, 0x3004
    ctx->pc = 0x1dc75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12292));
    // 0x1dc760: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dc760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dc764: 0x0  nop
    ctx->pc = 0x1dc764u;
    // NOP
label_1dc768:
    // 0x1dc768: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc76c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dc76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dc770: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dc770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dc774: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dc774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dc778: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dc778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dc77c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DC77Cu;
    {
        const bool branch_taken_0x1dc77c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC77Cu;
        // 0x1dc780: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc77c) {
            ctx->pc = 0x1DC768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc768;
        }
    }
    ctx->pc = 0x1DC784u;
    // 0x1dc784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc788:
    // 0x1dc788: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dc788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc78c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc790: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC790u;
        // 0x1dc794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC798u;
}
