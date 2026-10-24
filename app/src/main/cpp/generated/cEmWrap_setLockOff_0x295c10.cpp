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

// Function: cEmWrap_setLockOff
// Address: 0x295c10 - 0x295c70
void cEmWrap_setLockOff_0x295c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_setLockOff_0x295c10");
#endif

    switch (ctx->pc) {
        case 0x295c2cu: goto label_295c2c;
        case 0x295c44u: goto label_295c44;
        case 0x295c58u: goto label_295c58;
        default: break;
    }

    ctx->pc = 0x295c10u;

    // 0x295c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295c14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x295c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x295c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295c24: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295C24u;
    SET_GPR_U32(ctx, 31, 0x295C2Cu);
    ctx->pc = 0x295C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C24u;
    // 0x295c28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295C24u, 0x295C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C2Cu;
label_295c2c:
    // 0x295c2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x295C2Cu;
    {
        const bool branch_taken_0x295c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C2Cu;
        // 0x295c30: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c2c) {
            ctx->pc = 0x295C58u;
            goto label_295c58;
        }
    }
    ctx->pc = 0x295C34u;
    // 0x295c34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x295c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295c38: 0x2484a870  addiu       $a0, $a0, -0x5790
    ctx->pc = 0x295c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944880));
    // 0x295c3c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x295C3Cu;
    SET_GPR_U32(ctx, 31, 0x295C44u);
    ctx->pc = 0x295C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C3Cu;
    // 0x295c40: 0x8c4504ac  lw          $a1, 0x4AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x295C3Cu, 0x295C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C44u;
label_295c44:
    // 0x295c44: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x295C44u;
    {
        const bool branch_taken_0x295c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295c44) {
            ctx->pc = 0x295C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295C44u;
            // 0x295c48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295C5Cu;
            goto label_295c5c;
        }
    }
    ctx->pc = 0x295C4Cu;
    // 0x295c4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x295c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295c50: 0xc09d824  jal         func_276090
    ctx->pc = 0x295C50u;
    SET_GPR_U32(ctx, 31, 0x295C58u);
    ctx->pc = 0x295C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C50u;
    // 0x295c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276090u, 0x295C50u, 0x295C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C58u;
label_295c58:
    // 0x295c58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x295c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295c5c:
    // 0x295c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295c64: 0x3e00008  jr          $ra
    ctx->pc = 0x295C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C64u;
        // 0x295c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295C6Cu;
    // 0x295c6c: 0x0  nop
    ctx->pc = 0x295c6cu;
    // NOP
    ctx->pc = 0x295c70u;
}
