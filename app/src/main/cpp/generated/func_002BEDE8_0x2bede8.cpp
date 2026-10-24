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

// Function: func_002BEDE8
// Address: 0x2bede8 - 0x2bef08
void func_002BEDE8_0x2bede8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BEDE8_0x2bede8");
#endif

    switch (ctx->pc) {
        case 0x2bee1cu: goto label_2bee1c;
        case 0x2bee28u: goto label_2bee28;
        case 0x2bee50u: goto label_2bee50;
        default: break;
    }

    ctx->pc = 0x2bede8u;

    // 0x2bede8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bede8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bedec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bedecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bedf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bedf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bedf4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bedf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bedf8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2bedf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2bedfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bedfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bee04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bee04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee08: 0x24060600  addiu       $a2, $zero, 0x600
    ctx->pc = 0x2bee08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x2bee0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bee0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bee14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2BEE14u;
    SET_GPR_U32(ctx, 31, 0x2BEE1Cu);
    ctx->pc = 0x2BEE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE14u;
    // 0x2bee18: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2BEE14u, 0x2BEE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE1Cu;
label_2bee1c:
    // 0x2bee1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee20: 0xc0afb72  jal         func_2BEDC8
    ctx->pc = 0x2BEE20u;
    SET_GPR_U32(ctx, 31, 0x2BEE28u);
    ctx->pc = 0x2BEE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE20u;
    // 0x2bee24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDC8u, 0x2BEE20u, 0x2BEE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE28u;
label_2bee28:
    // 0x2bee28: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2BEE28u;
    {
        const bool branch_taken_0x2bee28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE28u;
        // 0x2bee2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee28) {
            ctx->pc = 0x2BEEF0u;
            goto label_2beef0;
        }
    }
    ctx->pc = 0x2BEE30u;
    // 0x2bee30: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2bee30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2bee34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bee34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bee38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bee38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee3c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2bee3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2bee40: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2bee40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2bee44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bee44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bee48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bee48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee4c: 0x0  nop
    ctx->pc = 0x2bee4cu;
    // NOP
label_2bee50:
    // 0x2bee50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bee50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bee54: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2bee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bee58: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2bee58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2bee5c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x2bee5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2bee60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bee60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bee64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bee64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bee68: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bee68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bee6c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2bee6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bee70: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2bee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bee74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bee74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bee78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bee78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bee7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bee7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bee80: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x2bee80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bee84: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2bee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bee88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bee88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bee8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bee8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bee90: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bee90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bee94: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x2bee94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bee98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2bee98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2bee9c: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x2bee9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x2beea0: 0xf0282b  sltu        $a1, $a3, $s0
    ctx->pc = 0x2beea0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2beea4: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2beea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beea8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2beea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2beeac: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2beeacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2beeb0: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2beeb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2beeb4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2beeb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2beeb8: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x2beeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2beebc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2beebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2beec0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2beec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2beec4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2beec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2beec8: 0x90c30028  lbu         $v1, 0x28($a2)
    ctx->pc = 0x2beec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2beecc: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x2beeccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x2beed0: 0x90c20029  lbu         $v0, 0x29($a2)
    ctx->pc = 0x2beed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 41)));
    // 0x2beed4: 0xa0820011  sb          $v0, 0x11($a0)
    ctx->pc = 0x2beed4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x2beed8: 0x90c3002a  lbu         $v1, 0x2A($a2)
    ctx->pc = 0x2beed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x2beedc: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x2beedcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x2beee0: 0x90c2002b  lbu         $v0, 0x2B($a2)
    ctx->pc = 0x2beee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 43)));
    // 0x2beee4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2beee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2beee8: 0x14a0ffd9  bnez        $a1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2BEEE8u;
    {
        const bool branch_taken_0x2beee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEE8u;
        // 0x2beeec: 0xa0820013  sb          $v0, 0x13($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beee8) {
            ctx->pc = 0x2BEE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bee50;
        }
    }
    ctx->pc = 0x2BEEF0u;
label_2beef0:
    // 0x2beef0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2beef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2beef4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2beef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2beef8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2beef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beefc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2beefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bef00: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF00u;
        // 0x2bef04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEF08u;
}
