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

// Function: func_0011A530
// Address: 0x11a530 - 0x11a660
void func_0011A530_0x11a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011A530_0x11a530");
#endif

    switch (ctx->pc) {
        case 0x11a5b8u: goto label_11a5b8;
        case 0x11a614u: goto label_11a614;
        case 0x11a630u: goto label_11a630;
        case 0x11a63cu: goto label_11a63c;
        case 0x11a648u: goto label_11a648;
        default: break;
    }

    ctx->pc = 0x11a530u;

    // 0x11a530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a534: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11a534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11a538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a540: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x11a540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11a544: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x11a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x11a548: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x11a548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11a54c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x11a54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x11a550: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A550u;
    {
        const bool branch_taken_0x11a550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A550u;
        // 0x11a554: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a550) {
            ctx->pc = 0x11A56Cu;
            goto label_11a56c;
        }
    }
    ctx->pc = 0x11A558u;
    // 0x11a558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a55c: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x11A55Cu;
    {
        const bool branch_taken_0x11a55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a55c) {
            ctx->pc = 0x11A620u;
            goto label_11a620;
        }
    }
    ctx->pc = 0x11A564u;
    // 0x11a564: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11A564u;
    {
        const bool branch_taken_0x11a564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A564u;
        // 0x11a568: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a564) {
            ctx->pc = 0x11A64Cu;
            goto label_11a64c;
        }
    }
    ctx->pc = 0x11A56Cu;
label_11a56c:
    // 0x11a56c: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x11a56cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11a570: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x11a570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x11a574: 0xa60005e2  sh          $zero, 0x5E2($s0)
    ctx->pc = 0x11a574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x11a578: 0x8e0706a0  lw          $a3, 0x6A0($s0)
    ctx->pc = 0x11a578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x11a57c: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x11a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x11a580: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x11a580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x11a584: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x11a584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11a588: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x11A588u;
    {
        const bool branch_taken_0x11a588 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A588u;
        // 0x11a58c: 0x683021  addu        $a2, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a588) {
            ctx->pc = 0x11A5D4u;
            goto label_11a5d4;
        }
    }
    ctx->pc = 0x11A590u;
    // 0x11a590: 0x8d05036c  lw          $a1, 0x36C($t0)
    ctx->pc = 0x11a590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 876)));
    // 0x11a594: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x11a594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a598: 0x8d060388  lw          $a2, 0x388($t0)
    ctx->pc = 0x11a598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 904)));
    // 0x11a59c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x11a59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11a5a0: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x11a5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x11a5a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11a5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a5a8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x11a5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x11a5ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11a5acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5b0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11A5B0u;
    SET_GPR_U32(ctx, 31, 0x11A5B8u);
    ctx->pc = 0x11A5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5B0u;
    // 0x11a5b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11A5B0u, 0x11A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5B8u;
label_11a5b8:
    // 0x11a5b8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11a5bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a5c0: 0x8c440344  lw          $a0, 0x344($v0)
    ctx->pc = 0x11a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x11a5c4: 0x8c450348  lw          $a1, 0x348($v0)
    ctx->pc = 0x11a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x11a5c8: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x11a5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x11a5cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a5d0: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x11a5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_11a5d4:
    // 0x11a5d4: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x11a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x11a5d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A5D8u;
    {
        const bool branch_taken_0x11a5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5D8u;
        // 0x11a5dc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5d8) {
            ctx->pc = 0x11A5F8u;
            goto label_11a5f8;
        }
    }
    ctx->pc = 0x11A5E0u;
    // 0x11a5e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11a5e4: 0x8c4403ac  lw          $a0, 0x3AC($v0)
    ctx->pc = 0x11a5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 940)));
    // 0x11a5e8: 0x8c4503b0  lw          $a1, 0x3B0($v0)
    ctx->pc = 0x11a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 944)));
    // 0x11a5ec: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x11a5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x11a5f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a5f4: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x11a5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_11a5f8:
    // 0x11a5f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11a5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11a5fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a604: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x11a604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a608: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a60c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11A60Cu;
    SET_GPR_U32(ctx, 31, 0x11A614u);
    ctx->pc = 0x11A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A60Cu;
    // 0x11a610: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11A60Cu, 0x11A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A614u;
label_11a614:
    // 0x11a614: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11a614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11a618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a61c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11a61cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11a620:
    // 0x11a620: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a624: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11a624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11a628: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11A628u;
    SET_GPR_U32(ctx, 31, 0x11A630u);
    ctx->pc = 0x11A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A628u;
    // 0x11a62c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11A628u, 0x11A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A630u;
label_11a630:
    // 0x11a630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a634: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11A634u;
    SET_GPR_U32(ctx, 31, 0x11A63Cu);
    ctx->pc = 0x11A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A634u;
    // 0x11a638: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11A634u, 0x11A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A63Cu;
label_11a63c:
    // 0x11a63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a640: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11A640u;
    SET_GPR_U32(ctx, 31, 0x11A648u);
    ctx->pc = 0x11A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A640u;
    // 0x11a644: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11A640u, 0x11A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A648u;
label_11a648:
    // 0x11a648: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11a648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11a64c:
    // 0x11a64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a650: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x11a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a654: 0x3e00008  jr          $ra
    ctx->pc = 0x11A654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A654u;
        // 0x11a658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A65Cu;
    // 0x11a65c: 0x0  nop
    ctx->pc = 0x11a65cu;
    // NOP
    ctx->pc = 0x11a660u;
}
