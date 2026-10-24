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

// Function: func_00278C30
// Address: 0x278c30 - 0x278e18
void func_00278C30_0x278c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00278C30_0x278c30");
#endif

    switch (ctx->pc) {
        case 0x278ca8u: goto label_278ca8;
        case 0x278cf4u: goto label_278cf4;
        case 0x278d08u: goto label_278d08;
        case 0x278d18u: goto label_278d18;
        case 0x278d3cu: goto label_278d3c;
        case 0x278d48u: goto label_278d48;
        case 0x278d7cu: goto label_278d7c;
        case 0x278d90u: goto label_278d90;
        case 0x278da0u: goto label_278da0;
        case 0x278dc0u: goto label_278dc0;
        case 0x278dccu: goto label_278dcc;
        case 0x278de8u: goto label_278de8;
        default: break;
    }

    ctx->pc = 0x278c30u;

    // 0x278c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x278c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x278c34: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x278c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x278c38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x278c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x278c3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x278c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x278c40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c44: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x278c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x278c48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x278c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278c50: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x278c50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x278c54: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x278c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x278c58: 0x10710029  beq         $v1, $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x278C58u;
    {
        const bool branch_taken_0x278c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x278C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C58u;
        // 0x278c5c: 0x8c526a7c  lw          $s2, 0x6A7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c58) {
            ctx->pc = 0x278D00u;
            goto label_278d00;
        }
    }
    ctx->pc = 0x278C60u;
    // 0x278c60: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x278c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x278c64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x278C64u;
    {
        const bool branch_taken_0x278c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278c64) {
            ctx->pc = 0x278C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278C64u;
            // 0x278c68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278C7Cu;
            goto label_278c7c;
        }
    }
    ctx->pc = 0x278C6Cu;
    // 0x278c6c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x278C6Cu;
    {
        const bool branch_taken_0x278c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x278c6c) {
            ctx->pc = 0x278C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278C6Cu;
            // 0x278c70: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278C94u;
            goto label_278c94;
        }
    }
    ctx->pc = 0x278C74u;
    // 0x278c74: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x278C74u;
    {
        const bool branch_taken_0x278c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278c74) {
            ctx->pc = 0x278DCCu;
            goto label_278dcc;
        }
    }
    ctx->pc = 0x278C7Cu;
label_278c7c:
    // 0x278c7c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x278C7Cu;
    {
        const bool branch_taken_0x278c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x278C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C7Cu;
        // 0x278c80: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c7c) {
            ctx->pc = 0x278D50u;
            goto label_278d50;
        }
    }
    ctx->pc = 0x278C84u;
    // 0x278c84: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x278C84u;
    {
        const bool branch_taken_0x278c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278c84) {
            ctx->pc = 0x278D88u;
            goto label_278d88;
        }
    }
    ctx->pc = 0x278C8Cu;
    // 0x278c8c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x278C8Cu;
    {
        const bool branch_taken_0x278c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278c8c) {
            ctx->pc = 0x278DCCu;
            goto label_278dcc;
        }
    }
    ctx->pc = 0x278C94u;
label_278c94:
    // 0x278c94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x278c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278c98: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x278C98u;
    {
        const bool branch_taken_0x278c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278c98) {
            ctx->pc = 0x278C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278C98u;
            // 0x278c9c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278CCCu;
            goto label_278ccc;
        }
    }
    ctx->pc = 0x278CA0u;
    // 0x278ca0: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x278CA0u;
    SET_GPR_U32(ctx, 31, 0x278CA8u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x278CA0u, 0x278CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CA8u;
label_278ca8:
    // 0x278ca8: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x278ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x278cac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x278cacu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x278cb0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x278CB0u;
    {
        const bool branch_taken_0x278cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x278cb0) {
            ctx->pc = 0x278CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278CB0u;
            // 0x278cb4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x278CB8u;
            goto label_278cb8;
        }
    }
    ctx->pc = 0x278CB8u;
label_278cb8:
    // 0x278cb8: 0x2010  mfhi        $a0
    ctx->pc = 0x278cb8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x278cbc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x278cbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278cc0: 0x0  nop
    ctx->pc = 0x278cc0u;
    // NOP
    // 0x278cc4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x278cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x278cc8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x278cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_278ccc:
    // 0x278ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278cd0: 0xa21102f7  sb          $s1, 0x2F7($s0)
    ctx->pc = 0x278cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 17));
    // 0x278cd4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x278cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x278cd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x278cd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278cdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x278cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ce0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x278ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x278ce4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x278ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x278ce8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x278ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x278cec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x278CECu;
    SET_GPR_U32(ctx, 31, 0x278CF4u);
    ctx->pc = 0x278CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278CECu;
    // 0x278cf0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x278CECu, 0x278CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CF4u;
label_278cf4:
    // 0x278cf4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x278cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x278cf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278cfc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x278cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_278d00:
    // 0x278d00: 0xc055f06  jal         func_157C18
    ctx->pc = 0x278D00u;
    SET_GPR_U32(ctx, 31, 0x278D08u);
    ctx->pc = 0x278D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D00u;
    // 0x278d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x278D00u, 0x278D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D08u;
label_278d08:
    // 0x278d08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278D08u;
    {
        const bool branch_taken_0x278d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278d08) {
            ctx->pc = 0x278D28u;
            goto label_278d28;
        }
    }
    ctx->pc = 0x278D10u;
    // 0x278d10: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x278D10u;
    SET_GPR_U32(ctx, 31, 0x278D18u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x278D10u, 0x278D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D18u;
label_278d18:
    // 0x278d18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x278d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x278d1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x278D1Cu;
    {
        const bool branch_taken_0x278d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D1Cu;
        // 0x278d20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d1c) {
            ctx->pc = 0x278D28u;
            goto label_278d28;
        }
    }
    ctx->pc = 0x278D24u;
    // 0x278d24: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x278d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_278d28:
    // 0x278d28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278d2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x278d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d34: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x278D34u;
    SET_GPR_U32(ctx, 31, 0x278D3Cu);
    ctx->pc = 0x278D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D34u;
    // 0x278d38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x278D34u, 0x278D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D3Cu;
label_278d3c:
    // 0x278d3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x278d3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x278d40: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x278D40u;
    SET_GPR_U32(ctx, 31, 0x278D48u);
    ctx->pc = 0x278D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D40u;
    // 0x278d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x278D40u, 0x278D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D48u;
label_278d48:
    // 0x278d48: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x278D48u;
    {
        const bool branch_taken_0x278d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278d48) {
            ctx->pc = 0x278DCCu;
            goto label_278dcc;
        }
    }
    ctx->pc = 0x278D50u;
label_278d50:
    // 0x278d50: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x278d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x278d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x278d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278d5c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x278d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x278d60: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x278d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x278d64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x278d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d68: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x278d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x278d6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x278d6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d70: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x278d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x278d74: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x278D74u;
    SET_GPR_U32(ctx, 31, 0x278D7Cu);
    ctx->pc = 0x278D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D74u;
    // 0x278d78: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x278D74u, 0x278D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D7Cu;
label_278d7c:
    // 0x278d7c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x278d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x278d80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278d84: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x278d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_278d88:
    // 0x278d88: 0xc055f06  jal         func_157C18
    ctx->pc = 0x278D88u;
    SET_GPR_U32(ctx, 31, 0x278D90u);
    ctx->pc = 0x278D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D88u;
    // 0x278d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x278D88u, 0x278D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D90u;
label_278d90:
    // 0x278d90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x278D90u;
    {
        const bool branch_taken_0x278d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278d90) {
            ctx->pc = 0x278DACu;
            goto label_278dac;
        }
    }
    ctx->pc = 0x278D98u;
    // 0x278d98: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x278D98u;
    SET_GPR_U32(ctx, 31, 0x278DA0u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x278D98u, 0x278DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DA0u;
label_278da0:
    // 0x278da0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x278da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x278da4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x278DA4u;
    {
        const bool branch_taken_0x278da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278da4) {
            ctx->pc = 0x278DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278DA4u;
            // 0x278da8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278DACu;
            goto label_278dac;
        }
    }
    ctx->pc = 0x278DACu;
label_278dac:
    // 0x278dac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278db0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x278db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278db8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x278DB8u;
    SET_GPR_U32(ctx, 31, 0x278DC0u);
    ctx->pc = 0x278DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278DB8u;
    // 0x278dbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x278DB8u, 0x278DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DC0u;
label_278dc0:
    // 0x278dc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x278dc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x278dc4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x278DC4u;
    SET_GPR_U32(ctx, 31, 0x278DCCu);
    ctx->pc = 0x278DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278DC4u;
    // 0x278dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x278DC4u, 0x278DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DCCu;
label_278dcc:
    // 0x278dcc: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x278DCCu;
    {
        const bool branch_taken_0x278dcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x278DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DCCu;
        // 0x278dd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278dcc) {
            ctx->pc = 0x278DFCu;
            goto label_278dfc;
        }
    }
    ctx->pc = 0x278DD4u;
    // 0x278dd4: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x278dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
    // 0x278dd8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x278DD8u;
    {
        const bool branch_taken_0x278dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x278dd8) {
            ctx->pc = 0x278DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278DD8u;
            // 0x278ddc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278E00u;
            goto label_278e00;
        }
    }
    ctx->pc = 0x278DE0u;
    // 0x278de0: 0xc09e708  jal         func_279C20
    ctx->pc = 0x278DE0u;
    SET_GPR_U32(ctx, 31, 0x278DE8u);
    ctx->pc = 0x278DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278DE0u;
    // 0x278de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279C20u, 0x278DE0u, 0x278DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DE8u;
label_278de8:
    // 0x278de8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x278de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x278dec: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x278decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x278df0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x278df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x278df4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x278df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x278df8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x278df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_278dfc:
    // 0x278dfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x278dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_278e00:
    // 0x278e00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x278e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278e04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x278e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278e0c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x278e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x278e10: 0x3e00008  jr          $ra
    ctx->pc = 0x278E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E10u;
        // 0x278e14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278E18u;
}
