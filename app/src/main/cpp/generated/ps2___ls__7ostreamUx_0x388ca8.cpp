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

// Function: __ls__7ostreamUx
// Address: 0x388ca8 - 0x388d18
void ps2___ls__7ostreamUx_0x388ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreamUx_0x388ca8");
#endif

    switch (ctx->pc) {
        case 0x388ce8u: goto label_388ce8;
        case 0x388d00u: goto label_388d00;
        default: break;
    }

    ctx->pc = 0x388ca8u;

    // 0x388ca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388cac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x388cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x388cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x388cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x388cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388cbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x388cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388cc0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x388cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x388cc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388CC4u;
    {
        const bool branch_taken_0x388cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CC4u;
        // 0x388cc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cc4) {
            ctx->pc = 0x388CD4u;
            goto label_388cd4;
        }
    }
    ctx->pc = 0x388CCCu;
    // 0x388ccc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x388CCCu;
    {
        const bool branch_taken_0x388ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CCCu;
        // 0x388cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ccc) {
            ctx->pc = 0x388CECu;
            goto label_388cec;
        }
    }
    ctx->pc = 0x388CD4u;
label_388cd4:
    // 0x388cd4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x388cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x388cd8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388CD8u;
    {
        const bool branch_taken_0x388cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CD8u;
        // 0x388cdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cd8) {
            ctx->pc = 0x388CECu;
            goto label_388cec;
        }
    }
    ctx->pc = 0x388CE0u;
    // 0x388ce0: 0xc0e249a  jal         func_389268
    ctx->pc = 0x388CE0u;
    SET_GPR_U32(ctx, 31, 0x388CE8u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388CE0u, 0x388CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388CE8u;
label_388ce8:
    // 0x388ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388cec:
    // 0x388cec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388CECu;
    {
        const bool branch_taken_0x388cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CECu;
        // 0x388cf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cec) {
            ctx->pc = 0x388D00u;
            goto label_388d00;
        }
    }
    ctx->pc = 0x388CF4u;
    // 0x388cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388cf8: 0xc0e2198  jal         func_388660
    ctx->pc = 0x388CF8u;
    SET_GPR_U32(ctx, 31, 0x388D00u);
    ctx->pc = 0x388CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388CF8u;
    // 0x388cfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388660u, 0x388CF8u, 0x388D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388D00u;
label_388d00:
    // 0x388d00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388d04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388d08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x388d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x388d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388d10: 0x3e00008  jr          $ra
    ctx->pc = 0x388D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D10u;
        // 0x388d14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388D18u;
}
