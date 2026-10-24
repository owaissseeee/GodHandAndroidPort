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

// Function: func_00373A78
// Address: 0x373a78 - 0x373b20
void func_00373A78_0x373a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00373A78_0x373a78");
#endif

    switch (ctx->pc) {
        case 0x373a8cu: goto label_373a8c;
        case 0x373a9cu: goto label_373a9c;
        case 0x373ac0u: goto label_373ac0;
        default: break;
    }

    ctx->pc = 0x373a78u;

    // 0x373a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373a7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x373a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x373a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373a84: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x373A84u;
    SET_GPR_U32(ctx, 31, 0x373A8Cu);
    ctx->pc = 0x373A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A84u;
    // 0x373a88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x373A84u, 0x373A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A8Cu;
label_373a8c:
    // 0x373a8c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x373A8Cu;
    {
        const bool branch_taken_0x373a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A8Cu;
        // 0x373a90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373a8c) {
            ctx->pc = 0x373B0Cu;
            goto label_373b0c;
        }
    }
    ctx->pc = 0x373A94u;
    // 0x373a94: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x373A94u;
    SET_GPR_U32(ctx, 31, 0x373A9Cu);
    ctx->pc = 0x373A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A94u;
    // 0x373a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x373A94u, 0x373A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A9Cu;
label_373a9c:
    // 0x373a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373aa0: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x373AA0u;
    {
        const bool branch_taken_0x373aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x373aa0) {
            ctx->pc = 0x373AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373AA0u;
            // 0x373aa4: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x373AF0u;
            goto label_373af0;
        }
    }
    ctx->pc = 0x373AA8u;
    // 0x373aa8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x373aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x373aac: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x373AACu;
    {
        const bool branch_taken_0x373aac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x373AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373AACu;
        // 0x373ab0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373aac) {
            ctx->pc = 0x373B08u;
            goto label_373b08;
        }
    }
    ctx->pc = 0x373AB4u;
    // 0x373ab4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x373ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x373ab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373abc: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x373abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_373ac0:
    // 0x373ac0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x373ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373ac4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x373ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x373ac8: 0x0  nop
    ctx->pc = 0x373ac8u;
    // NOP
    // 0x373acc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x373ACCu;
    {
        const bool branch_taken_0x373acc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x373AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373ACCu;
        // 0x373ad0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373acc) {
            ctx->pc = 0x373AE8u;
            goto label_373ae8;
        }
    }
    ctx->pc = 0x373AD4u;
    // 0x373ad4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x373ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x373ad8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x373AD8u;
    {
        const bool branch_taken_0x373ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373AD8u;
        // 0x373adc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373ad8) {
            ctx->pc = 0x373AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373ac0;
        }
    }
    ctx->pc = 0x373AE0u;
    // 0x373ae0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x373AE0u;
    {
        const bool branch_taken_0x373ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373AE0u;
        // 0x373ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373ae0) {
            ctx->pc = 0x373B0Cu;
            goto label_373b0c;
        }
    }
    ctx->pc = 0x373AE8u;
label_373ae8:
    // 0x373ae8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x373AE8u;
    {
        const bool branch_taken_0x373ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373AE8u;
        // 0x373aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373ae8) {
            ctx->pc = 0x373B0Cu;
            goto label_373b0c;
        }
    }
    ctx->pc = 0x373AF0u;
label_373af0:
    // 0x373af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x373af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373af4: 0x0  nop
    ctx->pc = 0x373af4u;
    // NOP
    // 0x373af8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x373af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x373afc: 0x0  nop
    ctx->pc = 0x373afcu;
    // NOP
    // 0x373b00: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x373B00u;
    {
        const bool branch_taken_0x373b00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x373B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373B00u;
        // 0x373b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373b00) {
            ctx->pc = 0x373B0Cu;
            goto label_373b0c;
        }
    }
    ctx->pc = 0x373B08u;
label_373b08:
    // 0x373b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x373b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_373b0c:
    // 0x373b0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x373b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373b14: 0x3e00008  jr          $ra
    ctx->pc = 0x373B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373B14u;
        // 0x373b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373B1Cu;
    // 0x373b1c: 0x0  nop
    ctx->pc = 0x373b1cu;
    // NOP
    ctx->pc = 0x373b20u;
}
