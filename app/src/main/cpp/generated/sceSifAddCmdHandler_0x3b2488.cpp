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

// Function: sceSifAddCmdHandler
// Address: 0x3b2488 - 0x3b2500
void sceSifAddCmdHandler_0x3b2488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifAddCmdHandler_0x3b2488");
#endif

    ctx->pc = 0x3b2488u;

    // 0x3b2488: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b2488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b248c: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B248Cu;
    {
        const bool branch_taken_0x3b248c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B248Cu;
        // 0x3b2490: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b248c) {
            ctx->pc = 0x3B24CCu;
            goto label_3b24cc;
        }
    }
    ctx->pc = 0x3B2494u;
    // 0x3b2494: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3b2494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3b2498: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3b2498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3b249c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3b249cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3b24a0: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b24a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b24a4: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x3b24a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b24a8: 0x2484e518  addiu       $a0, $a0, -0x1AE8
    ctx->pc = 0x3b24a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960408));
    // 0x3b24ac: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x3b24acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b24b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3b24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b24b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b24b8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x3b24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x3b24bc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x3b24bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x3b24c0: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x3b24c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b24c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B24C4u;
    {
        const bool branch_taken_0x3b24c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24C4u;
        // 0x3b24c8: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b24c4) {
            ctx->pc = 0x3B24F4u;
            goto label_3b24f4;
        }
    }
    ctx->pc = 0x3B24CCu;
label_3b24cc:
    // 0x3b24cc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3b24ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3b24d0: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b24d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b24d4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x3b24d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b24d8: 0x2484e518  addiu       $a0, $a0, -0x1AE8
    ctx->pc = 0x3b24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960408));
    // 0x3b24dc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3b24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3b24e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b24e4: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x3b24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x3b24e8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x3b24e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x3b24ec: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x3b24ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b24f0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3b24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3b24f4:
    // 0x3b24f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b24f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b24f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B24F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24F8u;
        // 0x3b24fc: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B24F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2500u;
}
