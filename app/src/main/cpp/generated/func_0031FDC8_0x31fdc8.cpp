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

// Function: func_0031FDC8
// Address: 0x31fdc8 - 0x31fe00
void func_0031FDC8_0x31fdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FDC8_0x31fdc8");
#endif

    ctx->pc = 0x31fdc8u;

    // 0x31fdc8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fdcc: 0x8c824458  lw          $v0, 0x4458($a0)
    ctx->pc = 0x31fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4458u));
    // 0x31fdd0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FDD0u;
    {
        const bool branch_taken_0x31fdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDD0u;
        // 0x31fdd4: 0x24854458  addiu       $a1, $a0, 0x4458 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdd0) {
            ctx->pc = 0x31FDF4u;
            goto label_31fdf4;
        }
    }
    ctx->pc = 0x31FDD8u;
    // 0x31fdd8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FDD8u;
    {
        const bool branch_taken_0x31fdd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDD8u;
        // 0x31fddc: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdd8) {
            ctx->pc = 0x31FDF4u;
            goto label_31fdf4;
        }
    }
    ctx->pc = 0x31FDE0u;
    // 0x31fde0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fde4: 0x24631120  addiu       $v1, $v1, 0x1120
    ctx->pc = 0x31fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4384));
    // 0x31fde8: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fdec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fdf0: 0xac834458  sw          $v1, 0x4458($a0)
    ctx->pc = 0x31fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17496), GPR_U32(ctx, 3));
label_31fdf4:
    // 0x31fdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x31FDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDF4u;
        // 0x31fdf8: 0x24824458  addiu       $v0, $a0, 0x4458 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FDFCu;
    // 0x31fdfc: 0x0  nop
    ctx->pc = 0x31fdfcu;
    // NOP
    ctx->pc = 0x31fe00u;
}
