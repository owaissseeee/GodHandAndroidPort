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

// Function: __ls__7ostreamUi
// Address: 0x388aa0 - 0x388b18
void ps2___ls__7ostreamUi_0x388aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreamUi_0x388aa0");
#endif

    switch (ctx->pc) {
        case 0x388ae0u: goto label_388ae0;
        case 0x388afcu: goto label_388afc;
        default: break;
    }

    ctx->pc = 0x388aa0u;

    // 0x388aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388aa4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x388aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x388aa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x388aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x388aac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388ab4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x388ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388ab8: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x388ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x388abc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388ABCu;
    {
        const bool branch_taken_0x388abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388ABCu;
        // 0x388ac0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388abc) {
            ctx->pc = 0x388ACCu;
            goto label_388acc;
        }
    }
    ctx->pc = 0x388AC4u;
    // 0x388ac4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x388AC4u;
    {
        const bool branch_taken_0x388ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AC4u;
        // 0x388ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ac4) {
            ctx->pc = 0x388AE4u;
            goto label_388ae4;
        }
    }
    ctx->pc = 0x388ACCu;
label_388acc:
    // 0x388acc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x388accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x388ad0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388AD0u;
    {
        const bool branch_taken_0x388ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AD0u;
        // 0x388ad4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ad0) {
            ctx->pc = 0x388AE4u;
            goto label_388ae4;
        }
    }
    ctx->pc = 0x388AD8u;
    // 0x388ad8: 0xc0e249a  jal         func_389268
    ctx->pc = 0x388AD8u;
    SET_GPR_U32(ctx, 31, 0x388AE0u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388AD8u, 0x388AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388AE0u;
label_388ae0:
    // 0x388ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388ae4:
    // 0x388ae4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x388AE4u;
    {
        const bool branch_taken_0x388ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AE4u;
        // 0x388ae8: 0x11283c  dsll32      $a1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ae4) {
            ctx->pc = 0x388AFCu;
            goto label_388afc;
        }
    }
    ctx->pc = 0x388AECu;
    // 0x388aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388af0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x388af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x388af4: 0xc0e2198  jal         func_388660
    ctx->pc = 0x388AF4u;
    SET_GPR_U32(ctx, 31, 0x388AFCu);
    ctx->pc = 0x388AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388AF4u;
    // 0x388af8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388660u, 0x388AF4u, 0x388AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388AFCu;
label_388afc:
    // 0x388afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388b00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388b04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x388b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x388b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x388B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B0Cu;
        // 0x388b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388B14u;
    // 0x388b14: 0x0  nop
    ctx->pc = 0x388b14u;
    // NOP
    ctx->pc = 0x388b18u;
}
