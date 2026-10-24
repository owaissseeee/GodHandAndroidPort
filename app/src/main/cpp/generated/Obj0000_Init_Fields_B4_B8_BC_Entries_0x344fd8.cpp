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

// Function: Obj0000_Init_Fields_B4_B8_BC_Entries
// Address: 0x344fd8 - 0x345040
void Obj0000_Init_Fields_B4_B8_BC_Entries_0x344fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Init_Fields_B4_B8_BC_Entries_0x344fd8");
#endif

    switch (ctx->pc) {
        case 0x345000u: goto label_345000;
        default: break;
    }

    ctx->pc = 0x344fd8u;

    // 0x344fd8: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x344fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x344fdc: 0x240b0011  addiu       $t3, $zero, 0x11
    ctx->pc = 0x344fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x344fe0: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x344fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x344fe4: 0x248500d0  addiu       $a1, $a0, 0xD0
    ctx->pc = 0x344fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x344fe8: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x344fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x344fec: 0x248a0004  addiu       $t2, $a0, 0x4
    ctx->pc = 0x344fecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x344ff0: 0x24890008  addiu       $t1, $a0, 0x8
    ctx->pc = 0x344ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x344ff4: 0x2488000c  addiu       $t0, $a0, 0xC
    ctx->pc = 0x344ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x344ff8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344ffc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x344ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_345000:
    // 0x345000: 0x24e200c0  addiu       $v0, $a3, 0xC0
    ctx->pc = 0x345000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
    // 0x345004: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x345004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x345008: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x345008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x34500c: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x34500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x345010: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x345010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x345014: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x345014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x345018: 0xaca0fff0  sw          $zero, -0x10($a1)
    ctx->pc = 0x345018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 0));
    // 0x34501c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x34501cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x345020: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x345020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x345024: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x345024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x345028: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x345028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x34502c: 0x4c1fff4  bgez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x34502Cu;
    {
        const bool branch_taken_0x34502c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x345030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34502Cu;
        // 0x345030: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34502c) {
            ctx->pc = 0x345000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345000;
        }
    }
    ctx->pc = 0x345034u;
    // 0x345034: 0x3e00008  jr          $ra
    ctx->pc = 0x345034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34503Cu;
    // 0x34503c: 0x0  nop
    ctx->pc = 0x34503cu;
    // NOP
    ctx->pc = 0x345040u;
}
