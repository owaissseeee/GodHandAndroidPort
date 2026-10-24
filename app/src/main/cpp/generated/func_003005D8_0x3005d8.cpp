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

// Function: func_003005D8
// Address: 0x3005d8 - 0x300628
void func_003005D8_0x3005d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003005D8_0x3005d8");
#endif

    ctx->pc = 0x3005d8u;

    // 0x3005d8: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x3005d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x3005dc: 0x24030260  addiu       $v1, $zero, 0x260
    ctx->pc = 0x3005dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x3005e0: 0x2442b940  addiu       $v0, $v0, -0x46C0
    ctx->pc = 0x3005e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949184));
    // 0x3005e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3005E4u;
    {
        const bool branch_taken_0x3005e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3005e4) {
            ctx->pc = 0x3005E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3005E4u;
            // 0x3005e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3005ECu;
            goto label_3005ec;
        }
    }
    ctx->pc = 0x3005ECu;
label_3005ec:
    // 0x3005ec: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3005ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3005f0: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x3005f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x3005f4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3005f4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3005f8: 0x24c61960  addiu       $a2, $a2, 0x1960
    ctx->pc = 0x3005f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6496));
    // 0x3005fc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3005fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x300600: 0x2012  mflo        $a0
    ctx->pc = 0x300600u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x300604: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x300604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x300608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x300608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30060c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x30060cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x300610: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x300610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x300614: 0x852806  srlv        $a1, $a1, $a0
    ctx->pc = 0x300614u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x300618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30061c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x300620: 0x3e00008  jr          $ra
    ctx->pc = 0x300620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300620u;
        // 0x300624: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300628u;
}
