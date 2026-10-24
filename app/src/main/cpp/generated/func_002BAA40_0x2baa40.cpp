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

// Function: func_002BAA40
// Address: 0x2baa40 - 0x2baa90
void func_002BAA40_0x2baa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BAA40_0x2baa40");
#endif

    switch (ctx->pc) {
        case 0x2baa64u: goto label_2baa64;
        case 0x2baa7cu: goto label_2baa7c;
        default: break;
    }

    ctx->pc = 0x2baa40u;

    // 0x2baa40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2baa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2baa44: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2baa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2baa48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2baa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2baa4c: 0x8c626368  lw          $v0, 0x6368($v1)
    ctx->pc = 0x2baa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786368u));
    // 0x2baa50: 0x24706368  addiu       $s0, $v1, 0x6368
    ctx->pc = 0x2baa50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25448));
    // 0x2baa54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BAA54u;
    {
        const bool branch_taken_0x2baa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA54u;
        // 0x2baa58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa54) {
            ctx->pc = 0x2BAA7Cu;
            goto label_2baa7c;
        }
    }
    ctx->pc = 0x2BAA5Cu;
    // 0x2baa5c: 0xc0aebe8  jal         func_2BAFA0
    ctx->pc = 0x2BAA5Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA64u);
    ctx->pc = 0x2BAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFA0u, 0x2BAA5Cu, 0x2BAA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA64u;
label_2baa64:
    // 0x2baa64: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2baa64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2baa68: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2baa68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2baa6c: 0x24a5be60  addiu       $a1, $a1, -0x41A0
    ctx->pc = 0x2baa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950496));
    // 0x2baa70: 0x24c60d68  addiu       $a2, $a2, 0xD68
    ctx->pc = 0x2baa70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3432));
    // 0x2baa74: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2BAA74u;
    SET_GPR_U32(ctx, 31, 0x2BAA7Cu);
    ctx->pc = 0x2BAA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA74u;
    // 0x2baa78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2BAA74u, 0x2BAA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA7Cu;
label_2baa7c:
    // 0x2baa7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2baa7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baa80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2baa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2baa84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2baa84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2baa88: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA88u;
        // 0x2baa8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAA90u;
}
