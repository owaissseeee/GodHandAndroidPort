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

// Function: func_0014FD20
// Address: 0x14fd20 - 0x14fd98
void func_0014FD20_0x14fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014FD20_0x14fd20");
#endif

    switch (ctx->pc) {
        case 0x14fd44u: goto label_14fd44;
        case 0x14fd5cu: goto label_14fd5c;
        default: break;
    }

    ctx->pc = 0x14fd20u;

    // 0x14fd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14fd24: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x14fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x14fd28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14fd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14fd2c: 0x8c6254f8  lw          $v0, 0x54F8($v1)
    ctx->pc = 0x14fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7854F8u));
    // 0x14fd30: 0x247054f8  addiu       $s0, $v1, 0x54F8
    ctx->pc = 0x14fd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21752));
    // 0x14fd34: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FD34u;
    {
        const bool branch_taken_0x14fd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD34u;
        // 0x14fd38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd34) {
            ctx->pc = 0x14FD5Cu;
            goto label_14fd5c;
        }
    }
    ctx->pc = 0x14FD3Cu;
    // 0x14fd3c: 0xc053a36  jal         func_14E8D8
    ctx->pc = 0x14FD3Cu;
    SET_GPR_U32(ctx, 31, 0x14FD44u);
    ctx->pc = 0x14E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8D8u, 0x14FD3Cu, 0x14FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD44u;
label_14fd44:
    // 0x14fd44: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x14fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x14fd48: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x14fd48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x14fd4c: 0x24a5ec58  addiu       $a1, $a1, -0x13A8
    ctx->pc = 0x14fd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962264));
    // 0x14fd50: 0x24c656e8  addiu       $a2, $a2, 0x56E8
    ctx->pc = 0x14fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22248));
    // 0x14fd54: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x14FD54u;
    SET_GPR_U32(ctx, 31, 0x14FD5Cu);
    ctx->pc = 0x14FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD54u;
    // 0x14fd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x14FD54u, 0x14FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD5Cu;
label_14fd5c:
    // 0x14fd5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14fd5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14fd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fd64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14fd64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fd68: 0x3e00008  jr          $ra
    ctx->pc = 0x14FD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD68u;
        // 0x14fd6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FD70u;
    // 0x14fd70: 0x0  nop
    ctx->pc = 0x14fd70u;
    // NOP
    // 0x14fd74: 0x0  nop
    ctx->pc = 0x14fd74u;
    // NOP
    // 0x14fd78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14fd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14fd7c: 0x0  nop
    ctx->pc = 0x14fd7cu;
    // NOP
    // 0x14fd80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd84: 0x0  nop
    ctx->pc = 0x14fd84u;
    // NOP
    // 0x14fd88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fd88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd8c: 0x0  nop
    ctx->pc = 0x14fd8cu;
    // NOP
    // 0x14fd90: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x14fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x14fd94: 0x0  nop
    ctx->pc = 0x14fd94u;
    // NOP
    ctx->pc = 0x14fd98u;
}
