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

// Function: InitEspWork
// Address: 0x2faa20 - 0x2faa88
void InitEspWork_0x2faa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEspWork_0x2faa20");
#endif

    switch (ctx->pc) {
        case 0x2faa3cu: goto label_2faa3c;
        case 0x2faa50u: goto label_2faa50;
        case 0x2faa64u: goto label_2faa64;
        case 0x2faa78u: goto label_2faa78;
        default: break;
    }

    ctx->pc = 0x2faa20u;

    // 0x2faa20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2faa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2faa24: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faa24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faa28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2faa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2faa2c: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faa30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2faa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa34: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2FAA34u;
    SET_GPR_U32(ctx, 31, 0x2FAA3Cu);
    ctx->pc = 0x2FAA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA34u;
    // 0x2faa38: 0x3c060010  lui         $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2FAA34u, 0x2FAA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA3Cu;
label_2faa3c:
    // 0x2faa3c: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2faa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2faa40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2faa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa44: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faa48: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2FAA48u;
    SET_GPR_U32(ctx, 31, 0x2FAA50u);
    ctx->pc = 0x2FAA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA48u;
    // 0x2faa4c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2FAA48u, 0x2FAA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA50u;
label_2faa50:
    // 0x2faa50: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2faa50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2faa54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2faa54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa58: 0x2484b840  addiu       $a0, $a0, -0x47C0
    ctx->pc = 0x2faa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948928));
    // 0x2faa5c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2FAA5Cu;
    SET_GPR_U32(ctx, 31, 0x2FAA64u);
    ctx->pc = 0x2FAA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA5Cu;
    // 0x2faa60: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2FAA5Cu, 0x2FAA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA64u;
label_2faa64:
    // 0x2faa64: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2faa64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2faa68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2faa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa6c: 0x2484b8c0  addiu       $a0, $a0, -0x4740
    ctx->pc = 0x2faa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949056));
    // 0x2faa70: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2FAA70u;
    SET_GPR_U32(ctx, 31, 0x2FAA78u);
    ctx->pc = 0x2FAA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA70u;
    // 0x2faa74: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2FAA70u, 0x2FAA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA78u;
label_2faa78:
    // 0x2faa78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2faa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA7Cu;
        // 0x2faa80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAA84u;
    // 0x2faa84: 0x0  nop
    ctx->pc = 0x2faa84u;
    // NOP
    ctx->pc = 0x2faa88u;
}
