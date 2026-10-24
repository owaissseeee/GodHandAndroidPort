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

// Function: func_002F4B88
// Address: 0x2f4b88 - 0x2f4be0
void func_002F4B88_0x2f4b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F4B88_0x2f4b88");
#endif

    switch (ctx->pc) {
        case 0x2f4bacu: goto label_2f4bac;
        case 0x2f4bc4u: goto label_2f4bc4;
        default: break;
    }

    ctx->pc = 0x2f4b88u;

    // 0x2f4b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4b8c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f4b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f4b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f4b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f4b94: 0x8c6264e8  lw          $v0, 0x64E8($v1)
    ctx->pc = 0x2f4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7864E8u));
    // 0x2f4b98: 0x247064e8  addiu       $s0, $v1, 0x64E8
    ctx->pc = 0x2f4b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25832));
    // 0x2f4b9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4B9Cu;
    {
        const bool branch_taken_0x2f4b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B9Cu;
        // 0x2f4ba0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b9c) {
            ctx->pc = 0x2F4BC4u;
            goto label_2f4bc4;
        }
    }
    ctx->pc = 0x2F4BA4u;
    // 0x2f4ba4: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F4BA4u;
    SET_GPR_U32(ctx, 31, 0x2F4BACu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F4BA4u, 0x2F4BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BACu;
label_2f4bac:
    // 0x2f4bac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f4bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f4bb0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f4bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f4bb4: 0x24a5f258  addiu       $a1, $a1, -0xDA8
    ctx->pc = 0x2f4bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963800));
    // 0x2f4bb8: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f4bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f4bbc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F4BBCu;
    SET_GPR_U32(ctx, 31, 0x2F4BC4u);
    ctx->pc = 0x2F4BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BBCu;
    // 0x2f4bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F4BBCu, 0x2F4BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BC4u;
label_2f4bc4:
    // 0x2f4bc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f4bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4bcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f4bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BD0u;
        // 0x2f4bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4BD8u;
    // 0x2f4bd8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f4bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4bdc: 0x0  nop
    ctx->pc = 0x2f4bdcu;
    // NOP
    ctx->pc = 0x2f4be0u;
}
