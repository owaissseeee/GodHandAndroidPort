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

// Function: func_0036E308
// Address: 0x36e308 - 0x36e378
void func_0036E308_0x36e308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036E308_0x36e308");
#endif

    ctx->pc = 0x36e308u;

    // 0x36e308: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36e308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e30c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e310: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x36e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x36e314: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E314u;
    {
        const bool branch_taken_0x36e314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x36e314) {
            ctx->pc = 0x36E318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E314u;
            // 0x36e318: 0x8ca203c8  lw          $v0, 0x3C8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E328u;
            goto label_36e328;
        }
    }
    ctx->pc = 0x36E31Cu;
    // 0x36e31c: 0xaca003c8  sw          $zero, 0x3C8($a1)
    ctx->pc = 0x36e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 968), GPR_U32(ctx, 0));
    // 0x36e320: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x36E320u;
    {
        const bool branch_taken_0x36e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E320u;
        // 0x36e324: 0xaca003c4  sw          $zero, 0x3C4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e320) {
            ctx->pc = 0x36E348u;
            goto label_36e348;
        }
    }
    ctx->pc = 0x36E328u;
label_36e328:
    // 0x36e328: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x36e328u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x36e32c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x36e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e330: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x36e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36e334: 0xaca403c8  sw          $a0, 0x3C8($a1)
    ctx->pc = 0x36e334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 968), GPR_U32(ctx, 4));
    // 0x36e338: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x36e338u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x36e33c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x36e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36e340: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x36e340u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36e344: 0xaca203c4  sw          $v0, 0x3C4($a1)
    ctx->pc = 0x36e344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 964), GPR_U32(ctx, 2));
label_36e348:
    // 0x36e348: 0x8ca20114  lw          $v0, 0x114($a1)
    ctx->pc = 0x36e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x36e34c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36e350: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x36e350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x36e354: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x36e354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36e358: 0x8c63a580  lw          $v1, -0x5A80($v1)
    ctx->pc = 0x36e358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944128)));
    // 0x36e35c: 0xaca30320  sw          $v1, 0x320($a1)
    ctx->pc = 0x36e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 800), GPR_U32(ctx, 3));
    // 0x36e360: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x36e360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x36e364: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x36e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36e368: 0x8c84a590  lw          $a0, -0x5A70($a0)
    ctx->pc = 0x36e368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944144)));
    // 0x36e36c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E36Cu;
        // 0x36e370: 0xaca40330  sw          $a0, 0x330($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 816), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E374u;
    // 0x36e374: 0x0  nop
    ctx->pc = 0x36e374u;
    // NOP
    ctx->pc = 0x36e378u;
}
