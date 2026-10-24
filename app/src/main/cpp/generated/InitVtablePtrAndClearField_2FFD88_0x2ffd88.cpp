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

// Function: InitVtablePtrAndClearField_2FFD88
// Address: 0x2ffd88 - 0x2ffdc8
void InitVtablePtrAndClearField_2FFD88_0x2ffd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVtablePtrAndClearField_2FFD88_0x2ffd88");
#endif

    switch (ctx->pc) {
        case 0x2ffda4u: goto label_2ffda4;
        default: break;
    }

    ctx->pc = 0x2ffd88u;

    // 0x2ffd88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffd8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffd90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd94: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFD94u;
    {
        const bool branch_taken_0x2ffd94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD94u;
        // 0x2ffd98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd94) {
            ctx->pc = 0x2FFDB4u;
            goto label_2ffdb4;
        }
    }
    ctx->pc = 0x2FFD9Cu;
    // 0x2ffd9c: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFD9Cu;
    SET_GPR_U32(ctx, 31, 0x2FFDA4u);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFD9Cu, 0x2FFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFDA4u;
label_2ffda4:
    // 0x2ffda4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffda8: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x2ffda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x2ffdac: 0x2463ee38  addiu       $v1, $v1, -0x11C8
    ctx->pc = 0x2ffdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962744));
    // 0x2ffdb0: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_2ffdb4:
    // 0x2ffdb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffdb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffdb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffdbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffdbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDC0u;
        // 0x2ffdc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFDC8u;
}
