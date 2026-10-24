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

// Function: func_00277858
// Address: 0x277858 - 0x277a48
void func_00277858_0x277858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00277858_0x277858");
#endif

    switch (ctx->pc) {
        case 0x2778d4u: goto label_2778d4;
        case 0x2778e8u: goto label_2778e8;
        case 0x277908u: goto label_277908;
        case 0x277910u: goto label_277910;
        case 0x277920u: goto label_277920;
        case 0x27794cu: goto label_27794c;
        case 0x277958u: goto label_277958;
        case 0x27798cu: goto label_27798c;
        case 0x2779a0u: goto label_2779a0;
        case 0x2779c0u: goto label_2779c0;
        case 0x2779c8u: goto label_2779c8;
        case 0x2779d8u: goto label_2779d8;
        case 0x2779f8u: goto label_2779f8;
        case 0x277a04u: goto label_277a04;
        case 0x277a18u: goto label_277a18;
        default: break;
    }

    ctx->pc = 0x277858u;

    // 0x277858: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27785c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277860: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x277860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x277864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27786c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x27786cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x277870: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x277870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277874: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x277874u;
    {
        const bool branch_taken_0x277874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x277878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277874u;
        // 0x277878: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277874) {
            ctx->pc = 0x2778E0u;
            goto label_2778e0;
        }
    }
    ctx->pc = 0x27787Cu;
    // 0x27787c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27787Cu;
    {
        const bool branch_taken_0x27787c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27787Cu;
        // 0x277880: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27787c) {
            ctx->pc = 0x277894u;
            goto label_277894;
        }
    }
    ctx->pc = 0x277884u;
    // 0x277884: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x277884u;
    {
        const bool branch_taken_0x277884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x277884) {
            ctx->pc = 0x277888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277884u;
            // 0x277888: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2778ACu;
            goto label_2778ac;
        }
    }
    ctx->pc = 0x27788Cu;
    // 0x27788c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x27788Cu;
    {
        const bool branch_taken_0x27788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27788Cu;
        // 0x277890: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27788c) {
            ctx->pc = 0x277A08u;
            goto label_277a08;
        }
    }
    ctx->pc = 0x277894u;
label_277894:
    // 0x277894: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x277894u;
    {
        const bool branch_taken_0x277894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x277898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277894u;
        // 0x277898: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277894) {
            ctx->pc = 0x277960u;
            goto label_277960;
        }
    }
    ctx->pc = 0x27789Cu;
    // 0x27789c: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x27789Cu;
    {
        const bool branch_taken_0x27789c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27789c) {
            ctx->pc = 0x277998u;
            goto label_277998;
        }
    }
    ctx->pc = 0x2778A4u;
    // 0x2778a4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2778A4u;
    {
        const bool branch_taken_0x2778a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2778A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778A4u;
        // 0x2778a8: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778a4) {
            ctx->pc = 0x277A08u;
            goto label_277a08;
        }
    }
    ctx->pc = 0x2778ACu;
label_2778ac:
    // 0x2778ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2778acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2778b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2778b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2778b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2778b8: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x2778b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2778bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2778bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778c0: 0x8c460068  lw          $a2, 0x68($v0)
    ctx->pc = 0x2778c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2778c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2778c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2778c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2778cc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2778CCu;
    SET_GPR_U32(ctx, 31, 0x2778D4u);
    ctx->pc = 0x2778D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2778CCu;
    // 0x2778d0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2778CCu, 0x2778D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2778D4u;
label_2778d4:
    // 0x2778d4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2778d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2778d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2778d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2778dc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2778dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2778e0:
    // 0x2778e0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2778E0u;
    SET_GPR_U32(ctx, 31, 0x2778E8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2778E0u, 0x2778E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2778E8u;
label_2778e8:
    // 0x2778e8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2778e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2778ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2778ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778f0: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2778f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2778f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2778f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2778f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2778f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2778fc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2778fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x277900: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x277900u;
    SET_GPR_U32(ctx, 31, 0x277908u);
    ctx->pc = 0x277904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277900u;
    // 0x277904: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x277900u, 0x277908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277908u;
label_277908:
    // 0x277908: 0xc055f06  jal         func_157C18
    ctx->pc = 0x277908u;
    SET_GPR_U32(ctx, 31, 0x277910u);
    ctx->pc = 0x27790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277908u;
    // 0x27790c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x277908u, 0x277910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277910u;
label_277910:
    // 0x277910: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x277910u;
    {
        const bool branch_taken_0x277910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277910) {
            ctx->pc = 0x277938u;
            goto label_277938;
        }
    }
    ctx->pc = 0x277918u;
    // 0x277918: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x277918u;
    SET_GPR_U32(ctx, 31, 0x277920u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x277918u, 0x277920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277920u;
label_277920:
    // 0x277920: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x277920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x277924: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277924u;
    {
        const bool branch_taken_0x277924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277924) {
            ctx->pc = 0x277938u;
            goto label_277938;
        }
    }
    ctx->pc = 0x27792Cu;
    // 0x27792c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27792cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277930: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277934: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x277934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_277938:
    // 0x277938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27793c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27793cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x277940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277944: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x277944u;
    SET_GPR_U32(ctx, 31, 0x27794Cu);
    ctx->pc = 0x277948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277944u;
    // 0x277948: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x277944u, 0x27794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27794Cu;
label_27794c:
    // 0x27794c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27794cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x277950: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x277950u;
    SET_GPR_U32(ctx, 31, 0x277958u);
    ctx->pc = 0x277954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277950u;
    // 0x277954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x277950u, 0x277958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277958u;
label_277958:
    // 0x277958: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x277958u;
    {
        const bool branch_taken_0x277958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277958u;
        // 0x27795c: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277958) {
            ctx->pc = 0x277A08u;
            goto label_277a08;
        }
    }
    ctx->pc = 0x277960u;
label_277960:
    // 0x277960: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x277960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x277964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277968: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27796c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x27796cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277970: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x277970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x277974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x277974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277978: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x277978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27797c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27797cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277980: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x277980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x277984: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x277984u;
    SET_GPR_U32(ctx, 31, 0x27798Cu);
    ctx->pc = 0x277988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277984u;
    // 0x277988: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x277984u, 0x27798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27798Cu;
label_27798c:
    // 0x27798c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27798cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277994: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x277994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_277998:
    // 0x277998: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x277998u;
    SET_GPR_U32(ctx, 31, 0x2779A0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x277998u, 0x2779A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779A0u;
label_2779a0:
    // 0x2779a0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2779a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2779a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2779a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779a8: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2779a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2779ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2779acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2779b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2779b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2779b4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2779b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2779b8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2779B8u;
    SET_GPR_U32(ctx, 31, 0x2779C0u);
    ctx->pc = 0x2779BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2779B8u;
    // 0x2779bc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2779B8u, 0x2779C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779C0u;
label_2779c0:
    // 0x2779c0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2779C0u;
    SET_GPR_U32(ctx, 31, 0x2779C8u);
    ctx->pc = 0x2779C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2779C0u;
    // 0x2779c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2779C0u, 0x2779C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779C8u;
label_2779c8:
    // 0x2779c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2779C8u;
    {
        const bool branch_taken_0x2779c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2779c8) {
            ctx->pc = 0x2779E4u;
            goto label_2779e4;
        }
    }
    ctx->pc = 0x2779D0u;
    // 0x2779d0: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x2779D0u;
    SET_GPR_U32(ctx, 31, 0x2779D8u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x2779D0u, 0x2779D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779D8u;
label_2779d8:
    // 0x2779d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2779d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2779dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2779DCu;
    {
        const bool branch_taken_0x2779dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2779dc) {
            ctx->pc = 0x2779E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2779DCu;
            // 0x2779e0: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2779E4u;
            goto label_2779e4;
        }
    }
    ctx->pc = 0x2779E4u;
label_2779e4:
    // 0x2779e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2779e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2779e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2779e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2779ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2779ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779f0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2779F0u;
    SET_GPR_U32(ctx, 31, 0x2779F8u);
    ctx->pc = 0x2779F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2779F0u;
    // 0x2779f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2779F0u, 0x2779F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779F8u;
label_2779f8:
    // 0x2779f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2779f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2779fc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2779FCu;
    SET_GPR_U32(ctx, 31, 0x277A04u);
    ctx->pc = 0x277A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2779FCu;
    // 0x277a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2779FCu, 0x277A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A04u;
label_277a04:
    // 0x277a04: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x277a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_277a08:
    // 0x277a08: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x277a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x277a0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x277a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277a10: 0xc0b76ac  jal         func_2DDAB0
    ctx->pc = 0x277A10u;
    SET_GPR_U32(ctx, 31, 0x277A18u);
    ctx->pc = 0x277A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277A10u;
    // 0x277a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDAB0u, 0x277A10u, 0x277A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A18u;
label_277a18:
    // 0x277a18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277A18u;
    {
        const bool branch_taken_0x277a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A18u;
        // 0x277a1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a18) {
            ctx->pc = 0x277A30u;
            goto label_277a30;
        }
    }
    ctx->pc = 0x277A20u;
    // 0x277a20: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x277a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x277a24: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x277a24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x277a28: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x277a28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x277a2c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x277a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_277a30:
    // 0x277a30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x277a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277a38: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x277a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x277A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A3Cu;
        // 0x277a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277A44u;
    // 0x277a44: 0x0  nop
    ctx->pc = 0x277a44u;
    // NOP
    ctx->pc = 0x277a48u;
}
