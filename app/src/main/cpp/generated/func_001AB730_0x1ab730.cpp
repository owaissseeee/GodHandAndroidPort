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

// Function: func_001AB730
// Address: 0x1ab730 - 0x1ab8f8
void func_001AB730_0x1ab730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AB730_0x1ab730");
#endif

    switch (ctx->pc) {
        case 0x1ab754u: goto label_1ab754;
        case 0x1ab7b4u: goto label_1ab7b4;
        case 0x1ab7dcu: goto label_1ab7dc;
        case 0x1ab7f0u: goto label_1ab7f0;
        case 0x1ab83cu: goto label_1ab83c;
        case 0x1ab85cu: goto label_1ab85c;
        case 0x1ab888u: goto label_1ab888;
        case 0x1ab894u: goto label_1ab894;
        case 0x1ab8a0u: goto label_1ab8a0;
        case 0x1ab8b0u: goto label_1ab8b0;
        case 0x1ab8d0u: goto label_1ab8d0;
        default: break;
    }

    ctx->pc = 0x1ab730u;

    // 0x1ab730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ab730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ab734: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ab734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ab738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab73c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ab73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab740: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1ab740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1ab744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab748: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1ab748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ab74c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1AB74Cu;
    SET_GPR_U32(ctx, 31, 0x1AB754u);
    ctx->pc = 0x1AB750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB74Cu;
    // 0x1ab750: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1AB74Cu, 0x1AB754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB754u;
label_1ab754:
    // 0x1ab754: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1ab754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab75c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1AB75Cu;
    {
        const bool branch_taken_0x1ab75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB75Cu;
        // 0x1ab760: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab75c) {
            ctx->pc = 0x1AB7E8u;
            goto label_1ab7e8;
        }
    }
    ctx->pc = 0x1AB764u;
    // 0x1ab764: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB764u;
    {
        const bool branch_taken_0x1ab764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab764) {
            ctx->pc = 0x1AB768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB764u;
            // 0x1ab768: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB77Cu;
            goto label_1ab77c;
        }
    }
    ctx->pc = 0x1AB76Cu;
    // 0x1ab76c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB76Cu;
    {
        const bool branch_taken_0x1ab76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab76c) {
            ctx->pc = 0x1AB770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB76Cu;
            // 0x1ab770: 0x8e0209d0  lw          $v0, 0x9D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB794u;
            goto label_1ab794;
        }
    }
    ctx->pc = 0x1AB774u;
    // 0x1ab774: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1AB774u;
    {
        const bool branch_taken_0x1ab774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB774u;
        // 0x1ab778: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab774) {
            ctx->pc = 0x1AB8E4u;
            goto label_1ab8e4;
        }
    }
    ctx->pc = 0x1AB77Cu;
label_1ab77c:
    // 0x1ab77c: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1AB77Cu;
    {
        const bool branch_taken_0x1ab77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB77Cu;
        // 0x1ab780: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab77c) {
            ctx->pc = 0x1AB878u;
            goto label_1ab878;
        }
    }
    ctx->pc = 0x1AB784u;
    // 0x1ab784: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1AB784u;
    {
        const bool branch_taken_0x1ab784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ab784) {
            ctx->pc = 0x1AB8A8u;
            goto label_1ab8a8;
        }
    }
    ctx->pc = 0x1AB78Cu;
    // 0x1ab78c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1AB78Cu;
    {
        const bool branch_taken_0x1ab78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB78Cu;
        // 0x1ab790: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab78c) {
            ctx->pc = 0x1AB8E4u;
            goto label_1ab8e4;
        }
    }
    ctx->pc = 0x1AB794u;
label_1ab794:
    // 0x1ab794: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ab794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ab798: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1ab798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1ab79c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ab79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ab7a4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1ab7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1ab7a8: 0xae0209d0  sw          $v0, 0x9D0($s0)
    ctx->pc = 0x1ab7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 2));
    // 0x1ab7ac: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1AB7ACu;
    SET_GPR_U32(ctx, 31, 0x1AB7B4u);
    ctx->pc = 0x1AB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7ACu;
    // 0x1ab7b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1AB7ACu, 0x1AB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7B4u;
label_1ab7b4:
    // 0x1ab7b4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1ab7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1ab7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab7bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab7c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7c4: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1ab7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ab7c8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ab7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ab7cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab7ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ab7d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7d4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AB7D4u;
    SET_GPR_U32(ctx, 31, 0x1AB7DCu);
    ctx->pc = 0x1AB7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7D4u;
    // 0x1ab7d8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AB7D4u, 0x1AB7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7DCu;
label_1ab7dc:
    // 0x1ab7dc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ab7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab7e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab7e4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ab7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ab7e8:
    // 0x1ab7e8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AB7E8u;
    SET_GPR_U32(ctx, 31, 0x1AB7F0u);
    ctx->pc = 0x1AB7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7E8u;
    // 0x1ab7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AB7E8u, 0x1AB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7F0u;
label_1ab7f0:
    // 0x1ab7f0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AB7F0u;
    {
        const bool branch_taken_0x1ab7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab7f0) {
            ctx->pc = 0x1AB868u;
            goto label_1ab868;
        }
    }
    ctx->pc = 0x1AB7F8u;
    // 0x1ab7f8: 0x8e0309d0  lw          $v1, 0x9D0($s0)
    ctx->pc = 0x1ab7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1ab7fc: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1ab7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1ab800: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ab804: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x1ab804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1ab808: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ab808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ab80c: 0x8e070608  lw          $a3, 0x608($s0)
    ctx->pc = 0x1ab80cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1ab810: 0xae0309d0  sw          $v1, 0x9D0($s0)
    ctx->pc = 0x1ab810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 3));
    // 0x1ab814: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1ab814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1ab818: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB818u;
    {
        const bool branch_taken_0x1ab818 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB818u;
        // 0x1ab81c: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab818) {
            ctx->pc = 0x1AB83Cu;
            goto label_1ab83c;
        }
    }
    ctx->pc = 0x1AB820u;
    // 0x1ab820: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ab820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ab824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab828: 0xace2004c  sw          $v0, 0x4C($a3)
    ctx->pc = 0x1ab828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 2));
    // 0x1ab82c: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1ab82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ab830: 0x8e040608  lw          $a0, 0x608($s0)
    ctx->pc = 0x1ab830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1ab834: 0xc07f5ae  jal         func_1FD6B8
    ctx->pc = 0x1AB834u;
    SET_GPR_U32(ctx, 31, 0x1AB83Cu);
    ctx->pc = 0x1AB838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB834u;
    // 0x1ab838: 0x8e050620  lw          $a1, 0x620($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6B8u, 0x1AB834u, 0x1AB83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB83Cu;
label_1ab83c:
    // 0x1ab83c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab83cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab840: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ab840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab84c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ab84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ab850: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab850u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab854: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AB854u;
    SET_GPR_U32(ctx, 31, 0x1AB85Cu);
    ctx->pc = 0x1AB858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB854u;
    // 0x1ab858: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AB854u, 0x1AB85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB85Cu;
label_1ab85c:
    // 0x1ab85c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ab85cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab860: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab864: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ab864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ab868:
    // 0x1ab868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab86c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ab86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ab870: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB870u;
    {
        const bool branch_taken_0x1ab870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB870u;
        // 0x1ab874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab870) {
            ctx->pc = 0x1AB88Cu;
            goto label_1ab88c;
        }
    }
    ctx->pc = 0x1AB878u;
label_1ab878:
    // 0x1ab878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab87c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ab87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ab880: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AB880u;
    SET_GPR_U32(ctx, 31, 0x1AB888u);
    ctx->pc = 0x1AB884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB880u;
    // 0x1ab884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AB880u, 0x1AB888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB888u;
label_1ab888:
    // 0x1ab888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab88c:
    // 0x1ab88c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1AB88Cu;
    SET_GPR_U32(ctx, 31, 0x1AB894u);
    ctx->pc = 0x1AB890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB88Cu;
    // 0x1ab890: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1AB88Cu, 0x1AB894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB894u;
label_1ab894:
    // 0x1ab894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab898: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1AB898u;
    SET_GPR_U32(ctx, 31, 0x1AB8A0u);
    ctx->pc = 0x1AB89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB898u;
    // 0x1ab89c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1AB898u, 0x1AB8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB8A0u;
label_1ab8a0:
    // 0x1ab8a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1AB8A0u;
    {
        const bool branch_taken_0x1ab8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8A0u;
        // 0x1ab8a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8a0) {
            ctx->pc = 0x1AB8E4u;
            goto label_1ab8e4;
        }
    }
    ctx->pc = 0x1AB8A8u;
label_1ab8a8:
    // 0x1ab8a8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AB8A8u;
    SET_GPR_U32(ctx, 31, 0x1AB8B0u);
    ctx->pc = 0x1AB8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB8A8u;
    // 0x1ab8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AB8A8u, 0x1AB8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB8B0u;
label_1ab8b0:
    // 0x1ab8b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AB8B0u;
    {
        const bool branch_taken_0x1ab8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B0u;
        // 0x1ab8b4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8b0) {
            ctx->pc = 0x1AB8E0u;
            goto label_1ab8e0;
        }
    }
    ctx->pc = 0x1AB8B8u;
    // 0x1ab8b8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1ab8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1ab8bc: 0xae0209d4  sw          $v0, 0x9D4($s0)
    ctx->pc = 0x1ab8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2516), GPR_U32(ctx, 2));
    // 0x1ab8c0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1ab8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1ab8c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ab8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8c8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1AB8C8u;
    SET_GPR_U32(ctx, 31, 0x1AB8D0u);
    ctx->pc = 0x1AB8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB8C8u;
    // 0x1ab8cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1AB8C8u, 0x1AB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB8D0u;
label_1ab8d0:
    // 0x1ab8d0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ab8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab8d4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1ab8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab8d8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1ab8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab8dc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1ab8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ab8e0:
    // 0x1ab8e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ab8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab8e4:
    // 0x1ab8e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab8ec: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1ab8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ab8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F0u;
        // 0x1ab8f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB8F8u;
}
