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

// Function: func_001CB400
// Address: 0x1cb400 - 0x1cb828
void func_001CB400_0x1cb400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CB400_0x1cb400");
#endif

    switch (ctx->pc) {
        case 0x1cb41cu: goto label_1cb41c;
        case 0x1cb438u: goto label_1cb438;
        case 0x1cb4e8u: goto label_1cb4e8;
        case 0x1cb504u: goto label_1cb504;
        case 0x1cb564u: goto label_1cb564;
        case 0x1cb5a0u: goto label_1cb5a0;
        case 0x1cb5bcu: goto label_1cb5bc;
        case 0x1cb5e8u: goto label_1cb5e8;
        case 0x1cb604u: goto label_1cb604;
        case 0x1cb650u: goto label_1cb650;
        case 0x1cb684u: goto label_1cb684;
        case 0x1cb698u: goto label_1cb698;
        case 0x1cb6c8u: goto label_1cb6c8;
        case 0x1cb6dcu: goto label_1cb6dc;
        case 0x1cb768u: goto label_1cb768;
        case 0x1cb784u: goto label_1cb784;
        case 0x1cb7b0u: goto label_1cb7b0;
        case 0x1cb7ccu: goto label_1cb7cc;
        case 0x1cb7fcu: goto label_1cb7fc;
        case 0x1cb810u: goto label_1cb810;
        default: break;
    }

    ctx->pc = 0x1cb400u;

    // 0x1cb400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb404: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cb404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cb408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb40c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb410: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1cb410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1cb414: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CB414u;
    SET_GPR_U32(ctx, 31, 0x1CB41Cu);
    ctx->pc = 0x1CB418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB414u;
    // 0x1cb418: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CB414u, 0x1CB41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB41Cu;
label_1cb41c:
    // 0x1cb41c: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cb41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cb420: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB420u;
    {
        const bool branch_taken_0x1cb420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb420) {
            ctx->pc = 0x1CB424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB420u;
            // 0x1cb424: 0xc44005a8  lwc1        $f0, 0x5A8($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB428u;
            goto label_1cb428;
        }
    }
    ctx->pc = 0x1CB428u;
label_1cb428:
    // 0x1cb428: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1cb428u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1cb42c: 0xe60005a8  swc1        $f0, 0x5A8($s0)
    ctx->pc = 0x1cb42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    // 0x1cb430: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1CB430u;
    SET_GPR_U32(ctx, 31, 0x1CB438u);
    ctx->pc = 0x1CB434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB430u;
    // 0x1cb434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1CB430u, 0x1CB438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB438u;
label_1cb438:
    // 0x1cb438: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cb438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cb43c: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x1cb43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x1cb440: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x1CB440u;
    {
        const bool branch_taken_0x1cb440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB440u;
        // 0x1cb444: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb440) {
            ctx->pc = 0x1CB818u;
            goto label_1cb818;
        }
    }
    ctx->pc = 0x1CB448u;
    // 0x1cb448: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb44c: 0x2442a300  addiu       $v0, $v0, -0x5D00
    ctx->pc = 0x1cb44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943488));
    // 0x1cb450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cb450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cb454: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cb454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb458: 0x800008  jr          $a0
    ctx->pc = 0x1CB458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB460u: goto label_1cb460;
            case 0x1CB478u: goto label_1cb478;
            case 0x1CB490u: goto label_1cb490;
            case 0x1CB4A8u: goto label_1cb4a8;
            case 0x1CB4C0u: goto label_1cb4c0;
            case 0x1CB50Cu: goto label_1cb50c;
            case 0x1CB56Cu: goto label_1cb56c;
            case 0x1CB60Cu: goto label_1cb60c;
            case 0x1CB658u: goto label_1cb658;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A0u: goto label_1cb6a0;
            case 0x1CB6D4u: goto label_1cb6d4;
            case 0x1CB6ECu: goto label_1cb6ec;
            case 0x1CB704u: goto label_1cb704;
            case 0x1CB71Cu: goto label_1cb71c;
            case 0x1CB734u: goto label_1cb734;
            case 0x1CB7D4u: goto label_1cb7d4;
            case 0x1CB808u: goto label_1cb808;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB458u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB460u;
label_1cb460:
    // 0x1cb460: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb468: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb46c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb470: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1CB470u;
    {
        const bool branch_taken_0x1cb470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB470u;
        // 0x1cb474: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb470) {
            ctx->pc = 0x1CB66Cu;
            goto label_1cb66c;
        }
    }
    ctx->pc = 0x1CB478u;
label_1cb478:
    // 0x1cb478: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb480: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb488: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1CB488u;
    {
        const bool branch_taken_0x1cb488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB488u;
        // 0x1cb48c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb488) {
            ctx->pc = 0x1CB66Cu;
            goto label_1cb66c;
        }
    }
    ctx->pc = 0x1CB490u;
label_1cb490:
    // 0x1cb490: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb498: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb49c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4a0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1CB4A0u;
    {
        const bool branch_taken_0x1cb4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4A0u;
        // 0x1cb4a4: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4a0) {
            ctx->pc = 0x1CB7E8u;
            goto label_1cb7e8;
        }
    }
    ctx->pc = 0x1CB4A8u;
label_1cb4a8:
    // 0x1cb4a8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb4b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb4b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4b8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1CB4B8u;
    {
        const bool branch_taken_0x1cb4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4B8u;
        // 0x1cb4bc: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4b8) {
            ctx->pc = 0x1CB66Cu;
            goto label_1cb66c;
        }
    }
    ctx->pc = 0x1CB4C0u;
label_1cb4c0:
    // 0x1cb4c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb4cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4d0: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1cb4d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb4d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb4d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb4dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4e0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB4E0u;
    SET_GPR_U32(ctx, 31, 0x1CB4E8u);
    ctx->pc = 0x1CB4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4E0u;
    // 0x1cb4e4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB4E0u, 0x1CB4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4E8u;
label_1cb4e8:
    // 0x1cb4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4ec: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1cb4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1cb4f0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1cb4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cb4f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4f8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1cb4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb4fc: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x1CB4FCu;
    SET_GPR_U32(ctx, 31, 0x1CB504u);
    ctx->pc = 0x1CB500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4FCu;
    // 0x1cb500: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x1CB4FCu, 0x1CB504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB504u;
label_1cb504:
    // 0x1cb504: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1CB504u;
    {
        const bool branch_taken_0x1cb504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB504u;
        // 0x1cb508: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb504) {
            ctx->pc = 0x1CB688u;
            goto label_1cb688;
        }
    }
    ctx->pc = 0x1CB50Cu;
label_1cb50c:
    // 0x1cb50c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1cb50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1cb510: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CB510u;
    {
        const bool branch_taken_0x1cb510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB510u;
        // 0x1cb514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb510) {
            ctx->pc = 0x1CB540u;
            goto label_1cb540;
        }
    }
    ctx->pc = 0x1CB518u;
    // 0x1cb518: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb51c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb51cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb520: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb524: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1cb524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1cb528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb52c: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x1cb52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1cb530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb534: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cb534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cb538: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1CB538u;
    {
        const bool branch_taken_0x1cb538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB538u;
        // 0x1cb53c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb538) {
            ctx->pc = 0x1CB67Cu;
            goto label_1cb67c;
        }
    }
    ctx->pc = 0x1CB540u;
label_1cb540:
    // 0x1cb540: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb544: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb54c: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1cb54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1cb550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb554: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb558: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb55c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB55Cu;
    SET_GPR_U32(ctx, 31, 0x1CB564u);
    ctx->pc = 0x1CB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB55Cu;
    // 0x1cb560: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB55Cu, 0x1CB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB564u;
label_1cb564:
    // 0x1cb564: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1CB564u;
    {
        const bool branch_taken_0x1cb564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB564u;
        // 0x1cb568: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb564) {
            ctx->pc = 0x1CB688u;
            goto label_1cb688;
        }
    }
    ctx->pc = 0x1CB56Cu;
label_1cb56c:
    // 0x1cb56c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1cb56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1cb570: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CB570u;
    {
        const bool branch_taken_0x1cb570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB570u;
        // 0x1cb574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb570) {
            ctx->pc = 0x1CB5C4u;
            goto label_1cb5c4;
        }
    }
    ctx->pc = 0x1CB578u;
    // 0x1cb578: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb57c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb580: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb584: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1cb584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1cb588: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb58c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1cb58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1cb590: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb594: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cb594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cb598: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB598u;
    SET_GPR_U32(ctx, 31, 0x1CB5A0u);
    ctx->pc = 0x1CB59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB598u;
    // 0x1cb59c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB598u, 0x1CB5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5A0u;
label_1cb5a0:
    // 0x1cb5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5a4: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1cb5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1cb5a8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1cb5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cb5ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5b0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1cb5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb5b4: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x1CB5B4u;
    SET_GPR_U32(ctx, 31, 0x1CB5BCu);
    ctx->pc = 0x1CB5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5B4u;
    // 0x1cb5b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x1CB5B4u, 0x1CB5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5BCu;
label_1cb5bc:
    // 0x1cb5bc: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1CB5BCu;
    {
        const bool branch_taken_0x1cb5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5BCu;
        // 0x1cb5c0: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5bc) {
            ctx->pc = 0x1CB800u;
            goto label_1cb800;
        }
    }
    ctx->pc = 0x1CB5C4u;
label_1cb5c4:
    // 0x1cb5c4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb5c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb5c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb5cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5d0: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1cb5d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb5d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb5dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5e0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB5E0u;
    SET_GPR_U32(ctx, 31, 0x1CB5E8u);
    ctx->pc = 0x1CB5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5E0u;
    // 0x1cb5e4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB5E0u, 0x1CB5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5E8u;
label_1cb5e8:
    // 0x1cb5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5ec: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1cb5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1cb5f0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1cb5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cb5f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb5f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5f8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1cb5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb5fc: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x1CB5FCu;
    SET_GPR_U32(ctx, 31, 0x1CB604u);
    ctx->pc = 0x1CB600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5FCu;
    // 0x1cb600: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x1CB5FCu, 0x1CB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB604u;
label_1cb604:
    // 0x1cb604: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1CB604u;
    {
        const bool branch_taken_0x1cb604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB604u;
        // 0x1cb608: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb604) {
            ctx->pc = 0x1CB800u;
            goto label_1cb800;
        }
    }
    ctx->pc = 0x1CB60Cu;
label_1cb60c:
    // 0x1cb60c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1cb60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1cb610: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB610u;
    {
        const bool branch_taken_0x1cb610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB610u;
        // 0x1cb614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb610) {
            ctx->pc = 0x1CB62Cu;
            goto label_1cb62c;
        }
    }
    ctx->pc = 0x1CB618u;
    // 0x1cb618: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb61c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb624: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB624u;
    {
        const bool branch_taken_0x1cb624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB624u;
        // 0x1cb628: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb624) {
            ctx->pc = 0x1CB66Cu;
            goto label_1cb66c;
        }
    }
    ctx->pc = 0x1CB62Cu;
label_1cb62c:
    // 0x1cb62c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb630: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb634: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb638: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1cb638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1cb63c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb63cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb640: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb644: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb648: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB648u;
    SET_GPR_U32(ctx, 31, 0x1CB650u);
    ctx->pc = 0x1CB64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB648u;
    // 0x1cb64c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB648u, 0x1CB650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB650u;
label_1cb650:
    // 0x1cb650: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CB650u;
    {
        const bool branch_taken_0x1cb650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB650u;
        // 0x1cb654: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb650) {
            ctx->pc = 0x1CB688u;
            goto label_1cb688;
        }
    }
    ctx->pc = 0x1CB658u;
label_1cb658:
    // 0x1cb658: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb660: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb668: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x1cb668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1cb66c:
    // 0x1cb66c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb674: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb678: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cb678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1cb67c:
    // 0x1cb67c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB67Cu;
    SET_GPR_U32(ctx, 31, 0x1CB684u);
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB67Cu, 0x1CB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB684u;
label_1cb684:
    // 0x1cb684: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cb684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_1cb688:
    // 0x1cb688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb68c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cb68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cb690:
    // 0x1cb690: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CB690u;
    SET_GPR_U32(ctx, 31, 0x1CB698u);
    ctx->pc = 0x1CB694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB690u;
    // 0x1cb694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CB690u, 0x1CB698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB698u;
label_1cb698:
    // 0x1cb698: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1CB698u;
    {
        const bool branch_taken_0x1cb698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB698u;
        // 0x1cb69c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb698) {
            ctx->pc = 0x1CB81Cu;
            goto label_1cb81c;
        }
    }
    ctx->pc = 0x1CB6A0u;
label_1cb6a0:
    // 0x1cb6a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb6a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb6ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6b0: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1cb6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cb6b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb6b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb6b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb6bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6c0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB6C0u;
    SET_GPR_U32(ctx, 31, 0x1CB6C8u);
    ctx->pc = 0x1CB6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6C0u;
    // 0x1cb6c4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB6C0u, 0x1CB6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB6C8u;
label_1cb6c8:
    // 0x1cb6c8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cb6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cb6cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb6d0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cb6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cb6d4:
    // 0x1cb6d4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CB6D4u;
    SET_GPR_U32(ctx, 31, 0x1CB6DCu);
    ctx->pc = 0x1CB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6D4u;
    // 0x1cb6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CB6D4u, 0x1CB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB6DCu;
label_1cb6dc:
    // 0x1cb6dc: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1CB6DCu;
    {
        const bool branch_taken_0x1cb6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6DCu;
        // 0x1cb6e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6dc) {
            ctx->pc = 0x1CB818u;
            goto label_1cb818;
        }
    }
    ctx->pc = 0x1CB6E4u;
    // 0x1cb6e4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1CB6E4u;
    {
        const bool branch_taken_0x1cb6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6E4u;
        // 0x1cb6e8: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6e4) {
            ctx->pc = 0x1CB818u;
            goto label_1cb818;
        }
    }
    ctx->pc = 0x1CB6ECu;
label_1cb6ec:
    // 0x1cb6ec: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb6f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6fc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1CB6FCu;
    {
        const bool branch_taken_0x1cb6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6FCu;
        // 0x1cb700: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6fc) {
            ctx->pc = 0x1CB7E8u;
            goto label_1cb7e8;
        }
    }
    ctx->pc = 0x1CB704u;
label_1cb704:
    // 0x1cb704: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb70c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb714: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1CB714u;
    {
        const bool branch_taken_0x1cb714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB714u;
        // 0x1cb718: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb714) {
            ctx->pc = 0x1CB7E8u;
            goto label_1cb7e8;
        }
    }
    ctx->pc = 0x1CB71Cu;
label_1cb71c:
    // 0x1cb71c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb72c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1CB72Cu;
    {
        const bool branch_taken_0x1cb72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB72Cu;
        // 0x1cb730: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb72c) {
            ctx->pc = 0x1CB7E8u;
            goto label_1cb7e8;
        }
    }
    ctx->pc = 0x1CB734u;
label_1cb734:
    // 0x1cb734: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1cb734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1cb738: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CB738u;
    {
        const bool branch_taken_0x1cb738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB738u;
        // 0x1cb73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb738) {
            ctx->pc = 0x1CB78Cu;
            goto label_1cb78c;
        }
    }
    ctx->pc = 0x1CB740u;
    // 0x1cb740: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb744: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb74c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x1cb74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1cb750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb754: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x1cb754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cb758: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb75c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cb75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cb760: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB760u;
    SET_GPR_U32(ctx, 31, 0x1CB768u);
    ctx->pc = 0x1CB764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB760u;
    // 0x1cb764: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB760u, 0x1CB768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB768u;
label_1cb768:
    // 0x1cb768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb76c: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1cb76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1cb770: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1cb770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cb774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb778: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1cb778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb77c: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x1CB77Cu;
    SET_GPR_U32(ctx, 31, 0x1CB784u);
    ctx->pc = 0x1CB780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB77Cu;
    // 0x1cb780: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x1CB77Cu, 0x1CB784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB784u;
label_1cb784:
    // 0x1cb784: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1CB784u;
    {
        const bool branch_taken_0x1cb784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB784u;
        // 0x1cb788: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb784) {
            ctx->pc = 0x1CB800u;
            goto label_1cb800;
        }
    }
    ctx->pc = 0x1CB78Cu;
label_1cb78c:
    // 0x1cb78c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb790: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb794: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb798: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x1cb798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1cb79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb7a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb7a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7a8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB7A8u;
    SET_GPR_U32(ctx, 31, 0x1CB7B0u);
    ctx->pc = 0x1CB7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7A8u;
    // 0x1cb7ac: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB7A8u, 0x1CB7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7B0u;
label_1cb7b0:
    // 0x1cb7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7b4: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1cb7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1cb7b8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1cb7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cb7bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7c0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1cb7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb7c4: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x1CB7C4u;
    SET_GPR_U32(ctx, 31, 0x1CB7CCu);
    ctx->pc = 0x1CB7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7C4u;
    // 0x1cb7c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x1CB7C4u, 0x1CB7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7CCu;
label_1cb7cc:
    // 0x1cb7cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CB7CCu;
    {
        const bool branch_taken_0x1cb7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7CCu;
        // 0x1cb7d0: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7cc) {
            ctx->pc = 0x1CB800u;
            goto label_1cb800;
        }
    }
    ctx->pc = 0x1CB7D4u;
label_1cb7d4:
    // 0x1cb7d4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb7e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7e4: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1cb7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1cb7e8:
    // 0x1cb7e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb7ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb7f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7f4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB7F4u;
    SET_GPR_U32(ctx, 31, 0x1CB7FCu);
    ctx->pc = 0x1CB7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7F4u;
    // 0x1cb7f8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB7F4u, 0x1CB7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7FCu;
label_1cb7fc:
    // 0x1cb7fc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cb7fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_1cb800:
    // 0x1cb800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb804: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cb804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cb808:
    // 0x1cb808: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CB808u;
    SET_GPR_U32(ctx, 31, 0x1CB810u);
    ctx->pc = 0x1CB80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB808u;
    // 0x1cb80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CB808u, 0x1CB810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB810u;
label_1cb810:
    // 0x1cb810: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB810u;
    {
        const bool branch_taken_0x1cb810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb810) {
            ctx->pc = 0x1CB814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB810u;
            // 0x1cb814: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB818u;
            goto label_1cb818;
        }
    }
    ctx->pc = 0x1CB818u;
label_1cb818:
    // 0x1cb818: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cb818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb81c:
    // 0x1cb81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb820: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB820u;
        // 0x1cb824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB828u;
}
