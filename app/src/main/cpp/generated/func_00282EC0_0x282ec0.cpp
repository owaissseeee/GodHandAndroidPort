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

// Function: func_00282EC0
// Address: 0x282ec0 - 0x282f40
void func_00282EC0_0x282ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282EC0_0x282ec0");
#endif

    switch (ctx->pc) {
        case 0x282edcu: goto label_282edc;
        case 0x282ef0u: goto label_282ef0;
        case 0x282f08u: goto label_282f08;
        case 0x282f2cu: goto label_282f2c;
        default: break;
    }

    ctx->pc = 0x282ec0u;

    // 0x282ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ec8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x282ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x282ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282ed4: 0xc05657a  jal         func_1595E8
    ctx->pc = 0x282ED4u;
    SET_GPR_U32(ctx, 31, 0x282EDCu);
    ctx->pc = 0x282ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282ED4u;
    // 0x282ed8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595E8u, 0x282ED4u, 0x282EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282EDCu;
label_282edc:
    // 0x282edc: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x282edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282ee0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x282ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x282ee4: 0x24a58778  addiu       $a1, $a1, -0x7888
    ctx->pc = 0x282ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936440));
    // 0x282ee8: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x282EE8u;
    SET_GPR_U32(ctx, 31, 0x282EF0u);
    ctx->pc = 0x282EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282EE8u;
    // 0x282eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x282EE8u, 0x282EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282EF0u;
label_282ef0:
    // 0x282ef0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x282ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x282ef4: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x282ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282ef8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x282ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282efc: 0x24a58780  addiu       $a1, $a1, -0x7880
    ctx->pc = 0x282efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936448));
    // 0x282f00: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x282F00u;
    SET_GPR_U32(ctx, 31, 0x282F08u);
    ctx->pc = 0x282F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282F00u;
    // 0x282f04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x282F00u, 0x282F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F08u;
label_282f08:
    // 0x282f08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282F08u;
    {
        const bool branch_taken_0x282f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F08u;
        // 0x282f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f08) {
            ctx->pc = 0x282F18u;
            goto label_282f18;
        }
    }
    ctx->pc = 0x282F10u;
    // 0x282f10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x282F10u;
    {
        const bool branch_taken_0x282f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F10u;
        // 0x282f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f10) {
            ctx->pc = 0x282F2Cu;
            goto label_282f2c;
        }
    }
    ctx->pc = 0x282F18u;
label_282f18:
    // 0x282f18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x282f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x282f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f24: 0xc0525ce  jal         func_149738
    ctx->pc = 0x282F24u;
    SET_GPR_U32(ctx, 31, 0x282F2Cu);
    ctx->pc = 0x282F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282F24u;
    // 0x282f28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x282F24u, 0x282F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F2Cu;
label_282f2c:
    // 0x282f2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x282f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282f38: 0x3e00008  jr          $ra
    ctx->pc = 0x282F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F38u;
        // 0x282f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282F40u;
}
