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

// Function: cEm00_GetPlMotion
// Address: 0x23a300 - 0x23a950
void cEm00_GetPlMotion_0x23a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_GetPlMotion_0x23a300");
#endif

    switch (ctx->pc) {
        case 0x23a330u: goto label_23a330;
        case 0x23a90cu: goto label_23a90c;
        case 0x23a92cu: goto label_23a92c;
        default: break;
    }

    ctx->pc = 0x23a300u;

    // 0x23a300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23a304: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23a304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23a308: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23a30c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a310: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x23a310u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23a314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23a314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a318: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x23a318u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23a31c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x23a31cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x23a320: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23a320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23a324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23a328: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23A328u;
    SET_GPR_U32(ctx, 31, 0x23A330u);
    ctx->pc = 0x23A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A328u;
    // 0x23a32c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23A328u, 0x23A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A330u;
label_23a330:
    // 0x23a330: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23a330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a334: 0x2e220058  sltiu       $v0, $s1, 0x58
    ctx->pc = 0x23a334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)88) ? 1 : 0);
    // 0x23a338: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A338u;
    {
        const bool branch_taken_0x23a338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A338u;
        // 0x23a33c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a338) {
            ctx->pc = 0x23A358u;
            goto label_23a358;
        }
    }
    ctx->pc = 0x23A340u;
    // 0x23a340: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x23a340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23a344: 0x2442a4a0  addiu       $v0, $v0, -0x5B60
    ctx->pc = 0x23a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x23a348: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a34c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a350: 0x800008  jr          $a0
    ctx->pc = 0x23A350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A358u: goto label_23a358;
            case 0x23A368u: goto label_23a368;
            case 0x23A378u: goto label_23a378;
            case 0x23A388u: goto label_23a388;
            case 0x23A398u: goto label_23a398;
            case 0x23A3A8u: goto label_23a3a8;
            case 0x23A3B8u: goto label_23a3b8;
            case 0x23A3C8u: goto label_23a3c8;
            case 0x23A3D8u: goto label_23a3d8;
            case 0x23A3E8u: goto label_23a3e8;
            case 0x23A40Cu: goto label_23a40c;
            case 0x23A41Cu: goto label_23a41c;
            case 0x23A42Cu: goto label_23a42c;
            case 0x23A43Cu: goto label_23a43c;
            case 0x23A44Cu: goto label_23a44c;
            case 0x23A45Cu: goto label_23a45c;
            case 0x23A46Cu: goto label_23a46c;
            case 0x23A47Cu: goto label_23a47c;
            case 0x23A48Cu: goto label_23a48c;
            case 0x23A49Cu: goto label_23a49c;
            case 0x23A4ACu: goto label_23a4ac;
            case 0x23A4BCu: goto label_23a4bc;
            case 0x23A4CCu: goto label_23a4cc;
            case 0x23A4DCu: goto label_23a4dc;
            case 0x23A4ECu: goto label_23a4ec;
            case 0x23A4FCu: goto label_23a4fc;
            case 0x23A50Cu: goto label_23a50c;
            case 0x23A51Cu: goto label_23a51c;
            case 0x23A52Cu: goto label_23a52c;
            case 0x23A53Cu: goto label_23a53c;
            case 0x23A54Cu: goto label_23a54c;
            case 0x23A55Cu: goto label_23a55c;
            case 0x23A56Cu: goto label_23a56c;
            case 0x23A57Cu: goto label_23a57c;
            case 0x23A5A0u: goto label_23a5a0;
            case 0x23A5B0u: goto label_23a5b0;
            case 0x23A5C0u: goto label_23a5c0;
            case 0x23A5D0u: goto label_23a5d0;
            case 0x23A5E0u: goto label_23a5e0;
            case 0x23A5F0u: goto label_23a5f0;
            case 0x23A600u: goto label_23a600;
            case 0x23A610u: goto label_23a610;
            case 0x23A620u: goto label_23a620;
            case 0x23A630u: goto label_23a630;
            case 0x23A640u: goto label_23a640;
            case 0x23A650u: goto label_23a650;
            case 0x23A660u: goto label_23a660;
            case 0x23A670u: goto label_23a670;
            case 0x23A680u: goto label_23a680;
            case 0x23A690u: goto label_23a690;
            case 0x23A6A0u: goto label_23a6a0;
            case 0x23A6B0u: goto label_23a6b0;
            case 0x23A6C0u: goto label_23a6c0;
            case 0x23A6D0u: goto label_23a6d0;
            case 0x23A6E0u: goto label_23a6e0;
            case 0x23A6F0u: goto label_23a6f0;
            case 0x23A700u: goto label_23a700;
            case 0x23A710u: goto label_23a710;
            case 0x23A720u: goto label_23a720;
            case 0x23A730u: goto label_23a730;
            case 0x23A740u: goto label_23a740;
            case 0x23A750u: goto label_23a750;
            case 0x23A760u: goto label_23a760;
            case 0x23A770u: goto label_23a770;
            case 0x23A780u: goto label_23a780;
            case 0x23A790u: goto label_23a790;
            case 0x23A7A0u: goto label_23a7a0;
            case 0x23A7B0u: goto label_23a7b0;
            case 0x23A7C0u: goto label_23a7c0;
            case 0x23A7D0u: goto label_23a7d0;
            case 0x23A7E0u: goto label_23a7e0;
            case 0x23A7F0u: goto label_23a7f0;
            case 0x23A800u: goto label_23a800;
            case 0x23A810u: goto label_23a810;
            case 0x23A820u: goto label_23a820;
            case 0x23A830u: goto label_23a830;
            case 0x23A840u: goto label_23a840;
            case 0x23A850u: goto label_23a850;
            case 0x23A860u: goto label_23a860;
            case 0x23A870u: goto label_23a870;
            case 0x23A880u: goto label_23a880;
            case 0x23A890u: goto label_23a890;
            case 0x23A8A0u: goto label_23a8a0;
            case 0x23A8B0u: goto label_23a8b0;
            case 0x23A8C0u: goto label_23a8c0;
            case 0x23A8D0u: goto label_23a8d0;
            case 0x23A8E0u: goto label_23a8e0;
            case 0x23A8F0u: goto label_23a8f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A350u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23A358u;
label_23a358:
    // 0x23a358: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a35c: 0x8c430c80  lw          $v1, 0xC80($v0)
    ctx->pc = 0x23a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3200)));
    // 0x23a360: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x23A360u;
    {
        const bool branch_taken_0x23a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A360u;
        // 0x23a364: 0x8c440c84  lw          $a0, 0xC84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a360) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A368u;
label_23a368:
    // 0x23a368: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a36c: 0x8c430c88  lw          $v1, 0xC88($v0)
    ctx->pc = 0x23a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3208)));
    // 0x23a370: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x23A370u;
    {
        const bool branch_taken_0x23a370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A370u;
        // 0x23a374: 0x8c440c8c  lw          $a0, 0xC8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a370) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A378u;
label_23a378:
    // 0x23a378: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a37c: 0x8c430c90  lw          $v1, 0xC90($v0)
    ctx->pc = 0x23a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3216)));
    // 0x23a380: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x23A380u;
    {
        const bool branch_taken_0x23a380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A380u;
        // 0x23a384: 0x8c440c94  lw          $a0, 0xC94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a380) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A388u;
label_23a388:
    // 0x23a388: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a38c: 0x8c431a7c  lw          $v1, 0x1A7C($v0)
    ctx->pc = 0x23a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6780)));
    // 0x23a390: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x23A390u;
    {
        const bool branch_taken_0x23a390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A390u;
        // 0x23a394: 0x8c441a80  lw          $a0, 0x1A80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a390) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A398u;
label_23a398:
    // 0x23a398: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a39c: 0x8c431a84  lw          $v1, 0x1A84($v0)
    ctx->pc = 0x23a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6788)));
    // 0x23a3a0: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x23A3A0u;
    {
        const bool branch_taken_0x23a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3A0u;
        // 0x23a3a4: 0x8c441a88  lw          $a0, 0x1A88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3a0) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A3A8u;
label_23a3a8:
    // 0x23a3a8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a3ac: 0x8c431a8c  lw          $v1, 0x1A8C($v0)
    ctx->pc = 0x23a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6796)));
    // 0x23a3b0: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x23A3B0u;
    {
        const bool branch_taken_0x23a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3B0u;
        // 0x23a3b4: 0x8c441a90  lw          $a0, 0x1A90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3b0) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A3B8u;
label_23a3b8:
    // 0x23a3b8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a3bc: 0x8c430520  lw          $v1, 0x520($v0)
    ctx->pc = 0x23a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x23a3c0: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x23A3C0u;
    {
        const bool branch_taken_0x23a3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3C0u;
        // 0x23a3c4: 0x8c440524  lw          $a0, 0x524($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3c0) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A3C8u;
label_23a3c8:
    // 0x23a3c8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a3cc: 0x8c430808  lw          $v1, 0x808($v0)
    ctx->pc = 0x23a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2056)));
    // 0x23a3d0: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x23A3D0u;
    {
        const bool branch_taken_0x23a3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3D0u;
        // 0x23a3d4: 0x8c44080c  lw          $a0, 0x80C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3d0) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A3D8u;
label_23a3d8:
    // 0x23a3d8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a3dc: 0x8c4307f8  lw          $v1, 0x7F8($v0)
    ctx->pc = 0x23a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x23a3e0: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x23A3E0u;
    {
        const bool branch_taken_0x23a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3E0u;
        // 0x23a3e4: 0x8c4407fc  lw          $a0, 0x7FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3e0) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A3E8u;
label_23a3e8:
    // 0x23a3e8: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x23a3e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x23a3ec: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A3ECu;
    {
        const bool branch_taken_0x23a3ec = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x23A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3ECu;
        // 0x23a3f0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3ec) {
            ctx->pc = 0x23A400u;
            goto label_23a400;
        }
    }
    ctx->pc = 0x23A3F4u;
    // 0x23a3f4: 0x8c430810  lw          $v1, 0x810($v0)
    ctx->pc = 0x23a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x23a3f8: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x23A3F8u;
    {
        const bool branch_taken_0x23a3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3F8u;
        // 0x23a3fc: 0x8c440814  lw          $a0, 0x814($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3f8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A400u;
label_23a400:
    // 0x23a400: 0x8c430800  lw          $v1, 0x800($v0)
    ctx->pc = 0x23a400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x23a404: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x23A404u;
    {
        const bool branch_taken_0x23a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A404u;
        // 0x23a408: 0x8c440804  lw          $a0, 0x804($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a404) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A40Cu;
label_23a40c:
    // 0x23a40c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a410: 0x8c430800  lw          $v1, 0x800($v0)
    ctx->pc = 0x23a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x23a414: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x23A414u;
    {
        const bool branch_taken_0x23a414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A414u;
        // 0x23a418: 0x8c440804  lw          $a0, 0x804($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a414) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A41Cu;
label_23a41c:
    // 0x23a41c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a420: 0x8c43102c  lw          $v1, 0x102C($v0)
    ctx->pc = 0x23a420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4140)));
    // 0x23a424: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x23A424u;
    {
        const bool branch_taken_0x23a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A424u;
        // 0x23a428: 0x8c441030  lw          $a0, 0x1030($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a424) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A42Cu;
label_23a42c:
    // 0x23a42c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a430: 0x8c431014  lw          $v1, 0x1014($v0)
    ctx->pc = 0x23a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4116)));
    // 0x23a434: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x23A434u;
    {
        const bool branch_taken_0x23a434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A434u;
        // 0x23a438: 0x8c441018  lw          $a0, 0x1018($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a434) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A43Cu;
label_23a43c:
    // 0x23a43c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a440: 0x8c431024  lw          $v1, 0x1024($v0)
    ctx->pc = 0x23a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4132)));
    // 0x23a444: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x23A444u;
    {
        const bool branch_taken_0x23a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A444u;
        // 0x23a448: 0x8c441028  lw          $a0, 0x1028($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a444) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A44Cu;
label_23a44c:
    // 0x23a44c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a450: 0x8c43101c  lw          $v1, 0x101C($v0)
    ctx->pc = 0x23a450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4124)));
    // 0x23a454: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x23A454u;
    {
        const bool branch_taken_0x23a454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A454u;
        // 0x23a458: 0x8c441020  lw          $a0, 0x1020($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a454) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A45Cu;
label_23a45c:
    // 0x23a45c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a460: 0x8c431da0  lw          $v1, 0x1DA0($v0)
    ctx->pc = 0x23a460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7584)));
    // 0x23a464: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x23A464u;
    {
        const bool branch_taken_0x23a464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A464u;
        // 0x23a468: 0x8c441da4  lw          $a0, 0x1DA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a464) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A46Cu;
label_23a46c:
    // 0x23a46c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a470: 0x8c432f00  lw          $v1, 0x2F00($v0)
    ctx->pc = 0x23a470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12032)));
    // 0x23a474: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x23A474u;
    {
        const bool branch_taken_0x23a474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A474u;
        // 0x23a478: 0x8c442f04  lw          $a0, 0x2F04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a474) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A47Cu;
label_23a47c:
    // 0x23a47c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a480: 0x8c431bb0  lw          $v1, 0x1BB0($v0)
    ctx->pc = 0x23a480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7088)));
    // 0x23a484: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x23A484u;
    {
        const bool branch_taken_0x23a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A484u;
        // 0x23a488: 0x8c441bb4  lw          $a0, 0x1BB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a484) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A48Cu;
label_23a48c:
    // 0x23a48c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a490: 0x8c431bb8  lw          $v1, 0x1BB8($v0)
    ctx->pc = 0x23a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7096)));
    // 0x23a494: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x23A494u;
    {
        const bool branch_taken_0x23a494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A494u;
        // 0x23a498: 0x8c441bbc  lw          $a0, 0x1BBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a494) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A49Cu;
label_23a49c:
    // 0x23a49c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a4a0: 0x8c432428  lw          $v1, 0x2428($v0)
    ctx->pc = 0x23a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9256)));
    // 0x23a4a4: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x23A4A4u;
    {
        const bool branch_taken_0x23a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4A4u;
        // 0x23a4a8: 0x8c44242c  lw          $a0, 0x242C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4a4) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A4ACu;
label_23a4ac:
    // 0x23a4ac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a4b0: 0x8c432430  lw          $v1, 0x2430($v0)
    ctx->pc = 0x23a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9264)));
    // 0x23a4b4: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x23A4B4u;
    {
        const bool branch_taken_0x23a4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4B4u;
        // 0x23a4b8: 0x8c442434  lw          $a0, 0x2434($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4b4) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A4BCu;
label_23a4bc:
    // 0x23a4bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a4c0: 0x8c4320e0  lw          $v1, 0x20E0($v0)
    ctx->pc = 0x23a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8416)));
    // 0x23a4c4: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x23A4C4u;
    {
        const bool branch_taken_0x23a4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4C4u;
        // 0x23a4c8: 0x8c4420e4  lw          $a0, 0x20E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4c4) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A4CCu;
label_23a4cc:
    // 0x23a4cc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a4d0: 0x8c4320e8  lw          $v1, 0x20E8($v0)
    ctx->pc = 0x23a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8424)));
    // 0x23a4d4: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x23A4D4u;
    {
        const bool branch_taken_0x23a4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D4u;
        // 0x23a4d8: 0x8c4420ec  lw          $a0, 0x20EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4d4) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A4DCu;
label_23a4dc:
    // 0x23a4dc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a4e0: 0x8c432128  lw          $v1, 0x2128($v0)
    ctx->pc = 0x23a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8488)));
    // 0x23a4e4: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x23A4E4u;
    {
        const bool branch_taken_0x23a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4E4u;
        // 0x23a4e8: 0x8c44212c  lw          $a0, 0x212C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4e4) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A4ECu;
label_23a4ec:
    // 0x23a4ec: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a4f0: 0x8c432130  lw          $v1, 0x2130($v0)
    ctx->pc = 0x23a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8496)));
    // 0x23a4f4: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x23A4F4u;
    {
        const bool branch_taken_0x23a4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4F4u;
        // 0x23a4f8: 0x8c442134  lw          $a0, 0x2134($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4f4) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A4FCu;
label_23a4fc:
    // 0x23a4fc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a500: 0x8c432138  lw          $v1, 0x2138($v0)
    ctx->pc = 0x23a500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8504)));
    // 0x23a504: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x23A504u;
    {
        const bool branch_taken_0x23a504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A504u;
        // 0x23a508: 0x8c44213c  lw          $a0, 0x213C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a504) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A50Cu;
label_23a50c:
    // 0x23a50c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a510: 0x8c432140  lw          $v1, 0x2140($v0)
    ctx->pc = 0x23a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8512)));
    // 0x23a514: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x23A514u;
    {
        const bool branch_taken_0x23a514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A514u;
        // 0x23a518: 0x8c442144  lw          $a0, 0x2144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a514) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A51Cu;
label_23a51c:
    // 0x23a51c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a520: 0x8c431558  lw          $v1, 0x1558($v0)
    ctx->pc = 0x23a520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5464)));
    // 0x23a524: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x23A524u;
    {
        const bool branch_taken_0x23a524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A524u;
        // 0x23a528: 0x8c44155c  lw          $a0, 0x155C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a524) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A52Cu;
label_23a52c:
    // 0x23a52c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a530: 0x8c431474  lw          $v1, 0x1474($v0)
    ctx->pc = 0x23a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5236)));
    // 0x23a534: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x23A534u;
    {
        const bool branch_taken_0x23a534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A534u;
        // 0x23a538: 0x8c441478  lw          $a0, 0x1478($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a534) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A53Cu;
label_23a53c:
    // 0x23a53c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a540: 0x8c4314b0  lw          $v1, 0x14B0($v0)
    ctx->pc = 0x23a540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5296)));
    // 0x23a544: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x23A544u;
    {
        const bool branch_taken_0x23a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A544u;
        // 0x23a548: 0x8c4414b4  lw          $a0, 0x14B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a544) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A54Cu;
label_23a54c:
    // 0x23a54c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a550: 0x8c4314b8  lw          $v1, 0x14B8($v0)
    ctx->pc = 0x23a550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5304)));
    // 0x23a554: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x23A554u;
    {
        const bool branch_taken_0x23a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A554u;
        // 0x23a558: 0x8c4414bc  lw          $a0, 0x14BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a554) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A55Cu;
label_23a55c:
    // 0x23a55c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a560: 0x8c43147c  lw          $v1, 0x147C($v0)
    ctx->pc = 0x23a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5244)));
    // 0x23a564: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x23A564u;
    {
        const bool branch_taken_0x23a564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A564u;
        // 0x23a568: 0x8c441480  lw          $a0, 0x1480($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a564) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A56Cu;
label_23a56c:
    // 0x23a56c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a570: 0x8c4324d4  lw          $v1, 0x24D4($v0)
    ctx->pc = 0x23a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9428)));
    // 0x23a574: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x23A574u;
    {
        const bool branch_taken_0x23a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A574u;
        // 0x23a578: 0x8c4424d8  lw          $a0, 0x24D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a574) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A57Cu;
label_23a57c:
    // 0x23a57c: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x23a57cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x23a580: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A580u;
    {
        const bool branch_taken_0x23a580 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x23A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A580u;
        // 0x23a584: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a580) {
            ctx->pc = 0x23A594u;
            goto label_23a594;
        }
    }
    ctx->pc = 0x23A588u;
    // 0x23a588: 0x8c43106c  lw          $v1, 0x106C($v0)
    ctx->pc = 0x23a588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4204)));
    // 0x23a58c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x23A58Cu;
    {
        const bool branch_taken_0x23a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A58Cu;
        // 0x23a590: 0x8c441070  lw          $a0, 0x1070($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a58c) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A594u;
label_23a594:
    // 0x23a594: 0x8c431064  lw          $v1, 0x1064($v0)
    ctx->pc = 0x23a594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4196)));
    // 0x23a598: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x23A598u;
    {
        const bool branch_taken_0x23a598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A598u;
        // 0x23a59c: 0x8c441068  lw          $a0, 0x1068($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a598) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A5A0u;
label_23a5a0:
    // 0x23a5a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a5a4: 0x8c431e5c  lw          $v1, 0x1E5C($v0)
    ctx->pc = 0x23a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7772)));
    // 0x23a5a8: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x23A5A8u;
    {
        const bool branch_taken_0x23a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5A8u;
        // 0x23a5ac: 0x8c441e60  lw          $a0, 0x1E60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5a8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A5B0u;
label_23a5b0:
    // 0x23a5b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a5b4: 0x8c4336d8  lw          $v1, 0x36D8($v0)
    ctx->pc = 0x23a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14040)));
    // 0x23a5b8: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x23A5B8u;
    {
        const bool branch_taken_0x23a5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5B8u;
        // 0x23a5bc: 0x8c4436dc  lw          $a0, 0x36DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5b8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A5C0u;
label_23a5c0:
    // 0x23a5c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a5c4: 0x8c4336e0  lw          $v1, 0x36E0($v0)
    ctx->pc = 0x23a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14048)));
    // 0x23a5c8: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x23A5C8u;
    {
        const bool branch_taken_0x23a5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5C8u;
        // 0x23a5cc: 0x8c4436e4  lw          $a0, 0x36E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5c8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A5D0u;
label_23a5d0:
    // 0x23a5d0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a5d4: 0x8c4336e8  lw          $v1, 0x36E8($v0)
    ctx->pc = 0x23a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14056)));
    // 0x23a5d8: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x23A5D8u;
    {
        const bool branch_taken_0x23a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5D8u;
        // 0x23a5dc: 0x8c4436ec  lw          $a0, 0x36EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5d8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A5E0u;
label_23a5e0:
    // 0x23a5e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a5e4: 0x8c430538  lw          $v1, 0x538($v0)
    ctx->pc = 0x23a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1336)));
    // 0x23a5e8: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x23A5E8u;
    {
        const bool branch_taken_0x23a5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5E8u;
        // 0x23a5ec: 0x8c44053c  lw          $a0, 0x53C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5e8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A5F0u;
label_23a5f0:
    // 0x23a5f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a5f4: 0x8c43109c  lw          $v1, 0x109C($v0)
    ctx->pc = 0x23a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4252)));
    // 0x23a5f8: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x23A5F8u;
    {
        const bool branch_taken_0x23a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5F8u;
        // 0x23a5fc: 0x8c4410a0  lw          $a0, 0x10A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5f8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A600u;
label_23a600:
    // 0x23a600: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a604: 0x8c430cb0  lw          $v1, 0xCB0($v0)
    ctx->pc = 0x23a604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3248)));
    // 0x23a608: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x23A608u;
    {
        const bool branch_taken_0x23a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A608u;
        // 0x23a60c: 0x8c440cb4  lw          $a0, 0xCB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a608) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A610u;
label_23a610:
    // 0x23a610: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a614: 0x8c430cb8  lw          $v1, 0xCB8($v0)
    ctx->pc = 0x23a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3256)));
    // 0x23a618: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x23A618u;
    {
        const bool branch_taken_0x23a618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A618u;
        // 0x23a61c: 0x8c440cbc  lw          $a0, 0xCBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a618) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A620u;
label_23a620:
    // 0x23a620: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a624: 0x8c430cc0  lw          $v1, 0xCC0($v0)
    ctx->pc = 0x23a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
    // 0x23a628: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x23A628u;
    {
        const bool branch_taken_0x23a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A628u;
        // 0x23a62c: 0x8c440cc4  lw          $a0, 0xCC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a628) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A630u;
label_23a630:
    // 0x23a630: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a634: 0x8c433c04  lw          $v1, 0x3C04($v0)
    ctx->pc = 0x23a634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15364)));
    // 0x23a638: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x23A638u;
    {
        const bool branch_taken_0x23a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A638u;
        // 0x23a63c: 0x8c443c08  lw          $a0, 0x3C08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a638) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A640u;
label_23a640:
    // 0x23a640: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a644: 0x8c431840  lw          $v1, 0x1840($v0)
    ctx->pc = 0x23a644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6208)));
    // 0x23a648: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x23A648u;
    {
        const bool branch_taken_0x23a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A648u;
        // 0x23a64c: 0x8c441844  lw          $a0, 0x1844($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a648) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A650u;
label_23a650:
    // 0x23a650: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a654: 0x8c431848  lw          $v1, 0x1848($v0)
    ctx->pc = 0x23a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6216)));
    // 0x23a658: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x23A658u;
    {
        const bool branch_taken_0x23a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A658u;
        // 0x23a65c: 0x8c44184c  lw          $a0, 0x184C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a658) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A660u;
label_23a660:
    // 0x23a660: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a664: 0x8c431850  lw          $v1, 0x1850($v0)
    ctx->pc = 0x23a664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6224)));
    // 0x23a668: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x23A668u;
    {
        const bool branch_taken_0x23a668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A668u;
        // 0x23a66c: 0x8c441854  lw          $a0, 0x1854($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a668) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A670u;
label_23a670:
    // 0x23a670: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a674: 0x8c431858  lw          $v1, 0x1858($v0)
    ctx->pc = 0x23a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6232)));
    // 0x23a678: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x23A678u;
    {
        const bool branch_taken_0x23a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A678u;
        // 0x23a67c: 0x8c44185c  lw          $a0, 0x185C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a678) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A680u;
label_23a680:
    // 0x23a680: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a684: 0x8c4314e8  lw          $v1, 0x14E8($v0)
    ctx->pc = 0x23a684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5352)));
    // 0x23a688: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x23A688u;
    {
        const bool branch_taken_0x23a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A688u;
        // 0x23a68c: 0x8c4414ec  lw          $a0, 0x14EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a688) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A690u;
label_23a690:
    // 0x23a690: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a694: 0x8c4314f0  lw          $v1, 0x14F0($v0)
    ctx->pc = 0x23a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5360)));
    // 0x23a698: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x23A698u;
    {
        const bool branch_taken_0x23a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A698u;
        // 0x23a69c: 0x8c4414f4  lw          $a0, 0x14F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a698) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A6A0u;
label_23a6a0:
    // 0x23a6a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a6a4: 0x8c4314f8  lw          $v1, 0x14F8($v0)
    ctx->pc = 0x23a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5368)));
    // 0x23a6a8: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x23A6A8u;
    {
        const bool branch_taken_0x23a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6A8u;
        // 0x23a6ac: 0x8c4414fc  lw          $a0, 0x14FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6a8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A6B0u;
label_23a6b0:
    // 0x23a6b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a6b4: 0x8c433204  lw          $v1, 0x3204($v0)
    ctx->pc = 0x23a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12804)));
    // 0x23a6b8: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x23A6B8u;
    {
        const bool branch_taken_0x23a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6B8u;
        // 0x23a6bc: 0x8c443208  lw          $a0, 0x3208($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6b8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A6C0u;
label_23a6c0:
    // 0x23a6c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a6c4: 0x8c43320c  lw          $v1, 0x320C($v0)
    ctx->pc = 0x23a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12812)));
    // 0x23a6c8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x23A6C8u;
    {
        const bool branch_taken_0x23a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6C8u;
        // 0x23a6cc: 0x8c443210  lw          $a0, 0x3210($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6c8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A6D0u;
label_23a6d0:
    // 0x23a6d0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a6d4: 0x8c433214  lw          $v1, 0x3214($v0)
    ctx->pc = 0x23a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12820)));
    // 0x23a6d8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x23A6D8u;
    {
        const bool branch_taken_0x23a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6D8u;
        // 0x23a6dc: 0x8c443218  lw          $a0, 0x3218($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6d8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A6E0u;
label_23a6e0:
    // 0x23a6e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a6e4: 0x8c43321c  lw          $v1, 0x321C($v0)
    ctx->pc = 0x23a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12828)));
    // 0x23a6e8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x23A6E8u;
    {
        const bool branch_taken_0x23a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6E8u;
        // 0x23a6ec: 0x8c443220  lw          $a0, 0x3220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6e8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A6F0u;
label_23a6f0:
    // 0x23a6f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a6f4: 0x8c4333f4  lw          $v1, 0x33F4($v0)
    ctx->pc = 0x23a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13300)));
    // 0x23a6f8: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x23A6F8u;
    {
        const bool branch_taken_0x23a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6F8u;
        // 0x23a6fc: 0x8c4433f8  lw          $a0, 0x33F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6f8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A700u;
label_23a700:
    // 0x23a700: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a704: 0x8c4333fc  lw          $v1, 0x33FC($v0)
    ctx->pc = 0x23a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13308)));
    // 0x23a708: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x23A708u;
    {
        const bool branch_taken_0x23a708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A708u;
        // 0x23a70c: 0x8c443400  lw          $a0, 0x3400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a708) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A710u;
label_23a710:
    // 0x23a710: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a714: 0x8c433404  lw          $v1, 0x3404($v0)
    ctx->pc = 0x23a714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13316)));
    // 0x23a718: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x23A718u;
    {
        const bool branch_taken_0x23a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A718u;
        // 0x23a71c: 0x8c443408  lw          $a0, 0x3408($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a718) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A720u;
label_23a720:
    // 0x23a720: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a724: 0x8c4339b8  lw          $v1, 0x39B8($v0)
    ctx->pc = 0x23a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14776)));
    // 0x23a728: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x23A728u;
    {
        const bool branch_taken_0x23a728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A728u;
        // 0x23a72c: 0x8c4439bc  lw          $a0, 0x39BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a728) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A730u;
label_23a730:
    // 0x23a730: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a734: 0x8c4339c0  lw          $v1, 0x39C0($v0)
    ctx->pc = 0x23a734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14784)));
    // 0x23a738: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x23A738u;
    {
        const bool branch_taken_0x23a738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A738u;
        // 0x23a73c: 0x8c4439c4  lw          $a0, 0x39C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a738) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A740u;
label_23a740:
    // 0x23a740: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a744: 0x8c4339c8  lw          $v1, 0x39C8($v0)
    ctx->pc = 0x23a744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14792)));
    // 0x23a748: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x23A748u;
    {
        const bool branch_taken_0x23a748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A748u;
        // 0x23a74c: 0x8c4439cc  lw          $a0, 0x39CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a748) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A750u;
label_23a750:
    // 0x23a750: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a754: 0x8c433e64  lw          $v1, 0x3E64($v0)
    ctx->pc = 0x23a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15972)));
    // 0x23a758: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x23A758u;
    {
        const bool branch_taken_0x23a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A758u;
        // 0x23a75c: 0x8c443e68  lw          $a0, 0x3E68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a758) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A760u;
label_23a760:
    // 0x23a760: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a764: 0x8c433e6c  lw          $v1, 0x3E6C($v0)
    ctx->pc = 0x23a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15980)));
    // 0x23a768: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x23A768u;
    {
        const bool branch_taken_0x23a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A768u;
        // 0x23a76c: 0x8c443e70  lw          $a0, 0x3E70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a768) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A770u;
label_23a770:
    // 0x23a770: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a774: 0x8c433e74  lw          $v1, 0x3E74($v0)
    ctx->pc = 0x23a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15988)));
    // 0x23a778: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x23A778u;
    {
        const bool branch_taken_0x23a778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A778u;
        // 0x23a77c: 0x8c443e78  lw          $a0, 0x3E78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a778) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A780u;
label_23a780:
    // 0x23a780: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a784: 0x8c433e44  lw          $v1, 0x3E44($v0)
    ctx->pc = 0x23a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15940)));
    // 0x23a788: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x23A788u;
    {
        const bool branch_taken_0x23a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A788u;
        // 0x23a78c: 0x8c443e48  lw          $a0, 0x3E48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a788) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A790u;
label_23a790:
    // 0x23a790: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a794: 0x8c431da8  lw          $v1, 0x1DA8($v0)
    ctx->pc = 0x23a794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7592)));
    // 0x23a798: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x23A798u;
    {
        const bool branch_taken_0x23a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A798u;
        // 0x23a79c: 0x8c441dac  lw          $a0, 0x1DAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a798) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A7A0u;
label_23a7a0:
    // 0x23a7a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a7a4: 0x8c432c50  lw          $v1, 0x2C50($v0)
    ctx->pc = 0x23a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11344)));
    // 0x23a7a8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x23A7A8u;
    {
        const bool branch_taken_0x23a7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7A8u;
        // 0x23a7ac: 0x8c442c54  lw          $a0, 0x2C54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7a8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A7B0u;
label_23a7b0:
    // 0x23a7b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a7b4: 0x8c432c58  lw          $v1, 0x2C58($v0)
    ctx->pc = 0x23a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11352)));
    // 0x23a7b8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x23A7B8u;
    {
        const bool branch_taken_0x23a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7B8u;
        // 0x23a7bc: 0x8c442c5c  lw          $a0, 0x2C5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7b8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A7C0u;
label_23a7c0:
    // 0x23a7c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a7c4: 0x8c433244  lw          $v1, 0x3244($v0)
    ctx->pc = 0x23a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12868)));
    // 0x23a7c8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x23A7C8u;
    {
        const bool branch_taken_0x23a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7C8u;
        // 0x23a7cc: 0x8c443248  lw          $a0, 0x3248($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7c8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A7D0u;
label_23a7d0:
    // 0x23a7d0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a7d4: 0x8c43324c  lw          $v1, 0x324C($v0)
    ctx->pc = 0x23a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12876)));
    // 0x23a7d8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x23A7D8u;
    {
        const bool branch_taken_0x23a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7D8u;
        // 0x23a7dc: 0x8c443250  lw          $a0, 0x3250($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7d8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A7E0u;
label_23a7e0:
    // 0x23a7e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a7e4: 0x8c43325c  lw          $v1, 0x325C($v0)
    ctx->pc = 0x23a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12892)));
    // 0x23a7e8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x23A7E8u;
    {
        const bool branch_taken_0x23a7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7E8u;
        // 0x23a7ec: 0x8c443260  lw          $a0, 0x3260($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7e8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A7F0u;
label_23a7f0:
    // 0x23a7f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a7f4: 0x8c433254  lw          $v1, 0x3254($v0)
    ctx->pc = 0x23a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12884)));
    // 0x23a7f8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x23A7F8u;
    {
        const bool branch_taken_0x23a7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7F8u;
        // 0x23a7fc: 0x8c443258  lw          $a0, 0x3258($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7f8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A800u;
label_23a800:
    // 0x23a800: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a804: 0x8c4333dc  lw          $v1, 0x33DC($v0)
    ctx->pc = 0x23a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13276)));
    // 0x23a808: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x23A808u;
    {
        const bool branch_taken_0x23a808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A808u;
        // 0x23a80c: 0x8c4433e0  lw          $a0, 0x33E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a808) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A810u;
label_23a810:
    // 0x23a810: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a814: 0x8c4333e4  lw          $v1, 0x33E4($v0)
    ctx->pc = 0x23a814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13284)));
    // 0x23a818: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23A818u;
    {
        const bool branch_taken_0x23a818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A818u;
        // 0x23a81c: 0x8c4433e8  lw          $a0, 0x33E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a818) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A820u;
label_23a820:
    // 0x23a820: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a824: 0x8c4339ec  lw          $v1, 0x39EC($v0)
    ctx->pc = 0x23a824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14828)));
    // 0x23a828: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x23A828u;
    {
        const bool branch_taken_0x23a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A828u;
        // 0x23a82c: 0x8c4439f0  lw          $a0, 0x39F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a828) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A830u;
label_23a830:
    // 0x23a830: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a834: 0x8c4339f4  lw          $v1, 0x39F4($v0)
    ctx->pc = 0x23a834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14836)));
    // 0x23a838: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x23A838u;
    {
        const bool branch_taken_0x23a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A838u;
        // 0x23a83c: 0x8c4439f8  lw          $a0, 0x39F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a838) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A840u;
label_23a840:
    // 0x23a840: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a844: 0x8c433be8  lw          $v1, 0x3BE8($v0)
    ctx->pc = 0x23a844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15336)));
    // 0x23a848: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x23A848u;
    {
        const bool branch_taken_0x23a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A848u;
        // 0x23a84c: 0x8c443bec  lw          $a0, 0x3BEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a848) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A850u;
label_23a850:
    // 0x23a850: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a854: 0x8c433bf0  lw          $v1, 0x3BF0($v0)
    ctx->pc = 0x23a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15344)));
    // 0x23a858: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x23A858u;
    {
        const bool branch_taken_0x23a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A858u;
        // 0x23a85c: 0x8c443bf4  lw          $a0, 0x3BF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a858) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A860u;
label_23a860:
    // 0x23a860: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a864: 0x8c433b40  lw          $v1, 0x3B40($v0)
    ctx->pc = 0x23a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15168)));
    // 0x23a868: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x23A868u;
    {
        const bool branch_taken_0x23a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A868u;
        // 0x23a86c: 0x8c443b44  lw          $a0, 0x3B44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a868) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A870u;
label_23a870:
    // 0x23a870: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a874: 0x8c43148c  lw          $v1, 0x148C($v0)
    ctx->pc = 0x23a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5260)));
    // 0x23a878: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23A878u;
    {
        const bool branch_taken_0x23a878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A878u;
        // 0x23a87c: 0x8c441490  lw          $a0, 0x1490($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a878) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A880u;
label_23a880:
    // 0x23a880: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a884: 0x8c433c64  lw          $v1, 0x3C64($v0)
    ctx->pc = 0x23a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15460)));
    // 0x23a888: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23A888u;
    {
        const bool branch_taken_0x23a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A888u;
        // 0x23a88c: 0x8c443c68  lw          $a0, 0x3C68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a888) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A890u;
label_23a890:
    // 0x23a890: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a894: 0x8c433c6c  lw          $v1, 0x3C6C($v0)
    ctx->pc = 0x23a894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15468)));
    // 0x23a898: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23A898u;
    {
        const bool branch_taken_0x23a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A898u;
        // 0x23a89c: 0x8c443c70  lw          $a0, 0x3C70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a898) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A8A0u;
label_23a8a0:
    // 0x23a8a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a8a4: 0x8c433c74  lw          $v1, 0x3C74($v0)
    ctx->pc = 0x23a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15476)));
    // 0x23a8a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23A8A8u;
    {
        const bool branch_taken_0x23a8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8A8u;
        // 0x23a8ac: 0x8c443c78  lw          $a0, 0x3C78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8a8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A8B0u;
label_23a8b0:
    // 0x23a8b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a8b4: 0x8c433c7c  lw          $v1, 0x3C7C($v0)
    ctx->pc = 0x23a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15484)));
    // 0x23a8b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23A8B8u;
    {
        const bool branch_taken_0x23a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8B8u;
        // 0x23a8bc: 0x8c443c80  lw          $a0, 0x3C80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8b8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A8C0u;
label_23a8c0:
    // 0x23a8c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a8c4: 0x8c432c6c  lw          $v1, 0x2C6C($v0)
    ctx->pc = 0x23a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11372)));
    // 0x23a8c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23A8C8u;
    {
        const bool branch_taken_0x23a8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8C8u;
        // 0x23a8cc: 0x8c442c70  lw          $a0, 0x2C70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8c8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A8D0u;
label_23a8d0:
    // 0x23a8d0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a8d4: 0x8c432c74  lw          $v1, 0x2C74($v0)
    ctx->pc = 0x23a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11380)));
    // 0x23a8d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23A8D8u;
    {
        const bool branch_taken_0x23a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8D8u;
        // 0x23a8dc: 0x8c442c78  lw          $a0, 0x2C78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8d8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A8E0u;
label_23a8e0:
    // 0x23a8e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a8e4: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x23a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x23a8e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A8E8u;
    {
        const bool branch_taken_0x23a8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8E8u;
        // 0x23a8ec: 0x8c442c80  lw          $a0, 0x2C80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8e8) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A8F0u;
label_23a8f0:
    // 0x23a8f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a8f4: 0x8c432c84  lw          $v1, 0x2C84($v0)
    ctx->pc = 0x23a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11396)));
    // 0x23a8f8: 0x8c442c88  lw          $a0, 0x2C88($v0)
    ctx->pc = 0x23a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11400)));
label_23a8fc:
    // 0x23a8fc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x23a8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a900: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x23a900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23a904: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x23A904u;
    SET_GPR_U32(ctx, 31, 0x23A90Cu);
    ctx->pc = 0x23A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A904u;
    // 0x23a908: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x23A904u, 0x23A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A90Cu;
label_23a90c:
    // 0x23a90c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23a910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23a914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a918: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x23a918u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x23a91c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23a91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a920: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23a920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a924: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23A924u;
    SET_GPR_U32(ctx, 31, 0x23A92Cu);
    ctx->pc = 0x23A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A924u;
    // 0x23a928: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23A924u, 0x23A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A92Cu;
label_23a92c:
    // 0x23a92c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23a92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a930: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23a930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a934: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23a934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a93c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x23a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23a940: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x23a940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23a944: 0x3e00008  jr          $ra
    ctx->pc = 0x23A944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A944u;
        // 0x23a948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A94Cu;
    // 0x23a94c: 0x0  nop
    ctx->pc = 0x23a94cu;
    // NOP
    ctx->pc = 0x23a950u;
}
