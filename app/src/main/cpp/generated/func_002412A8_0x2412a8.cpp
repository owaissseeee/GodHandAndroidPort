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

// Function: func_002412A8
// Address: 0x2412a8 - 0x241500
void func_002412A8_0x2412a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002412A8_0x2412a8");
#endif

    switch (ctx->pc) {
        case 0x241324u: goto label_241324;
        case 0x241364u: goto label_241364;
        case 0x24138cu: goto label_24138c;
        case 0x2413a0u: goto label_2413a0;
        case 0x2413d8u: goto label_2413d8;
        case 0x241420u: goto label_241420;
        case 0x24142cu: goto label_24142c;
        case 0x241438u: goto label_241438;
        case 0x241488u: goto label_241488;
        default: break;
    }

    ctx->pc = 0x2412a8u;

    // 0x2412a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2412a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2412ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2412acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2412b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2412b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2412b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2412b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2412b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2412b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2412bc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2412bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2412c0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2412c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2412c4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2412C4u;
    {
        const bool branch_taken_0x2412c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2412C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412C4u;
        // 0x2412c8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412c4) {
            ctx->pc = 0x241338u;
            goto label_241338;
        }
    }
    ctx->pc = 0x2412CCu;
    // 0x2412cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2412CCu;
    {
        const bool branch_taken_0x2412cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412cc) {
            ctx->pc = 0x2412D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2412CCu;
            // 0x2412d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2412E4u;
            goto label_2412e4;
        }
    }
    ctx->pc = 0x2412D4u;
    // 0x2412d4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2412D4u;
    {
        const bool branch_taken_0x2412d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412d4) {
            ctx->pc = 0x2412D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2412D4u;
            // 0x2412d8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2412FCu;
            goto label_2412fc;
        }
    }
    ctx->pc = 0x2412DCu;
    // 0x2412dc: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2412DCu;
    {
        const bool branch_taken_0x2412dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412DCu;
        // 0x2412e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412dc) {
            ctx->pc = 0x2414ECu;
            goto label_2414ec;
        }
    }
    ctx->pc = 0x2412E4u;
label_2412e4:
    // 0x2412e4: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2412E4u;
    {
        const bool branch_taken_0x2412e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2412E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412E4u;
        // 0x2412e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412e4) {
            ctx->pc = 0x2413A8u;
            goto label_2413a8;
        }
    }
    ctx->pc = 0x2412ECu;
    // 0x2412ec: 0x50620040  beql        $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2412ECu;
    {
        const bool branch_taken_0x2412ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2412ec) {
            ctx->pc = 0x2412F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2412ECu;
            // 0x2412f0: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2413F0u;
            goto label_2413f0;
        }
    }
    ctx->pc = 0x2412F4u;
    // 0x2412f4: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2412F4u;
    {
        const bool branch_taken_0x2412f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412F4u;
        // 0x2412f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412f4) {
            ctx->pc = 0x2414ECu;
            goto label_2414ec;
        }
    }
    ctx->pc = 0x2412FCu;
label_2412fc:
    // 0x2412fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2412fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241300: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x241304: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x241304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241308: 0x8c451a50  lw          $a1, 0x1A50($v0)
    ctx->pc = 0x241308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6736)));
    // 0x24130c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24130cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241310: 0x8c461a54  lw          $a2, 0x1A54($v0)
    ctx->pc = 0x241310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6740)));
    // 0x241314: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241318: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x241318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24131c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24131Cu;
    SET_GPR_U32(ctx, 31, 0x241324u);
    ctx->pc = 0x241320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24131Cu;
    // 0x241320: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24131Cu, 0x241324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241324u;
label_241324:
    // 0x241324: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x241324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x241328: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x241328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24132c: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x24132cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x241330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x241330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x241334: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x241334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_241338:
    // 0x241338: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x241338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24133c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24133cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x241340: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x241340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x241344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241348: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x241348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x24134c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x241350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241354: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x241354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241358: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x241358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x24135c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24135Cu;
    SET_GPR_U32(ctx, 31, 0x241364u);
    ctx->pc = 0x241360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24135Cu;
    // 0x241360: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24135Cu, 0x241364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241364u;
label_241364:
    // 0x241364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241364u;
    {
        const bool branch_taken_0x241364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241364) {
            ctx->pc = 0x241378u;
            goto label_241378;
        }
    }
    ctx->pc = 0x24136Cu;
    // 0x24136c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24136cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x241370: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x241370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x241374: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x241374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_241378:
    // 0x241378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24137c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24137cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x241380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241384: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x241384u;
    SET_GPR_U32(ctx, 31, 0x24138Cu);
    ctx->pc = 0x241388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241384u;
    // 0x241388: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x241384u, 0x24138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24138Cu;
label_24138c:
    // 0x24138c: 0xc60c0118  lwc1        $f12, 0x118($s0)
    ctx->pc = 0x24138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x241390: 0x0  nop
    ctx->pc = 0x241390u;
    // NOP
    // 0x241394: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x241394u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[12]);
    // 0x241398: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x241398u;
    SET_GPR_U32(ctx, 31, 0x2413A0u);
    ctx->pc = 0x24139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241398u;
    // 0x24139c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x241398u, 0x2413A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413A0u;
label_2413a0:
    // 0x2413a0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2413A0u;
    {
        const bool branch_taken_0x2413a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413A0u;
        // 0x2413a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413a0) {
            ctx->pc = 0x2414ECu;
            goto label_2414ec;
        }
    }
    ctx->pc = 0x2413A8u;
label_2413a8:
    // 0x2413a8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2413a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2413ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2413acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2413b0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2413b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2413b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2413b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2413b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2413b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2413bc: 0x8c4518f0  lw          $a1, 0x18F0($v0)
    ctx->pc = 0x2413bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x2413c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2413c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2413c4: 0x8c4618f4  lw          $a2, 0x18F4($v0)
    ctx->pc = 0x2413c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
    // 0x2413c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2413c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2413cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2413ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2413d0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2413D0u;
    SET_GPR_U32(ctx, 31, 0x2413D8u);
    ctx->pc = 0x2413D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2413D0u;
    // 0x2413d4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2413D0u, 0x2413D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413D8u;
label_2413d8:
    // 0x2413d8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2413d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2413dc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2413dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2413e0: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x2413e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x2413e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2413e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2413e8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2413e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2413ec: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2413ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_2413f0:
    // 0x2413f0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2413f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2413f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2413f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2413f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2413f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2413fc: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2413fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x241400: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x241400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x241404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241408: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x241408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x24140c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x24140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x241410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x241414: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x241414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x241418: 0xc055f06  jal         func_157C18
    ctx->pc = 0x241418u;
    SET_GPR_U32(ctx, 31, 0x241420u);
    ctx->pc = 0x24141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241418u;
    // 0x24141c: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x241418u, 0x241420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241420u;
label_241420:
    // 0x241420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241424: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x241424u;
    SET_GPR_U32(ctx, 31, 0x24142Cu);
    ctx->pc = 0x241428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241424u;
    // 0x241428: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x241424u, 0x24142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24142Cu;
label_24142c:
    // 0x24142c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24142cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x241430: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x241430u;
    SET_GPR_U32(ctx, 31, 0x241438u);
    ctx->pc = 0x241434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241430u;
    // 0x241434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x241430u, 0x241438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241438u;
label_241438:
    // 0x241438: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x241438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24143c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x24143cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x241440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x241440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x241444: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x241444u;
    {
        const bool branch_taken_0x241444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241444u;
        // 0x241448: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241444) {
            ctx->pc = 0x2414A8u;
            goto label_2414a8;
        }
    }
    ctx->pc = 0x24144Cu;
    // 0x24144c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24144cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241450: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x241450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x241454: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x241454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x241458: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x241458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24145c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x24145cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x241460: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x241460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x241464: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x241464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x241468: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x241468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x24146c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24146cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x241470: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x241470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x241474: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x241474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x241478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24147c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24147cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241480: 0xc0a4404  jal         func_291010
    ctx->pc = 0x241480u;
    SET_GPR_U32(ctx, 31, 0x241488u);
    ctx->pc = 0x241484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241480u;
    // 0x241484: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x241480u, 0x241488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241488u;
label_241488:
    // 0x241488: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x241488u;
    {
        const bool branch_taken_0x241488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241488) {
            ctx->pc = 0x24148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241488u;
            // 0x24148c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2414ECu;
            goto label_2414ec;
        }
    }
    ctx->pc = 0x241490u;
    // 0x241490: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x241490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x241494: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x241498: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x241498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24149c: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x24149Cu;
    {
        const bool branch_taken_0x24149c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2414A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24149Cu;
        // 0x2414a0: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24149c) {
            ctx->pc = 0x2414E8u;
            goto label_2414e8;
        }
    }
    ctx->pc = 0x2414A4u;
    // 0x2414a4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2414a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2414a8:
    // 0x2414a8: 0x260306d0  addiu       $v1, $s0, 0x6D0
    ctx->pc = 0x2414a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x2414ac: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2414ACu;
    {
        const bool branch_taken_0x2414ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2414ac) {
            ctx->pc = 0x2414B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2414ACu;
            // 0x2414b0: 0xc6000104  lwc1        $f0, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2414D0u;
            goto label_2414d0;
        }
    }
    ctx->pc = 0x2414B4u;
    // 0x2414b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2414b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2414b8: 0xe60006d0  swc1        $f0, 0x6D0($s0)
    ctx->pc = 0x2414b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1744), bits); }
    // 0x2414bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2414bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2414c0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2414c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2414c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2414c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2414c8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2414c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2414cc: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x2414ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2414d0:
    // 0x2414d0: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x2414d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2414d4: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2414d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2414d8: 0xe60006e0  swc1        $f0, 0x6E0($s0)
    ctx->pc = 0x2414d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1760), bits); }
    // 0x2414dc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2414dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2414e0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2414e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2414e4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2414e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_2414e8:
    // 0x2414e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2414e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2414ec:
    // 0x2414ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2414ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2414f0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2414f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2414f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2414F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2414F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414F4u;
        // 0x2414f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2414F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2414FCu;
    // 0x2414fc: 0x0  nop
    ctx->pc = 0x2414fcu;
    // NOP
    ctx->pc = 0x241500u;
}
