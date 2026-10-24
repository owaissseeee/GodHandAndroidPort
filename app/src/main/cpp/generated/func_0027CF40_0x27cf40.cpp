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

// Function: func_0027CF40
// Address: 0x27cf40 - 0x27cff8
void func_0027CF40_0x27cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027CF40_0x27cf40");
#endif

    switch (ctx->pc) {
        case 0x27cfa0u: goto label_27cfa0;
        case 0x27cfd0u: goto label_27cfd0;
        case 0x27cfe4u: goto label_27cfe4;
        default: break;
    }

    ctx->pc = 0x27cf40u;

    // 0x27cf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27cf44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27cf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27cf48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27cf4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27cf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf50: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27cf50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27cf54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CF54u;
    {
        const bool branch_taken_0x27cf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF54u;
        // 0x27cf58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf54) {
            ctx->pc = 0x27CF6Cu;
            goto label_27cf6c;
        }
    }
    ctx->pc = 0x27CF5Cu;
    // 0x27cf5c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27CF5Cu;
    {
        const bool branch_taken_0x27cf5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27cf5c) {
            ctx->pc = 0x27CFDCu;
            goto label_27cfdc;
        }
    }
    ctx->pc = 0x27CF64u;
    // 0x27cf64: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27CF64u;
    {
        const bool branch_taken_0x27cf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF64u;
        // 0x27cf68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf64) {
            ctx->pc = 0x27CFE8u;
            goto label_27cfe8;
        }
    }
    ctx->pc = 0x27CF6Cu;
label_27cf6c:
    // 0x27cf6c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x27cf6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27cf70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27CF70u;
    {
        const bool branch_taken_0x27cf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF70u;
        // 0x27cf74: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf70) {
            ctx->pc = 0x27CFA8u;
            goto label_27cfa8;
        }
    }
    ctx->pc = 0x27CF78u;
    // 0x27cf78: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27cf7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27cf80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27cf84: 0x8c4500b0  lw          $a1, 0xB0($v0)
    ctx->pc = 0x27cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x27cf88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27cf88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf8c: 0x8c4600b4  lw          $a2, 0xB4($v0)
    ctx->pc = 0x27cf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x27cf90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27cf90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf94: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27cf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27cf98: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27CF98u;
    SET_GPR_U32(ctx, 31, 0x27CFA0u);
    ctx->pc = 0x27CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF98u;
    // 0x27cf9c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CF98u, 0x27CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFA0u;
label_27cfa0:
    // 0x27cfa0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27CFA0u;
    {
        const bool branch_taken_0x27cfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFA0u;
        // 0x27cfa4: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfa0) {
            ctx->pc = 0x27CFD4u;
            goto label_27cfd4;
        }
    }
    ctx->pc = 0x27CFA8u;
label_27cfa8:
    // 0x27cfa8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27cfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cfb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27cfb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27cfb4: 0x8c4500b8  lw          $a1, 0xB8($v0)
    ctx->pc = 0x27cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x27cfb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27cfb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cfbc: 0x8c4600bc  lw          $a2, 0xBC($v0)
    ctx->pc = 0x27cfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x27cfc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27cfc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cfc4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27cfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27cfc8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27CFC8u;
    SET_GPR_U32(ctx, 31, 0x27CFD0u);
    ctx->pc = 0x27CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFC8u;
    // 0x27cfcc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CFC8u, 0x27CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFD0u;
label_27cfd0:
    // 0x27cfd0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27cfd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27cfd4:
    // 0x27cfd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cfd8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27cfd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27cfdc:
    // 0x27cfdc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27CFDCu;
    SET_GPR_U32(ctx, 31, 0x27CFE4u);
    ctx->pc = 0x27CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFDCu;
    // 0x27cfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27CFDCu, 0x27CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFE4u;
label_27cfe4:
    // 0x27cfe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27cfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27cfe8:
    // 0x27cfe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27cfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cfec: 0x3e00008  jr          $ra
    ctx->pc = 0x27CFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFECu;
        // 0x27cff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CFF4u;
    // 0x27cff4: 0x0  nop
    ctx->pc = 0x27cff4u;
    // NOP
    ctx->pc = 0x27cff8u;
}
