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

// Function: func_00277D38
// Address: 0x277d38 - 0x277f08
void func_00277D38_0x277d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00277D38_0x277d38");
#endif

    switch (ctx->pc) {
        case 0x277e0cu: goto label_277e0c;
        case 0x277e30u: goto label_277e30;
        case 0x277e3cu: goto label_277e3c;
        case 0x277e48u: goto label_277e48;
        case 0x277e98u: goto label_277e98;
        case 0x277eacu: goto label_277eac;
        case 0x277ebcu: goto label_277ebc;
        case 0x277eccu: goto label_277ecc;
        case 0x277ee4u: goto label_277ee4;
        case 0x277ef0u: goto label_277ef0;
        default: break;
    }

    ctx->pc = 0x277d38u;

    // 0x277d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277d3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x277d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277d40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x277d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x277d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d4c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x277d4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x277d50: 0x8e021560  lw          $v0, 0x1560($s0)
    ctx->pc = 0x277d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
    // 0x277d54: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x277d54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277d58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x277d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x277d5c: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x277D5Cu;
    {
        const bool branch_taken_0x277d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x277D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D5Cu;
        // 0x277d60: 0xae021560  sw          $v0, 0x1560($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d5c) {
            ctx->pc = 0x277E20u;
            goto label_277e20;
        }
    }
    ctx->pc = 0x277D64u;
    // 0x277d64: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x277d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x277d68: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x277D68u;
    {
        const bool branch_taken_0x277d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277d68) {
            ctx->pc = 0x277D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277D68u;
            // 0x277d6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277D80u;
            goto label_277d80;
        }
    }
    ctx->pc = 0x277D70u;
    // 0x277d70: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x277D70u;
    {
        const bool branch_taken_0x277d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x277D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D70u;
        // 0x277d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d70) {
            ctx->pc = 0x277D98u;
            goto label_277d98;
        }
    }
    ctx->pc = 0x277D78u;
    // 0x277d78: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x277D78u;
    {
        const bool branch_taken_0x277d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D78u;
        // 0x277d7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d78) {
            ctx->pc = 0x277EF4u;
            goto label_277ef4;
        }
    }
    ctx->pc = 0x277D80u;
label_277d80:
    // 0x277d80: 0x1082003a  beq         $a0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x277D80u;
    {
        const bool branch_taken_0x277d80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x277D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D80u;
        // 0x277d84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d80) {
            ctx->pc = 0x277E6Cu;
            goto label_277e6c;
        }
    }
    ctx->pc = 0x277D88u;
    // 0x277d88: 0x10820046  beq         $a0, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x277D88u;
    {
        const bool branch_taken_0x277d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x277d88) {
            ctx->pc = 0x277EA4u;
            goto label_277ea4;
        }
    }
    ctx->pc = 0x277D90u;
    // 0x277d90: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x277D90u;
    {
        const bool branch_taken_0x277d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D90u;
        // 0x277d94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d90) {
            ctx->pc = 0x277EF4u;
            goto label_277ef4;
        }
    }
    ctx->pc = 0x277D98u;
label_277d98:
    // 0x277d98: 0x3c014025  lui         $at, 0x4025
    ctx->pc = 0x277d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16421 << 16));
    // 0x277d9c: 0x3421e047  ori         $at, $at, 0xE047
    ctx->pc = 0x277d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57415);
    // 0x277da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277da4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x277da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x277da8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x277da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277dac: 0x3c01c2a0  lui         $at, 0xC2A0
    ctx->pc = 0x277dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49824 << 16));
    // 0x277db0: 0x3421a7e3  ori         $at, $at, 0xA7E3
    ctx->pc = 0x277db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42979);
    // 0x277db4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x277db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x277db8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x277db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277dbc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x277dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x277dc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x277dc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277dc4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x277dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x277dc8: 0x3c01c1d3  lui         $at, 0xC1D3
    ctx->pc = 0x277dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49619 << 16));
    // 0x277dcc: 0x34213439  ori         $at, $at, 0x3439
    ctx->pc = 0x277dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13369);
    // 0x277dd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277dd4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x277dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x277dd8: 0x3c01c1b2  lui         $at, 0xC1B2
    ctx->pc = 0x277dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49586 << 16));
    // 0x277ddc: 0x34218241  ori         $at, $at, 0x8241
    ctx->pc = 0x277ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33345);
    // 0x277de0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x277de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x277de4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x277de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x277de8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277dec: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x277decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x277df0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x277df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x277df4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x277df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x277df8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x277df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x277dfc: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x277dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x277e00: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x277e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x277e04: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x277E04u;
    SET_GPR_U32(ctx, 31, 0x277E0Cu);
    ctx->pc = 0x277E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E04u;
    // 0x277e08: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x277E04u, 0x277E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E0Cu;
label_277e0c:
    // 0x277e0c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x277e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277e10: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x277e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x277e14: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x277e14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x277e18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277e1c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x277e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_277e20:
    // 0x277e20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x277e24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x277e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x277e28: 0xc055f06  jal         func_157C18
    ctx->pc = 0x277E28u;
    SET_GPR_U32(ctx, 31, 0x277E30u);
    ctx->pc = 0x277E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E28u;
    // 0x277e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x277E28u, 0x277E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E30u;
label_277e30:
    // 0x277e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e34: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x277E34u;
    SET_GPR_U32(ctx, 31, 0x277E3Cu);
    ctx->pc = 0x277E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E34u;
    // 0x277e38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x277E34u, 0x277E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E3Cu;
label_277e3c:
    // 0x277e3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x277e3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x277e40: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x277E40u;
    SET_GPR_U32(ctx, 31, 0x277E48u);
    ctx->pc = 0x277E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E40u;
    // 0x277e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x277E40u, 0x277E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E48u;
label_277e48:
    // 0x277e48: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x277e48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x277e4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x277e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x277e50: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x277e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x277e54: 0x1c600026  bgtz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x277E54u;
    {
        const bool branch_taken_0x277e54 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x277E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E54u;
        // 0x277e58: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e54) {
            ctx->pc = 0x277EF0u;
            goto label_277ef0;
        }
    }
    ctx->pc = 0x277E5Cu;
    // 0x277e5c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x277e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277e60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277e64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x277E64u;
    {
        const bool branch_taken_0x277e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E64u;
        // 0x277e68: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e64) {
            ctx->pc = 0x277EF0u;
            goto label_277ef0;
        }
    }
    ctx->pc = 0x277E6Cu;
label_277e6c:
    // 0x277e6c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x277e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x277e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277e78: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x277e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277e7c: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x277e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x277e80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x277e80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e84: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x277e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x277e88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x277e88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e8c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x277e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x277e90: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x277E90u;
    SET_GPR_U32(ctx, 31, 0x277E98u);
    ctx->pc = 0x277E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E90u;
    // 0x277e94: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x277E90u, 0x277E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E98u;
label_277e98:
    // 0x277e98: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x277e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277e9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277ea0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x277ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_277ea4:
    // 0x277ea4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x277EA4u;
    SET_GPR_U32(ctx, 31, 0x277EACu);
    ctx->pc = 0x277EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277EA4u;
    // 0x277ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x277EA4u, 0x277EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277EACu;
label_277eac:
    // 0x277eac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x277EACu;
    {
        const bool branch_taken_0x277eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277EACu;
        // 0x277eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277eac) {
            ctx->pc = 0x277ED4u;
            goto label_277ed4;
        }
    }
    ctx->pc = 0x277EB4u;
    // 0x277eb4: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x277EB4u;
    SET_GPR_U32(ctx, 31, 0x277EBCu);
    ctx->pc = 0x277EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277EB4u;
    // 0x277eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x277EB4u, 0x277EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277EBCu;
label_277ebc:
    // 0x277ebc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x277ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x277ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x277ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ec4: 0xc0a41dc  jal         func_290770
    ctx->pc = 0x277EC4u;
    SET_GPR_U32(ctx, 31, 0x277ECCu);
    ctx->pc = 0x277EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277EC4u;
    // 0x277ec8: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290770u, 0x277EC4u, 0x277ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277ECCu;
label_277ecc:
    // 0x277ecc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x277ECCu;
    {
        const bool branch_taken_0x277ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277ECCu;
        // 0x277ed0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ecc) {
            ctx->pc = 0x277EF4u;
            goto label_277ef4;
        }
    }
    ctx->pc = 0x277ED4u;
label_277ed4:
    // 0x277ed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x277ed8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x277ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x277edc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x277EDCu;
    SET_GPR_U32(ctx, 31, 0x277EE4u);
    ctx->pc = 0x277EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277EDCu;
    // 0x277ee0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x277EDCu, 0x277EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277EE4u;
label_277ee4:
    // 0x277ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ee8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x277EE8u;
    SET_GPR_U32(ctx, 31, 0x277EF0u);
    ctx->pc = 0x277EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277EE8u;
    // 0x277eec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x277EE8u, 0x277EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277EF0u;
label_277ef0:
    // 0x277ef0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x277ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_277ef4:
    // 0x277ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277ef8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x277ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277efc: 0x3e00008  jr          $ra
    ctx->pc = 0x277EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277EFCu;
        // 0x277f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277F04u;
    // 0x277f04: 0x0  nop
    ctx->pc = 0x277f04u;
    // NOP
    ctx->pc = 0x277f08u;
}
