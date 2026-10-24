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

// Function: func_002426A0
// Address: 0x2426a0 - 0x242880
void func_002426A0_0x2426a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002426A0_0x2426a0");
#endif

    switch (ctx->pc) {
        case 0x2426c8u: goto label_2426c8;
        case 0x24272cu: goto label_24272c;
        case 0x242774u: goto label_242774;
        case 0x2427a4u: goto label_2427a4;
        case 0x2427b0u: goto label_2427b0;
        case 0x2427bcu: goto label_2427bc;
        case 0x2427e0u: goto label_2427e0;
        case 0x242804u: goto label_242804;
        case 0x242830u: goto label_242830;
        case 0x242844u: goto label_242844;
        case 0x242860u: goto label_242860;
        case 0x24286cu: goto label_24286c;
        default: break;
    }

    ctx->pc = 0x2426a0u;

    // 0x2426a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2426a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2426a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2426a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2426a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2426a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2426ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2426acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2426b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2426b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2426b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2426b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2426b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2426b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2426bc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2426bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2426c0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2426C0u;
    SET_GPR_U32(ctx, 31, 0x2426C8u);
    ctx->pc = 0x2426C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2426C0u;
    // 0x2426c4: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2426C0u, 0x2426C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2426C8u;
label_2426c8:
    // 0x2426c8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2426c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x2426cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2426ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2426d0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2426d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2426d4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2426d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2426d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2426d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2426dc: 0x920602f6  lbu         $a2, 0x2F6($s0)
    ctx->pc = 0x2426dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2426e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2426e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2426e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2426e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2426e8: 0x10c5002a  beq         $a2, $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2426E8u;
    {
        const bool branch_taken_0x2426e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2426ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426E8u;
        // 0x2426ec: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426e8) {
            ctx->pc = 0x242794u;
            goto label_242794;
        }
    }
    ctx->pc = 0x2426F0u;
    // 0x2426f0: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2426f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2426f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2426F4u;
    {
        const bool branch_taken_0x2426f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2426f4) {
            ctx->pc = 0x2426F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2426F4u;
            // 0x2426f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24270Cu;
            goto label_24270c;
        }
    }
    ctx->pc = 0x2426FCu;
    // 0x2426fc: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2426FCu;
    {
        const bool branch_taken_0x2426fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2426fc) {
            ctx->pc = 0x242724u;
            goto label_242724;
        }
    }
    ctx->pc = 0x242704u;
    // 0x242704: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x242704u;
    {
        const bool branch_taken_0x242704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242704u;
        // 0x242708: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242704) {
            ctx->pc = 0x242870u;
            goto label_242870;
        }
    }
    ctx->pc = 0x24270Cu;
label_24270c:
    // 0x24270c: 0x10c2003b  beq         $a2, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x24270Cu;
    {
        const bool branch_taken_0x24270c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x242710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24270Cu;
        // 0x242710: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24270c) {
            ctx->pc = 0x2427FCu;
            goto label_2427fc;
        }
    }
    ctx->pc = 0x242714u;
    // 0x242714: 0x10c20049  beq         $a2, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x242714u;
    {
        const bool branch_taken_0x242714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x242714) {
            ctx->pc = 0x24283Cu;
            goto label_24283c;
        }
    }
    ctx->pc = 0x24271Cu;
    // 0x24271c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x24271Cu;
    {
        const bool branch_taken_0x24271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24271Cu;
        // 0x242720: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24271c) {
            ctx->pc = 0x242870u;
            goto label_242870;
        }
    }
    ctx->pc = 0x242724u;
label_242724:
    // 0x242724: 0xc09d91a  jal         func_276468
    ctx->pc = 0x242724u;
    SET_GPR_U32(ctx, 31, 0x24272Cu);
    ctx->pc = 0x242728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242724u;
    // 0x242728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x242724u, 0x24272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24272Cu;
label_24272c:
    // 0x24272c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24272cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x242730: 0x8e060564  lw          $a2, 0x564($s0)
    ctx->pc = 0x242730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x242734: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x242734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x242738: 0x24050215  addiu       $a1, $zero, 0x215
    ctx->pc = 0x242738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
    // 0x24273c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24273cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242740: 0x8c4303f4  lw          $v1, 0x3F4($v0)
    ctx->pc = 0x242740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1012)));
    // 0x242744: 0x8c4403f8  lw          $a0, 0x3F8($v0)
    ctx->pc = 0x242744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
    // 0x242748: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24274c: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24274Cu;
    {
        const bool branch_taken_0x24274c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x242750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24274Cu;
        // 0x242750: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24274c) {
            ctx->pc = 0x24275Cu;
            goto label_24275c;
        }
    }
    ctx->pc = 0x242754u;
    // 0x242754: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x242754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x242758: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x242758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24275c:
    // 0x24275c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24275cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242760: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x242760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242768: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x242768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24276c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24276Cu;
    SET_GPR_U32(ctx, 31, 0x242774u);
    ctx->pc = 0x242770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24276Cu;
    // 0x242770: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24276Cu, 0x242774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242774u;
label_242774:
    // 0x242774: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x242774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x242778: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x242778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x24277c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x24277cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x242780: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x242780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x242784: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x242784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x242788: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x242788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24278c: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x24278cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x242790: 0xa20402f6  sb          $a0, 0x2F6($s0)
    ctx->pc = 0x242790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 4));
label_242794:
    // 0x242794: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242798: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24279c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24279Cu;
    SET_GPR_U32(ctx, 31, 0x2427A4u);
    ctx->pc = 0x2427A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24279Cu;
    // 0x2427a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24279Cu, 0x2427A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2427A4u;
label_2427a4:
    // 0x2427a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2427a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2427a8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2427A8u;
    SET_GPR_U32(ctx, 31, 0x2427B0u);
    ctx->pc = 0x2427ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427A8u;
    // 0x2427ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2427A8u, 0x2427B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2427B0u;
label_2427b0:
    // 0x2427b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2427b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2427b4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2427B4u;
    SET_GPR_U32(ctx, 31, 0x2427BCu);
    ctx->pc = 0x2427B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427B4u;
    // 0x2427b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2427B4u, 0x2427BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2427BCu;
label_2427bc:
    // 0x2427bc: 0xc60116c0  lwc1        $f1, 0x16C0($s0)
    ctx->pc = 0x2427bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2427c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2427c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2427c4: 0x0  nop
    ctx->pc = 0x2427c4u;
    // NOP
    // 0x2427c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2427c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2427cc: 0x0  nop
    ctx->pc = 0x2427ccu;
    // NOP
    // 0x2427d0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2427D0u;
    {
        const bool branch_taken_0x2427d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2427d0) {
            ctx->pc = 0x2427D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2427D0u;
            // 0x2427d4: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2427E4u;
            goto label_2427e4;
        }
    }
    ctx->pc = 0x2427D8u;
    // 0x2427d8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2427D8u;
    SET_GPR_U32(ctx, 31, 0x2427E0u);
    ctx->pc = 0x2427DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427D8u;
    // 0x2427dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2427D8u, 0x2427E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2427E0u;
label_2427e0:
    // 0x2427e0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2427e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_2427e4:
    // 0x2427e4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2427e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2427e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2427e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2427ec: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2427ECu;
    {
        const bool branch_taken_0x2427ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2427F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427ECu;
        // 0x2427f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427ec) {
            ctx->pc = 0x24286Cu;
            goto label_24286c;
        }
    }
    ctx->pc = 0x2427F4u;
    // 0x2427f4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2427F4u;
    {
        const bool branch_taken_0x2427f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2427F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427F4u;
        // 0x2427f8: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427f4) {
            ctx->pc = 0x24286Cu;
            goto label_24286c;
        }
    }
    ctx->pc = 0x2427FCu;
label_2427fc:
    // 0x2427fc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2427FCu;
    SET_GPR_U32(ctx, 31, 0x242804u);
    ctx->pc = 0x242800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427FCu;
    // 0x242800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2427FCu, 0x242804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242804u;
label_242804:
    // 0x242804: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x242804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x242808: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x242808u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24280c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24280cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242814: 0x8c651b58  lw          $a1, 0x1B58($v1)
    ctx->pc = 0x242814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7000)));
    // 0x242818: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x242818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24281c: 0x8c661b5c  lw          $a2, 0x1B5C($v1)
    ctx->pc = 0x24281cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7004)));
    // 0x242820: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x242820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242824: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x242824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x242828: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x242828u;
    SET_GPR_U32(ctx, 31, 0x242830u);
    ctx->pc = 0x24282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242828u;
    // 0x24282c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x242828u, 0x242830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242830u;
label_242830:
    // 0x242830: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x242830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x242834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242838: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x242838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24283c:
    // 0x24283c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24283Cu;
    SET_GPR_U32(ctx, 31, 0x242844u);
    ctx->pc = 0x242840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24283Cu;
    // 0x242840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24283Cu, 0x242844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242844u;
label_242844:
    // 0x242844: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242844u;
    {
        const bool branch_taken_0x242844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242844) {
            ctx->pc = 0x242848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242844u;
            // 0x242848: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24284Cu;
            goto label_24284c;
        }
    }
    ctx->pc = 0x24284Cu;
label_24284c:
    // 0x24284c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242850: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x242854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242858: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x242858u;
    SET_GPR_U32(ctx, 31, 0x242860u);
    ctx->pc = 0x24285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242858u;
    // 0x24285c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x242858u, 0x242860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242860u;
label_242860:
    // 0x242860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242864: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x242864u;
    SET_GPR_U32(ctx, 31, 0x24286Cu);
    ctx->pc = 0x242868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242864u;
    // 0x242868: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x242864u, 0x24286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24286Cu;
label_24286c:
    // 0x24286c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24286cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_242870:
    // 0x242870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242874: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x242874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x242878: 0x3e00008  jr          $ra
    ctx->pc = 0x242878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242878u;
        // 0x24287c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242880u;
}
