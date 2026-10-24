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

// Function: func_002FA018
// Address: 0x2fa018 - 0x2fa070
void func_002FA018_0x2fa018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FA018_0x2fa018");
#endif

    switch (ctx->pc) {
        case 0x2fa03cu: goto label_2fa03c;
        case 0x2fa054u: goto label_2fa054;
        default: break;
    }

    ctx->pc = 0x2fa018u;

    // 0x2fa018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa01c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2fa01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2fa020: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fa020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fa024: 0x8c626588  lw          $v0, 0x6588($v1)
    ctx->pc = 0x2fa024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786588u));
    // 0x2fa028: 0x24706588  addiu       $s0, $v1, 0x6588
    ctx->pc = 0x2fa028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25992));
    // 0x2fa02c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA02Cu;
    {
        const bool branch_taken_0x2fa02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA02Cu;
        // 0x2fa030: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa02c) {
            ctx->pc = 0x2FA054u;
            goto label_2fa054;
        }
    }
    ctx->pc = 0x2FA034u;
    // 0x2fa034: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2FA034u;
    SET_GPR_U32(ctx, 31, 0x2FA03Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2FA034u, 0x2FA03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA03Cu;
label_2fa03c:
    // 0x2fa03c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2fa03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2fa040: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2fa040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2fa044: 0x24a5f910  addiu       $a1, $a1, -0x6F0
    ctx->pc = 0x2fa044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    // 0x2fa048: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2fa048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2fa04c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2FA04Cu;
    SET_GPR_U32(ctx, 31, 0x2FA054u);
    ctx->pc = 0x2FA050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA04Cu;
    // 0x2fa050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2FA04Cu, 0x2FA054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA054u;
label_2fa054:
    // 0x2fa054: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fa054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa05c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fa05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa060: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA060u;
        // 0x2fa064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA068u;
    // 0x2fa068: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fa068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fa06c: 0x0  nop
    ctx->pc = 0x2fa06cu;
    // NOP
    ctx->pc = 0x2fa070u;
}
