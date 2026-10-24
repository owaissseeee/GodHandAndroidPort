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

// Function: cEmWrap_SetKeepPos
// Address: 0x296070 - 0x2960d0
void cEmWrap_SetKeepPos_0x296070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_SetKeepPos_0x296070");
#endif

    switch (ctx->pc) {
        case 0x29608cu: goto label_29608c;
        case 0x2960a4u: goto label_2960a4;
        case 0x2960b8u: goto label_2960b8;
        default: break;
    }

    ctx->pc = 0x296070u;

    // 0x296070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296074: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x296074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x296078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29607c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29607cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296084: 0xc0a565e  jal         func_295978
    ctx->pc = 0x296084u;
    SET_GPR_U32(ctx, 31, 0x29608Cu);
    ctx->pc = 0x296088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296084u;
    // 0x296088: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x296084u, 0x29608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29608Cu;
label_29608c:
    // 0x29608c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29608Cu;
    {
        const bool branch_taken_0x29608c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29608Cu;
        // 0x296090: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29608c) {
            ctx->pc = 0x2960B8u;
            goto label_2960b8;
        }
    }
    ctx->pc = 0x296094u;
    // 0x296094: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x296094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296098: 0x2484a870  addiu       $a0, $a0, -0x5790
    ctx->pc = 0x296098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944880));
    // 0x29609c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x29609Cu;
    SET_GPR_U32(ctx, 31, 0x2960A4u);
    ctx->pc = 0x2960A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29609Cu;
    // 0x2960a0: 0x8c4504ac  lw          $a1, 0x4AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x29609Cu, 0x2960A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960A4u;
label_2960a4:
    // 0x2960a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2960A4u;
    {
        const bool branch_taken_0x2960a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2960a4) {
            ctx->pc = 0x2960A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2960A4u;
            // 0x2960a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2960BCu;
            goto label_2960bc;
        }
    }
    ctx->pc = 0x2960ACu;
    // 0x2960ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2960acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2960b0: 0xc09b9ea  jal         func_26E7A8
    ctx->pc = 0x2960B0u;
    SET_GPR_U32(ctx, 31, 0x2960B8u);
    ctx->pc = 0x2960B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2960B0u;
    // 0x2960b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E7A8u, 0x2960B0u, 0x2960B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960B8u;
label_2960b8:
    // 0x2960b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2960b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2960bc:
    // 0x2960bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2960bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2960c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2960c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2960c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2960C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2960C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960C4u;
        // 0x2960c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2960C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2960CCu;
    // 0x2960cc: 0x0  nop
    ctx->pc = 0x2960ccu;
    // NOP
    ctx->pc = 0x2960d0u;
}
