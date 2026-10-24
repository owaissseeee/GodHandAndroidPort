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

// Function: ResetAnimSlotArray_13F510
// Address: 0x13f510 - 0x13f558
void ResetAnimSlotArray_13F510_0x13f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetAnimSlotArray_13F510_0x13f510");
#endif

    switch (ctx->pc) {
        case 0x13f528u: goto label_13f528;
        default: break;
    }

    ctx->pc = 0x13f510u;

    // 0x13f510: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13f514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f518: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x13f518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x13f51c: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x13f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x13f520: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x13f520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x13f524: 0x0  nop
    ctx->pc = 0x13f524u;
    // NOP
label_13f528:
    // 0x13f528: 0xac6001a8  sw          $zero, 0x1A8($v1)
    ctx->pc = 0x13f528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 424), GPR_U32(ctx, 0));
    // 0x13f52c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x13f52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f530: 0xe4600218  swc1        $f0, 0x218($v1)
    ctx->pc = 0x13f530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 536), bits); }
    // 0x13f534: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13f534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13f538: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x13f538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x13f53c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F53Cu;
    {
        const bool branch_taken_0x13f53c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x13F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F53Cu;
        // 0x13f540: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f53c) {
            ctx->pc = 0x13F528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f528;
        }
    }
    ctx->pc = 0x13F544u;
    // 0x13f544: 0xa0800384  sb          $zero, 0x384($a0)
    ctx->pc = 0x13f544u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 900), (uint8_t)GPR_U32(ctx, 0));
    // 0x13f548: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x13f548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x13f54c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F54Cu;
        // 0x13f550: 0xa0800358  sb          $zero, 0x358($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 856), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F554u;
    // 0x13f554: 0x0  nop
    ctx->pc = 0x13f554u;
    // NOP
    ctx->pc = 0x13f558u;
}
