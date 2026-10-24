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

// Function: BlackJack_UpdateDealDealer
// Address: 0x1d2cf0 - 0x1d2ee0
void BlackJack_UpdateDealDealer_0x1d2cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateDealDealer_0x1d2cf0");
#endif

    switch (ctx->pc) {
        case 0x1d2db0u: goto label_1d2db0;
        case 0x1d2e78u: goto label_1d2e78;
        case 0x1d2e90u: goto label_1d2e90;
        case 0x1d2eb8u: goto label_1d2eb8;
        default: break;
    }

    ctx->pc = 0x1d2cf0u;

    // 0x1d2cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2cf8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d2cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d2cfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d2cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d2d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d04: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d2d08: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2D08u;
    {
        const bool branch_taken_0x1d2d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2d08) {
            ctx->pc = 0x1D2D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2D08u;
            // 0x1d2d0c: 0x8e02180c  lw          $v0, 0x180C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D44u;
            goto label_1d2d44;
        }
    }
    ctx->pc = 0x1D2D10u;
    // 0x1d2d10: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2D10u;
    {
        const bool branch_taken_0x1d2d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D10u;
        // 0x1d2d14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d10) {
            ctx->pc = 0x1D2D30u;
            goto label_1d2d30;
        }
    }
    ctx->pc = 0x1D2D18u;
    // 0x1d2d18: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D2D18u;
    {
        const bool branch_taken_0x1d2d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D18u;
        // 0x1d2d1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d18) {
            ctx->pc = 0x1D2DC8u;
            goto label_1d2dc8;
        }
    }
    ctx->pc = 0x1D2D20u;
    // 0x1d2d20: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1D2D20u;
    {
        const bool branch_taken_0x1d2d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2d20) {
            ctx->pc = 0x1D2EB0u;
            goto label_1d2eb0;
        }
    }
    ctx->pc = 0x1D2D28u;
    // 0x1d2d28: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1D2D28u;
    {
        const bool branch_taken_0x1d2d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D28u;
        // 0x1d2d2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d28) {
            ctx->pc = 0x1D2ED4u;
            goto label_1d2ed4;
        }
    }
    ctx->pc = 0x1D2D30u;
label_1d2d30:
    // 0x1d2d30: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1d2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2d34: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d2d38: 0xae021808  sw          $v0, 0x1808($s0)
    ctx->pc = 0x1d2d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
    // 0x1d2d3c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1D2D3Cu;
    {
        const bool branch_taken_0x1d2d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D3Cu;
        // 0x1d2d40: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d3c) {
            ctx->pc = 0x1D2ED0u;
            goto label_1d2ed0;
        }
    }
    ctx->pc = 0x1D2D44u;
label_1d2d44:
    // 0x1d2d44: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1D2D44u;
    {
        const bool branch_taken_0x1d2d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D44u;
        // 0x1d2d48: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d44) {
            ctx->pc = 0x1D2EA8u;
            goto label_1d2ea8;
        }
    }
    ctx->pc = 0x1D2D4Cu;
    // 0x1d2d4c: 0x960217fc  lhu         $v0, 0x17FC($s0)
    ctx->pc = 0x1d2d4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d2d50: 0x260d17d4  addiu       $t5, $s0, 0x17D4
    ctx->pc = 0x1d2d50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 6100));
    // 0x1d2d54: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d2d58: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d2d5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d2d60: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1d2d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x1d2d64: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1d2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1d2d68: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d2d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d2d6c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d2d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2d70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d2d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2d74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d2d78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d7c: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x1d2d7cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d2d80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2d80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d2d84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d2d88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d8c: 0x8d820250  lw          $v0, 0x250($t4)
    ctx->pc = 0x1d2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 592)));
    // 0x1d2d90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d2d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d2d94: 0xad820250  sw          $v0, 0x250($t4)
    ctx->pc = 0x1d2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 592), GPR_U32(ctx, 2));
    // 0x1d2d98: 0x960317fc  lhu         $v1, 0x17FC($s0)
    ctx->pc = 0x1d2d98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d2d9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2da0: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x1d2da0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1d2da4: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x1d2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1d2da8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1D2DA8u;
    SET_GPR_U32(ctx, 31, 0x1D2DB0u);
    ctx->pc = 0x1D2DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2DA8u;
    // 0x1d2dac: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D2DA8u, 0x1D2DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2DB0u;
label_1d2db0:
    // 0x1d2db0: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d2db4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d2db8: 0xae02180c  sw          $v0, 0x180C($s0)
    ctx->pc = 0x1d2db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
    // 0x1d2dbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2dc0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1D2DC0u;
    {
        const bool branch_taken_0x1d2dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DC0u;
        // 0x1d2dc4: 0xae031808  sw          $v1, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2dc0) {
            ctx->pc = 0x1D2ED0u;
            goto label_1d2ed0;
        }
    }
    ctx->pc = 0x1D2DC8u;
label_1d2dc8:
    // 0x1d2dc8: 0x960317fc  lhu         $v1, 0x17FC($s0)
    ctx->pc = 0x1d2dc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d2dcc: 0xc600180c  lwc1        $f0, 0x180C($s0)
    ctx->pc = 0x1d2dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2dd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d2dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d2dd4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1d2dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1d2dd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d2dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2ddc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d2ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d2de0: 0x248480f0  addiu       $a0, $a0, -0x7F10
    ctx->pc = 0x1d2de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934768));
    // 0x1d2de4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2de8: 0x960517fc  lhu         $a1, 0x17FC($s0)
    ctx->pc = 0x1d2de8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d2dec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2df0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2df0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d2df4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d2df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d2df8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2dfc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d2dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1d2e00: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1d2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d2e04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d2e08: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1d2e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d2e0c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1d2e0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1d2e10: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1d2e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d2e14: 0x0  nop
    ctx->pc = 0x1d2e14u;
    // NOP
    // 0x1d2e18: 0x0  nop
    ctx->pc = 0x1d2e18u;
    // NOP
    // 0x1d2e1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d2e1cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1d2e20: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d2e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d2e24: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d2e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d2e28: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1d2e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1d2e2c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x1d2e2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d2e30: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1d2e30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d2e34: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1d2e34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1d2e38: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1d2e38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d2e3c: 0x8ca217d4  lw          $v0, 0x17D4($a1)
    ctx->pc = 0x1d2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6100)));
    // 0x1d2e40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d2e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d2e44: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1d2e44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d2e48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2e4c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d2e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d2e50: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1d2e54: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d2e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d2e58: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d2e5c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D2E5Cu;
    {
        const bool branch_taken_0x1d2e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E5Cu;
        // 0x1d2e60: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e5c) {
            ctx->pc = 0x1D2EA8u;
            goto label_1d2ea8;
        }
    }
    ctx->pc = 0x1D2E64u;
    // 0x1d2e64: 0x960217fc  lhu         $v0, 0x17FC($s0)
    ctx->pc = 0x1d2e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d2e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2e70: 0xc0751c8  jal         func_1D4720
    ctx->pc = 0x1D2E70u;
    SET_GPR_U32(ctx, 31, 0x1D2E78u);
    ctx->pc = 0x1D2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E70u;
    // 0x1d2e74: 0xa60217fc  sh          $v0, 0x17FC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6140), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4720u, 0x1D2E70u, 0x1D2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E78u;
label_1d2e78:
    // 0x1d2e78: 0x28420016  slti        $v0, $v0, 0x16
    ctx->pc = 0x1d2e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d2e7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d2e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d2e80: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2E80u;
    {
        const bool branch_taken_0x1d2e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E80u;
        // 0x1d2e84: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e80) {
            ctx->pc = 0x1D2EC8u;
            goto label_1d2ec8;
        }
    }
    ctx->pc = 0x1D2E88u;
    // 0x1d2e88: 0xc075260  jal         func_1D4980
    ctx->pc = 0x1D2E88u;
    SET_GPR_U32(ctx, 31, 0x1D2E90u);
    ctx->pc = 0x1D2E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E88u;
    // 0x1d2e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4980u, 0x1D2E88u, 0x1D2E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E90u;
label_1d2e90:
    // 0x1d2e90: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D2E90u;
    {
        const bool branch_taken_0x1d2e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E90u;
        // 0x1d2e94: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e90) {
            ctx->pc = 0x1D2EC8u;
            goto label_1d2ec8;
        }
    }
    ctx->pc = 0x1D2E98u;
    // 0x1d2e98: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d2e9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2ea0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D2EA0u;
    {
        const bool branch_taken_0x1d2ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EA0u;
        // 0x1d2ea4: 0xae021808  sw          $v0, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ea0) {
            ctx->pc = 0x1D2ED0u;
            goto label_1d2ed0;
        }
    }
    ctx->pc = 0x1D2EA8u;
label_1d2ea8:
    // 0x1d2ea8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2EA8u;
    {
        const bool branch_taken_0x1d2ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EA8u;
        // 0x1d2eac: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ea8) {
            ctx->pc = 0x1D2ED0u;
            goto label_1d2ed0;
        }
    }
    ctx->pc = 0x1D2EB0u;
label_1d2eb0:
    // 0x1d2eb0: 0xc0751c8  jal         func_1D4720
    ctx->pc = 0x1D2EB0u;
    SET_GPR_U32(ctx, 31, 0x1D2EB8u);
    ctx->pc = 0x1D2EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2EB0u;
    // 0x1d2eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4720u, 0x1D2EB0u, 0x1D2EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EB8u;
label_1d2eb8:
    // 0x1d2eb8: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1d2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d2ebc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2EBCu;
    {
        const bool branch_taken_0x1d2ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EBCu;
        // 0x1d2ec0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ebc) {
            ctx->pc = 0x1D2EC8u;
            goto label_1d2ec8;
        }
    }
    ctx->pc = 0x1D2EC4u;
    // 0x1d2ec4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d2ec8:
    // 0x1d2ec8: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d2ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d2ecc: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d2ed0:
    // 0x1d2ed0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d2ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2ed4:
    // 0x1d2ed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d2ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2ED8u;
        // 0x1d2edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2EE0u;
}
