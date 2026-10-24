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

// Function: func_0033BFE8
// Address: 0x33bfe8 - 0x33c038
void func_0033BFE8_0x33bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033BFE8_0x33bfe8");
#endif

    switch (ctx->pc) {
        case 0x33bfe8u: goto label_33bfe8;
        case 0x33bfecu: goto label_33bfec;
        case 0x33bff0u: goto label_33bff0;
        case 0x33bff4u: goto label_33bff4;
        case 0x33bff8u: goto label_33bff8;
        case 0x33bffcu: goto label_33bffc;
        case 0x33c000u: goto label_33c000;
        case 0x33c004u: goto label_33c004;
        case 0x33c008u: goto label_33c008;
        case 0x33c00cu: goto label_33c00c;
        case 0x33c010u: goto label_33c010;
        case 0x33c014u: goto label_33c014;
        case 0x33c018u: goto label_33c018;
        case 0x33c01cu: goto label_33c01c;
        case 0x33c020u: goto label_33c020;
        case 0x33c024u: goto label_33c024;
        case 0x33c028u: goto label_33c028;
        case 0x33c02cu: goto label_33c02c;
        case 0x33c030u: goto label_33c030;
        case 0x33c034u: goto label_33c034;
        default: break;
    }

    ctx->pc = 0x33bfe8u;

label_33bfe8:
    // 0x33bfe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33bfec:
    // 0x33bfec: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
label_33bff0:
    // 0x33bff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33bff4:
    // 0x33bff4: 0x244288c8  addiu       $v0, $v0, -0x7738
    ctx->pc = 0x33bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936776));
label_33bff8:
    // 0x33bff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33bffc:
    // 0x33bffc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_33c000:
    if (ctx->pc == 0x33C000u) {
        ctx->pc = 0x33C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFFCu;
        // 0x33c000: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C004u;
        goto label_33c004;
    }
    ctx->pc = 0x33BFFCu;
    {
        const bool branch_taken_0x33bffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bffc) {
            ctx->pc = 0x33C000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BFFCu;
            // 0x33c000: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C010u;
            goto label_33c010;
        }
    }
    ctx->pc = 0x33C004u;
label_33c004:
    // 0x33c004: 0x60f809  jalr        $v1
label_33c008:
    if (ctx->pc == 0x33C008u) {
        ctx->pc = 0x33C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C004u;
        // 0x33c008: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C00Cu;
        goto label_33c00c;
    }
    ctx->pc = 0x33C004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C00Cu);
        ctx->pc = 0x33C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C004u;
        // 0x33c008: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C004u, 0x33C00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C00Cu;
label_33c00c:
    // 0x33c00c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c010:
    // 0x33c010: 0x3e00008  jr          $ra
label_33c014:
    if (ctx->pc == 0x33C014u) {
        ctx->pc = 0x33C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C010u;
        // 0x33c014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C018u;
        goto label_33c018;
    }
    ctx->pc = 0x33C010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C010u;
        // 0x33c014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C018u;
label_33c018:
    // 0x33c018: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33c018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_33c01c:
    // 0x33c01c: 0x0  nop
    ctx->pc = 0x33c01cu;
    // NOP
label_33c020:
    // 0x33c020: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33c024:
    // 0x33c024: 0x0  nop
    ctx->pc = 0x33c024u;
    // NOP
label_33c028:
    // 0x33c028: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33c028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33c02c:
    // 0x33c02c: 0x0  nop
    ctx->pc = 0x33c02cu;
    // NOP
label_33c030:
    // 0x33c030: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33c034:
    // 0x33c034: 0x0  nop
    ctx->pc = 0x33c034u;
    // NOP
    ctx->pc = 0x33c038u;
}
