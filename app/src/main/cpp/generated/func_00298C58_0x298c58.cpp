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

// Function: func_00298C58
// Address: 0x298c58 - 0x298cf0
void func_00298C58_0x298c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00298C58_0x298c58");
#endif

    switch (ctx->pc) {
        case 0x298c88u: goto label_298c88;
        case 0x298cb8u: goto label_298cb8;
        case 0x298ce0u: goto label_298ce0;
        default: break;
    }

    ctx->pc = 0x298c58u;

    // 0x298c58: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x298c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x298c5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298c60: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x298c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x298c64: 0x8044abe0  lb          $a0, -0x5420($v0)
    ctx->pc = 0x298c64u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x44ABE0u));
    // 0x298c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298c6c: 0x2446abe0  addiu       $a2, $v0, -0x5420
    ctx->pc = 0x298c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945760));
    // 0x298c70: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x298c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x298c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c78: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x298C78u;
    {
        const bool branch_taken_0x298c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C78u;
        // 0x298c7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c78) {
            ctx->pc = 0x298CB0u;
            goto label_298cb0;
        }
    }
    ctx->pc = 0x298C80u;
    // 0x298c80: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x298c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x298c84: 0x0  nop
    ctx->pc = 0x298c84u;
    // NOP
label_298c88:
    // 0x298c88: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x298c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x298c8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x298c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x298c90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x298c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x298c94: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x298c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x298c98: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x298c98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x298c9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298C9Cu;
    {
        const bool branch_taken_0x298c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x298CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C9Cu;
        // 0x298ca0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c9c) {
            ctx->pc = 0x298CB0u;
            goto label_298cb0;
        }
    }
    ctx->pc = 0x298CA4u;
    // 0x298ca4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x298ca4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x298ca8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x298CA8u;
    {
        const bool branch_taken_0x298ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298ca8) {
            ctx->pc = 0x298CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298CA8u;
            // 0x298cac: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298c88;
        }
    }
    ctx->pc = 0x298CB0u;
label_298cb0:
    // 0x298cb0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x298CB0u;
    SET_GPR_U32(ctx, 31, 0x298CB8u);
    ctx->pc = 0x298CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298CB0u;
    // 0x298cb4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x298CB0u, 0x298CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298CB8u;
label_298cb8:
    // 0x298cb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298cbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298CBCu;
    {
        const bool branch_taken_0x298cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x298CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CBCu;
        // 0x298cc0: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298cbc) {
            ctx->pc = 0x298CD0u;
            goto label_298cd0;
        }
    }
    ctx->pc = 0x298CC4u;
    // 0x298cc4: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x298cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x298cc8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x298cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x298ccc: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x298cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_298cd0:
    // 0x298cd0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x298cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x298cd4: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x298cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x298cd8: 0xc0a5ed8  jal         func_297B60
    ctx->pc = 0x298CD8u;
    SET_GPR_U32(ctx, 31, 0x298CE0u);
    ctx->pc = 0x298CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298CD8u;
    // 0x298cdc: 0x24a58cf0  addiu       $a1, $a1, -0x7310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B60u, 0x298CD8u, 0x298CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298CE0u;
label_298ce0:
    // 0x298ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x298CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CE4u;
        // 0x298ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298CECu;
    // 0x298cec: 0x0  nop
    ctx->pc = 0x298cecu;
    // NOP
    ctx->pc = 0x298cf0u;
}
