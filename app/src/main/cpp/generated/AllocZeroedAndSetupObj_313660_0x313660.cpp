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

// Function: AllocZeroedAndSetupObj_313660
// Address: 0x313660 - 0x3136d0
void AllocZeroedAndSetupObj_313660_0x313660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndSetupObj_313660_0x313660");
#endif

    switch (ctx->pc) {
        case 0x313694u: goto label_313694;
        case 0x3136acu: goto label_3136ac;
        case 0x3136b4u: goto label_3136b4;
        default: break;
    }

    ctx->pc = 0x313660u;

    // 0x313660: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313664: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313668: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313668u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31366c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31366cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313674: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313678: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313678u;
    {
        const bool branch_taken_0x313678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313678u;
        // 0x31367c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313678) {
            ctx->pc = 0x3136BCu;
            goto label_3136bc;
        }
    }
    ctx->pc = 0x313680u;
    // 0x313680: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313684: 0x240431b0  addiu       $a0, $zero, 0x31B0
    ctx->pc = 0x313684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12720));
    // 0x313688: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x313688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x31368c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31368Cu;
    SET_GPR_U32(ctx, 31, 0x313694u);
    ctx->pc = 0x313690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31368Cu;
    // 0x313690: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31368Cu, 0x313694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313694u;
label_313694:
    // 0x313694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313698: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313698u;
    {
        const bool branch_taken_0x313698 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313698u;
        // 0x31369c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313698) {
            ctx->pc = 0x3136BCu;
            goto label_3136bc;
        }
    }
    ctx->pc = 0x3136A0u;
    // 0x3136a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3136a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136a4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3136A4u;
    SET_GPR_U32(ctx, 31, 0x3136ACu);
    ctx->pc = 0x3136A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136A4u;
    // 0x3136a8: 0x240631b0  addiu       $a2, $zero, 0x31B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3136A4u, 0x3136ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136ACu;
label_3136ac:
    // 0x3136ac: 0xc09f762  jal         func_27DD88
    ctx->pc = 0x3136ACu;
    SET_GPR_U32(ctx, 31, 0x3136B4u);
    ctx->pc = 0x3136B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136ACu;
    // 0x3136b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD88u, 0x3136ACu, 0x3136B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136B4u;
label_3136b4:
    // 0x3136b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3136B4u;
    {
        const bool branch_taken_0x3136b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136B4u;
        // 0x3136b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136b4) {
            ctx->pc = 0x3136C4u;
            goto label_3136c4;
        }
    }
    ctx->pc = 0x3136BCu;
label_3136bc:
    // 0x3136bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3136bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3136c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3136c4:
    // 0x3136c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3136c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3136c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3136C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3136CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136C8u;
        // 0x3136cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3136C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3136D0u;
}
