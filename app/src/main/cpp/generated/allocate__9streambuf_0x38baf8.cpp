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

// Function: allocate__9streambuf
// Address: 0x38baf8 - 0x38bb48
void allocate__9streambuf_0x38baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("allocate__9streambuf_0x38baf8");
#endif

    switch (ctx->pc) {
        case 0x38baf8u: goto label_38baf8;
        case 0x38bafcu: goto label_38bafc;
        case 0x38bb00u: goto label_38bb00;
        case 0x38bb04u: goto label_38bb04;
        case 0x38bb08u: goto label_38bb08;
        case 0x38bb0cu: goto label_38bb0c;
        case 0x38bb10u: goto label_38bb10;
        case 0x38bb14u: goto label_38bb14;
        case 0x38bb18u: goto label_38bb18;
        case 0x38bb1cu: goto label_38bb1c;
        case 0x38bb20u: goto label_38bb20;
        case 0x38bb24u: goto label_38bb24;
        case 0x38bb28u: goto label_38bb28;
        case 0x38bb2cu: goto label_38bb2c;
        case 0x38bb30u: goto label_38bb30;
        case 0x38bb34u: goto label_38bb34;
        case 0x38bb38u: goto label_38bb38;
        case 0x38bb3cu: goto label_38bb3c;
        case 0x38bb40u: goto label_38bb40;
        case 0x38bb44u: goto label_38bb44;
        default: break;
    }

    ctx->pc = 0x38baf8u;

label_38baf8:
    // 0x38baf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38baf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_38bafc:
    // 0x38bafc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38bafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38bb00:
    // 0x38bb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38bb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38bb04:
    // 0x38bb04: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x38bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_38bb08:
    // 0x38bb08: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_38bb0c:
    if (ctx->pc == 0x38BB0Cu) {
        ctx->pc = 0x38BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB08u;
        // 0x38bb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BB10u;
        goto label_38bb10;
    }
    ctx->pc = 0x38BB08u;
    {
        const bool branch_taken_0x38bb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB08u;
        // 0x38bb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb08) {
            ctx->pc = 0x38BB38u;
            goto label_38bb38;
        }
    }
    ctx->pc = 0x38BB10u;
label_38bb10:
    // 0x38bb10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_38bb14:
    // 0x38bb14: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38bb14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_38bb18:
    // 0x38bb18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38bb1c:
    // 0x38bb1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_38bb20:
    if (ctx->pc == 0x38BB20u) {
        ctx->pc = 0x38BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB1Cu;
        // 0x38bb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BB24u;
        goto label_38bb24;
    }
    ctx->pc = 0x38BB1Cu;
    {
        const bool branch_taken_0x38bb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB1Cu;
        // 0x38bb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb1c) {
            ctx->pc = 0x38BB38u;
            goto label_38bb38;
        }
    }
    ctx->pc = 0x38BB24u;
label_38bb24:
    // 0x38bb24: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x38bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_38bb28:
    // 0x38bb28: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x38bb28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_38bb2c:
    // 0x38bb2c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x38bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_38bb30:
    // 0x38bb30: 0x40f809  jalr        $v0
label_38bb34:
    if (ctx->pc == 0x38BB34u) {
        ctx->pc = 0x38BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB30u;
        // 0x38bb34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BB38u;
        goto label_38bb38;
    }
    ctx->pc = 0x38BB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38BB38u);
        ctx->pc = 0x38BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB30u;
        // 0x38bb34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BB30u, 0x38BB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BB38u;
label_38bb38:
    // 0x38bb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38bb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38bb3c:
    // 0x38bb3c: 0x3e00008  jr          $ra
label_38bb40:
    if (ctx->pc == 0x38BB40u) {
        ctx->pc = 0x38BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB3Cu;
        // 0x38bb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BB44u;
        goto label_38bb44;
    }
    ctx->pc = 0x38BB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB3Cu;
        // 0x38bb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BB44u;
label_38bb44:
    // 0x38bb44: 0x0  nop
    ctx->pc = 0x38bb44u;
    // NOP
    ctx->pc = 0x38bb48u;
}
