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

// Function: func_00381CE0
// Address: 0x381ce0 - 0x381d38
void func_00381CE0_0x381ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381CE0_0x381ce0");
#endif

    switch (ctx->pc) {
        case 0x381d04u: goto label_381d04;
        case 0x381d18u: goto label_381d18;
        case 0x381d24u: goto label_381d24;
        default: break;
    }

    ctx->pc = 0x381ce0u;

    // 0x381ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x381ce4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x381ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x381ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381cec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x381cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381cf0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x381cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x381cf4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x381CF4u;
    {
        const bool branch_taken_0x381cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x381cf4) {
            ctx->pc = 0x381CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381CF4u;
            // 0x381cf8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381D28u;
            goto label_381d28;
        }
    }
    ctx->pc = 0x381CFCu;
    // 0x381cfc: 0xc0cb716  jal         func_32DC58
    ctx->pc = 0x381CFCu;
    SET_GPR_U32(ctx, 31, 0x381D04u);
    ctx->pc = 0x32DC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC58u, 0x381CFCu, 0x381D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381D04u;
label_381d04:
    // 0x381d04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x381d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x381d08: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x381D08u;
    {
        const bool branch_taken_0x381d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x381d08) {
            ctx->pc = 0x381D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381D08u;
            // 0x381d0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381D28u;
            goto label_381d28;
        }
    }
    ctx->pc = 0x381D10u;
    // 0x381d10: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x381D10u;
    SET_GPR_U32(ctx, 31, 0x381D18u);
    ctx->pc = 0x381D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381D10u;
    // 0x381d14: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x381D10u, 0x381D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381D18u;
label_381d18:
    // 0x381d18: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x381d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381d1c: 0xc0c7240  jal         func_31C900
    ctx->pc = 0x381D1Cu;
    SET_GPR_U32(ctx, 31, 0x381D24u);
    ctx->pc = 0x381D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381D1Cu;
    // 0x381d20: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C900u, 0x381D1Cu, 0x381D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381D24u;
label_381d24:
    // 0x381d24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x381d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_381d28:
    // 0x381d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x381D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D2Cu;
        // 0x381d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381D34u;
    // 0x381d34: 0x0  nop
    ctx->pc = 0x381d34u;
    // NOP
    ctx->pc = 0x381d38u;
}
