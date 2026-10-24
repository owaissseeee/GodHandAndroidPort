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

// Function: func_00368D60
// Address: 0x368d60 - 0x368df0
void func_00368D60_0x368d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00368D60_0x368d60");
#endif

    switch (ctx->pc) {
        case 0x368d98u: goto label_368d98;
        case 0x368da0u: goto label_368da0;
        case 0x368db8u: goto label_368db8;
        default: break;
    }

    ctx->pc = 0x368d60u;

    // 0x368d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368d64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x368d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368d6c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x368d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x368d70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368d74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x368d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d78: 0x26101a98  addiu       $s0, $s0, 0x1A98
    ctx->pc = 0x368d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6808));
    // 0x368d7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x368d80: 0x113180  sll         $a2, $s1, 6
    ctx->pc = 0x368d80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x368d84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x368d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x368d88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x368d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d8c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x368d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x368d90: 0xc0d9b14  jal         func_366C50
    ctx->pc = 0x368D90u;
    SET_GPR_U32(ctx, 31, 0x368D98u);
    ctx->pc = 0x368D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D90u;
    // 0x368d94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C50u, 0x368D90u, 0x368D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D98u;
label_368d98:
    // 0x368d98: 0xc0da39a  jal         func_368E68
    ctx->pc = 0x368D98u;
    SET_GPR_U32(ctx, 31, 0x368DA0u);
    ctx->pc = 0x368D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D98u;
    // 0x368d9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368E68u, 0x368D98u, 0x368DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368DA0u;
label_368da0:
    // 0x368da0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x368da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368da4: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x368da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x368da8: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x368DA8u;
    {
        const bool branch_taken_0x368da8 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x368DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368DA8u;
        // 0x368dac: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368da8) {
            ctx->pc = 0x368DD4u;
            goto label_368dd4;
        }
    }
    ctx->pc = 0x368DB0u;
    // 0x368db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x368db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_368db8:
    // 0x368db8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x368db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x368dbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x368dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x368dc0: 0x0  nop
    ctx->pc = 0x368dc0u;
    // NOP
    // 0x368dc4: 0x0  nop
    ctx->pc = 0x368dc4u;
    // NOP
    // 0x368dc8: 0x0  nop
    ctx->pc = 0x368dc8u;
    // NOP
    // 0x368dcc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x368DCCu;
    {
        const bool branch_taken_0x368dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x368DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368DCCu;
        // 0x368dd0: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368dcc) {
            ctx->pc = 0x368DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368db8;
        }
    }
    ctx->pc = 0x368DD4u;
label_368dd4:
    // 0x368dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368dd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ddc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368ddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368de0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368de4: 0x3e00008  jr          $ra
    ctx->pc = 0x368DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368DE4u;
        // 0x368de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368DECu;
    // 0x368dec: 0x0  nop
    ctx->pc = 0x368decu;
    // NOP
    ctx->pc = 0x368df0u;
}
