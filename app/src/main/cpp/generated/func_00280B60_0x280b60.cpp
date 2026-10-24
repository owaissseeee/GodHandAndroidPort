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

// Function: func_00280B60
// Address: 0x280b60 - 0x280be0
void func_00280B60_0x280b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00280B60_0x280b60");
#endif

    switch (ctx->pc) {
        case 0x280b7cu: goto label_280b7c;
        case 0x280b90u: goto label_280b90;
        case 0x280ba8u: goto label_280ba8;
        case 0x280bccu: goto label_280bcc;
        default: break;
    }

    ctx->pc = 0x280b60u;

    // 0x280b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x280b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x280b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x280b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280b70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280b74: 0xc05657a  jal         func_1595E8
    ctx->pc = 0x280B74u;
    SET_GPR_U32(ctx, 31, 0x280B7Cu);
    ctx->pc = 0x280B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280B74u;
    // 0x280b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595E8u, 0x280B74u, 0x280B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B7Cu;
label_280b7c:
    // 0x280b7c: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x280b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x280b80: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x280b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x280b84: 0x24a58588  addiu       $a1, $a1, -0x7A78
    ctx->pc = 0x280b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935944));
    // 0x280b88: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x280B88u;
    SET_GPR_U32(ctx, 31, 0x280B90u);
    ctx->pc = 0x280B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280B88u;
    // 0x280b8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x280B88u, 0x280B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B90u;
label_280b90:
    // 0x280b90: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x280b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x280b94: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x280b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x280b98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x280b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b9c: 0x24a58590  addiu       $a1, $a1, -0x7A70
    ctx->pc = 0x280b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935952));
    // 0x280ba0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x280BA0u;
    SET_GPR_U32(ctx, 31, 0x280BA8u);
    ctx->pc = 0x280BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BA0u;
    // 0x280ba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x280BA0u, 0x280BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BA8u;
label_280ba8:
    // 0x280ba8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280BA8u;
    {
        const bool branch_taken_0x280ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BA8u;
        // 0x280bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ba8) {
            ctx->pc = 0x280BB8u;
            goto label_280bb8;
        }
    }
    ctx->pc = 0x280BB0u;
    // 0x280bb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280BB0u;
    {
        const bool branch_taken_0x280bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BB0u;
        // 0x280bb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280bb0) {
            ctx->pc = 0x280BCCu;
            goto label_280bcc;
        }
    }
    ctx->pc = 0x280BB8u;
label_280bb8:
    // 0x280bb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x280bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bc4: 0xc0525ce  jal         func_149738
    ctx->pc = 0x280BC4u;
    SET_GPR_U32(ctx, 31, 0x280BCCu);
    ctx->pc = 0x280BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BC4u;
    // 0x280bc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x280BC4u, 0x280BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BCCu;
label_280bcc:
    // 0x280bcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x280bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x280BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BD8u;
        // 0x280bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280BE0u;
}
