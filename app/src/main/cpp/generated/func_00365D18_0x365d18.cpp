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

// Function: func_00365D18
// Address: 0x365d18 - 0x365d90
void func_00365D18_0x365d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00365D18_0x365d18");
#endif

    switch (ctx->pc) {
        case 0x365d6cu: goto label_365d6c;
        case 0x365d80u: goto label_365d80;
        default: break;
    }

    ctx->pc = 0x365d18u;

    // 0x365d18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x365d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x365d1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x365d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x365d20: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x365d20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x365d24: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x365d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x365d28: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x365d28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x365d2c: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x365d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x365d30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x365d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x365d34: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x365d34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x365d38: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x365d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x365d3c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x365d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x365d40: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x365d40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x365d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x365d48: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x365d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x365d4c: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x365d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x365d50: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x365d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x365d54: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x365d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x365d58: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x365d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x365d5c: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x365D5Cu;
    {
        const bool branch_taken_0x365d5c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x365D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D5Cu;
        // 0x365d60: 0xafaa001c  sw          $t2, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365d5c) {
            ctx->pc = 0x365D70u;
            goto label_365d70;
        }
    }
    ctx->pc = 0x365D64u;
    // 0x365d64: 0xc0d97ac  jal         func_365EB0
    ctx->pc = 0x365D64u;
    SET_GPR_U32(ctx, 31, 0x365D6Cu);
    ctx->pc = 0x365EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365EB0u, 0x365D64u, 0x365D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D6Cu;
label_365d6c:
    // 0x365d6c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x365d6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365d70:
    // 0x365d70: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x365d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x365d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d78: 0xc0d9764  jal         func_365D90
    ctx->pc = 0x365D78u;
    SET_GPR_U32(ctx, 31, 0x365D80u);
    ctx->pc = 0x365D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D78u;
    // 0x365d7c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D90u, 0x365D78u, 0x365D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D80u;
label_365d80:
    // 0x365d80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x365d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365d84: 0x3e00008  jr          $ra
    ctx->pc = 0x365D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D84u;
        // 0x365d88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365D8Cu;
    // 0x365d8c: 0x0  nop
    ctx->pc = 0x365d8cu;
    // NOP
    ctx->pc = 0x365d90u;
}
