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

// Function: __ls__7ostreamUl
// Address: 0x388ba8 - 0x388c18
void ps2___ls__7ostreamUl_0x388ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreamUl_0x388ba8");
#endif

    switch (ctx->pc) {
        case 0x388be8u: goto label_388be8;
        case 0x388c00u: goto label_388c00;
        default: break;
    }

    ctx->pc = 0x388ba8u;

    // 0x388ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388bac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x388bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x388bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x388bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x388bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388bbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x388bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388bc0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x388bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x388bc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388BC4u;
    {
        const bool branch_taken_0x388bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BC4u;
        // 0x388bc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bc4) {
            ctx->pc = 0x388BD4u;
            goto label_388bd4;
        }
    }
    ctx->pc = 0x388BCCu;
    // 0x388bcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x388BCCu;
    {
        const bool branch_taken_0x388bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BCCu;
        // 0x388bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bcc) {
            ctx->pc = 0x388BECu;
            goto label_388bec;
        }
    }
    ctx->pc = 0x388BD4u;
label_388bd4:
    // 0x388bd4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x388bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x388bd8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388BD8u;
    {
        const bool branch_taken_0x388bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BD8u;
        // 0x388bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bd8) {
            ctx->pc = 0x388BECu;
            goto label_388bec;
        }
    }
    ctx->pc = 0x388BE0u;
    // 0x388be0: 0xc0e249a  jal         func_389268
    ctx->pc = 0x388BE0u;
    SET_GPR_U32(ctx, 31, 0x388BE8u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388BE0u, 0x388BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388BE8u;
label_388be8:
    // 0x388be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388bec:
    // 0x388bec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388BECu;
    {
        const bool branch_taken_0x388bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BECu;
        // 0x388bf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bec) {
            ctx->pc = 0x388C00u;
            goto label_388c00;
        }
    }
    ctx->pc = 0x388BF4u;
    // 0x388bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388bf8: 0xc0e2198  jal         func_388660
    ctx->pc = 0x388BF8u;
    SET_GPR_U32(ctx, 31, 0x388C00u);
    ctx->pc = 0x388BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388BF8u;
    // 0x388bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388660u, 0x388BF8u, 0x388C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C00u;
label_388c00:
    // 0x388c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388c04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388c08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x388c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x388c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388c10: 0x3e00008  jr          $ra
    ctx->pc = 0x388C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C10u;
        // 0x388c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388C18u;
}
