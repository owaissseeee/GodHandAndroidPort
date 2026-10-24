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

// Function: sceCdGetError
// Address: 0x3999d0 - 0x399a68
void sceCdGetError_0x3999d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdGetError_0x3999d0");
#endif

    switch (ctx->pc) {
        case 0x3999e4u: goto label_3999e4;
        case 0x399a24u: goto label_399a24;
        case 0x399a38u: goto label_399a38;
        case 0x399a54u: goto label_399a54;
        default: break;
    }

    ctx->pc = 0x3999d0u;

    // 0x3999d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3999d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3999d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3999d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3999d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3999d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3999dc: 0xc0e63ac  jal         func_398EB0
    ctx->pc = 0x3999DCu;
    SET_GPR_U32(ctx, 31, 0x3999E4u);
    ctx->pc = 0x3999E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3999DCu;
    // 0x3999e0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398EB0u, 0x3999DCu, 0x3999E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3999E4u;
label_3999e4:
    // 0x3999e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3999E4u;
    {
        const bool branch_taken_0x3999e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3999E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999E4u;
        // 0x3999e8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3999e4) {
            ctx->pc = 0x3999F4u;
            goto label_3999f4;
        }
    }
    ctx->pc = 0x3999ECu;
    // 0x3999ec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3999ECu;
    {
        const bool branch_taken_0x3999ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3999F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999ECu;
        // 0x3999f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3999ec) {
            ctx->pc = 0x399A58u;
            goto label_399a58;
        }
    }
    ctx->pc = 0x3999F4u;
label_3999f4:
    // 0x3999f4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3999f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3999f8: 0x24509840  addiu       $s0, $v0, -0x67C0
    ctx->pc = 0x3999f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940736));
    // 0x3999fc: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    ctx->pc = 0x3999fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    // 0x399a00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x399a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x399a04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x399a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399a08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x399a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399a10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x399a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399a14: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x399a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399a18: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x399a18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399a1c: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x399A1Cu;
    SET_GPR_U32(ctx, 31, 0x399A24u);
    ctx->pc = 0x399A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A1Cu;
    // 0x399a20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x399A1Cu, 0x399A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A24u;
label_399a24:
    // 0x399a24: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x399A24u;
    {
        const bool branch_taken_0x399a24 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x399A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A24u;
        // 0x399a28: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a24) {
            ctx->pc = 0x399A40u;
            goto label_399a40;
        }
    }
    ctx->pc = 0x399A2Cu;
    // 0x399a2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x399a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x399a30: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399A30u;
    SET_GPR_U32(ctx, 31, 0x399A38u);
    ctx->pc = 0x399A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A30u;
    // 0x399a34: 0x8c44866c  lw          $a0, -0x7994($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x399A30u, 0x399A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A38u;
label_399a38:
    // 0x399a38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x399A38u;
    {
        const bool branch_taken_0x399a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A38u;
        // 0x399a3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a38) {
            ctx->pc = 0x399A58u;
            goto label_399a58;
        }
    }
    ctx->pc = 0x399A40u;
label_399a40:
    // 0x399a40: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x399a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x399a44: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x399a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399a48: 0x8c64866c  lw          $a0, -0x7994($v1)
    ctx->pc = 0x399a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936172)));
    // 0x399a4c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399A4Cu;
    SET_GPR_U32(ctx, 31, 0x399A54u);
    ctx->pc = 0x399A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A4Cu;
    // 0x399a50: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x399A4Cu, 0x399A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A54u;
label_399a54:
    // 0x399a54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399a58:
    // 0x399a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399a5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x399a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399a60: 0x3e00008  jr          $ra
    ctx->pc = 0x399A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A60u;
        // 0x399a64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399A68u;
}
