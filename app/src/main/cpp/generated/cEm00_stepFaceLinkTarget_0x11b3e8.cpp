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

// Function: cEm00_stepFaceLinkTarget
// Address: 0x11b3e8 - 0x11b5f8
void cEm00_stepFaceLinkTarget_0x11b3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepFaceLinkTarget_0x11b3e8");
#endif

    switch (ctx->pc) {
        case 0x11b464u: goto label_11b464;
        case 0x11b488u: goto label_11b488;
        case 0x11b4acu: goto label_11b4ac;
        case 0x11b4c4u: goto label_11b4c4;
        case 0x11b4ccu: goto label_11b4cc;
        case 0x11b4d4u: goto label_11b4d4;
        case 0x11b4f8u: goto label_11b4f8;
        case 0x11b568u: goto label_11b568;
        case 0x11b588u: goto label_11b588;
        case 0x11b590u: goto label_11b590;
        case 0x11b5a4u: goto label_11b5a4;
        case 0x11b5c8u: goto label_11b5c8;
        case 0x11b5d4u: goto label_11b5d4;
        default: break;
    }

    ctx->pc = 0x11b3e8u;

    // 0x11b3e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11b3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11b3ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x11b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x11b3f0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x11b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x11b3f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11b3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x11b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x11b3fc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x11b3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x11b400: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11b404: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x11b404u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x11b408: 0x926302f6  lbu         $v1, 0x2F6($s3)
    ctx->pc = 0x11b408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x11b40c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B40Cu;
    {
        const bool branch_taken_0x11b40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B40Cu;
        // 0x11b410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b40c) {
            ctx->pc = 0x11B424u;
            goto label_11b424;
        }
    }
    ctx->pc = 0x11B414u;
    // 0x11b414: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x11B414u;
    {
        const bool branch_taken_0x11b414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B414u;
        // 0x11b418: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b414) {
            ctx->pc = 0x11B580u;
            goto label_11b580;
        }
    }
    ctx->pc = 0x11B41Cu;
    // 0x11b41c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x11B41Cu;
    {
        const bool branch_taken_0x11b41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B41Cu;
        // 0x11b420: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b41c) {
            ctx->pc = 0x11B5DCu;
            goto label_11b5dc;
        }
    }
    ctx->pc = 0x11B424u;
label_11b424:
    // 0x11b424: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x11b424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x11b428: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11b428u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11b42c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11b42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11b430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b434: 0x8c520270  lw          $s2, 0x270($v0)
    ctx->pc = 0x11b434u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x11b438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b43c: 0x8c510274  lw          $s1, 0x274($v0)
    ctx->pc = 0x11b43cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x11b440: 0x240600cf  addiu       $a2, $zero, 0xCF
    ctx->pc = 0x11b440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x11b444: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x11b444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x11b448: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x11b448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b44c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x11b44cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11b450: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b454: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b458: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b45c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11B45Cu;
    SET_GPR_U32(ctx, 31, 0x11B464u);
    ctx->pc = 0x11B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B45Cu;
    // 0x11b460: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11B45Cu, 0x11B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B464u;
label_11b464:
    // 0x11b464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b46c: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x11b46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x11b470: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x11b470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b474: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b478: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b47c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b47cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b480: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11B480u;
    SET_GPR_U32(ctx, 31, 0x11B488u);
    ctx->pc = 0x11B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B480u;
    // 0x11b484: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11B480u, 0x11B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B488u;
label_11b488:
    // 0x11b488: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x11b488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x11b48c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x11b48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b490: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b494: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b494u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b498: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b498u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b49c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11b49cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4a4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11B4A4u;
    SET_GPR_U32(ctx, 31, 0x11B4ACu);
    ctx->pc = 0x11B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4A4u;
    // 0x11b4a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11B4A4u, 0x11B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B4ACu;
label_11b4ac:
    // 0x11b4ac: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11b4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11b4b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b4b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b4b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4bc: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11B4BCu;
    SET_GPR_U32(ctx, 31, 0x11B4C4u);
    ctx->pc = 0x11B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4BCu;
    // 0x11b4c0: 0xe660054c  swc1        $f0, 0x54C($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11B4BCu, 0x11B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B4C4u;
label_11b4c4:
    // 0x11b4c4: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11B4C4u;
    SET_GPR_U32(ctx, 31, 0x11B4CCu);
    ctx->pc = 0x11B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4C4u;
    // 0x11b4c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11B4C4u, 0x11B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B4CCu;
label_11b4cc:
    // 0x11b4cc: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11B4CCu;
    SET_GPR_U32(ctx, 31, 0x11B4D4u);
    ctx->pc = 0x11B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4CCu;
    // 0x11b4d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11B4CCu, 0x11B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B4D4u;
label_11b4d4:
    // 0x11b4d4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x11b4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x11b4d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11b4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b4dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11b4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11b4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4e8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x11b4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b4ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b4ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4f0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11B4F0u;
    SET_GPR_U32(ctx, 31, 0x11B4F8u);
    ctx->pc = 0x11B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4F0u;
    // 0x11b4f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11B4F0u, 0x11B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B4F8u;
label_11b4f8:
    // 0x11b4f8: 0x8e620678  lw          $v0, 0x678($s3)
    ctx->pc = 0x11b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1656)));
    // 0x11b4fc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x11B4FCu;
    {
        const bool branch_taken_0x11b4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b4fc) {
            ctx->pc = 0x11B500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B4FCu;
            // 0x11b500: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B570u;
            goto label_11b570;
        }
    }
    ctx->pc = 0x11B504u;
    // 0x11b504: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x11b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x11b508: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x11B508u;
    {
        const bool branch_taken_0x11b508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b508) {
            ctx->pc = 0x11B50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B508u;
            // 0x11b50c: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B570u;
            goto label_11b570;
        }
    }
    ctx->pc = 0x11B510u;
    // 0x11b510: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x11b510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11b514: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x11b514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x11b518: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x11b518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11b51c: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x11b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11b520: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x11b520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11b524: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11b524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b528: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11b528u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b52c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11b52cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11b530: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x11b530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11b534: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x11b534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11b538: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11b538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b53c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x11b53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11b540: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B540u;
    {
        const bool branch_taken_0x11b540 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x11B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B540u;
        // 0x11b544: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b540) {
            ctx->pc = 0x11B55Cu;
            goto label_11b55c;
        }
    }
    ctx->pc = 0x11B548u;
    // 0x11b548: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x11b548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b54c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x11b54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b550: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11b550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11b554: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11b554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11b558: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x11b558u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_11b55c:
    // 0x11b55c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11b55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11b560: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x11B560u;
    SET_GPR_U32(ctx, 31, 0x11B568u);
    ctx->pc = 0x11B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B560u;
    // 0x11b564: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x11B560u, 0x11B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B568u;
label_11b568:
    // 0x11b568: 0xe6600104  swc1        $f0, 0x104($s3)
    ctx->pc = 0x11b568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
    // 0x11b56c: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x11b56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_11b570:
    // 0x11b570: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x11b570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11b574: 0xae6315b0  sw          $v1, 0x15B0($s3)
    ctx->pc = 0x11b574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5552), GPR_U32(ctx, 3));
    // 0x11b578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b57c: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x11b57cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_11b580:
    // 0x11b580: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11B580u;
    SET_GPR_U32(ctx, 31, 0x11B588u);
    ctx->pc = 0x11B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B580u;
    // 0x11b584: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11B580u, 0x11B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B588u;
label_11b588:
    // 0x11b588: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11B588u;
    SET_GPR_U32(ctx, 31, 0x11B590u);
    ctx->pc = 0x11B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B588u;
    // 0x11b58c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11B588u, 0x11B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B590u;
label_11b590:
    // 0x11b590: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B590u;
    {
        const bool branch_taken_0x11b590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B590u;
        // 0x11b594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b590) {
            ctx->pc = 0x11B5B4u;
            goto label_11b5b4;
        }
    }
    ctx->pc = 0x11B598u;
    // 0x11b598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b59c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11B59Cu;
    SET_GPR_U32(ctx, 31, 0x11B5A4u);
    ctx->pc = 0x11B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B59Cu;
    // 0x11b5a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11B59Cu, 0x11B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5A4u;
label_11b5a4:
    // 0x11b5a4: 0xa26002f4  sb          $zero, 0x2F4($s3)
    ctx->pc = 0x11b5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b5a8: 0xa26002f5  sb          $zero, 0x2F5($s3)
    ctx->pc = 0x11b5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b5ac: 0xa26002f6  sb          $zero, 0x2F6($s3)
    ctx->pc = 0x11b5acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b5b0: 0xa26002f7  sb          $zero, 0x2F7($s3)
    ctx->pc = 0x11b5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 759), (uint8_t)GPR_U32(ctx, 0));
label_11b5b4:
    // 0x11b5b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11b5b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11b5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11b5bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b5c0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11B5C0u;
    SET_GPR_U32(ctx, 31, 0x11B5C8u);
    ctx->pc = 0x11B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5C0u;
    // 0x11b5c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11B5C0u, 0x11B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5C8u;
label_11b5c8:
    // 0x11b5c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b5cc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11B5CCu;
    SET_GPR_U32(ctx, 31, 0x11B5D4u);
    ctx->pc = 0x11B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5CCu;
    // 0x11b5d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11B5CCu, 0x11B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5D4u;
label_11b5d4:
    // 0x11b5d4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x11b5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11b5d8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x11b5d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11b5dc:
    // 0x11b5dc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x11b5dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11b5e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x11b5e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b5e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b5e8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x11b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11b5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11B5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5ECu;
        // 0x11b5f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B5F4u;
    // 0x11b5f4: 0x0  nop
    ctx->pc = 0x11b5f4u;
    // NOP
    ctx->pc = 0x11b5f8u;
}
