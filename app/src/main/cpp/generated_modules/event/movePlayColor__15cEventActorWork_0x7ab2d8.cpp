#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlayColor__15cEventActorWork
// Address: 0x7ab2d8 - 0x7ab548
void movePlayColor__15cEventActorWork_0x7ab2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayColor__15cEventActorWork_0x7ab2d8");
#endif

    switch (ctx->pc) {
        case 0x7ab328u: goto label_7ab328;
        case 0x7ab340u: goto label_7ab340;
        case 0x7ab35cu: goto label_7ab35c;
        case 0x7ab374u: goto label_7ab374;
        case 0x7ab390u: goto label_7ab390;
        case 0x7ab3a8u: goto label_7ab3a8;
        case 0x7ab3c4u: goto label_7ab3c4;
        case 0x7ab3dcu: goto label_7ab3dc;
        case 0x7ab424u: goto label_7ab424;
        case 0x7ab4a4u: goto label_7ab4a4;
        case 0x7ab4b0u: goto label_7ab4b0;
        case 0x7ab4c0u: goto label_7ab4c0;
        default: break;
    }

    ctx->pc = 0x7ab2d8u;

    // 0x7ab2d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7ab2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7ab2dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7ab2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7ab2e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7ab2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7ab2e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7ab2e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ab2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ab2ec: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x7ab2ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x7ab2f0: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x7ab2f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x7ab2f4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x7ab2f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x7ab2f8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x7ab2f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x7ab2fc: 0x96220024  lhu         $v0, 0x24($s1)
    ctx->pc = 0x7ab2fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x7ab300: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7ab300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7ab304: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x7AB304u;
    {
        const bool branch_taken_0x7ab304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB304u;
        // 0x7ab308: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab304) {
            ctx->pc = 0x7AB524u;
            goto label_7ab524;
        }
    }
    ctx->pc = 0x7AB30Cu;
    // 0x7ab30c: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x7ab30cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x7ab310: 0x12000061  beqz        $s0, . + 4 + (0x61 << 2)
    ctx->pc = 0x7AB310u;
    {
        const bool branch_taken_0x7ab310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB310u;
        // 0x7ab314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab310) {
            ctx->pc = 0x7AB498u;
            goto label_7ab498;
        }
    }
    ctx->pc = 0x7AB318u;
    // 0x7ab318: 0xc634001c  lwc1        $f20, 0x1C($s1)
    ctx->pc = 0x7ab318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7ab31c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7ab31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ab320: 0xc056528  jal         func_1594A0
    ctx->pc = 0x7AB320u;
    SET_GPR_U32(ctx, 31, 0x7AB328u);
    ctx->pc = 0x7AB324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB320u;
    // 0x7ab324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1594A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1594A0u, 0x7AB320u, 0x7AB328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB328u;
label_7ab328:
    // 0x7ab328: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AB328u;
    {
        const bool branch_taken_0x7ab328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB328u;
        // 0x7ab32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab328) {
            ctx->pc = 0x7AB348u;
            goto label_7ab348;
        }
    }
    ctx->pc = 0x7AB330u;
    // 0x7ab330: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7ab330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ab334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7ab334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab338: 0xc056544  jal         func_159510
    ctx->pc = 0x7AB338u;
    SET_GPR_U32(ctx, 31, 0x7AB340u);
    ctx->pc = 0x7AB33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB338u;
    // 0x7ab33c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x159510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159510u, 0x7AB338u, 0x7AB340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB340u;
label_7ab340:
    // 0x7ab340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB340u;
    {
        const bool branch_taken_0x7ab340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB340u;
        // 0x7ab344: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab340) {
            ctx->pc = 0x7AB34Cu;
            goto label_7ab34c;
        }
    }
    ctx->pc = 0x7AB348u;
label_7ab348:
    // 0x7ab348: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x7ab348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_7ab34c:
    // 0x7ab34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ab34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab350: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7ab350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ab354: 0xc056528  jal         func_1594A0
    ctx->pc = 0x7AB354u;
    SET_GPR_U32(ctx, 31, 0x7AB35Cu);
    ctx->pc = 0x7AB358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB354u;
    // 0x7ab358: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1594A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1594A0u, 0x7AB354u, 0x7AB35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB35Cu;
label_7ab35c:
    // 0x7ab35c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AB35Cu;
    {
        const bool branch_taken_0x7ab35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB35Cu;
        // 0x7ab360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab35c) {
            ctx->pc = 0x7AB37Cu;
            goto label_7ab37c;
        }
    }
    ctx->pc = 0x7AB364u;
    // 0x7ab364: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7ab364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ab368: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ab368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ab36c: 0xc056544  jal         func_159510
    ctx->pc = 0x7AB36Cu;
    SET_GPR_U32(ctx, 31, 0x7AB374u);
    ctx->pc = 0x7AB370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB36Cu;
    // 0x7ab370: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x159510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159510u, 0x7AB36Cu, 0x7AB374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB374u;
label_7ab374:
    // 0x7ab374: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB374u;
    {
        const bool branch_taken_0x7ab374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB374u;
        // 0x7ab378: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab374) {
            ctx->pc = 0x7AB380u;
            goto label_7ab380;
        }
    }
    ctx->pc = 0x7AB37Cu;
label_7ab37c:
    // 0x7ab37c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x7ab37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_7ab380:
    // 0x7ab380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ab380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab384: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7ab384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ab388: 0xc056528  jal         func_1594A0
    ctx->pc = 0x7AB388u;
    SET_GPR_U32(ctx, 31, 0x7AB390u);
    ctx->pc = 0x7AB38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB388u;
    // 0x7ab38c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1594A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1594A0u, 0x7AB388u, 0x7AB390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB390u;
label_7ab390:
    // 0x7ab390: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AB390u;
    {
        const bool branch_taken_0x7ab390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB390u;
        // 0x7ab394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab390) {
            ctx->pc = 0x7AB3B0u;
            goto label_7ab3b0;
        }
    }
    ctx->pc = 0x7AB398u;
    // 0x7ab398: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7ab398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ab39c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7ab39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7ab3a0: 0xc056544  jal         func_159510
    ctx->pc = 0x7AB3A0u;
    SET_GPR_U32(ctx, 31, 0x7AB3A8u);
    ctx->pc = 0x7AB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB3A0u;
    // 0x7ab3a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x159510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159510u, 0x7AB3A0u, 0x7AB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB3A8u;
label_7ab3a8:
    // 0x7ab3a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB3A8u;
    {
        const bool branch_taken_0x7ab3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB3A8u;
        // 0x7ab3ac: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab3a8) {
            ctx->pc = 0x7AB3B4u;
            goto label_7ab3b4;
        }
    }
    ctx->pc = 0x7AB3B0u;
label_7ab3b0:
    // 0x7ab3b0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x7ab3b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_7ab3b4:
    // 0x7ab3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ab3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab3b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7ab3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ab3bc: 0xc056528  jal         func_1594A0
    ctx->pc = 0x7AB3BCu;
    SET_GPR_U32(ctx, 31, 0x7AB3C4u);
    ctx->pc = 0x7AB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB3BCu;
    // 0x7ab3c0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1594A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1594A0u, 0x7AB3BCu, 0x7AB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB3C4u;
label_7ab3c4:
    // 0x7ab3c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AB3C4u;
    {
        const bool branch_taken_0x7ab3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB3C4u;
        // 0x7ab3c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab3c4) {
            ctx->pc = 0x7AB3E4u;
            goto label_7ab3e4;
        }
    }
    ctx->pc = 0x7AB3CCu;
    // 0x7ab3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ab3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab3d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7ab3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ab3d4: 0xc056544  jal         func_159510
    ctx->pc = 0x7AB3D4u;
    SET_GPR_U32(ctx, 31, 0x7AB3DCu);
    ctx->pc = 0x7AB3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB3D4u;
    // 0x7ab3d8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159510u, 0x7AB3D4u, 0x7AB3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB3DCu;
label_7ab3dc:
    // 0x7ab3dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7AB3DCu;
    {
        const bool branch_taken_0x7ab3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB3DCu;
        // 0x7ab3e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab3dc) {
            ctx->pc = 0x7AB3ECu;
            goto label_7ab3ec;
        }
    }
    ctx->pc = 0x7AB3E4u;
label_7ab3e4:
    // 0x7ab3e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ab3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ab3e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7ab3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7ab3ec:
    // 0x7ab3ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ab3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ab3f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ab3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ab3f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x7ab3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ab3f8: 0x46170041  sub.s       $f1, $f0, $f23
    ctx->pc = 0x7ab3f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x7ab3fc: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x7ab3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x7ab400: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x7ab400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7ab404: 0x46160081  sub.s       $f2, $f0, $f22
    ctx->pc = 0x7ab404u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x7ab408: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x7ab408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x7ab40c: 0xe4610240  swc1        $f1, 0x240($v1)
    ctx->pc = 0x7ab40cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
    // 0x7ab410: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7ab410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ab414: 0xe4420244  swc1        $f2, 0x244($v0)
    ctx->pc = 0x7ab414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 580), bits); }
    // 0x7ab418: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x7ab418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ab41c: 0xc055d26  jal         func_157498
    ctx->pc = 0x7AB41Cu;
    SET_GPR_U32(ctx, 31, 0x7AB424u);
    ctx->pc = 0x7AB420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB41Cu;
    // 0x7ab420: 0xe4600248  swc1        $f0, 0x248($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157498u, 0x7AB41Cu, 0x7AB424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB424u;
label_7ab424:
    // 0x7ab424: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7ab424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ab428: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7ab428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7ab42c: 0xe440024c  swc1        $f0, 0x24C($v0)
    ctx->pc = 0x7ab42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 588), bits); }
    // 0x7ab430: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7ab430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ab434: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x7ab434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab438: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7ab438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab43c: 0x0  nop
    ctx->pc = 0x7ab43cu;
    // NOP
    // 0x7ab440: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x7AB440u;
    {
        const bool branch_taken_0x7ab440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ab440) {
            ctx->pc = 0x7AB444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB440u;
            // 0x7ab444: 0xe4410240  swc1        $f1, 0x240($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 576), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB448u;
            goto label_7ab448;
        }
    }
    ctx->pc = 0x7AB448u;
label_7ab448:
    // 0x7ab448: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7ab448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ab44c: 0xc4400244  lwc1        $f0, 0x244($v0)
    ctx->pc = 0x7ab44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab450: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7ab450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab454: 0x0  nop
    ctx->pc = 0x7ab454u;
    // NOP
    // 0x7ab458: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x7AB458u;
    {
        const bool branch_taken_0x7ab458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ab458) {
            ctx->pc = 0x7AB45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB458u;
            // 0x7ab45c: 0xe4410244  swc1        $f1, 0x244($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 580), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB460u;
            goto label_7ab460;
        }
    }
    ctx->pc = 0x7AB460u;
label_7ab460:
    // 0x7ab460: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7ab460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ab464: 0xc4400248  lwc1        $f0, 0x248($v0)
    ctx->pc = 0x7ab464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab468: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7ab468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab46c: 0x0  nop
    ctx->pc = 0x7ab46cu;
    // NOP
    // 0x7ab470: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x7AB470u;
    {
        const bool branch_taken_0x7ab470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ab470) {
            ctx->pc = 0x7AB474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB470u;
            // 0x7ab474: 0xe4410248  swc1        $f1, 0x248($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 584), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB478u;
            goto label_7ab478;
        }
    }
    ctx->pc = 0x7AB478u;
label_7ab478:
    // 0x7ab478: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7ab478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ab47c: 0xc440024c  lwc1        $f0, 0x24C($v0)
    ctx->pc = 0x7ab47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab480: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7ab480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab484: 0x0  nop
    ctx->pc = 0x7ab484u;
    // NOP
    // 0x7ab488: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
    ctx->pc = 0x7AB488u;
    {
        const bool branch_taken_0x7ab488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ab488) {
            ctx->pc = 0x7AB48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB488u;
            // 0x7ab48c: 0xe441024c  swc1        $f1, 0x24C($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 588), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB4E0u;
            goto label_7ab4e0;
        }
    }
    ctx->pc = 0x7AB490u;
    // 0x7ab490: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x7AB490u;
    {
        const bool branch_taken_0x7ab490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB490u;
        // 0x7ab494: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab490) {
            ctx->pc = 0x7AB4E4u;
            goto label_7ab4e4;
        }
    }
    ctx->pc = 0x7AB498u;
label_7ab498:
    // 0x7ab498: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7ab498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ab49c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x7AB49Cu;
    SET_GPR_U32(ctx, 31, 0x7AB4A4u);
    ctx->pc = 0x7AB4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB49Cu;
    // 0x7ab4a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x7AB49Cu, 0x7AB4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB4A4u;
label_7ab4a4:
    // 0x7ab4a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7ab4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7ab4a8: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x7AB4A8u;
    SET_GPR_U32(ctx, 31, 0x7AB4B0u);
    ctx->pc = 0x7AB4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB4A8u;
    // 0x7ab4ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x7AB4A8u, 0x7AB4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB4B0u;
label_7ab4b0:
    // 0x7ab4b0: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7AB4B0u;
    {
        const bool branch_taken_0x7ab4b0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x7ab4b0) {
            ctx->pc = 0x7AB4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB4B0u;
            // 0x7ab4b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB4E4u;
            goto label_7ab4e4;
        }
    }
    ctx->pc = 0x7AB4B8u;
    // 0x7ab4b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ab4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ab4bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ab4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7ab4c0:
    // 0x7ab4c0: 0x0  nop
    ctx->pc = 0x7ab4c0u;
    // NOP
    // 0x7ab4c4: 0xe60003a0  swc1        $f0, 0x3A0($s0)
    ctx->pc = 0x7ab4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
    // 0x7ab4c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7ab4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7ab4cc: 0xe60003a4  swc1        $f0, 0x3A4($s0)
    ctx->pc = 0x7ab4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
    // 0x7ab4d0: 0xe60003a8  swc1        $f0, 0x3A8($s0)
    ctx->pc = 0x7ab4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 936), bits); }
    // 0x7ab4d4: 0xe60003ac  swc1        $f0, 0x3AC($s0)
    ctx->pc = 0x7ab4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 940), bits); }
    // 0x7ab4d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7AB4D8u;
    {
        const bool branch_taken_0x7ab4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB4D8u;
        // 0x7ab4dc: 0x8e100404  lw          $s0, 0x404($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab4d8) {
            ctx->pc = 0x7AB4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ab4c0;
        }
    }
    ctx->pc = 0x7AB4E0u;
label_7ab4e0:
    // 0x7ab4e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7ab4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7ab4e4:
    // 0x7ab4e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ab4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ab4e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7ab4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7ab4ec: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x7ab4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab4f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7ab4f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab4f4: 0x0  nop
    ctx->pc = 0x7ab4f4u;
    // NOP
    // 0x7ab4f8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x7AB4F8u;
    {
        const bool branch_taken_0x7ab4f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ab4f8) {
            ctx->pc = 0x7AB4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB4F8u;
            // 0x7ab4fc: 0x8c820250  lw          $v0, 0x250($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB518u;
            goto label_7ab518;
        }
    }
    ctx->pc = 0x7AB500u;
    // 0x7ab500: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x7ab500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x7ab504: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x7ab504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x7ab508: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x7ab508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x7ab50c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x7ab50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7ab510: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7AB510u;
    {
        const bool branch_taken_0x7ab510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB510u;
        // 0x7ab514: 0xac830250  sw          $v1, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab510) {
            ctx->pc = 0x7AB520u;
            goto label_7ab520;
        }
    }
    ctx->pc = 0x7AB518u;
label_7ab518:
    // 0x7ab518: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x7ab518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x7ab51c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x7ab51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_7ab520:
    // 0x7ab520: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7ab520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7ab524:
    // 0x7ab524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7ab524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ab528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ab528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ab52c: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x7ab52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x7ab530: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x7ab530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7ab534: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x7ab534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7ab538: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x7ab538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7ab53c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB53Cu;
        // 0x7ab540: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB544u;
    // 0x7ab544: 0x0  nop
    ctx->pc = 0x7ab544u;
    // NOP
    ctx->pc = 0x7ab548u;
}
} // namespace gh_event
