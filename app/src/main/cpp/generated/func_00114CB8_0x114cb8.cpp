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

// Function: func_00114CB8
// Address: 0x114cb8 - 0x114e28
void func_00114CB8_0x114cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00114CB8_0x114cb8");
#endif

    switch (ctx->pc) {
        case 0x114d00u: goto label_114d00;
        case 0x114d08u: goto label_114d08;
        case 0x114d10u: goto label_114d10;
        case 0x114d20u: goto label_114d20;
        case 0x114d5cu: goto label_114d5c;
        case 0x114d7cu: goto label_114d7c;
        case 0x114d9cu: goto label_114d9c;
        case 0x114da4u: goto label_114da4;
        case 0x114dd0u: goto label_114dd0;
        case 0x114ddcu: goto label_114ddc;
        case 0x114e00u: goto label_114e00;
        case 0x114e0cu: goto label_114e0c;
        default: break;
    }

    ctx->pc = 0x114cb8u;

    // 0x114cb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114cbc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x114cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x114cc0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x114cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x114cc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x114cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x114cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x114ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114cd0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x114cd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x114cd4: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x114cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x114cd8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x114CD8u;
    {
        const bool branch_taken_0x114cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CD8u;
        // 0x114cdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114cd8) {
            ctx->pc = 0x114CF0u;
            goto label_114cf0;
        }
    }
    ctx->pc = 0x114CE0u;
    // 0x114ce0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x114CE0u;
    {
        const bool branch_taken_0x114ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x114ce0) {
            ctx->pc = 0x114D88u;
            goto label_114d88;
        }
    }
    ctx->pc = 0x114CE8u;
    // 0x114ce8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x114CE8u;
    {
        const bool branch_taken_0x114ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CE8u;
        // 0x114cec: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ce8) {
            ctx->pc = 0x114DE0u;
            goto label_114de0;
        }
    }
    ctx->pc = 0x114CF0u;
label_114cf0:
    // 0x114cf0: 0xa64005e0  sh          $zero, 0x5E0($s2)
    ctx->pc = 0x114cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x114cf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cf8: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x114CF8u;
    SET_GPR_U32(ctx, 31, 0x114D00u);
    ctx->pc = 0x114CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114CF8u;
    // 0x114cfc: 0xa64005e2  sh          $zero, 0x5E2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x114CF8u, 0x114D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D00u;
label_114d00:
    // 0x114d00: 0xc049396  jal         func_124E58
    ctx->pc = 0x114D00u;
    SET_GPR_U32(ctx, 31, 0x114D08u);
    ctx->pc = 0x114D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D00u;
    // 0x114d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x114D00u, 0x114D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D08u;
label_114d08:
    // 0x114d08: 0xc0499dc  jal         func_126770
    ctx->pc = 0x114D08u;
    SET_GPR_U32(ctx, 31, 0x114D10u);
    ctx->pc = 0x114D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D08u;
    // 0x114d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x114D08u, 0x114D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D10u;
label_114d10:
    // 0x114d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d18: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x114D18u;
    SET_GPR_U32(ctx, 31, 0x114D20u);
    ctx->pc = 0x114D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D18u;
    // 0x114d1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x114D18u, 0x114D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D20u;
label_114d20:
    // 0x114d20: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x114d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x114d24: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x114d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x114d28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x114d28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x114d2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d30: 0x8c5103d8  lw          $s1, 0x3D8($v0)
    ctx->pc = 0x114d30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 984)));
    // 0x114d34: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x114d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x114d38: 0x8c5003dc  lw          $s0, 0x3DC($v0)
    ctx->pc = 0x114d38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 988)));
    // 0x114d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d40: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x114d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x114d44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x114d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d48: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x114d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x114d4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d50: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x114d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x114d54: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x114D54u;
    SET_GPR_U32(ctx, 31, 0x114D5Cu);
    ctx->pc = 0x114D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D54u;
    // 0x114d58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x114D54u, 0x114D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D5Cu;
label_114d5c:
    // 0x114d5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x114d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x114d60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x114d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x114d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d6c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x114d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x114d70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d74: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x114D74u;
    SET_GPR_U32(ctx, 31, 0x114D7Cu);
    ctx->pc = 0x114D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D74u;
    // 0x114d78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x114D74u, 0x114D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D7Cu;
label_114d7c:
    // 0x114d7c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x114d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x114d80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x114d84: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x114d84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_114d88:
    // 0x114d88: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x114d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x114d8c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x114d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x114d90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x114d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x114d94: 0xc04939a  jal         func_124E68
    ctx->pc = 0x114D94u;
    SET_GPR_U32(ctx, 31, 0x114D9Cu);
    ctx->pc = 0x114D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D94u;
    // 0x114d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x114D94u, 0x114D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D9Cu;
label_114d9c:
    // 0x114d9c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x114D9Cu;
    SET_GPR_U32(ctx, 31, 0x114DA4u);
    ctx->pc = 0x114DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D9Cu;
    // 0x114da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x114D9Cu, 0x114DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DA4u;
label_114da4:
    // 0x114da4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114DA4u;
    {
        const bool branch_taken_0x114da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114da4) {
            ctx->pc = 0x114DBCu;
            goto label_114dbc;
        }
    }
    ctx->pc = 0x114DACu;
    // 0x114dac: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x114dacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x114db0: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x114db0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x114db4: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x114db4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x114db8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x114db8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_114dbc:
    // 0x114dbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114dc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x114dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x114dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114dc8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x114DC8u;
    SET_GPR_U32(ctx, 31, 0x114DD0u);
    ctx->pc = 0x114DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DC8u;
    // 0x114dcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x114DC8u, 0x114DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DD0u;
label_114dd0:
    // 0x114dd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x114dd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x114dd4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x114DD4u;
    SET_GPR_U32(ctx, 31, 0x114DDCu);
    ctx->pc = 0x114DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DD4u;
    // 0x114dd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x114DD4u, 0x114DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DDCu;
label_114ddc:
    // 0x114ddc: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x114ddcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_114de0:
    // 0x114de0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x114de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x114de4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114DE4u;
    {
        const bool branch_taken_0x114de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DE4u;
        // 0x114de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114de4) {
            ctx->pc = 0x114E04u;
            goto label_114e04;
        }
    }
    ctx->pc = 0x114DECu;
    // 0x114dec: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x114decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x114df0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114DF0u;
    {
        const bool branch_taken_0x114df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114df0) {
            ctx->pc = 0x114E04u;
            goto label_114e04;
        }
    }
    ctx->pc = 0x114DF8u;
    // 0x114df8: 0xc04aa36  jal         func_12A8D8
    ctx->pc = 0x114DF8u;
    SET_GPR_U32(ctx, 31, 0x114E00u);
    ctx->pc = 0x114DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DF8u;
    // 0x114dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A8D8u, 0x114DF8u, 0x114E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E00u;
label_114e00:
    // 0x114e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114e04:
    // 0x114e04: 0xc048e4e  jal         func_123938
    ctx->pc = 0x114E04u;
    SET_GPR_U32(ctx, 31, 0x114E0Cu);
    ctx->pc = 0x114E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E04u;
    // 0x114e08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x114E04u, 0x114E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E0Cu;
label_114e0c:
    // 0x114e0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x114e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114e10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x114e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114e14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x114e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114e1c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x114e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x114e20: 0x3e00008  jr          $ra
    ctx->pc = 0x114E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E20u;
        // 0x114e24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114E28u;
}
