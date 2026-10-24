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

// Function: func_001ADB30
// Address: 0x1adb30 - 0x1adb88
void func_001ADB30_0x1adb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ADB30_0x1adb30");
#endif

    switch (ctx->pc) {
        case 0x1adb54u: goto label_1adb54;
        case 0x1adb6cu: goto label_1adb6c;
        default: break;
    }

    ctx->pc = 0x1adb30u;

    // 0x1adb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1adb34: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1adb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1adb38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1adb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1adb3c: 0x8c626018  lw          $v0, 0x6018($v1)
    ctx->pc = 0x1adb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786018u));
    // 0x1adb40: 0x24706018  addiu       $s0, $v1, 0x6018
    ctx->pc = 0x1adb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24600));
    // 0x1adb44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADB44u;
    {
        const bool branch_taken_0x1adb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB44u;
        // 0x1adb48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb44) {
            ctx->pc = 0x1ADB6Cu;
            goto label_1adb6c;
        }
    }
    ctx->pc = 0x1ADB4Cu;
    // 0x1adb4c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1ADB4Cu;
    SET_GPR_U32(ctx, 31, 0x1ADB54u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1ADB4Cu, 0x1ADB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB54u;
label_1adb54:
    // 0x1adb54: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1adb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1adb58: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1adb58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1adb5c: 0x24a57f10  addiu       $a1, $a1, 0x7F10
    ctx->pc = 0x1adb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32528));
    // 0x1adb60: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1adb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1adb64: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1ADB64u;
    SET_GPR_U32(ctx, 31, 0x1ADB6Cu);
    ctx->pc = 0x1ADB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB64u;
    // 0x1adb68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1ADB64u, 0x1ADB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB6Cu;
label_1adb6c:
    // 0x1adb6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1adb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adb74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1adb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb78: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB78u;
        // 0x1adb7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADB80u;
    // 0x1adb80: 0xe4800614  swc1        $f0, 0x614($a0)
    ctx->pc = 0x1adb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1556), bits); }
    // 0x1adb84: 0x0  nop
    ctx->pc = 0x1adb84u;
    // NOP
    ctx->pc = 0x1adb88u;
}
