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

// Function: func_0033A190
// Address: 0x33a190 - 0x33a1e8
void func_0033A190_0x33a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A190_0x33a190");
#endif

    switch (ctx->pc) {
        case 0x33a1b4u: goto label_33a1b4;
        case 0x33a1c4u: goto label_33a1c4;
        case 0x33a1ccu: goto label_33a1cc;
        default: break;
    }

    ctx->pc = 0x33a190u;

    // 0x33a190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33a194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33a198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a19c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33a1a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33a1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a1a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33a1a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33a1ac: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33A1ACu;
    SET_GPR_U32(ctx, 31, 0x33A1B4u);
    ctx->pc = 0x33A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A1ACu;
    // 0x33a1b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33A1ACu, 0x33A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A1B4u;
label_33a1b4:
    // 0x33a1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a1b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a1bc: 0xc0ce87a  jal         func_33A1E8
    ctx->pc = 0x33A1BCu;
    SET_GPR_U32(ctx, 31, 0x33A1C4u);
    ctx->pc = 0x33A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A1BCu;
    // 0x33a1c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A1E8u, 0x33A1BCu, 0x33A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A1C4u;
label_33a1c4:
    // 0x33a1c4: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x33A1C4u;
    SET_GPR_U32(ctx, 31, 0x33A1CCu);
    ctx->pc = 0x33A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A1C4u;
    // 0x33a1c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33A1C4u, 0x33A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A1CCu;
label_33a1cc:
    // 0x33a1cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33a1ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a1d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33a1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a1d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33a1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a1d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a1dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33a1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33a1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x33A1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1E0u;
        // 0x33a1e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A1E8u;
}
