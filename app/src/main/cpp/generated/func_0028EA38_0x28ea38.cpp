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

// Function: func_0028EA38
// Address: 0x28ea38 - 0x28eab0
void func_0028EA38_0x28ea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028EA38_0x28ea38");
#endif

    switch (ctx->pc) {
        case 0x28ea60u: goto label_28ea60;
        case 0x28ea78u: goto label_28ea78;
        case 0x28ea9cu: goto label_28ea9c;
        default: break;
    }

    ctx->pc = 0x28ea38u;

    // 0x28ea38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ea38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ea3c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28ea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28ea40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28ea40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28ea44: 0x24a5a518  addiu       $a1, $a1, -0x5AE8
    ctx->pc = 0x28ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944024));
    // 0x28ea48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ea48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28ea4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ea4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ea50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ea54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ea54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea58: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x28EA58u;
    SET_GPR_U32(ctx, 31, 0x28EA60u);
    ctx->pc = 0x28EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA58u;
    // 0x28ea5c: 0x8e040304  lw          $a0, 0x304($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x28EA58u, 0x28EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA60u;
label_28ea60:
    // 0x28ea60: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28ea64: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x28ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28ea68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28ea68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea6c: 0x24a5a520  addiu       $a1, $a1, -0x5AE0
    ctx->pc = 0x28ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944032));
    // 0x28ea70: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x28EA70u;
    SET_GPR_U32(ctx, 31, 0x28EA78u);
    ctx->pc = 0x28EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA70u;
    // 0x28ea74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x28EA70u, 0x28EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA78u;
label_28ea78:
    // 0x28ea78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EA78u;
    {
        const bool branch_taken_0x28ea78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA78u;
        // 0x28ea7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea78) {
            ctx->pc = 0x28EA88u;
            goto label_28ea88;
        }
    }
    ctx->pc = 0x28EA80u;
    // 0x28ea80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28EA80u;
    {
        const bool branch_taken_0x28ea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA80u;
        // 0x28ea84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea80) {
            ctx->pc = 0x28EA9Cu;
            goto label_28ea9c;
        }
    }
    ctx->pc = 0x28EA88u;
label_28ea88:
    // 0x28ea88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28ea88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ea8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ea90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea94: 0xc0525ce  jal         func_149738
    ctx->pc = 0x28EA94u;
    SET_GPR_U32(ctx, 31, 0x28EA9Cu);
    ctx->pc = 0x28EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA94u;
    // 0x28ea98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x28EA94u, 0x28EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA9Cu;
label_28ea9c:
    // 0x28ea9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28ea9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28eaa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28eaa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eaa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x28EAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAA8u;
        // 0x28eaac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EAB0u;
}
