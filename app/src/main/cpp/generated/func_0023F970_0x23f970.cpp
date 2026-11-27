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

// Function: func_0023F970
// Address: 0x23f970 - 0x23fa88
void func_0023F970_0x23f970(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023F970_0x23f970");
#endif

    if (__builtin_expect(ctx->pc != 0x23f970u, 0)) {
        switch (ctx->pc) {
            case 0x23f9c4u: goto label_23f9c4;
            case 0x23f9e4u: goto label_23f9e4;
            case 0x23f9f8u: goto label_23f9f8;
            case 0x23fa08u: goto label_23fa08;
            case 0x23fa1cu: goto label_23fa1c;
            case 0x23fa28u: goto label_23fa28;
            case 0x23fa58u: goto label_23fa58;
            case 0x23fa6cu: goto label_23fa6c;
            default: break;
        }
    }


    // 0x23f970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23f974: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23f974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23f978: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23f97c: 0x80902d  daddu       $s2, $a0, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f980: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23f980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23f984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f988: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x23f988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23f98c: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x23f98cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x23f990: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F990u;
    {
        const bool branch_taken_0x23f990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F990u;
        // 0x23f994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f990) {
            ctx->pc = 0x23F9A8u;
            goto label_23f9a8;
        }
    }
    // 0x23f998: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23F998u;
    {
        const bool branch_taken_0x23f998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23f998) {
            ctx->pc = 0x23F9F0u;
            goto label_23f9f0;
        }
    }
    // 0x23f9a0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x23F9A0u;
    {
        const bool branch_taken_0x23f9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9A0u;
        // 0x23f9a4: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9a0) {
            ctx->pc = 0x23FA2Cu;
            goto label_23fa2c;
        }
    }
label_23f9a8:
    // 0x23f9a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23f9ac: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9b0: 0x8c500488  lw          $s0, 0x488($v0)
    ctx->pc = 0x23f9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1160)));
    // 0x23f9b4: 0x8c51048c  lw          $s1, 0x48C($v0)
    ctx->pc = 0x23f9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1164)));
    // 0x23f9b8: 0x2028021  addu        $s0, $s0, $v0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23f9bc: 0xc09d91a  jal         func_276468
    SET_GPR_U32(ctx, 31, 0x23F9C4u);
    ctx->pc = 0x23F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9BCu;
    // 0x23f9c0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Get_Byte_17C3_NZ_2_276468_0x276468, 0x276468u, 0x23f9c4u)) {
        return;
    }
label_23f9c4:
    // 0x23f9c4: 0x44806000  mtc1        $zero, $f12
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f9c8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23f9cc: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9d0: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9d4: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9d8: 0x24070003  addiu       $a3, $zero, 0x3
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f9dc: 0xc0aa15e  jal         func_2A8578
    SET_GPR_U32(ctx, 31, 0x23F9E4u);
    ctx->pc = 0x23F9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9DCu;
    // 0x23f9e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002A8578_0x2a8578, 0x2a8578u, 0x23f9e4u)) {
        return;
    }
label_23f9e4:
    // 0x23f9e4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x23f9e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x23f9e8: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f9ec: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x23f9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_23f9f0:
    // 0x23f9f0: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x23F9F8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9F0u;
    // 0x23f9f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23F9F0u, 0x23F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_23f9f8:
    // 0x23f9f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F9F8u;
    {
        const bool branch_taken_0x23f9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f9f8) {
            ctx->pc = 0x23FA08u;
            goto label_23fa08;
        }
    }
    // 0x23fa00: 0xc09c176  jal         func_2705D8
    SET_GPR_U32(ctx, 31, 0x23FA08u);
    ctx->pc = 0x23FA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA00u;
    // 0x23fa04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002705D8_0x2705d8, 0x2705d8u, 0x23fa08u)) {
        return;
    }
label_23fa08:
    // 0x23fa08: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23fa0c: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23fa10: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa14: 0xc053e7c  jal         func_14F9F0
    SET_GPR_U32(ctx, 31, 0x23FA1Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA14u;
    // 0x23fa18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23FA14u, 0x23FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_23fa1c:
    // 0x23fa1c: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23fa20: 0xc053e4a  jal         func_14F928
    SET_GPR_U32(ctx, 31, 0x23FA28u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA20u;
    // 0x23fa24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23FA20u, 0x23FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_23fa28:
    // 0x23fa28: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x23fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_23fa2c:
    // 0x23fa2c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FA2Cu;
    {
        const bool branch_taken_0x23fa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA2Cu;
        // 0x23fa30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa2c) {
            ctx->pc = 0x23FA70u;
            goto label_23fa70;
        }
    }
    // 0x23fa34: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23fa34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23fa38: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23fa3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23FA3Cu;
    {
        const bool branch_taken_0x23fa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA3Cu;
        // 0x23fa40: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa3c) {
            ctx->pc = 0x23FA74u;
            goto label_23fa74;
        }
    }
    // 0x23fa44: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x23fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x23fa48: 0x3c013fc0  lui         $at, 0x3FC0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x23fa4c: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23fa50: 0xc0b76ac  jal         func_2DDAB0
    SET_GPR_U32(ctx, 31, 0x23FA58u);
    ctx->pc = 0x23FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA50u;
    // 0x23fa54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002DDAB0_0x2ddab0, 0x2ddab0u, 0x23fa58u)) {
        return;
    }
label_23fa58:
    // 0x23fa58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FA58u;
    {
        const bool branch_taken_0x23fa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA58u;
        // 0x23fa5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa58) {
            ctx->pc = 0x23FA6Cu;
            goto label_23fa6c;
        }
    }
    // 0x23fa60: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa64: 0xc09aac8  jal         func_26AB20
    SET_GPR_U32(ctx, 31, 0x23FA6Cu);
    ctx->pc = 0x23FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA64u;
    // 0x23fa68: 0x94a602fe  lhu         $a2, 0x2FE($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0026AB20_0x26ab20, 0x26ab20u, 0x23fa6cu)) {
        return;
    }
label_23fa6c:
    // 0x23fa6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23fa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23fa70:
    // 0x23fa70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23fa70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23fa74:
    // 0x23fa74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23fa74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fa78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fa7c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x23fa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23fa80: 0x3e00008  jr          $ra
    ctx->pc = 0x23FA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA80u;
        // 0x23fa84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FA88u;
}