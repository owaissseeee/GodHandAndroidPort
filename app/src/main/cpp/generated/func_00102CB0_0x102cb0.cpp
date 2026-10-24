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

// Function: func_00102CB0
// Address: 0x102cb0 - 0x102de8
void func_00102CB0_0x102cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00102CB0_0x102cb0");
#endif

    switch (ctx->pc) {
        case 0x102d2cu: goto label_102d2c;
        case 0x102d80u: goto label_102d80;
        case 0x102d94u: goto label_102d94;
        case 0x102dc0u: goto label_102dc0;
        case 0x102dccu: goto label_102dcc;
        default: break;
    }

    ctx->pc = 0x102cb0u;

    // 0x102cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x102cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x102cb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x102cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x102cb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x102cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x102cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cc0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x102cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x102cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102cc8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x102cc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x102ccc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x102cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102cd0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102CD0u;
    {
        const bool branch_taken_0x102cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CD0u;
        // 0x102cd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cd0) {
            ctx->pc = 0x102CECu;
            goto label_102cec;
        }
    }
    ctx->pc = 0x102CD8u;
    // 0x102cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102cdc: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x102CDCu;
    {
        const bool branch_taken_0x102cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x102cdc) {
            ctx->pc = 0x102D8Cu;
            goto label_102d8c;
        }
    }
    ctx->pc = 0x102CE4u;
    // 0x102ce4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x102CE4u;
    {
        const bool branch_taken_0x102ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CE4u;
        // 0x102ce8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ce4) {
            ctx->pc = 0x102DD0u;
            goto label_102dd0;
        }
    }
    ctx->pc = 0x102CECu;
label_102cec:
    // 0x102cec: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x102cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x102cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102cf4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x102CF4u;
    {
        const bool branch_taken_0x102cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CF4u;
        // 0x102cf8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cf4) {
            ctx->pc = 0x102D38u;
            goto label_102d38;
        }
    }
    ctx->pc = 0x102CFCu;
    // 0x102cfc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x102CFCu;
    {
        const bool branch_taken_0x102cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102cfc) {
            ctx->pc = 0x102D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102CFCu;
            // 0x102d00: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102D18u;
            goto label_102d18;
        }
    }
    ctx->pc = 0x102D04u;
    // 0x102d04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x102d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102d08: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x102D08u;
    {
        const bool branch_taken_0x102d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D08u;
        // 0x102d0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d08) {
            ctx->pc = 0x102D48u;
            goto label_102d48;
        }
    }
    ctx->pc = 0x102D10u;
    // 0x102d10: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x102D10u;
    {
        const bool branch_taken_0x102d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D10u;
        // 0x102d14: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d10) {
            ctx->pc = 0x102D50u;
            goto label_102d50;
        }
    }
    ctx->pc = 0x102D18u;
label_102d18:
    // 0x102d18: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x102d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x102d1c: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x102d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x102d20: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x102d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102d24: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x102D24u;
    SET_GPR_U32(ctx, 31, 0x102D2Cu);
    ctx->pc = 0x102D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D24u;
    // 0x102d28: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x102D24u, 0x102D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D2Cu;
label_102d2c:
    // 0x102d2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x102d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x102d30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x102D30u;
    {
        const bool branch_taken_0x102d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D30u;
        // 0x102d34: 0x24040  sll         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d30) {
            ctx->pc = 0x102D64u;
            goto label_102d64;
        }
    }
    ctx->pc = 0x102D38u;
label_102d38:
    // 0x102d38: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x102d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x102d3c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x102d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x102d40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x102D40u;
    {
        const bool branch_taken_0x102d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D40u;
        // 0x102d44: 0x8c440068  lw          $a0, 0x68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d40) {
            ctx->pc = 0x102D5Cu;
            goto label_102d5c;
        }
    }
    ctx->pc = 0x102D48u;
label_102d48:
    // 0x102d48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x102D48u;
    {
        const bool branch_taken_0x102d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D48u;
        // 0x102d4c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d48) {
            ctx->pc = 0x102D54u;
            goto label_102d54;
        }
    }
    ctx->pc = 0x102D50u;
label_102d50:
    // 0x102d50: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x102d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_102d54:
    // 0x102d54: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x102d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x102d58: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x102d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_102d5c:
    // 0x102d5c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x102d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102d60: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x102d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_102d64:
    // 0x102d64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x102d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x102d68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x102d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d74: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x102d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x102d78: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x102D78u;
    SET_GPR_U32(ctx, 31, 0x102D80u);
    ctx->pc = 0x102D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D78u;
    // 0x102d7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x102D78u, 0x102D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D80u;
label_102d80:
    // 0x102d80: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x102d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102d84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102d88: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x102d88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_102d8c:
    // 0x102d8c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x102D8Cu;
    SET_GPR_U32(ctx, 31, 0x102D94u);
    ctx->pc = 0x102D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D8Cu;
    // 0x102d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x102D8Cu, 0x102D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D94u;
label_102d94:
    // 0x102d94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102D94u;
    {
        const bool branch_taken_0x102d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102d94) {
            ctx->pc = 0x102DACu;
            goto label_102dac;
        }
    }
    ctx->pc = 0x102D9Cu;
    // 0x102d9c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x102d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x102da0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x102da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x102da4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x102da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x102da8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x102da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_102dac:
    // 0x102dac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x102dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x102db0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x102db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x102db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102db8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x102DB8u;
    SET_GPR_U32(ctx, 31, 0x102DC0u);
    ctx->pc = 0x102DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102DB8u;
    // 0x102dbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x102DB8u, 0x102DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102DC0u;
label_102dc0:
    // 0x102dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102dc4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x102DC4u;
    SET_GPR_U32(ctx, 31, 0x102DCCu);
    ctx->pc = 0x102DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102DC4u;
    // 0x102dc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x102DC4u, 0x102DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102DCCu;
label_102dcc:
    // 0x102dcc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x102dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_102dd0:
    // 0x102dd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x102dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102dd4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x102dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102ddc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x102ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x102de0: 0x3e00008  jr          $ra
    ctx->pc = 0x102DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DE0u;
        // 0x102de4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102DE8u;
}
