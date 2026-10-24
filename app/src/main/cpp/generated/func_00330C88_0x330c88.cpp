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

// Function: func_00330C88
// Address: 0x330c88 - 0x330cf0
void func_00330C88_0x330c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330C88_0x330c88");
#endif

    switch (ctx->pc) {
        case 0x330c88u: goto label_330c88;
        case 0x330c8cu: goto label_330c8c;
        case 0x330c90u: goto label_330c90;
        case 0x330c94u: goto label_330c94;
        case 0x330c98u: goto label_330c98;
        case 0x330c9cu: goto label_330c9c;
        case 0x330ca0u: goto label_330ca0;
        case 0x330ca4u: goto label_330ca4;
        case 0x330ca8u: goto label_330ca8;
        case 0x330cacu: goto label_330cac;
        case 0x330cb0u: goto label_330cb0;
        case 0x330cb4u: goto label_330cb4;
        case 0x330cb8u: goto label_330cb8;
        case 0x330cbcu: goto label_330cbc;
        case 0x330cc0u: goto label_330cc0;
        case 0x330cc4u: goto label_330cc4;
        case 0x330cc8u: goto label_330cc8;
        case 0x330cccu: goto label_330ccc;
        case 0x330cd0u: goto label_330cd0;
        case 0x330cd4u: goto label_330cd4;
        case 0x330cd8u: goto label_330cd8;
        case 0x330cdcu: goto label_330cdc;
        case 0x330ce0u: goto label_330ce0;
        case 0x330ce4u: goto label_330ce4;
        case 0x330ce8u: goto label_330ce8;
        case 0x330cecu: goto label_330cec;
        default: break;
    }

    ctx->pc = 0x330c88u;

label_330c88:
    // 0x330c88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_330c8c:
    // 0x330c8c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x330c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_330c90:
    // 0x330c90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x330c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_330c94:
    // 0x330c94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_330c98:
    // 0x330c98: 0x24505e80  addiu       $s0, $v0, 0x5E80
    ctx->pc = 0x330c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24192));
label_330c9c:
    // 0x330c9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x330c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_330ca0:
    // 0x330ca0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x330ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_330ca4:
    // 0x330ca4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x330ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_330ca8:
    // 0x330ca8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_330cac:
    if (ctx->pc == 0x330CACu) {
        ctx->pc = 0x330CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CA8u;
        // 0x330cac: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330CB0u;
        goto label_330cb0;
    }
    ctx->pc = 0x330CA8u;
    {
        const bool branch_taken_0x330ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CA8u;
        // 0x330cac: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ca8) {
            ctx->pc = 0x330CC4u;
            goto label_330cc4;
        }
    }
    ctx->pc = 0x330CB0u;
label_330cb0:
    // 0x330cb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x330cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_330cb4:
    // 0x330cb4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_330cb8:
    if (ctx->pc == 0x330CB8u) {
        ctx->pc = 0x330CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CB4u;
        // 0x330cb8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330CBCu;
        goto label_330cbc;
    }
    ctx->pc = 0x330CB4u;
    {
        const bool branch_taken_0x330cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330cb4) {
            ctx->pc = 0x330CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330CB4u;
            // 0x330cb8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330CC8u;
            goto label_330cc8;
        }
    }
    ctx->pc = 0x330CBCu;
label_330cbc:
    // 0x330cbc: 0x40f809  jalr        $v0
label_330cc0:
    if (ctx->pc == 0x330CC0u) {
        ctx->pc = 0x330CC4u;
        goto label_330cc4;
    }
    ctx->pc = 0x330CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330CC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330CBCu, 0x330CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330CC4u;
label_330cc4:
    // 0x330cc4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x330cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_330cc8:
    // 0x330cc8: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
label_330ccc:
    if (ctx->pc == 0x330CCCu) {
        ctx->pc = 0x330CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CC8u;
        // 0x330ccc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330CD0u;
        goto label_330cd0;
    }
    ctx->pc = 0x330CC8u;
    {
        const bool branch_taken_0x330cc8 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x330cc8) {
            ctx->pc = 0x330CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330CC8u;
            // 0x330ccc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330ca8;
        }
    }
    ctx->pc = 0x330CD0u;
label_330cd0:
    // 0x330cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330cd4:
    // 0x330cd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_330cd8:
    // 0x330cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x330cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_330cdc:
    // 0x330cdc: 0x3e00008  jr          $ra
label_330ce0:
    if (ctx->pc == 0x330CE0u) {
        ctx->pc = 0x330CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CDCu;
        // 0x330ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330CE4u;
        goto label_330ce4;
    }
    ctx->pc = 0x330CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CDCu;
        // 0x330ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330CE4u;
label_330ce4:
    // 0x330ce4: 0x0  nop
    ctx->pc = 0x330ce4u;
    // NOP
label_330ce8:
    // 0x330ce8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x330ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_330cec:
    // 0x330cec: 0x0  nop
    ctx->pc = 0x330cecu;
    // NOP
    ctx->pc = 0x330cf0u;
}
