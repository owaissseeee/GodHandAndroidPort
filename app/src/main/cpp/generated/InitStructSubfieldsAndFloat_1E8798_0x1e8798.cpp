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

// Function: InitStructSubfieldsAndFloat_1E8798
// Address: 0x1e8798 - 0x1e87e0
void InitStructSubfieldsAndFloat_1E8798_0x1e8798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitStructSubfieldsAndFloat_1E8798_0x1e8798");
#endif

    switch (ctx->pc) {
        case 0x1e87acu: goto label_1e87ac;
        default: break;
    }

    ctx->pc = 0x1e8798u;

    // 0x1e8798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e879c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e87a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e87a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e87a4: 0xc07a36a  jal         func_1E8DA8
    ctx->pc = 0x1E87A4u;
    SET_GPR_U32(ctx, 31, 0x1E87ACu);
    ctx->pc = 0x1E87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E87A4u;
    // 0x1e87a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8DA8u, 0x1E87A4u, 0x1E87ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E87ACu;
label_1e87ac:
    // 0x1e87ac: 0x3c013e09  lui         $at, 0x3E09
    ctx->pc = 0x1e87acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15881 << 16));
    // 0x1e87b0: 0x34217a6e  ori         $at, $at, 0x7A6E
    ctx->pc = 0x1e87b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31342);
    // 0x1e87b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e87b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e87b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e87b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e87bc: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1e87bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1e87c0: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1e87c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1e87c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e87c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e87c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e87c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e87cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E87CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E87D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87CCu;
        // 0x1e87d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E87CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E87D4u;
    // 0x1e87d4: 0x0  nop
    ctx->pc = 0x1e87d4u;
    // NOP
    // 0x1e87d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e87d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e87dc: 0x0  nop
    ctx->pc = 0x1e87dcu;
    // NOP
    ctx->pc = 0x1e87e0u;
}
