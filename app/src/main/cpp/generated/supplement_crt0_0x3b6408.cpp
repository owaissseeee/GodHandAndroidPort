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

// Function: supplement_crt0
// Address: 0x3b6408 - 0x3b6470
void supplement_crt0_0x3b6408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("supplement_crt0_0x3b6408");
#endif

    switch (ctx->pc) {
        case 0x3b6444u: goto label_3b6444;
        case 0x3b6454u: goto label_3b6454;
        default: break;
    }

    ctx->pc = 0x3b6408u;

    // 0x3b6408: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b6408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b640c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3b640cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3b6410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b6410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b6414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b6414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6418: 0x24420370  addiu       $v0, $v0, 0x370
    ctx->pc = 0x3b6418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
    // 0x3b641c: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x3b641cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x3b6420: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b6420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b6424: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b6424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6428: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b6428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b642c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3b642cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x3b6430: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x3b6430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x3b6434: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3b6434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3b6438: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3b6438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3b643c: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B643Cu;
    SET_GPR_U32(ctx, 31, 0x3B6444u);
    ctx->pc = 0x3B6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B643Cu;
    // 0x3b6440: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B643Cu, 0x3B6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6444u;
label_3b6444:
    // 0x3b6444: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b6444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b6448: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b6448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b644c: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B644Cu;
    SET_GPR_U32(ctx, 31, 0x3B6454u);
    ctx->pc = 0x3B6450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B644Cu;
    // 0x3b6450: 0xac62af18  sw          $v0, -0x50E8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B644Cu, 0x3B6454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6454u;
label_3b6454:
    // 0x3b6454: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b6454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b6458: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b6458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b645c: 0xac62af1c  sw          $v0, -0x50E4($v1)
    ctx->pc = 0x3b645cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FAF1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAF1Cu, _value); } while (0);
    // 0x3b6460: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6460u;
        // 0x3b6464: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6468u;
    // 0x3b6468: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3b6468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3b646c: 0x0  nop
    ctx->pc = 0x3b646cu;
    // NOP
    ctx->pc = 0x3b6470u;
}
