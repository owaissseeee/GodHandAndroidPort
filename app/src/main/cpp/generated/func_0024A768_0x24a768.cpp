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

// Function: func_0024A768
// Address: 0x24a768 - 0x24aa68
void func_0024A768_0x24a768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024A768_0x24a768");
#endif

    switch (ctx->pc) {
        case 0x24a7bcu: goto label_24a7bc;
        case 0x24a7e8u: goto label_24a7e8;
        case 0x24a7fcu: goto label_24a7fc;
        case 0x24a810u: goto label_24a810;
        case 0x24a824u: goto label_24a824;
        case 0x24a840u: goto label_24a840;
        case 0x24a86cu: goto label_24a86c;
        case 0x24a880u: goto label_24a880;
        case 0x24a894u: goto label_24a894;
        case 0x24a8fcu: goto label_24a8fc;
        case 0x24a908u: goto label_24a908;
        case 0x24a96cu: goto label_24a96c;
        case 0x24a974u: goto label_24a974;
        case 0x24a98cu: goto label_24a98c;
        case 0x24a99cu: goto label_24a99c;
        case 0x24a9a8u: goto label_24a9a8;
        case 0x24a9c4u: goto label_24a9c4;
        case 0x24a9d4u: goto label_24a9d4;
        case 0x24a9ecu: goto label_24a9ec;
        case 0x24a9fcu: goto label_24a9fc;
        case 0x24aa08u: goto label_24aa08;
        case 0x24aa24u: goto label_24aa24;
        case 0x24aa34u: goto label_24aa34;
        case 0x24aa54u: goto label_24aa54;
        default: break;
    }

    ctx->pc = 0x24a768u;

    // 0x24a768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24a768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24a76c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x24a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x24a770: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24a770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24a774: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x24a774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x24a778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a77c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a780: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x24a780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24a784: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24a788: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x24a788u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24a78c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24a78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24a790: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A790u;
    {
        const bool branch_taken_0x24a790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A790u;
        // 0x24a794: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a790) {
            ctx->pc = 0x24A7ACu;
            goto label_24a7ac;
        }
    }
    ctx->pc = 0x24A798u;
    // 0x24a798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a79c: 0x5082002e  beql        $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x24A79Cu;
    {
        const bool branch_taken_0x24a79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a79c) {
            ctx->pc = 0x24A7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A79Cu;
            // 0x24a7a0: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A858u;
            goto label_24a858;
        }
    }
    ctx->pc = 0x24A7A4u;
    // 0x24a7a4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x24A7A4u;
    {
        const bool branch_taken_0x24a7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7A4u;
        // 0x24a7a8: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a7a4) {
            ctx->pc = 0x24A90Cu;
            goto label_24a90c;
        }
    }
    ctx->pc = 0x24A7ACu;
label_24a7ac:
    // 0x24a7ac: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x24a7acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a7b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24a7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24a7b4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24A7B4u;
    SET_GPR_U32(ctx, 31, 0x24A7BCu);
    ctx->pc = 0x24A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A7B4u;
    // 0x24a7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24A7B4u, 0x24A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A7BCu;
label_24a7bc:
    // 0x24a7bc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x24a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24a7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7c4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24a7c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24a7c8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24a7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24a7cc: 0x8c653d8c  lw          $a1, 0x3D8C($v1)
    ctx->pc = 0x24a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15756)));
    // 0x24a7d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24a7d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24a7d4: 0x8c663d90  lw          $a2, 0x3D90($v1)
    ctx->pc = 0x24a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15760)));
    // 0x24a7d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24a7d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7dc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24a7e0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24A7E0u;
    SET_GPR_U32(ctx, 31, 0x24A7E8u);
    ctx->pc = 0x24A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A7E0u;
    // 0x24a7e4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24A7E0u, 0x24A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A7E8u;
label_24a7e8:
    // 0x24a7e8: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x24a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x24a7ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A7ECu;
    {
        const bool branch_taken_0x24a7ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a7ec) {
            ctx->pc = 0x24A7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A7ECu;
            // 0x24a7f0: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A800u;
            goto label_24a800;
        }
    }
    ctx->pc = 0x24A7F4u;
    // 0x24a7f4: 0xc0a04c8  jal         func_281320
    ctx->pc = 0x24A7F4u;
    SET_GPR_U32(ctx, 31, 0x24A7FCu);
    ctx->pc = 0x281320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281320u, 0x24A7F4u, 0x24A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A7FCu;
label_24a7fc:
    // 0x24a7fc: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_24a800:
    // 0x24a800: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A800u;
    {
        const bool branch_taken_0x24a800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a800) {
            ctx->pc = 0x24A804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A800u;
            // 0x24a804: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A814u;
            goto label_24a814;
        }
    }
    ctx->pc = 0x24A808u;
    // 0x24a808: 0xc0a0c90  jal         func_283240
    ctx->pc = 0x24A808u;
    SET_GPR_U32(ctx, 31, 0x24A810u);
    ctx->pc = 0x283240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283240u, 0x24A808u, 0x24A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A810u;
label_24a810:
    // 0x24a810: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24a810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_24a814:
    // 0x24a814: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A814u;
    {
        const bool branch_taken_0x24a814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a814) {
            ctx->pc = 0x24A818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A814u;
            // 0x24a818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A828u;
            goto label_24a828;
        }
    }
    ctx->pc = 0x24A81Cu;
    // 0x24a81c: 0xc0a0c90  jal         func_283240
    ctx->pc = 0x24A81Cu;
    SET_GPR_U32(ctx, 31, 0x24A824u);
    ctx->pc = 0x283240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283240u, 0x24A81Cu, 0x24A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A824u;
label_24a824:
    // 0x24a824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a828:
    // 0x24a828: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x24a828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x24a82c: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x24a82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x24a830: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x24a830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x24a834: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x24a834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24a838: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x24A838u;
    SET_GPR_U32(ctx, 31, 0x24A840u);
    ctx->pc = 0x24A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A838u;
    // 0x24a83c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x24A838u, 0x24A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A840u;
label_24a840:
    // 0x24a840: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24a840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24a844: 0xe6140600  swc1        $f20, 0x600($s0)
    ctx->pc = 0x24a844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x24a848: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24a84c: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x24a84cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
    // 0x24a850: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24a850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a854: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24a854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_24a858:
    // 0x24a858: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x24a858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x24a85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a860: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24a860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24a864: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24A864u;
    SET_GPR_U32(ctx, 31, 0x24A86Cu);
    ctx->pc = 0x24A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A864u;
    // 0x24a868: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24A864u, 0x24A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A86Cu;
label_24a86c:
    // 0x24a86c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24A86Cu;
    {
        const bool branch_taken_0x24a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a86c) {
            ctx->pc = 0x24A8E8u;
            goto label_24a8e8;
        }
    }
    ctx->pc = 0x24A874u;
    // 0x24a874: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24a874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24a878: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24A878u;
    SET_GPR_U32(ctx, 31, 0x24A880u);
    ctx->pc = 0x24A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A878u;
    // 0x24a87c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24A878u, 0x24A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A880u;
label_24a880:
    // 0x24a880: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x24a880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24a884: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24A884u;
    {
        const bool branch_taken_0x24a884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A884u;
        // 0x24a888: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a884) {
            ctx->pc = 0x24A8D8u;
            goto label_24a8d8;
        }
    }
    ctx->pc = 0x24A88Cu;
    // 0x24a88c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24A88Cu;
    SET_GPR_U32(ctx, 31, 0x24A894u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24A88Cu, 0x24A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A894u;
label_24a894:
    // 0x24a894: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24a894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24a898: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24A898u;
    {
        const bool branch_taken_0x24a898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A898u;
        // 0x24a89c: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a898) {
            ctx->pc = 0x24A8D8u;
            goto label_24a8d8;
        }
    }
    ctx->pc = 0x24A8A0u;
    // 0x24a8a0: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x24a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a8a4: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x24a8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x24a8a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a8ac: 0x0  nop
    ctx->pc = 0x24a8acu;
    // NOP
    // 0x24a8b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24a8b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a8b4: 0x0  nop
    ctx->pc = 0x24a8b4u;
    // NOP
    // 0x24a8b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24A8B8u;
    {
        const bool branch_taken_0x24a8b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8B8u;
        // 0x24a8bc: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8b8) {
            ctx->pc = 0x24A8D4u;
            goto label_24a8d4;
        }
    }
    ctx->pc = 0x24A8C0u;
    // 0x24a8c0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24a8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a8c4: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24a8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a8c8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24a8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a8cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24A8CCu;
    {
        const bool branch_taken_0x24a8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8CCu;
        // 0x24a8d0: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8cc) {
            ctx->pc = 0x24A908u;
            goto label_24a908;
        }
    }
    ctx->pc = 0x24A8D4u;
label_24a8d4:
    // 0x24a8d4: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x24a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_24a8d8:
    // 0x24a8d8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24a8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a8dc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24a8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a8e0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24a8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a8e4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24a8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24a8e8:
    // 0x24a8e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a8ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24a8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24a8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8f4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24A8F4u;
    SET_GPR_U32(ctx, 31, 0x24A8FCu);
    ctx->pc = 0x24A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A8F4u;
    // 0x24a8f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24A8F4u, 0x24A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A8FCu;
label_24a8fc:
    // 0x24a8fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24a8fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24a900: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24A900u;
    SET_GPR_U32(ctx, 31, 0x24A908u);
    ctx->pc = 0x24A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A900u;
    // 0x24a904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24A900u, 0x24A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A908u;
label_24a908:
    // 0x24a908: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24a908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_24a90c:
    // 0x24a90c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24a90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24a910: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x24A910u;
    {
        const bool branch_taken_0x24a910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a910) {
            ctx->pc = 0x24A914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A910u;
            // 0x24a914: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AA58u;
            goto label_24aa58;
        }
    }
    ctx->pc = 0x24A918u;
    // 0x24a918: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x24a918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a91c: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x24a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a920: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24a920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24a924: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24a924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24a928: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24a928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a92c: 0x0  nop
    ctx->pc = 0x24a92cu;
    // NOP
    // 0x24a930: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x24A930u;
    {
        const bool branch_taken_0x24a930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A930u;
        // 0x24a934: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a930) {
            ctx->pc = 0x24AA38u;
            goto label_24aa38;
        }
    }
    ctx->pc = 0x24A938u;
    // 0x24a938: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x24a938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x24a93c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a940: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x24a940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x24a944: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x24a944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x24a948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a94c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24a94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x24a950: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x24a950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24a954: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24a954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a958: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a95c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24a95cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a960: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24a960u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a964: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24A964u;
    SET_GPR_U32(ctx, 31, 0x24A96Cu);
    ctx->pc = 0x24A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A964u;
    // 0x24a968: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24A964u, 0x24A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A96Cu;
label_24a96c:
    // 0x24a96c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24A96Cu;
    SET_GPR_U32(ctx, 31, 0x24A974u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24A96Cu, 0x24A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A974u;
label_24a974:
    // 0x24a974: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24a978: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24A978u;
    {
        const bool branch_taken_0x24a978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A978u;
        // 0x24a97c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a978) {
            ctx->pc = 0x24A9E0u;
            goto label_24a9e0;
        }
    }
    ctx->pc = 0x24A980u;
    // 0x24a980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a984: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x24A984u;
    SET_GPR_U32(ctx, 31, 0x24A98Cu);
    ctx->pc = 0x24A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A984u;
    // 0x24a988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x24A984u, 0x24A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A98Cu;
label_24a98c:
    // 0x24a98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a990: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x24a990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x24a994: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x24A994u;
    SET_GPR_U32(ctx, 31, 0x24A99Cu);
    ctx->pc = 0x24A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A994u;
    // 0x24a998: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x24A994u, 0x24A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A99Cu;
label_24a99c:
    // 0x24a99c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24a9a0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24A9A0u;
    SET_GPR_U32(ctx, 31, 0x24A9A8u);
    ctx->pc = 0x24A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9A0u;
    // 0x24a9a4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24A9A0u, 0x24A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9A8u;
label_24a9a8:
    // 0x24a9a8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x24a9a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24a9ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24A9ACu;
    {
        const bool branch_taken_0x24a9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9ACu;
        // 0x24a9b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9ac) {
            ctx->pc = 0x24A9D8u;
            goto label_24a9d8;
        }
    }
    ctx->pc = 0x24A9B4u;
    // 0x24a9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9b8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x24a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x24a9bc: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x24A9BCu;
    SET_GPR_U32(ctx, 31, 0x24A9C4u);
    ctx->pc = 0x24A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9BCu;
    // 0x24a9c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x24A9BCu, 0x24A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9C4u;
label_24a9c4:
    // 0x24a9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9c8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x24a9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x24a9cc: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x24A9CCu;
    SET_GPR_U32(ctx, 31, 0x24A9D4u);
    ctx->pc = 0x24A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9CCu;
    // 0x24a9d0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x24A9CCu, 0x24A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9D4u;
label_24a9d4:
    // 0x24a9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a9d8:
    // 0x24a9d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x24A9D8u;
    {
        const bool branch_taken_0x24a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9D8u;
        // 0x24a9dc: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9d8) {
            ctx->pc = 0x24AA38u;
            goto label_24aa38;
        }
    }
    ctx->pc = 0x24A9E0u;
label_24a9e0:
    // 0x24a9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9e4: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x24A9E4u;
    SET_GPR_U32(ctx, 31, 0x24A9ECu);
    ctx->pc = 0x24A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9E4u;
    // 0x24a9e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x24A9E4u, 0x24A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9ECu;
label_24a9ec:
    // 0x24a9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9f0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x24a9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x24a9f4: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x24A9F4u;
    SET_GPR_U32(ctx, 31, 0x24A9FCu);
    ctx->pc = 0x24A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9F4u;
    // 0x24a9f8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x24A9F4u, 0x24A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9FCu;
label_24a9fc:
    // 0x24a9fc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24aa00: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24AA00u;
    SET_GPR_U32(ctx, 31, 0x24AA08u);
    ctx->pc = 0x24AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA00u;
    // 0x24aa04: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24AA00u, 0x24AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA08u;
label_24aa08:
    // 0x24aa08: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x24aa08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24aa0c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x24AA0Cu;
    {
        const bool branch_taken_0x24aa0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aa0c) {
            ctx->pc = 0x24AA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AA0Cu;
            // 0x24aa10: 0xa6000568  sh          $zero, 0x568($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AA38u;
            goto label_24aa38;
        }
    }
    ctx->pc = 0x24AA14u;
    // 0x24aa14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa18: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x24aa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x24aa1c: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x24AA1Cu;
    SET_GPR_U32(ctx, 31, 0x24AA24u);
    ctx->pc = 0x24AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA1Cu;
    // 0x24aa20: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x24AA1Cu, 0x24AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA24u;
label_24aa24:
    // 0x24aa24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa28: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x24aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x24aa2c: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x24AA2Cu;
    SET_GPR_U32(ctx, 31, 0x24AA34u);
    ctx->pc = 0x24AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA2Cu;
    // 0x24aa30: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x24AA2Cu, 0x24AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA34u;
label_24aa34:
    // 0x24aa34: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x24aa34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
label_24aa38:
    // 0x24aa38: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24aa38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x24aa3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24aa3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24aa40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AA40u;
    {
        const bool branch_taken_0x24aa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA40u;
        // 0x24aa44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa40) {
            ctx->pc = 0x24AA54u;
            goto label_24aa54;
        }
    }
    ctx->pc = 0x24AA48u;
    // 0x24aa48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x24aa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24aa4c: 0xc09b6c0  jal         func_26DB00
    ctx->pc = 0x24AA4Cu;
    SET_GPR_U32(ctx, 31, 0x24AA54u);
    ctx->pc = 0x24AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA4Cu;
    // 0x24aa50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DB00u, 0x24AA4Cu, 0x24AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA54u;
label_24aa54:
    // 0x24aa54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24aa54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24aa58:
    // 0x24aa58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24aa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24aa5c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x24aa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24aa60: 0x3e00008  jr          $ra
    ctx->pc = 0x24AA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA60u;
        // 0x24aa64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AA68u;
}
