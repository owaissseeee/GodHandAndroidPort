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

// Function: cMessDrawFont_setEnvInit
// Address: 0x2af3f8 - 0x2af590
void cMessDrawFont_setEnvInit_0x2af3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessDrawFont_setEnvInit_0x2af3f8");
#endif

    switch (ctx->pc) {
        case 0x2af428u: goto label_2af428;
        case 0x2af438u: goto label_2af438;
        case 0x2af448u: goto label_2af448;
        case 0x2af45cu: goto label_2af45c;
        case 0x2af48cu: goto label_2af48c;
        case 0x2af4acu: goto label_2af4ac;
        case 0x2af4c4u: goto label_2af4c4;
        case 0x2af4e0u: goto label_2af4e0;
        case 0x2af4f0u: goto label_2af4f0;
        case 0x2af510u: goto label_2af510;
        case 0x2af520u: goto label_2af520;
        case 0x2af530u: goto label_2af530;
        case 0x2af53cu: goto label_2af53c;
        case 0x2af548u: goto label_2af548;
        case 0x2af55cu: goto label_2af55c;
        case 0x2af570u: goto label_2af570;
        default: break;
    }

    ctx->pc = 0x2af3f8u;

    // 0x2af3f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2af3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2af3fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af400: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2af400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2af404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2af408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2af40c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2af40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af414: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2af414u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2af418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af41c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2af41cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2af420: 0xc0abd8a  jal         func_2AF628
    ctx->pc = 0x2AF420u;
    SET_GPR_U32(ctx, 31, 0x2AF428u);
    ctx->pc = 0x2AF424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF420u;
    // 0x2af424: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF628u, 0x2AF420u, 0x2AF428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF428u;
label_2af428:
    // 0x2af428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af42c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af430: 0xc0abd8e  jal         func_2AF638
    ctx->pc = 0x2AF430u;
    SET_GPR_U32(ctx, 31, 0x2AF438u);
    ctx->pc = 0x2AF434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF430u;
    // 0x2af434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF638u, 0x2AF430u, 0x2AF438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF438u;
label_2af438:
    // 0x2af438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af440: 0xc0abd92  jal         func_2AF648
    ctx->pc = 0x2AF440u;
    SET_GPR_U32(ctx, 31, 0x2AF448u);
    ctx->pc = 0x2AF444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF440u;
    // 0x2af444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF648u, 0x2AF440u, 0x2AF448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF448u;
label_2af448:
    // 0x2af448: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2af448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af450: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2af450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af454: 0xc0abd96  jal         func_2AF658
    ctx->pc = 0x2AF454u;
    SET_GPR_U32(ctx, 31, 0x2AF45Cu);
    ctx->pc = 0x2AF458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF454u;
    // 0x2af458: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF658u, 0x2AF454u, 0x2AF45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF45Cu;
label_2af45c:
    // 0x2af45c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2af45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2af460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2af460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af464: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x2af464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2af468: 0x8c43056c  lw          $v1, 0x56C($v0)
    ctx->pc = 0x2af468u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2af46c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF46Cu;
    {
        const bool branch_taken_0x2af46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af46c) {
            ctx->pc = 0x2AF494u;
            goto label_2af494;
        }
    }
    ctx->pc = 0x2AF474u;
    // 0x2af474: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2af474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2af478: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2af478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af47c: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x2af47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x2af480: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2af480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2af484: 0xc0abd9a  jal         func_2AF668
    ctx->pc = 0x2AF484u;
    SET_GPR_U32(ctx, 31, 0x2AF48Cu);
    ctx->pc = 0x2AF488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF484u;
    // 0x2af488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF668u, 0x2AF484u, 0x2AF48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF48Cu;
label_2af48c:
    // 0x2af48c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF48Cu;
    {
        const bool branch_taken_0x2af48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af48c) {
            ctx->pc = 0x2AF4ACu;
            goto label_2af4ac;
        }
    }
    ctx->pc = 0x2AF494u;
label_2af494:
    // 0x2af494: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2af494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2af498: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2af498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af49c: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x2af49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x2af4a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2af4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2af4a4: 0xc0abd9a  jal         func_2AF668
    ctx->pc = 0x2AF4A4u;
    SET_GPR_U32(ctx, 31, 0x2AF4ACu);
    ctx->pc = 0x2AF4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF4A4u;
    // 0x2af4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF668u, 0x2AF4A4u, 0x2AF4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF4ACu;
label_2af4ac:
    // 0x2af4ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2af4b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2af4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2af4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af4b8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2af4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2af4bc: 0xc0abd9e  jal         func_2AF678
    ctx->pc = 0x2AF4BCu;
    SET_GPR_U32(ctx, 31, 0x2AF4C4u);
    ctx->pc = 0x2AF4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF4BCu;
    // 0x2af4c0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF678u, 0x2AF4BCu, 0x2AF4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF4C4u;
label_2af4c4:
    // 0x2af4c4: 0x262274a0  addiu       $v0, $s1, 0x74A0
    ctx->pc = 0x2af4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x2af4c8: 0x8c43056c  lw          $v1, 0x56C($v0)
    ctx->pc = 0x2af4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1388)));
    // 0x2af4cc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2AF4CCu;
    {
        const bool branch_taken_0x2af4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4CCu;
        // 0x2af4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4cc) {
            ctx->pc = 0x2AF4F8u;
            goto label_2af4f8;
        }
    }
    ctx->pc = 0x2AF4D4u;
    // 0x2af4d4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2af4d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2af4d8: 0xc0abda2  jal         func_2AF688
    ctx->pc = 0x2AF4D8u;
    SET_GPR_U32(ctx, 31, 0x2AF4E0u);
    ctx->pc = 0x2AF4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF4D8u;
    // 0x2af4dc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF688u, 0x2AF4D8u, 0x2AF4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF4E0u;
label_2af4e0:
    // 0x2af4e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2af4e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2af4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af4e8: 0xc0abda6  jal         func_2AF698
    ctx->pc = 0x2AF4E8u;
    SET_GPR_U32(ctx, 31, 0x2AF4F0u);
    ctx->pc = 0x2AF4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF4E8u;
    // 0x2af4ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF698u, 0x2AF4E8u, 0x2AF4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF4F0u;
label_2af4f0:
    // 0x2af4f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AF4F0u;
    {
        const bool branch_taken_0x2af4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4F0u;
        // 0x2af4f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4f0) {
            ctx->pc = 0x2AF524u;
            goto label_2af524;
        }
    }
    ctx->pc = 0x2AF4F8u;
label_2af4f8:
    // 0x2af4f8 / 0x2af4fc: font width fix (0.675f in 16:9, 0.9f in 4:3)
    ctx->pc = 0x2af4f8u;
    {
        static const bool s_isWidescreen = []() {
            const char* env = std::getenv("GODHAND_ASPECT_RATIO_IDX");
            return !env || std::strcmp(env, "0") == 0;
        }();
        // 0x3F2CCCCD = 0.675f (16:9 font fix: 0.9f * 3/4)
        // 0x3F666666 = 0.9f (4:3 Original)
        const uint32_t atVal = s_isWidescreen ? 0x3F2CCCCDu : 0x3F666666u;
        SET_GPR_S32(ctx, 1, static_cast<int32_t>(atVal));
    }
    ctx->pc = 0x2af4fcu;
    // 0x2af500: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2af500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2af504: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2af504u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2af508: 0xc0abda2  jal         func_2AF688
    ctx->pc = 0x2AF508u;
    SET_GPR_U32(ctx, 31, 0x2AF510u);
    ctx->pc = 0x2AF50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF508u;
    // 0x2af50c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF688u, 0x2AF508u, 0x2AF510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF510u;
label_2af510:
    // 0x2af510: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2af510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2af514: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2af514u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2af518: 0xc0abda6  jal         func_2AF698
    ctx->pc = 0x2AF518u;
    SET_GPR_U32(ctx, 31, 0x2AF520u);
    ctx->pc = 0x2AF51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF518u;
    // 0x2af51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF698u, 0x2AF518u, 0x2AF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF520u;
label_2af520:
    // 0x2af520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af524:
    // 0x2af524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af528: 0xc0abdaa  jal         func_2AF6A8
    ctx->pc = 0x2AF528u;
    SET_GPR_U32(ctx, 31, 0x2AF530u);
    ctx->pc = 0x2AF52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF528u;
    // 0x2af52c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6A8u, 0x2AF528u, 0x2AF530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF530u;
label_2af530:
    // 0x2af530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af534: 0xc0abdae  jal         func_2AF6B8
    ctx->pc = 0x2AF534u;
    SET_GPR_U32(ctx, 31, 0x2AF53Cu);
    ctx->pc = 0x2AF538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF534u;
    // 0x2af538: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6B8u, 0x2AF534u, 0x2AF53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF53Cu;
label_2af53c:
    // 0x2af53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af540: 0xc0abdc2  jal         func_2AF708
    ctx->pc = 0x2AF540u;
    SET_GPR_U32(ctx, 31, 0x2AF548u);
    ctx->pc = 0x2AF544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF540u;
    // 0x2af544: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF708u, 0x2AF540u, 0x2AF548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF548u;
label_2af548:
    // 0x2af548: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2af548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2af54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af550: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2af550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2af554: 0xc0abdc4  jal         func_2AF710
    ctx->pc = 0x2AF554u;
    SET_GPR_U32(ctx, 31, 0x2AF55Cu);
    ctx->pc = 0x2AF558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF554u;
    // 0x2af558: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF710u, 0x2AF554u, 0x2AF55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF55Cu;
label_2af55c:
    // 0x2af55c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2af55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2af560: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2af560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2af564: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2af564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af568: 0xc0abdc8  jal         func_2AF720
    ctx->pc = 0x2AF568u;
    SET_GPR_U32(ctx, 31, 0x2AF570u);
    ctx->pc = 0x2AF56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF568u;
    // 0x2af56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF720u, 0x2AF568u, 0x2AF570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF570u;
label_2af570:
    // 0x2af570: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2af570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2af574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af57c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2af57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2af580: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2af580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2af584: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF584u;
        // 0x2af588: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF58Cu;
    // 0x2af58c: 0x0  nop
    ctx->pc = 0x2af58cu;
    // NOP
    ctx->pc = 0x2af590u;
}
