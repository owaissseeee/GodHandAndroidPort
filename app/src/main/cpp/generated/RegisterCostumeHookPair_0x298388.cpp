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

// Function: RegisterCostumeHookPair
// Address: 0x298388 - 0x2983d0
void RegisterCostumeHookPair_0x298388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RegisterCostumeHookPair_0x298388");
#endif

    switch (ctx->pc) {
        case 0x2983acu: goto label_2983ac;
        case 0x2983bcu: goto label_2983bc;
        default: break;
    }

    ctx->pc = 0x298388u;

    // 0x298388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29838c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29838cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x298390: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x298390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x298394: 0x24a583d0  addiu       $a1, $a1, -0x7C30
    ctx->pc = 0x298394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935504));
    // 0x298398: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x298398u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x29839c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2983a0: 0x26106af0  addiu       $s0, $s0, 0x6AF0
    ctx->pc = 0x2983a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27376));
    // 0x2983a4: 0xc0a5ec8  jal         func_297B20
    ctx->pc = 0x2983A4u;
    SET_GPR_U32(ctx, 31, 0x2983ACu);
    ctx->pc = 0x2983A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983A4u;
    // 0x2983a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B20u, 0x2983A4u, 0x2983ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983ACu;
label_2983ac:
    // 0x2983ac: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2983acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2983b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2983b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983b4: 0xc0a5ed0  jal         func_297B40
    ctx->pc = 0x2983B4u;
    SET_GPR_U32(ctx, 31, 0x2983BCu);
    ctx->pc = 0x2983B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983B4u;
    // 0x2983b8: 0x24a58460  addiu       $a1, $a1, -0x7BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B40u, 0x2983B4u, 0x2983BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983BCu;
label_2983bc:
    // 0x2983bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2983bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2983c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2983c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2983c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2983C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2983C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983C4u;
        // 0x2983c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2983C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2983CCu;
    // 0x2983cc: 0x0  nop
    ctx->pc = 0x2983ccu;
    // NOP
    ctx->pc = 0x2983d0u;
}
