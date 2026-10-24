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

// Function: sceCdStatus
// Address: 0x399a68 - 0x399b20
void sceCdStatus_0x399a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdStatus_0x399a68");
#endif

    switch (ctx->pc) {
        case 0x399a7cu: goto label_399a7c;
        case 0x399abcu: goto label_399abc;
        case 0x399ad0u: goto label_399ad0;
        case 0x399aecu: goto label_399aec;
        case 0x399b0cu: goto label_399b0c;
        default: break;
    }

    ctx->pc = 0x399a68u;

    // 0x399a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x399a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x399a6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x399a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x399a70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x399a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x399a74: 0xc0e63ac  jal         func_398EB0
    ctx->pc = 0x399A74u;
    SET_GPR_U32(ctx, 31, 0x399A7Cu);
    ctx->pc = 0x399A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A74u;
    // 0x399a78: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398EB0u, 0x399A74u, 0x399A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A7Cu;
label_399a7c:
    // 0x399a7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x399A7Cu;
    {
        const bool branch_taken_0x399a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A7Cu;
        // 0x399a80: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a7c) {
            ctx->pc = 0x399A8Cu;
            goto label_399a8c;
        }
    }
    ctx->pc = 0x399A84u;
    // 0x399a84: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x399A84u;
    {
        const bool branch_taken_0x399a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A84u;
        // 0x399a88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a84) {
            ctx->pc = 0x399B10u;
            goto label_399b10;
        }
    }
    ctx->pc = 0x399A8Cu;
label_399a8c:
    // 0x399a8c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x399a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x399a90: 0x24509840  addiu       $s0, $v0, -0x67C0
    ctx->pc = 0x399a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940736));
    // 0x399a94: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    ctx->pc = 0x399a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    // 0x399a98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x399a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x399a9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x399a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x399aa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399aa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x399aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399aa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x399aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399aac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x399aacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399ab0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x399ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399ab4: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x399AB4u;
    SET_GPR_U32(ctx, 31, 0x399ABCu);
    ctx->pc = 0x399AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399AB4u;
    // 0x399ab8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x399AB4u, 0x399ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399ABCu;
label_399abc:
    // 0x399abc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x399ABCu;
    {
        const bool branch_taken_0x399abc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x399AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399ABCu;
        // 0x399ac0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399abc) {
            ctx->pc = 0x399AD8u;
            goto label_399ad8;
        }
    }
    ctx->pc = 0x399AC4u;
    // 0x399ac4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x399ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x399ac8: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399AC8u;
    SET_GPR_U32(ctx, 31, 0x399AD0u);
    ctx->pc = 0x399ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399AC8u;
    // 0x399acc: 0x8c44866c  lw          $a0, -0x7994($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x399AC8u, 0x399AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399AD0u;
label_399ad0:
    // 0x399ad0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x399AD0u;
    {
        const bool branch_taken_0x399ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AD0u;
        // 0x399ad4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399ad0) {
            ctx->pc = 0x399B10u;
            goto label_399b10;
        }
    }
    ctx->pc = 0x399AD8u;
label_399ad8:
    // 0x399ad8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x399ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x399adc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x399adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399ae0: 0x8c64866c  lw          $a0, -0x7994($v1)
    ctx->pc = 0x399ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936172)));
    // 0x399ae4: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399AE4u;
    SET_GPR_U32(ctx, 31, 0x399AECu);
    ctx->pc = 0x399AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399AE4u;
    // 0x399ae8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x399AE4u, 0x399AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399AECu;
label_399aec:
    // 0x399aec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x399aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x399af0: 0x8c628650  lw          $v0, -0x79B0($v1)
    ctx->pc = 0x399af0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8650u));
    // 0x399af4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x399af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x399af8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x399AF8u;
    {
        const bool branch_taken_0x399af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AF8u;
        // 0x399afc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399af8) {
            ctx->pc = 0x399B10u;
            goto label_399b10;
        }
    }
    ctx->pc = 0x399B00u;
    // 0x399b00: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x399b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x399b04: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x399B04u;
    SET_GPR_U32(ctx, 31, 0x399B0Cu);
    ctx->pc = 0x399B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B04u;
    // 0x399b08: 0x2484e3c0  addiu       $a0, $a0, -0x1C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x399B04u, 0x399B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B0Cu;
label_399b0c:
    // 0x399b0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399b10:
    // 0x399b10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399b14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x399b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399b18: 0x3e00008  jr          $ra
    ctx->pc = 0x399B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B18u;
        // 0x399b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399B20u;
}
