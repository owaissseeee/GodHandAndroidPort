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

// Function: func_0031A338
// Address: 0x31a338 - 0x31a538
void func_0031A338_0x31a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031A338_0x31a338");
#endif

    switch (ctx->pc) {
        case 0x31a390u: goto label_31a390;
        case 0x31a3a0u: goto label_31a3a0;
        case 0x31a3b4u: goto label_31a3b4;
        case 0x31a3c4u: goto label_31a3c4;
        case 0x31a3d4u: goto label_31a3d4;
        case 0x31a3e4u: goto label_31a3e4;
        case 0x31a3f4u: goto label_31a3f4;
        case 0x31a404u: goto label_31a404;
        case 0x31a414u: goto label_31a414;
        case 0x31a430u: goto label_31a430;
        case 0x31a43cu: goto label_31a43c;
        case 0x31a448u: goto label_31a448;
        case 0x31a454u: goto label_31a454;
        case 0x31a460u: goto label_31a460;
        case 0x31a46cu: goto label_31a46c;
        case 0x31a478u: goto label_31a478;
        case 0x31a484u: goto label_31a484;
        case 0x31a494u: goto label_31a494;
        case 0x31a4a0u: goto label_31a4a0;
        case 0x31a4acu: goto label_31a4ac;
        case 0x31a4b8u: goto label_31a4b8;
        case 0x31a4c4u: goto label_31a4c4;
        case 0x31a4f4u: goto label_31a4f4;
        case 0x31a504u: goto label_31a504;
        default: break;
    }

    ctx->pc = 0x31a338u;

    // 0x31a338: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31a338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31a33c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x31a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x31a340: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x31a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x31a344: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x31a344u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x31a348: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x31a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x31a34c: 0x263174a0  addiu       $s1, $s1, 0x74A0
    ctx->pc = 0x31a34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x31a350: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x31a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x31a354: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31a354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a358: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31a358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x31a35c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31a360: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x31a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x31a364: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x31a364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x31a368: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x31a368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x31a36c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a370: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x31a370u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x31a374: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31a378: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31a378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31a37c: 0x281c0  sll         $s0, $v0, 7
    ctx->pc = 0x31a37cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x31a380: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x31a380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x31a384: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x31a384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x31a388: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x31A388u;
    SET_GPR_U32(ctx, 31, 0x31A390u);
    ctx->pc = 0x31A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A388u;
    // 0x31a38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x31A388u, 0x31A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A390u;
label_31a390:
    // 0x31a390: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x31a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x31a394: 0x242f021  addu        $fp, $s2, $v0
    ctx->pc = 0x31a394u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31a398: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x31A398u;
    SET_GPR_U32(ctx, 31, 0x31A3A0u);
    ctx->pc = 0x31A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A398u;
    // 0x31a39c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x31A398u, 0x31A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3A0u;
label_31a3a0:
    // 0x31a3a0: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x31a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x31a3a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x31a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31a3a8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x31a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x31a3ac: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x31A3ACu;
    SET_GPR_U32(ctx, 31, 0x31A3B4u);
    ctx->pc = 0x31A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3ACu;
    // 0x31a3b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x31A3ACu, 0x31A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3B4u;
label_31a3b4:
    // 0x31a3b4: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x31a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x31a3b8: 0x242b821  addu        $s7, $s2, $v0
    ctx->pc = 0x31a3b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31a3bc: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x31A3BCu;
    SET_GPR_U32(ctx, 31, 0x31A3C4u);
    ctx->pc = 0x31A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3BCu;
    // 0x31a3c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x31A3BCu, 0x31A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3C4u;
label_31a3c4:
    // 0x31a3c4: 0x26020500  addiu       $v0, $s0, 0x500
    ctx->pc = 0x31a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x31a3c8: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x31a3c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31a3cc: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x31A3CCu;
    SET_GPR_U32(ctx, 31, 0x31A3D4u);
    ctx->pc = 0x31A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3CCu;
    // 0x31a3d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x31A3CCu, 0x31A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3D4u;
label_31a3d4:
    // 0x31a3d4: 0x26020600  addiu       $v0, $s0, 0x600
    ctx->pc = 0x31a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x31a3d8: 0x242a021  addu        $s4, $s2, $v0
    ctx->pc = 0x31a3d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31a3dc: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x31A3DCu;
    SET_GPR_U32(ctx, 31, 0x31A3E4u);
    ctx->pc = 0x31A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3DCu;
    // 0x31a3e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x31A3DCu, 0x31A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3E4u;
label_31a3e4:
    // 0x31a3e4: 0x26020700  addiu       $v0, $s0, 0x700
    ctx->pc = 0x31a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1792));
    // 0x31a3e8: 0x242a821  addu        $s5, $s2, $v0
    ctx->pc = 0x31a3e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31a3ec: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x31A3ECu;
    SET_GPR_U32(ctx, 31, 0x31A3F4u);
    ctx->pc = 0x31A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3ECu;
    // 0x31a3f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x31A3ECu, 0x31A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3F4u;
label_31a3f4:
    // 0x31a3f4: 0x26020800  addiu       $v0, $s0, 0x800
    ctx->pc = 0x31a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x31a3f8: 0x242b021  addu        $s6, $s2, $v0
    ctx->pc = 0x31a3f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31a3fc: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x31A3FCu;
    SET_GPR_U32(ctx, 31, 0x31A404u);
    ctx->pc = 0x31A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3FCu;
    // 0x31a400: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x31A3FCu, 0x31A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A404u;
label_31a404:
    // 0x31a404: 0x26100900  addiu       $s0, $s0, 0x900
    ctx->pc = 0x31a404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2304));
    // 0x31a408: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x31a408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x31a40c: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x31A40Cu;
    SET_GPR_U32(ctx, 31, 0x31A414u);
    ctx->pc = 0x31A410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A40Cu;
    // 0x31a410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x31A40Cu, 0x31A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A414u;
label_31a414:
    // 0x31a414: 0x8e220584  lw          $v0, 0x584($s1)
    ctx->pc = 0x31a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x31a418: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x31a418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x31a41c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31a420: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31A420u;
    {
        const bool branch_taken_0x31a420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A420u;
        // 0x31a424: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a420) {
            ctx->pc = 0x31A48Cu;
            goto label_31a48c;
        }
    }
    ctx->pc = 0x31A428u;
    // 0x31a428: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A428u;
    SET_GPR_U32(ctx, 31, 0x31A430u);
    ctx->pc = 0x31A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A428u;
    // 0x31a42c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A428u, 0x31A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A430u;
label_31a430:
    // 0x31a430: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a434: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A434u;
    SET_GPR_U32(ctx, 31, 0x31A43Cu);
    ctx->pc = 0x31A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A434u;
    // 0x31a438: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A434u, 0x31A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A43Cu;
label_31a43c:
    // 0x31a43c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x31a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31a440: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A440u;
    SET_GPR_U32(ctx, 31, 0x31A448u);
    ctx->pc = 0x31A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A440u;
    // 0x31a444: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A440u, 0x31A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A448u;
label_31a448:
    // 0x31a448: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x31a448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31a44c: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A44Cu;
    SET_GPR_U32(ctx, 31, 0x31A454u);
    ctx->pc = 0x31A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A44Cu;
    // 0x31a450: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A44Cu, 0x31A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A454u;
label_31a454:
    // 0x31a454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31a454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a458: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A458u;
    SET_GPR_U32(ctx, 31, 0x31A460u);
    ctx->pc = 0x31A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A458u;
    // 0x31a45c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A458u, 0x31A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A460u;
label_31a460:
    // 0x31a460: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31a460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a464: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A464u;
    SET_GPR_U32(ctx, 31, 0x31A46Cu);
    ctx->pc = 0x31A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A464u;
    // 0x31a468: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A464u, 0x31A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A46Cu;
label_31a46c:
    // 0x31a46c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31a46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a470: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A470u;
    SET_GPR_U32(ctx, 31, 0x31A478u);
    ctx->pc = 0x31A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A470u;
    // 0x31a474: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A470u, 0x31A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A478u;
label_31a478:
    // 0x31a478: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31a478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a47c: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A47Cu;
    SET_GPR_U32(ctx, 31, 0x31A484u);
    ctx->pc = 0x31A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A47Cu;
    // 0x31a480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A47Cu, 0x31A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A484u;
label_31a484:
    // 0x31a484: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31A484u;
    {
        const bool branch_taken_0x31a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A484u;
        // 0x31a488: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a484) {
            ctx->pc = 0x31A4C8u;
            goto label_31a4c8;
        }
    }
    ctx->pc = 0x31A48Cu;
label_31a48c:
    // 0x31a48c: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A48Cu;
    SET_GPR_U32(ctx, 31, 0x31A494u);
    ctx->pc = 0x31A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A48Cu;
    // 0x31a490: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A48Cu, 0x31A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A494u;
label_31a494:
    // 0x31a494: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31a494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a498: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A498u;
    SET_GPR_U32(ctx, 31, 0x31A4A0u);
    ctx->pc = 0x31A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A498u;
    // 0x31a49c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A498u, 0x31A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4A0u;
label_31a4a0:
    // 0x31a4a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31a4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4a4: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A4A4u;
    SET_GPR_U32(ctx, 31, 0x31A4ACu);
    ctx->pc = 0x31A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4A4u;
    // 0x31a4a8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A4A4u, 0x31A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4ACu;
label_31a4ac:
    // 0x31a4ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31a4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4b0: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A4B0u;
    SET_GPR_U32(ctx, 31, 0x31A4B8u);
    ctx->pc = 0x31A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4B0u;
    // 0x31a4b4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A4B0u, 0x31A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4B8u;
label_31a4b8:
    // 0x31a4b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4bc: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A4BCu;
    SET_GPR_U32(ctx, 31, 0x31A4C4u);
    ctx->pc = 0x31A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4BCu;
    // 0x31a4c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A4BCu, 0x31A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4C4u;
label_31a4c4:
    // 0x31a4c4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x31a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_31a4c8:
    // 0x31a4c8: 0x244374a0  addiu       $v1, $v0, 0x74A0
    ctx->pc = 0x31a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x31a4cc: 0x8c620578  lw          $v0, 0x578($v1)
    ctx->pc = 0x31a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1400)));
    // 0x31a4d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31a4d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31A4D4u;
    {
        const bool branch_taken_0x31a4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4D4u;
        // 0x31a4d8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a4d4) {
            ctx->pc = 0x31A508u;
            goto label_31a508;
        }
    }
    ctx->pc = 0x31A4DCu;
    // 0x31a4dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a4e0: 0x289c0  sll         $s1, $v0, 7
    ctx->pc = 0x31a4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x31a4e4: 0x26300a00  addiu       $s0, $s1, 0xA00
    ctx->pc = 0x31a4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2560));
    // 0x31a4e8: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x31a4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x31a4ec: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x31A4ECu;
    SET_GPR_U32(ctx, 31, 0x31A4F4u);
    ctx->pc = 0x31A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4ECu;
    // 0x31a4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x31A4ECu, 0x31A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4F4u;
label_31a4f4:
    // 0x31a4f4: 0x26310900  addiu       $s1, $s1, 0x900
    ctx->pc = 0x31a4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2304));
    // 0x31a4f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31a4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4fc: 0xc053fd8  jal         func_14FF60
    ctx->pc = 0x31A4FCu;
    SET_GPR_U32(ctx, 31, 0x31A504u);
    ctx->pc = 0x31A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4FCu;
    // 0x31a500: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF60u, 0x31A4FCu, 0x31A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A504u;
label_31a504:
    // 0x31a504: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x31a504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31a508:
    // 0x31a508: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x31a508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31a50c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x31a50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31a510: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x31a510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31a514: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x31a514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31a518: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31a518u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31a51c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x31a51cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a520: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x31a520u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a524: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x31a524u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a528: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a52c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A52Cu;
        // 0x31a530: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A534u;
    // 0x31a534: 0x0  nop
    ctx->pc = 0x31a534u;
    // NOP
    ctx->pc = 0x31a538u;
}
