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

// Function: func_00330BB0
// Address: 0x330bb0 - 0x330c18
void func_00330BB0_0x330bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330BB0_0x330bb0");
#endif

    switch (ctx->pc) {
        case 0x330bb0u: goto label_330bb0;
        case 0x330bb4u: goto label_330bb4;
        case 0x330bb8u: goto label_330bb8;
        case 0x330bbcu: goto label_330bbc;
        case 0x330bc0u: goto label_330bc0;
        case 0x330bc4u: goto label_330bc4;
        case 0x330bc8u: goto label_330bc8;
        case 0x330bccu: goto label_330bcc;
        case 0x330bd0u: goto label_330bd0;
        case 0x330bd4u: goto label_330bd4;
        case 0x330bd8u: goto label_330bd8;
        case 0x330bdcu: goto label_330bdc;
        case 0x330be0u: goto label_330be0;
        case 0x330be4u: goto label_330be4;
        case 0x330be8u: goto label_330be8;
        case 0x330becu: goto label_330bec;
        case 0x330bf0u: goto label_330bf0;
        case 0x330bf4u: goto label_330bf4;
        case 0x330bf8u: goto label_330bf8;
        case 0x330bfcu: goto label_330bfc;
        case 0x330c00u: goto label_330c00;
        case 0x330c04u: goto label_330c04;
        case 0x330c08u: goto label_330c08;
        case 0x330c0cu: goto label_330c0c;
        case 0x330c10u: goto label_330c10;
        case 0x330c14u: goto label_330c14;
        default: break;
    }

    ctx->pc = 0x330bb0u;

label_330bb0:
    // 0x330bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_330bb4:
    // 0x330bb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_330bb8:
    // 0x330bb8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_330bbc:
    if (ctx->pc == 0x330BBCu) {
        ctx->pc = 0x330BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BB8u;
        // 0x330bbc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330BC0u;
        goto label_330bc0;
    }
    ctx->pc = 0x330BB8u;
    {
        const bool branch_taken_0x330bb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x330BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BB8u;
        // 0x330bbc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330bb8) {
            ctx->pc = 0x330BD8u;
            goto label_330bd8;
        }
    }
    ctx->pc = 0x330BC0u;
label_330bc0:
    // 0x330bc0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330bc4:
    // 0x330bc4: 0xc0cc0b8  jal         func_3302E0
label_330bc8:
    if (ctx->pc == 0x330BC8u) {
        ctx->pc = 0x330BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BC4u;
        // 0x330bc8: 0x24843348  addiu       $a0, $a0, 0x3348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330BCCu;
        goto label_330bcc;
    }
    ctx->pc = 0x330BC4u;
    SET_GPR_U32(ctx, 31, 0x330BCCu);
    ctx->pc = 0x330BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330BC4u;
    // 0x330bc8: 0x24843348  addiu       $a0, $a0, 0x3348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330BC4u, 0x330BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330BCCu;
label_330bcc:
    // 0x330bcc: 0x1000000e  b           . + 4 + (0xE << 2)
label_330bd0:
    if (ctx->pc == 0x330BD0u) {
        ctx->pc = 0x330BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BCCu;
        // 0x330bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330BD4u;
        goto label_330bd4;
    }
    ctx->pc = 0x330BCCu;
    {
        const bool branch_taken_0x330bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BCCu;
        // 0x330bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330bcc) {
            ctx->pc = 0x330C08u;
            goto label_330c08;
        }
    }
    ctx->pc = 0x330BD4u;
label_330bd4:
    // 0x330bd4: 0x0  nop
    ctx->pc = 0x330bd4u;
    // NOP
label_330bd8:
    // 0x330bd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x330bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_330bdc:
    // 0x330bdc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x330bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_330be0:
    // 0x330be0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_330be4:
    if (ctx->pc == 0x330BE4u) {
        ctx->pc = 0x330BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BE0u;
        // 0x330be4: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330BE8u;
        goto label_330be8;
    }
    ctx->pc = 0x330BE0u;
    {
        const bool branch_taken_0x330be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330be0) {
            ctx->pc = 0x330BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330BE0u;
            // 0x330be4: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330BF8u;
            goto label_330bf8;
        }
    }
    ctx->pc = 0x330BE8u;
label_330be8:
    // 0x330be8: 0x40f809  jalr        $v0
label_330bec:
    if (ctx->pc == 0x330BECu) {
        ctx->pc = 0x330BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BE8u;
        // 0x330bec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330BF0u;
        goto label_330bf0;
    }
    ctx->pc = 0x330BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330BF0u);
        ctx->pc = 0x330BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BE8u;
        // 0x330bec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330BE8u, 0x330BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330BF0u;
label_330bf0:
    // 0x330bf0: 0x10000004  b           . + 4 + (0x4 << 2)
label_330bf4:
    if (ctx->pc == 0x330BF4u) {
        ctx->pc = 0x330BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BF0u;
        // 0x330bf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330BF8u;
        goto label_330bf8;
    }
    ctx->pc = 0x330BF0u;
    {
        const bool branch_taken_0x330bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BF0u;
        // 0x330bf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330bf0) {
            ctx->pc = 0x330C04u;
            goto label_330c04;
        }
    }
    ctx->pc = 0x330BF8u;
label_330bf8:
    // 0x330bf8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x330bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330bfc:
    // 0x330bfc: 0xc0cc0b8  jal         func_3302E0
label_330c00:
    if (ctx->pc == 0x330C00u) {
        ctx->pc = 0x330C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BFCu;
        // 0x330c00: 0x24843368  addiu       $a0, $a0, 0x3368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330C04u;
        goto label_330c04;
    }
    ctx->pc = 0x330BFCu;
    SET_GPR_U32(ctx, 31, 0x330C04u);
    ctx->pc = 0x330C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330BFCu;
    // 0x330c00: 0x24843368  addiu       $a0, $a0, 0x3368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330BFCu, 0x330C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C04u;
label_330c04:
    // 0x330c04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x330c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330c08:
    // 0x330c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330c0c:
    // 0x330c0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x330c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_330c10:
    // 0x330c10: 0x3e00008  jr          $ra
label_330c14:
    if (ctx->pc == 0x330C14u) {
        ctx->pc = 0x330C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C10u;
        // 0x330c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330C18u;
        goto label_fallthrough_0x330c10;
    }
    ctx->pc = 0x330C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C10u;
        // 0x330c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x330c10:
    ctx->pc = 0x330C18u;
}
