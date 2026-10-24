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

// Function: EspAnim_step
// Address: 0x2fcac8 - 0x2fcb88
void EspAnim_step_0x2fcac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EspAnim_step_0x2fcac8");
#endif

    switch (ctx->pc) {
        case 0x2fcb24u: goto label_2fcb24;
        case 0x2fcb70u: goto label_2fcb70;
        default: break;
    }

    ctx->pc = 0x2fcac8u;

    // 0x2fcac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fcac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fcacc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fcaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fcad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fcad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fcad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fcad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcad8: 0x9202024c  lbu         $v0, 0x24C($s0)
    ctx->pc = 0x2fcad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x2fcadc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FCADCu;
    {
        const bool branch_taken_0x2fcadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCADCu;
        // 0x2fcae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcadc) {
            ctx->pc = 0x2FCB74u;
            goto label_2fcb74;
        }
    }
    ctx->pc = 0x2FCAE4u;
    // 0x2fcae4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fcae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2fcae8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fcae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fcaec: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fcaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fcaf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCAF0u;
    {
        const bool branch_taken_0x2fcaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCAF0u;
        // 0x2fcaf4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcaf0) {
            ctx->pc = 0x2FCB08u;
            goto label_2fcb08;
        }
    }
    ctx->pc = 0x2FCAF8u;
    // 0x2fcaf8: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x2fcaf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
    // 0x2fcafc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fcafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fcb00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCB00u;
    {
        const bool branch_taken_0x2fcb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB00u;
        // 0x2fcb04: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb00) {
            ctx->pc = 0x2FCB1Cu;
            goto label_2fcb1c;
        }
    }
    ctx->pc = 0x2FCB08u;
label_2fcb08:
    // 0x2fcb08: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fcb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2fcb0c: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fcb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2fcb10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fcb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fcb14: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCB14u;
    {
        const bool branch_taken_0x2fcb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcb14) {
            ctx->pc = 0x2FCB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCB14u;
            // 0x2fcb18: 0xc6000250  lwc1        $f0, 0x250($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCB2Cu;
            goto label_2fcb2c;
        }
    }
    ctx->pc = 0x2FCB1Cu;
label_2fcb1c:
    // 0x2fcb1c: 0xc0be8d4  jal         func_2FA350
    ctx->pc = 0x2FCB1Cu;
    SET_GPR_U32(ctx, 31, 0x2FCB24u);
    ctx->pc = 0x2FCB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCB1Cu;
    // 0x2fcb20: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA350u, 0x2FCB1Cu, 0x2FCB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB24u;
label_2fcb24:
    // 0x2fcb24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FCB24u;
    {
        const bool branch_taken_0x2fcb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB24u;
        // 0x2fcb28: 0xc6000250  lwc1        $f0, 0x250($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb24) {
            ctx->pc = 0x2FCB44u;
            goto label_2fcb44;
        }
    }
    ctx->pc = 0x2FCB2Cu;
label_2fcb2c:
    // 0x2fcb2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fcb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fcb30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fcb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcb34: 0x0  nop
    ctx->pc = 0x2fcb34u;
    // NOP
    // 0x2fcb38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcb38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcb3c: 0xe6000250  swc1        $f0, 0x250($s0)
    ctx->pc = 0x2fcb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    // 0x2fcb40: 0xc6000250  lwc1        $f0, 0x250($s0)
    ctx->pc = 0x2fcb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fcb44:
    // 0x2fcb44: 0x9204024c  lbu         $a0, 0x24C($s0)
    ctx->pc = 0x2fcb44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x2fcb48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fcb48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2fcb4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2fcb4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2fcb50: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2fcb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fcb54: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2fcb54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fcb58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCB58u;
    {
        const bool branch_taken_0x2fcb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB58u;
        // 0x2fcb5c: 0xa203024d  sb          $v1, 0x24D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 589), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb58) {
            ctx->pc = 0x2FCB68u;
            goto label_2fcb68;
        }
    }
    ctx->pc = 0x2FCB60u;
    // 0x2fcb60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCB60u;
    {
        const bool branch_taken_0x2fcb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB60u;
        // 0x2fcb64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb60) {
            ctx->pc = 0x2FCB74u;
            goto label_2fcb74;
        }
    }
    ctx->pc = 0x2FCB68u;
label_2fcb68:
    // 0x2fcb68: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2FCB68u;
    SET_GPR_U32(ctx, 31, 0x2FCB70u);
    ctx->pc = 0x2FCB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCB68u;
    // 0x2fcb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FCB68u, 0x2FCB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB70u;
label_2fcb70:
    // 0x2fcb70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fcb74:
    // 0x2fcb74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fcb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcb78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fcb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB7Cu;
        // 0x2fcb80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCB84u;
    // 0x2fcb84: 0x0  nop
    ctx->pc = 0x2fcb84u;
    // NOP
    ctx->pc = 0x2fcb88u;
}
