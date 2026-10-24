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

// Function: func_00122D18
// Address: 0x122d18 - 0x122e90
void func_00122D18_0x122d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00122D18_0x122d18");
#endif

    switch (ctx->pc) {
        case 0x122da4u: goto label_122da4;
        case 0x122dacu: goto label_122dac;
        case 0x122dbcu: goto label_122dbc;
        case 0x122dc8u: goto label_122dc8;
        case 0x122de8u: goto label_122de8;
        case 0x122e04u: goto label_122e04;
        case 0x122e30u: goto label_122e30;
        case 0x122e64u: goto label_122e64;
        case 0x122e70u: goto label_122e70;
        default: break;
    }

    ctx->pc = 0x122d18u;

    // 0x122d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x122d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x122d1c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x122d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x122d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122d24: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x122d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x122d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122d2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x122d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x122d30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x122d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x122d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x122d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x122d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x122d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122d40: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x122d40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x122d44: 0xe660054c  swc1        $f0, 0x54C($s3)
    ctx->pc = 0x122d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1356), bits); }
    // 0x122d48: 0x926302f6  lbu         $v1, 0x2F6($s3)
    ctx->pc = 0x122d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x122d4c: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x122D4Cu;
    {
        const bool branch_taken_0x122d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x122D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D4Cu;
        // 0x122d50: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d4c) {
            ctx->pc = 0x122DFCu;
            goto label_122dfc;
        }
    }
    ctx->pc = 0x122D54u;
    // 0x122d54: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x122D54u;
    {
        const bool branch_taken_0x122d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D54u;
        // 0x122d58: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d54) {
            ctx->pc = 0x122E74u;
            goto label_122e74;
        }
    }
    ctx->pc = 0x122D5Cu;
    // 0x122d5c: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x122D5Cu;
    {
        const bool branch_taken_0x122d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x122D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D5Cu;
        // 0x122d60: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d5c) {
            ctx->pc = 0x122E78u;
            goto label_122e78;
        }
    }
    ctx->pc = 0x122D64u;
    // 0x122d64: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x122d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x122d68: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x122d68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x122d6c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x122d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x122d70: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x122d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x122d74: 0x8c52016c  lw          $s2, 0x16C($v0)
    ctx->pc = 0x122d74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x122d78: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x122d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d7c: 0x8c510170  lw          $s1, 0x170($v0)
    ctx->pc = 0x122d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x122d80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x122d80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x122d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x122d88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x122d8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d94: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x122d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x122d98: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x122d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x122d9c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x122D9Cu;
    SET_GPR_U32(ctx, 31, 0x122DA4u);
    ctx->pc = 0x122DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D9Cu;
    // 0x122da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x122D9Cu, 0x122DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DA4u;
label_122da4:
    // 0x122da4: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x122DA4u;
    SET_GPR_U32(ctx, 31, 0x122DACu);
    ctx->pc = 0x122DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DA4u;
    // 0x122da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x122DA4u, 0x122DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DACu;
label_122dac:
    // 0x122dac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x122dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x122db0: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x122db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x122db4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x122DB4u;
    SET_GPR_U32(ctx, 31, 0x122DBCu);
    ctx->pc = 0x122DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DB4u;
    // 0x122db8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x122DB4u, 0x122DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DBCu;
label_122dbc:
    // 0x122dbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x122dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dc0: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x122DC0u;
    SET_GPR_U32(ctx, 31, 0x122DC8u);
    ctx->pc = 0x122DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DC0u;
    // 0x122dc4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x122DC0u, 0x122DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DC8u;
label_122dc8:
    // 0x122dc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x122dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122dcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x122dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x122dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x122dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dd8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x122dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122ddc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x122ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122de0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x122DE0u;
    SET_GPR_U32(ctx, 31, 0x122DE8u);
    ctx->pc = 0x122DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DE0u;
    // 0x122de4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x122DE0u, 0x122DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DE8u;
label_122de8:
    // 0x122de8: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x122de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x122dec: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x122decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x122df0: 0xae6315b0  sw          $v1, 0x15B0($s3)
    ctx->pc = 0x122df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5552), GPR_U32(ctx, 3));
    // 0x122df4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122df8: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x122df8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_122dfc:
    // 0x122dfc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x122DFCu;
    SET_GPR_U32(ctx, 31, 0x122E04u);
    ctx->pc = 0x122E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DFCu;
    // 0x122e00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x122DFCu, 0x122E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E04u;
label_122e04:
    // 0x122e04: 0x8e6215b0  lw          $v0, 0x15B0($s3)
    ctx->pc = 0x122e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5552)));
    // 0x122e08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122E08u;
    {
        const bool branch_taken_0x122e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E08u;
        // 0x122e0c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e08) {
            ctx->pc = 0x122E18u;
            goto label_122e18;
        }
    }
    ctx->pc = 0x122E10u;
    // 0x122e10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x122E10u;
    {
        const bool branch_taken_0x122e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E10u;
        // 0x122e14: 0xae6215b0  sw          $v0, 0x15B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e10) {
            ctx->pc = 0x122E28u;
            goto label_122e28;
        }
    }
    ctx->pc = 0x122E18u;
label_122e18:
    // 0x122e18: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x122e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x122e1c: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x122e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x122e20: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x122e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x122e24: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x122e24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_122e28:
    // 0x122e28: 0xc055f06  jal         func_157C18
    ctx->pc = 0x122E28u;
    SET_GPR_U32(ctx, 31, 0x122E30u);
    ctx->pc = 0x122E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E28u;
    // 0x122e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x122E28u, 0x122E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E30u;
label_122e30:
    // 0x122e30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x122E30u;
    {
        const bool branch_taken_0x122e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E30u;
        // 0x122e34: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e30) {
            ctx->pc = 0x122E50u;
            goto label_122e50;
        }
    }
    ctx->pc = 0x122E38u;
    // 0x122e38: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x122e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31268)));
    // 0x122e3c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x122e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x122e40: 0xac437a24  sw          $v1, 0x7A24($v0)
    ctx->pc = 0x122e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31268), GPR_U32(ctx, 3));
    // 0x122e44: 0x926402f6  lbu         $a0, 0x2F6($s3)
    ctx->pc = 0x122e44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x122e48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x122e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x122e4c: 0xa26402f6  sb          $a0, 0x2F6($s3)
    ctx->pc = 0x122e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 4));
label_122e50:
    // 0x122e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122e54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x122e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x122e58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x122e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e5c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x122E5Cu;
    SET_GPR_U32(ctx, 31, 0x122E64u);
    ctx->pc = 0x122E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E5Cu;
    // 0x122e60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x122E5Cu, 0x122E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E64u;
label_122e64:
    // 0x122e64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x122e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e68: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x122E68u;
    SET_GPR_U32(ctx, 31, 0x122E70u);
    ctx->pc = 0x122E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E68u;
    // 0x122e6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x122E68u, 0x122E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E70u;
label_122e70:
    // 0x122e70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x122e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_122e74:
    // 0x122e74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x122e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_122e78:
    // 0x122e78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122e7c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x122e7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122e84: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x122e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122e88: 0x3e00008  jr          $ra
    ctx->pc = 0x122E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E88u;
        // 0x122e8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122E90u;
}
