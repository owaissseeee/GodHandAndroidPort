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

// Function: func_00281D10
// Address: 0x281d10 - 0x281d98
void func_00281D10_0x281d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281D10_0x281d10");
#endif

    switch (ctx->pc) {
        case 0x281d74u: goto label_281d74;
        case 0x281d88u: goto label_281d88;
        default: break;
    }

    ctx->pc = 0x281d10u;

    // 0x281d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281d14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x281d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281d18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x281d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x281d1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d28: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x281d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x281d2c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x281d2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x281d30: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x281D30u;
    {
        const bool branch_taken_0x281d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D30u;
        // 0x281d34: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d30) {
            ctx->pc = 0x281D4Cu;
            goto label_281d4c;
        }
    }
    ctx->pc = 0x281D38u;
    // 0x281d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281d3c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x281D3Cu;
    {
        const bool branch_taken_0x281d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x281d3c) {
            ctx->pc = 0x281D80u;
            goto label_281d80;
        }
    }
    ctx->pc = 0x281D44u;
    // 0x281d44: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x281D44u;
    {
        const bool branch_taken_0x281d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D44u;
        // 0x281d48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d44) {
            ctx->pc = 0x281D8Cu;
            goto label_281d8c;
        }
    }
    ctx->pc = 0x281D4Cu;
label_281d4c:
    // 0x281d4c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x281d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x281d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281d58: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x281d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x281d5c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x281d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x281d60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281d60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d64: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x281d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x281d68: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x281d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281d6c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x281D6Cu;
    SET_GPR_U32(ctx, 31, 0x281D74u);
    ctx->pc = 0x281D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281D6Cu;
    // 0x281d70: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x281D6Cu, 0x281D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D74u;
label_281d74:
    // 0x281d74: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x281d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x281d78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x281d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281d7c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x281d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_281d80:
    // 0x281d80: 0xc055f06  jal         func_157C18
    ctx->pc = 0x281D80u;
    SET_GPR_U32(ctx, 31, 0x281D88u);
    ctx->pc = 0x281D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281D80u;
    // 0x281d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x281D80u, 0x281D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D88u;
label_281d88:
    // 0x281d88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x281d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281d8c:
    // 0x281d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281d90: 0x3e00008  jr          $ra
    ctx->pc = 0x281D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D90u;
        // 0x281d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281D98u;
}
