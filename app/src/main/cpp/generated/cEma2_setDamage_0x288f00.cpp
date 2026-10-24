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

// Function: cEma2_setDamage
// Address: 0x288f00 - 0x289028
void cEma2_setDamage_0x288f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEma2_setDamage_0x288f00");
#endif

    switch (ctx->pc) {
        case 0x288f18u: goto label_288f18;
        case 0x288f4cu: goto label_288f4c;
        default: break;
    }

    ctx->pc = 0x288f00u;

    // 0x288f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288f04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x288f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x288f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288f0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288f10: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x288F10u;
    SET_GPR_U32(ctx, 31, 0x288F18u);
    ctx->pc = 0x288F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F10u;
    // 0x288f14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x288F10u, 0x288F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F18u;
label_288f18:
    // 0x288f18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f1c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x288f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x288f20: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x288F20u;
    {
        const bool branch_taken_0x288f20 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x288F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F20u;
        // 0x288f24: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f20) {
            ctx->pc = 0x289010u;
            goto label_289010;
        }
    }
    ctx->pc = 0x288F28u;
    // 0x288f28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f2c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x288f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x288f30: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x288f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x288f34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x288f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288f38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288f3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x288f40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f44: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x288F44u;
    SET_GPR_U32(ctx, 31, 0x288F4Cu);
    ctx->pc = 0x288F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F44u;
    // 0x288f48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x288F44u, 0x288F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F4Cu;
label_288f4c:
    // 0x288f4c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x288f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x288f50: 0x24040501  addiu       $a0, $zero, 0x501
    ctx->pc = 0x288f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x288f54: 0x94627a50  lhu         $v0, 0x7A50($v1)
    ctx->pc = 0x288f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x747A50u));
    // 0x288f58: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x288F58u;
    {
        const bool branch_taken_0x288f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x288F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F58u;
        // 0x288f5c: 0x9602054a  lhu         $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f58) {
            ctx->pc = 0x288F84u;
            goto label_288f84;
        }
    }
    ctx->pc = 0x288F60u;
    // 0x288f60: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x288f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288f64: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x288f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x288f68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288f6c: 0x0  nop
    ctx->pc = 0x288f6cu;
    // NOP
    // 0x288f70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x288f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288f74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x288f74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x288f78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x288f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x288f7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288F7Cu;
    {
        const bool branch_taken_0x288f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F7Cu;
        // 0x288f80: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f7c) {
            ctx->pc = 0x288F88u;
            goto label_288f88;
        }
    }
    ctx->pc = 0x288F84u;
label_288f84:
    // 0x288f84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x288f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_288f88:
    // 0x288f88: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x288f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x288f8c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x288f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x288f90: 0x1c40000f  bgtz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x288F90u;
    {
        const bool branch_taken_0x288f90 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x288F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F90u;
        // 0x288f94: 0x8e0215b0  lw          $v0, 0x15B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f90) {
            ctx->pc = 0x288FD0u;
            goto label_288fd0;
        }
    }
    ctx->pc = 0x288F98u;
    // 0x288f98: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x288f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x288f9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288F9Cu;
    {
        const bool branch_taken_0x288f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F9Cu;
        // 0x288fa0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f9c) {
            ctx->pc = 0x288FB4u;
            goto label_288fb4;
        }
    }
    ctx->pc = 0x288FA4u;
    // 0x288fa4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x288fa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x288fa8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x288fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x288fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288FACu;
    {
        const bool branch_taken_0x288fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FACu;
        // 0x288fb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fac) {
            ctx->pc = 0x288FC8u;
            goto label_288fc8;
        }
    }
    ctx->pc = 0x288FB4u;
label_288fb4:
    // 0x288fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x288fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288fb8: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x288fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x288fbc: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x288fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x288fc0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x288FC0u;
    {
        const bool branch_taken_0x288fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FC0u;
        // 0x288fc4: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fc0) {
            ctx->pc = 0x28900Cu;
            goto label_28900c;
        }
    }
    ctx->pc = 0x288FC8u;
label_288fc8:
    // 0x288fc8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x288FC8u;
    {
        const bool branch_taken_0x288fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FC8u;
        // 0x288fcc: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fc8) {
            ctx->pc = 0x289004u;
            goto label_289004;
        }
    }
    ctx->pc = 0x288FD0u;
label_288fd0:
    // 0x288fd0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x288fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x288fd4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288FD4u;
    {
        const bool branch_taken_0x288fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FD4u;
        // 0x288fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fd4) {
            ctx->pc = 0x288FECu;
            goto label_288fec;
        }
    }
    ctx->pc = 0x288FDCu;
    // 0x288fdc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x288fdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x288fe0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x288fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x288fe4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288FE4u;
    {
        const bool branch_taken_0x288fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FE4u;
        // 0x288fe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fe4) {
            ctx->pc = 0x289000u;
            goto label_289000;
        }
    }
    ctx->pc = 0x288FECu;
label_288fec:
    // 0x288fec: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x288fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x288ff0: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x288ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x288ff4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x288ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x288ff8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288FF8u;
    {
        const bool branch_taken_0x288ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FF8u;
        // 0x288ffc: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ff8) {
            ctx->pc = 0x289010u;
            goto label_289010;
        }
    }
    ctx->pc = 0x289000u;
label_289000:
    // 0x289000: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x289000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_289004:
    // 0x289004: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x289004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x289008: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x289008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_28900c:
    // 0x28900c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x28900cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_289010:
    // 0x289010: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x289010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28901c: 0x3e00008  jr          $ra
    ctx->pc = 0x28901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28901Cu;
        // 0x289020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28901Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289024u;
    // 0x289024: 0x0  nop
    ctx->pc = 0x289024u;
    // NOP
    ctx->pc = 0x289028u;
}
