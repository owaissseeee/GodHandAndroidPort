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

// Function: func_00368EE0
// Address: 0x368ee0 - 0x368f18
void func_00368EE0_0x368ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00368EE0_0x368ee0");
#endif

    switch (ctx->pc) {
        case 0x368ee0u: goto label_368ee0;
        case 0x368ee4u: goto label_368ee4;
        case 0x368ee8u: goto label_368ee8;
        case 0x368eecu: goto label_368eec;
        case 0x368ef0u: goto label_368ef0;
        case 0x368ef4u: goto label_368ef4;
        case 0x368ef8u: goto label_368ef8;
        case 0x368efcu: goto label_368efc;
        case 0x368f00u: goto label_368f00;
        case 0x368f04u: goto label_368f04;
        case 0x368f08u: goto label_368f08;
        case 0x368f0cu: goto label_368f0c;
        case 0x368f10u: goto label_368f10;
        case 0x368f14u: goto label_368f14;
        default: break;
    }

    ctx->pc = 0x368ee0u;

label_368ee0:
    // 0x368ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_368ee4:
    // 0x368ee4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x368ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_368ee8:
    // 0x368ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_368eec:
    // 0x368eec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_368ef0:
    if (ctx->pc == 0x368EF0u) {
        ctx->pc = 0x368EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EECu;
        // 0x368ef0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368EF4u;
        goto label_368ef4;
    }
    ctx->pc = 0x368EECu;
    {
        const bool branch_taken_0x368eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EECu;
        // 0x368ef0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368eec) {
            ctx->pc = 0x368F08u;
            goto label_368f08;
        }
    }
    ctx->pc = 0x368EF4u;
label_368ef4:
    // 0x368ef4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x368ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_368ef8:
    // 0x368ef8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_368efc:
    if (ctx->pc == 0x368EFCu) {
        ctx->pc = 0x368EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EF8u;
        // 0x368efc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F00u;
        goto label_368f00;
    }
    ctx->pc = 0x368EF8u;
    {
        const bool branch_taken_0x368ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ef8) {
            ctx->pc = 0x368EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368EF8u;
            // 0x368efc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368F0Cu;
            goto label_368f0c;
        }
    }
    ctx->pc = 0x368F00u;
label_368f00:
    // 0x368f00: 0x40f809  jalr        $v0
label_368f04:
    if (ctx->pc == 0x368F04u) {
        ctx->pc = 0x368F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F00u;
        // 0x368f04: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F08u;
        goto label_368f08;
    }
    ctx->pc = 0x368F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x368F08u);
        ctx->pc = 0x368F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F00u;
        // 0x368f04: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368F00u, 0x368F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x368F08u;
label_368f08:
    // 0x368f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_368f0c:
    // 0x368f0c: 0x3e00008  jr          $ra
label_368f10:
    if (ctx->pc == 0x368F10u) {
        ctx->pc = 0x368F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F0Cu;
        // 0x368f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F14u;
        goto label_368f14;
    }
    ctx->pc = 0x368F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F0Cu;
        // 0x368f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368F14u;
label_368f14:
    // 0x368f14: 0x0  nop
    ctx->pc = 0x368f14u;
    // NOP
    ctx->pc = 0x368f18u;
}
