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

// Function: func_0030B420
// Address: 0x30b420 - 0x30b698
void func_0030B420_0x30b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030B420_0x30b420");
#endif

    switch (ctx->pc) {
        case 0x30b460u: goto label_30b460;
        case 0x30b468u: goto label_30b468;
        case 0x30b470u: goto label_30b470;
        case 0x30b478u: goto label_30b478;
        case 0x30b480u: goto label_30b480;
        case 0x30b488u: goto label_30b488;
        case 0x30b49cu: goto label_30b49c;
        case 0x30b4a4u: goto label_30b4a4;
        case 0x30b4b0u: goto label_30b4b0;
        case 0x30b4bcu: goto label_30b4bc;
        case 0x30b4c8u: goto label_30b4c8;
        case 0x30b4d0u: goto label_30b4d0;
        case 0x30b4e8u: goto label_30b4e8;
        case 0x30b4f0u: goto label_30b4f0;
        case 0x30b4fcu: goto label_30b4fc;
        case 0x30b50cu: goto label_30b50c;
        case 0x30b554u: goto label_30b554;
        case 0x30b560u: goto label_30b560;
        case 0x30b568u: goto label_30b568;
        case 0x30b570u: goto label_30b570;
        case 0x30b578u: goto label_30b578;
        case 0x30b580u: goto label_30b580;
        case 0x30b588u: goto label_30b588;
        case 0x30b590u: goto label_30b590;
        case 0x30b598u: goto label_30b598;
        case 0x30b5a0u: goto label_30b5a0;
        case 0x30b5a8u: goto label_30b5a8;
        case 0x30b5b4u: goto label_30b5b4;
        case 0x30b5c0u: goto label_30b5c0;
        case 0x30b5ccu: goto label_30b5cc;
        case 0x30b5d8u: goto label_30b5d8;
        case 0x30b5e0u: goto label_30b5e0;
        case 0x30b5e8u: goto label_30b5e8;
        case 0x30b5f4u: goto label_30b5f4;
        case 0x30b608u: goto label_30b608;
        case 0x30b610u: goto label_30b610;
        case 0x30b624u: goto label_30b624;
        case 0x30b664u: goto label_30b664;
        default: break;
    }

    ctx->pc = 0x30b420u;

    // 0x30b420: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30b424: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x30b424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x30b428: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30b428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x30b42c: 0x248404f0  addiu       $a0, $a0, 0x4F0
    ctx->pc = 0x30b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1264));
    // 0x30b430: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30b430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x30b434: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x30b434u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x30b438: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30b438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x30b43c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x30b440: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30b440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30b444: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x30b444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x30b448: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x30b44c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x30b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x30b450: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x30b450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x30b454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b458: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x30B458u;
    SET_GPR_U32(ctx, 31, 0x30B460u);
    ctx->pc = 0x30B45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B458u;
    // 0x30b45c: 0x3c11005e  lui         $s1, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x30B458u, 0x30B460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B460u;
label_30b460:
    // 0x30b460: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x30B460u;
    SET_GPR_U32(ctx, 31, 0x30B468u);
    ctx->pc = 0x30B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B460u;
    // 0x30b464: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x30B460u, 0x30B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B468u;
label_30b468:
    // 0x30b468: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x30B468u;
    SET_GPR_U32(ctx, 31, 0x30B470u);
    ctx->pc = 0x30B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B468u;
    // 0x30b46c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x30B468u, 0x30B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B470u;
label_30b470:
    // 0x30b470: 0xc0c3d7c  jal         func_30F5F0
    ctx->pc = 0x30B470u;
    SET_GPR_U32(ctx, 31, 0x30B478u);
    ctx->pc = 0x30B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B470u;
    // 0x30b474: 0x3c150074  lui         $s5, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5F0u, 0x30B470u, 0x30B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B478u;
label_30b478:
    // 0x30b478: 0xc05401e  jal         func_150078
    ctx->pc = 0x30B478u;
    SET_GPR_U32(ctx, 31, 0x30B480u);
    ctx->pc = 0x30B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B478u;
    // 0x30b47c: 0x3c160074  lui         $s6, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150078u, 0x30B478u, 0x30B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B480u;
label_30b480:
    // 0x30b480: 0xc0524b2  jal         func_1492C8
    ctx->pc = 0x30B480u;
    SET_GPR_U32(ctx, 31, 0x30B488u);
    ctx->pc = 0x30B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B480u;
    // 0x30b484: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1492C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1492C8u, 0x30B480u, 0x30B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B488u;
label_30b488:
    // 0x30b488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30b488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b48c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30b490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b494: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x30B494u;
    SET_GPR_U32(ctx, 31, 0x30B49Cu);
    ctx->pc = 0x30B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B494u;
    // 0x30b498: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x30B494u, 0x30B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B49Cu;
label_30b49c:
    // 0x30b49c: 0xc0b567c  jal         func_2D59F0
    ctx->pc = 0x30B49Cu;
    SET_GPR_U32(ctx, 31, 0x30B4A4u);
    ctx->pc = 0x30B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B49Cu;
    // 0x30b4a0: 0x8e042c00  lw          $a0, 0x2C00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x30B49Cu, 0x30B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4A4u;
label_30b4a4:
    // 0x30b4a4: 0x8e042c00  lw          $a0, 0x2C00($s0)
    ctx->pc = 0x30b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11264)));
    // 0x30b4a8: 0xc0b567c  jal         func_2D59F0
    ctx->pc = 0x30B4A8u;
    SET_GPR_U32(ctx, 31, 0x30B4B0u);
    ctx->pc = 0x30B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4A8u;
    // 0x30b4ac: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x30B4A8u, 0x30B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4B0u;
label_30b4b0:
    // 0x30b4b0: 0x8e042c00  lw          $a0, 0x2C00($s0)
    ctx->pc = 0x30b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11264)));
    // 0x30b4b4: 0xc0b567c  jal         func_2D59F0
    ctx->pc = 0x30B4B4u;
    SET_GPR_U32(ctx, 31, 0x30B4BCu);
    ctx->pc = 0x30B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4B4u;
    // 0x30b4b8: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x30B4B4u, 0x30B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4BCu;
label_30b4bc:
    // 0x30b4bc: 0x8e042c00  lw          $a0, 0x2C00($s0)
    ctx->pc = 0x30b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11264)));
    // 0x30b4c0: 0xc0b567c  jal         func_2D59F0
    ctx->pc = 0x30B4C0u;
    SET_GPR_U32(ctx, 31, 0x30B4C8u);
    ctx->pc = 0x30B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4C0u;
    // 0x30b4c4: 0x24840108  addiu       $a0, $a0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x30B4C0u, 0x30B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4C8u;
label_30b4c8:
    // 0x30b4c8: 0xc0ad36a  jal         func_2B4DA8
    ctx->pc = 0x30B4C8u;
    SET_GPR_U32(ctx, 31, 0x30B4D0u);
    ctx->pc = 0x30B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4C8u;
    // 0x30b4cc: 0x262479d0  addiu       $a0, $s1, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4DA8u, 0x30B4C8u, 0x30B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4D0u;
label_30b4d0:
    // 0x30b4d0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x30b4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x30b4d4: 0x3c17005e  lui         $s7, 0x5E
    ctx->pc = 0x30b4d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
    // 0x30b4d8: 0x3c1e005f  lui         $fp, 0x5F
    ctx->pc = 0x30b4d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)95 << 16));
    // 0x30b4dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30B4DCu;
    {
        const bool branch_taken_0x30b4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4DCu;
        // 0x30b4e0: 0x3c13005f  lui         $s3, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4dc) {
            ctx->pc = 0x30B4F0u;
            goto label_30b4f0;
        }
    }
    ctx->pc = 0x30B4E4u;
    // 0x30b4e4: 0x0  nop
    ctx->pc = 0x30b4e4u;
    // NOP
label_30b4e8:
    // 0x30b4e8: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x30B4E8u;
    SET_GPR_U32(ctx, 31, 0x30B4F0u);
    ctx->pc = 0x30B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4E8u;
    // 0x30b4ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x30B4E8u, 0x30B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4F0u;
label_30b4f0:
    // 0x30b4f0: 0x263479d0  addiu       $s4, $s1, 0x79D0
    ctx->pc = 0x30b4f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 31184));
    // 0x30b4f4: 0xc0ad392  jal         func_2B4E48
    ctx->pc = 0x30B4F4u;
    SET_GPR_U32(ctx, 31, 0x30B4FCu);
    ctx->pc = 0x30B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4F4u;
    // 0x30b4f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E48u, 0x30B4F4u, 0x30B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4FCu;
label_30b4fc:
    // 0x30b4fc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30B4FCu;
    {
        const bool branch_taken_0x30b4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4FCu;
        // 0x30b500: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4fc) {
            ctx->pc = 0x30B4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b4e8;
        }
    }
    ctx->pc = 0x30B504u;
    // 0x30b504: 0xc0ad28c  jal         func_2B4A30
    ctx->pc = 0x30B504u;
    SET_GPR_U32(ctx, 31, 0x30B50Cu);
    ctx->pc = 0x30B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B504u;
    // 0x30b508: 0x2611ee00  addiu       $s1, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A30u, 0x30B504u, 0x30B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B50Cu;
label_30b50c:
    // 0x30b50c: 0x26523f20  addiu       $s2, $s2, 0x3F20
    ctx->pc = 0x30b50cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16160));
    // 0x30b510: 0x8ea37a24  lw          $v1, 0x7A24($s5)
    ctx->pc = 0x30b510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31268)));
    // 0x30b514: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x30b514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x30b518: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b51c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x30b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x30b520: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30b520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b524: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x30b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x30b528: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30b528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30b52c: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x30b52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x30b530: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30b530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30b534: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x30b534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x30b538: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x30b538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x30b53c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b540: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30b540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b544: 0x26c47470  addiu       $a0, $s6, 0x7470
    ctx->pc = 0x30b544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 29808));
    // 0x30b548: 0xaea37a24  sw          $v1, 0x7A24($s5)
    ctx->pc = 0x30b548u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 31268), GPR_U32(ctx, 3));
    // 0x30b54c: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x30B54Cu;
    SET_GPR_U32(ctx, 31, 0x30B554u);
    ctx->pc = 0x30B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B54Cu;
    // 0x30b550: 0x26738040  addiu       $s3, $s3, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x30B54Cu, 0x30B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B554u;
label_30b554:
    // 0x30b554: 0x26b07a24  addiu       $s0, $s5, 0x7A24
    ctx->pc = 0x30b554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 31268));
    // 0x30b558: 0xc0b2810  jal         func_2CA040
    ctx->pc = 0x30B558u;
    SET_GPR_U32(ctx, 31, 0x30B560u);
    ctx->pc = 0x30B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B558u;
    // 0x30b55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA040u, 0x30B558u, 0x30B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B560u;
label_30b560:
    // 0x30b560: 0xc080406  jal         func_201018
    ctx->pc = 0x30B560u;
    SET_GPR_U32(ctx, 31, 0x30B568u);
    ctx->pc = 0x30B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B560u;
    // 0x30b564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201018u, 0x30B560u, 0x30B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B568u;
label_30b568:
    // 0x30b568: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x30B568u;
    SET_GPR_U32(ctx, 31, 0x30B570u);
    ctx->pc = 0x30B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B568u;
    // 0x30b56c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x30B568u, 0x30B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B570u;
label_30b570:
    // 0x30b570: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x30B570u;
    SET_GPR_U32(ctx, 31, 0x30B578u);
    ctx->pc = 0x30B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B570u;
    // 0x30b574: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x30B570u, 0x30B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B578u;
label_30b578:
    // 0x30b578: 0xc0ab97a  jal         func_2AE5E8
    ctx->pc = 0x30B578u;
    SET_GPR_U32(ctx, 31, 0x30B580u);
    ctx->pc = 0x30B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B578u;
    // 0x30b57c: 0x26e46900  addiu       $a0, $s7, 0x6900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 26880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE5E8u, 0x30B578u, 0x30B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B580u;
label_30b580:
    // 0x30b580: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x30B580u;
    SET_GPR_U32(ctx, 31, 0x30B588u);
    ctx->pc = 0x30B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B580u;
    // 0x30b584: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x30B580u, 0x30B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B588u;
label_30b588:
    // 0x30b588: 0xc0b27d6  jal         func_2C9F58
    ctx->pc = 0x30B588u;
    SET_GPR_U32(ctx, 31, 0x30B590u);
    ctx->pc = 0x30B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B588u;
    // 0x30b58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9F58u, 0x30B588u, 0x30B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B590u;
label_30b590:
    // 0x30b590: 0xc0802b0  jal         func_200AC0
    ctx->pc = 0x30B590u;
    SET_GPR_U32(ctx, 31, 0x30B598u);
    ctx->pc = 0x30B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B590u;
    // 0x30b594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AC0u, 0x30B590u, 0x30B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B598u;
label_30b598:
    // 0x30b598: 0xc0ad258  jal         func_2B4960
    ctx->pc = 0x30B598u;
    SET_GPR_U32(ctx, 31, 0x30B5A0u);
    ctx->pc = 0x30B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B598u;
    // 0x30b59c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4960u, 0x30B598u, 0x30B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5A0u;
label_30b5a0:
    // 0x30b5a0: 0xc0afa06  jal         func_2BE818
    ctx->pc = 0x30B5A0u;
    SET_GPR_U32(ctx, 31, 0x30B5A8u);
    ctx->pc = 0x30B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5A0u;
    // 0x30b5a4: 0x27c48640  addiu       $a0, $fp, -0x79C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE818u, 0x30B5A0u, 0x30B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5A8u;
label_30b5a8:
    // 0x30b5a8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x30b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x30b5ac: 0xc0a58bc  jal         func_2962F0
    ctx->pc = 0x30B5ACu;
    SET_GPR_U32(ctx, 31, 0x30B5B4u);
    ctx->pc = 0x30B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5ACu;
    // 0x30b5b0: 0x24446af0  addiu       $a0, $v0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x30B5ACu, 0x30B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5B4u;
label_30b5b4:
    // 0x30b5b4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30b5b8: 0xc0b0cb0  jal         func_2C32C0
    ctx->pc = 0x30B5B8u;
    SET_GPR_U32(ctx, 31, 0x30B5C0u);
    ctx->pc = 0x30B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5B8u;
    // 0x30b5bc: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C32C0u, 0x30B5B8u, 0x30B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5C0u;
label_30b5c0:
    // 0x30b5c0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x30b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x30b5c4: 0xc04ba00  jal         func_12E800
    ctx->pc = 0x30B5C4u;
    SET_GPR_U32(ctx, 31, 0x30B5CCu);
    ctx->pc = 0x30B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5C4u;
    // 0x30b5c8: 0x2444ae50  addiu       $a0, $v0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E800u, 0x30B5C4u, 0x30B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5CCu;
label_30b5cc:
    // 0x30b5cc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x30b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x30b5d0: 0xc07f7ea  jal         func_1FDFA8
    ctx->pc = 0x30B5D0u;
    SET_GPR_U32(ctx, 31, 0x30B5D8u);
    ctx->pc = 0x30B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5D0u;
    // 0x30b5d4: 0x24444380  addiu       $a0, $v0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFA8u, 0x30B5D0u, 0x30B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5D8u;
label_30b5d8:
    // 0x30b5d8: 0xc0a9c7c  jal         func_2A71F0
    ctx->pc = 0x30B5D8u;
    SET_GPR_U32(ctx, 31, 0x30B5E0u);
    ctx->pc = 0x30B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5D8u;
    // 0x30b5dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A71F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71F0u, 0x30B5D8u, 0x30B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5E0u;
label_30b5e0:
    // 0x30b5e0: 0xc0a9ca0  jal         func_2A7280
    ctx->pc = 0x30B5E0u;
    SET_GPR_U32(ctx, 31, 0x30B5E8u);
    ctx->pc = 0x30B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5E0u;
    // 0x30b5e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7280u, 0x30B5E0u, 0x30B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5E8u;
label_30b5e8:
    // 0x30b5e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30b5ec: 0xc0b5cf8  jal         func_2D73E0
    ctx->pc = 0x30B5ECu;
    SET_GPR_U32(ctx, 31, 0x30B5F4u);
    ctx->pc = 0x30B5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5ECu;
    // 0x30b5f0: 0x24444700  addiu       $a0, $v0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73E0u, 0x30B5ECu, 0x30B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5F4u;
label_30b5f4:
    // 0x30b5f4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x30b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x30b5f8: 0x24450508  addiu       $a1, $v0, 0x508
    ctx->pc = 0x30b5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1288));
    // 0x30b5fc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x30b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x30b600: 0xc07fefc  jal         func_1FFBF0
    ctx->pc = 0x30B600u;
    SET_GPR_U32(ctx, 31, 0x30B608u);
    ctx->pc = 0x30B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B600u;
    // 0x30b604: 0x24440d40  addiu       $a0, $v0, 0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBF0u, 0x30B600u, 0x30B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B608u;
label_30b608:
    // 0x30b608: 0xc0c3b3e  jal         func_30ECF8
    ctx->pc = 0x30B608u;
    SET_GPR_U32(ctx, 31, 0x30B610u);
    ctx->pc = 0x30B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B608u;
    // 0x30b60c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ECF8u, 0x30B608u, 0x30B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B610u;
label_30b610:
    // 0x30b610: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x30b610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x30b614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30b614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b618: 0xac403d80  sw          $zero, 0x3D80($v0)
    ctx->pc = 0x30b618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x753D80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x753D80u, _value); } while (0);
    // 0x30b61c: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x30B61Cu;
    SET_GPR_U32(ctx, 31, 0x30B624u);
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x30B61Cu, 0x30B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B624u;
label_30b624:
    // 0x30b624: 0x8ea47a24  lw          $a0, 0x7A24($s5)
    ctx->pc = 0x30b624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31268)));
    // 0x30b628: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x30b628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x30b62c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x30b62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x30b630: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30b630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30b634: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x30b634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x30b638: 0x2606fa7c  addiu       $a2, $s0, -0x584
    ctx->pc = 0x30b638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965884));
    // 0x30b63c: 0xaea47a24  sw          $a0, 0x7A24($s5)
    ctx->pc = 0x30b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 31268), GPR_U32(ctx, 4));
    // 0x30b640: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x30b640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x30b644: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x30b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30b648: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x30b648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x30b64c: 0xa4c205b0  sh          $v0, 0x5B0($a2)
    ctx->pc = 0x30b64cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1456), (uint16_t)GPR_U32(ctx, 2));
    // 0x30b650: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x30b650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x30b654: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x30b654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x30b658: 0x24448140  addiu       $a0, $v0, -0x7EC0
    ctx->pc = 0x30b658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934848));
    // 0x30b65c: 0xc0af880  jal         func_2BE200
    ctx->pc = 0x30B65Cu;
    SET_GPR_U32(ctx, 31, 0x30B664u);
    ctx->pc = 0x30B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B65Cu;
    // 0x30b660: 0xacc005a0  sw          $zero, 0x5A0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 1440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE200u, 0x30B65Cu, 0x30B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B664u;
label_30b664:
    // 0x30b664: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x30b664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30b668: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x30b668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30b66c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x30b66cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30b670: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30b670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30b674: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30b674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30b678: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x30b678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b67c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x30b67cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b680: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x30b680u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b684: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x30b684u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b68c: 0x3e00008  jr          $ra
    ctx->pc = 0x30B68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B68Cu;
        // 0x30b690: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B694u;
    // 0x30b694: 0x0  nop
    ctx->pc = 0x30b694u;
    // NOP
    ctx->pc = 0x30b698u;
}
