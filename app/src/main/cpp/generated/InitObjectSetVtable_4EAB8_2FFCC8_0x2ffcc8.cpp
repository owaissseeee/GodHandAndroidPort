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

// Function: InitObjectSetVtable_4EAB8_2FFCC8
// Address: 0x2ffcc8 - 0x2ffd08
void InitObjectSetVtable_4EAB8_2FFCC8_0x2ffcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4EAB8_2FFCC8_0x2ffcc8");
#endif

    switch (ctx->pc) {
        case 0x2ffce4u: goto label_2ffce4;
        default: break;
    }

    ctx->pc = 0x2ffcc8u;

    // 0x2ffcc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffccc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffcd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcd4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFCD4u;
    {
        const bool branch_taken_0x2ffcd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCD4u;
        // 0x2ffcd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcd4) {
            ctx->pc = 0x2FFCF0u;
            goto label_2ffcf0;
        }
    }
    ctx->pc = 0x2FFCDCu;
    // 0x2ffcdc: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFCDCu;
    SET_GPR_U32(ctx, 31, 0x2FFCE4u);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFCDCu, 0x2FFCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCE4u;
label_2ffce4:
    // 0x2ffce4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffce8: 0x2463eab8  addiu       $v1, $v1, -0x1548
    ctx->pc = 0x2ffce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961848));
    // 0x2ffcec: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_2ffcf0:
    // 0x2ffcf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffcf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffcf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCFCu;
        // 0x2ffd00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFD04u;
    // 0x2ffd04: 0x0  nop
    ctx->pc = 0x2ffd04u;
    // NOP
    ctx->pc = 0x2ffd08u;
}
