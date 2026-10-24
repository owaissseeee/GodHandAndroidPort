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

// Function: func_00138FC8
// Address: 0x138fc8 - 0x139010
void func_00138FC8_0x138fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00138FC8_0x138fc8");
#endif

    switch (ctx->pc) {
        case 0x138fe4u: goto label_138fe4;
        case 0x139000u: goto label_139000;
        default: break;
    }

    ctx->pc = 0x138fc8u;

    // 0x138fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138fcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138fd8: 0x26040ff4  addiu       $a0, $s0, 0xFF4
    ctx->pc = 0x138fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4084));
    // 0x138fdc: 0xc04dfce  jal         func_137F38
    ctx->pc = 0x138FDCu;
    SET_GPR_U32(ctx, 31, 0x138FE4u);
    ctx->pc = 0x138FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138FDCu;
    // 0x138fe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F38u, 0x138FDCu, 0x138FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138FE4u;
label_138fe4:
    // 0x138fe4: 0x8e021028  lw          $v0, 0x1028($s0)
    ctx->pc = 0x138fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4136)));
    // 0x138fe8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x138fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x138fec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138FECu;
    {
        const bool branch_taken_0x138fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FECu;
        // 0x138ff0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fec) {
            ctx->pc = 0x139004u;
            goto label_139004;
        }
    }
    ctx->pc = 0x138FF4u;
    // 0x138ff4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x138ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x138ff8: 0xc04e180  jal         func_138600
    ctx->pc = 0x138FF8u;
    SET_GPR_U32(ctx, 31, 0x139000u);
    ctx->pc = 0x138FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138FF8u;
    // 0x138ffc: 0x8c44aff0  lw          $a0, -0x5010($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138600u, 0x138FF8u, 0x139000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139000u;
label_139000:
    // 0x139000: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_139004:
    // 0x139004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139008: 0x3e00008  jr          $ra
    ctx->pc = 0x139008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139008u;
        // 0x13900c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139010u;
}
