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

// Function: close__3ios
// Address: 0x389710 - 0x389770
void close__3ios_0x389710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("close__3ios_0x389710");
#endif

    switch (ctx->pc) {
        case 0x389710u: goto label_389710;
        case 0x389714u: goto label_389714;
        case 0x389718u: goto label_389718;
        case 0x38971cu: goto label_38971c;
        case 0x389720u: goto label_389720;
        case 0x389724u: goto label_389724;
        case 0x389728u: goto label_389728;
        case 0x38972cu: goto label_38972c;
        case 0x389730u: goto label_389730;
        case 0x389734u: goto label_389734;
        case 0x389738u: goto label_389738;
        case 0x38973cu: goto label_38973c;
        case 0x389740u: goto label_389740;
        case 0x389744u: goto label_389744;
        case 0x389748u: goto label_389748;
        case 0x38974cu: goto label_38974c;
        case 0x389750u: goto label_389750;
        case 0x389754u: goto label_389754;
        case 0x389758u: goto label_389758;
        case 0x38975cu: goto label_38975c;
        case 0x389760u: goto label_389760;
        case 0x389764u: goto label_389764;
        case 0x389768u: goto label_389768;
        case 0x38976cu: goto label_38976c;
        default: break;
    }

    ctx->pc = 0x389710u;

label_389710:
    // 0x389710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_389714:
    // 0x389714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_389718:
    // 0x389718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38971c:
    // 0x38971c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38971cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389720:
    // 0x389720: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x389720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_389724:
    // 0x389724: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x389724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_389728:
    // 0x389728: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x389728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_38972c:
    // 0x38972c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_389730:
    if (ctx->pc == 0x389730u) {
        ctx->pc = 0x389730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38972Cu;
        // 0x389730: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389734u;
        goto label_389734;
    }
    ctx->pc = 0x38972Cu;
    {
        const bool branch_taken_0x38972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38972c) {
            ctx->pc = 0x389730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38972Cu;
            // 0x389730: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389744u;
            goto label_389744;
        }
    }
    ctx->pc = 0x389734u;
label_389734:
    // 0x389734: 0xc0e3c08  jal         func_38F020
label_389738:
    if (ctx->pc == 0x389738u) {
        ctx->pc = 0x389738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389734u;
        // 0x389738: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38973Cu;
        goto label_38973c;
    }
    ctx->pc = 0x389734u;
    SET_GPR_U32(ctx, 31, 0x38973Cu);
    ctx->pc = 0x389738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389734u;
    // 0x389738: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F020u, 0x389734u, 0x38973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38973Cu;
label_38973c:
    // 0x38973c: 0x10000006  b           . + 4 + (0x6 << 2)
label_389740:
    if (ctx->pc == 0x389740u) {
        ctx->pc = 0x389740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38973Cu;
        // 0x389740: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389744u;
        goto label_389744;
    }
    ctx->pc = 0x38973Cu;
    {
        const bool branch_taken_0x38973c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38973Cu;
        // 0x389740: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38973c) {
            ctx->pc = 0x389758u;
            goto label_389758;
        }
    }
    ctx->pc = 0x389744u;
label_389744:
    // 0x389744: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x389744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_389748:
    // 0x389748: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x389748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_38974c:
    // 0x38974c: 0x40f809  jalr        $v0
label_389750:
    if (ctx->pc == 0x389750u) {
        ctx->pc = 0x389750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38974Cu;
        // 0x389750: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389754u;
        goto label_389754;
    }
    ctx->pc = 0x38974Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389754u);
        ctx->pc = 0x389750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38974Cu;
        // 0x389750: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38974Cu, 0x389754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389754u;
label_389754:
    // 0x389754: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x389754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_389758:
    // 0x389758: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x389758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38975c:
    // 0x38975c: 0xa202001a  sb          $v0, 0x1A($s0)
    ctx->pc = 0x38975cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
label_389760:
    // 0x389760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_389764:
    // 0x389764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389768:
    // 0x389768: 0x3e00008  jr          $ra
label_38976c:
    if (ctx->pc == 0x38976Cu) {
        ctx->pc = 0x38976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389768u;
        // 0x38976c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389770u;
        goto label_fallthrough_0x389768;
    }
    ctx->pc = 0x389768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389768u;
        // 0x38976c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389768:
    ctx->pc = 0x389770u;
}
