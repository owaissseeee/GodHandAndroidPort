#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_0079A358
// Address: 0x79a358 - 0x79a5d8
void func_0079A358_0x79a358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A358_0x79a358");
#endif

    switch (ctx->pc) {
        case 0x79a358u: goto label_79a358;
        case 0x79a35cu: goto label_79a35c;
        case 0x79a360u: goto label_79a360;
        case 0x79a364u: goto label_79a364;
        case 0x79a368u: goto label_79a368;
        case 0x79a36cu: goto label_79a36c;
        case 0x79a370u: goto label_79a370;
        case 0x79a374u: goto label_79a374;
        case 0x79a378u: goto label_79a378;
        case 0x79a37cu: goto label_79a37c;
        case 0x79a380u: goto label_79a380;
        case 0x79a384u: goto label_79a384;
        case 0x79a388u: goto label_79a388;
        case 0x79a38cu: goto label_79a38c;
        case 0x79a390u: goto label_79a390;
        case 0x79a394u: goto label_79a394;
        case 0x79a398u: goto label_79a398;
        case 0x79a39cu: goto label_79a39c;
        case 0x79a3a0u: goto label_79a3a0;
        case 0x79a3a4u: goto label_79a3a4;
        case 0x79a3a8u: goto label_79a3a8;
        case 0x79a3acu: goto label_79a3ac;
        case 0x79a3b0u: goto label_79a3b0;
        case 0x79a3b4u: goto label_79a3b4;
        case 0x79a3b8u: goto label_79a3b8;
        case 0x79a3bcu: goto label_79a3bc;
        case 0x79a3c0u: goto label_79a3c0;
        case 0x79a3c4u: goto label_79a3c4;
        case 0x79a3c8u: goto label_79a3c8;
        case 0x79a3ccu: goto label_79a3cc;
        case 0x79a3d0u: goto label_79a3d0;
        case 0x79a3d4u: goto label_79a3d4;
        case 0x79a3d8u: goto label_79a3d8;
        case 0x79a3dcu: goto label_79a3dc;
        case 0x79a3e0u: goto label_79a3e0;
        case 0x79a3e4u: goto label_79a3e4;
        case 0x79a3e8u: goto label_79a3e8;
        case 0x79a3ecu: goto label_79a3ec;
        case 0x79a3f0u: goto label_79a3f0;
        case 0x79a3f4u: goto label_79a3f4;
        case 0x79a3f8u: goto label_79a3f8;
        case 0x79a3fcu: goto label_79a3fc;
        case 0x79a400u: goto label_79a400;
        case 0x79a404u: goto label_79a404;
        case 0x79a408u: goto label_79a408;
        case 0x79a40cu: goto label_79a40c;
        case 0x79a410u: goto label_79a410;
        case 0x79a414u: goto label_79a414;
        case 0x79a418u: goto label_79a418;
        case 0x79a41cu: goto label_79a41c;
        case 0x79a420u: goto label_79a420;
        case 0x79a424u: goto label_79a424;
        case 0x79a428u: goto label_79a428;
        case 0x79a42cu: goto label_79a42c;
        case 0x79a430u: goto label_79a430;
        case 0x79a434u: goto label_79a434;
        case 0x79a438u: goto label_79a438;
        case 0x79a43cu: goto label_79a43c;
        case 0x79a440u: goto label_79a440;
        case 0x79a444u: goto label_79a444;
        case 0x79a448u: goto label_79a448;
        case 0x79a44cu: goto label_79a44c;
        case 0x79a450u: goto label_79a450;
        case 0x79a454u: goto label_79a454;
        case 0x79a458u: goto label_79a458;
        case 0x79a45cu: goto label_79a45c;
        case 0x79a460u: goto label_79a460;
        case 0x79a464u: goto label_79a464;
        case 0x79a468u: goto label_79a468;
        case 0x79a46cu: goto label_79a46c;
        case 0x79a470u: goto label_79a470;
        case 0x79a474u: goto label_79a474;
        case 0x79a478u: goto label_79a478;
        case 0x79a47cu: goto label_79a47c;
        case 0x79a480u: goto label_79a480;
        case 0x79a484u: goto label_79a484;
        case 0x79a488u: goto label_79a488;
        case 0x79a48cu: goto label_79a48c;
        case 0x79a490u: goto label_79a490;
        case 0x79a494u: goto label_79a494;
        case 0x79a498u: goto label_79a498;
        case 0x79a49cu: goto label_79a49c;
        case 0x79a4a0u: goto label_79a4a0;
        case 0x79a4a4u: goto label_79a4a4;
        case 0x79a4a8u: goto label_79a4a8;
        case 0x79a4acu: goto label_79a4ac;
        case 0x79a4b0u: goto label_79a4b0;
        case 0x79a4b4u: goto label_79a4b4;
        case 0x79a4b8u: goto label_79a4b8;
        case 0x79a4bcu: goto label_79a4bc;
        case 0x79a4c0u: goto label_79a4c0;
        case 0x79a4c4u: goto label_79a4c4;
        case 0x79a4c8u: goto label_79a4c8;
        case 0x79a4ccu: goto label_79a4cc;
        case 0x79a4d0u: goto label_79a4d0;
        case 0x79a4d4u: goto label_79a4d4;
        case 0x79a4d8u: goto label_79a4d8;
        case 0x79a4dcu: goto label_79a4dc;
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a4e4u: goto label_79a4e4;
        case 0x79a4e8u: goto label_79a4e8;
        case 0x79a4ecu: goto label_79a4ec;
        case 0x79a4f0u: goto label_79a4f0;
        case 0x79a4f4u: goto label_79a4f4;
        case 0x79a4f8u: goto label_79a4f8;
        case 0x79a4fcu: goto label_79a4fc;
        case 0x79a500u: goto label_79a500;
        case 0x79a504u: goto label_79a504;
        case 0x79a508u: goto label_79a508;
        case 0x79a50cu: goto label_79a50c;
        case 0x79a510u: goto label_79a510;
        case 0x79a514u: goto label_79a514;
        case 0x79a518u: goto label_79a518;
        case 0x79a51cu: goto label_79a51c;
        case 0x79a520u: goto label_79a520;
        case 0x79a524u: goto label_79a524;
        case 0x79a528u: goto label_79a528;
        case 0x79a52cu: goto label_79a52c;
        case 0x79a530u: goto label_79a530;
        case 0x79a534u: goto label_79a534;
        case 0x79a538u: goto label_79a538;
        case 0x79a53cu: goto label_79a53c;
        case 0x79a540u: goto label_79a540;
        case 0x79a544u: goto label_79a544;
        case 0x79a548u: goto label_79a548;
        case 0x79a54cu: goto label_79a54c;
        case 0x79a550u: goto label_79a550;
        case 0x79a554u: goto label_79a554;
        case 0x79a558u: goto label_79a558;
        case 0x79a55cu: goto label_79a55c;
        case 0x79a560u: goto label_79a560;
        case 0x79a564u: goto label_79a564;
        case 0x79a568u: goto label_79a568;
        case 0x79a56cu: goto label_79a56c;
        case 0x79a570u: goto label_79a570;
        case 0x79a574u: goto label_79a574;
        case 0x79a578u: goto label_79a578;
        case 0x79a57cu: goto label_79a57c;
        case 0x79a580u: goto label_79a580;
        case 0x79a584u: goto label_79a584;
        case 0x79a588u: goto label_79a588;
        case 0x79a58cu: goto label_79a58c;
        case 0x79a590u: goto label_79a590;
        case 0x79a594u: goto label_79a594;
        case 0x79a598u: goto label_79a598;
        case 0x79a59cu: goto label_79a59c;
        case 0x79a5a0u: goto label_79a5a0;
        case 0x79a5a4u: goto label_79a5a4;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5acu: goto label_79a5ac;
        case 0x79a5b0u: goto label_79a5b0;
        case 0x79a5b4u: goto label_79a5b4;
        case 0x79a5b8u: goto label_79a5b8;
        case 0x79a5bcu: goto label_79a5bc;
        case 0x79a5c0u: goto label_79a5c0;
        case 0x79a5c4u: goto label_79a5c4;
        case 0x79a5c8u: goto label_79a5c8;
        case 0x79a5ccu: goto label_79a5cc;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a5d4u: goto label_79a5d4;
        default: break;
    }

    ctx->pc = 0x79a358u;

label_79a358:
    // 0x79a358: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x79a358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_79a35c:
    // 0x79a35c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x79a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_79a360:
    // 0x79a360: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x79a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_79a364:
    // 0x79a364: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a368:
    // 0x79a368: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x79a368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_79a36c:
    // 0x79a36c: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a36cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_79a370:
    // 0x79a370: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x79a370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_79a374:
    // 0x79a374: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79a378:
    // 0x79a378: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x79a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_79a37c:
    // 0x79a37c: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x79a37cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
label_79a380:
    // 0x79a380: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x79a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_79a384:
    // 0x79a384: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x79a384u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79a388:
    // 0x79a388: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x79a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_79a38c:
    // 0x79a38c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x79a38cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_79a390:
    // 0x79a390: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x79a390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_79a394:
    // 0x79a394: 0x3c160074  lui         $s6, 0x74
    ctx->pc = 0x79a394u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
label_79a398:
    // 0x79a398: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x79a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_79a39c:
    // 0x79a39c: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x79a39cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_79a3a0:
    // 0x79a3a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79a3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_79a3a4:
    // 0x79a3a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_79a3a8:
    if (ctx->pc == 0x79A3A8u) {
        ctx->pc = 0x79A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A4u;
        // 0x79a3a8: 0x3c1e0075  lui         $fp, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3ACu;
        goto label_79a3ac;
    }
    ctx->pc = 0x79A3A4u;
    {
        const bool branch_taken_0x79a3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A4u;
        // 0x79a3a8: 0x3c1e0075  lui         $fp, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3a4) {
            ctx->pc = 0x79A3C0u;
            goto label_79a3c0;
        }
    }
    ctx->pc = 0x79A3ACu;
label_79a3ac:
    // 0x79a3ac: 0x0  nop
    ctx->pc = 0x79a3acu;
    // NOP
label_79a3b0:
    // 0x79a3b0: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a3b4:
    // 0x79a3b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a3b8:
    // 0x79a3b8: 0xc0b56a8  jal         func_2D5AA0
label_79a3bc:
    if (ctx->pc == 0x79A3BCu) {
        ctx->pc = 0x79A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B8u;
        // 0x79a3bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3C0u;
        goto label_79a3c0;
    }
    ctx->pc = 0x79A3B8u;
    SET_GPR_U32(ctx, 31, 0x79A3C0u);
    ctx->pc = 0x79A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B8u;
    // 0x79a3bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A3B8u, 0x79A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C0u;
label_79a3c0:
    // 0x79a3c0: 0xc0b0f90  jal         func_2C3E40
label_79a3c4:
    if (ctx->pc == 0x79A3C4u) {
        ctx->pc = 0x79A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C0u;
        // 0x79a3c4: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3C8u;
        goto label_79a3c8;
    }
    ctx->pc = 0x79A3C0u;
    SET_GPR_U32(ctx, 31, 0x79A3C8u);
    ctx->pc = 0x79A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3C0u;
    // 0x79a3c4: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79A3C0u, 0x79A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C8u;
label_79a3c8:
    // 0x79a3c8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79a3cc:
    if (ctx->pc == 0x79A3CCu) {
        ctx->pc = 0x79A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C8u;
        // 0x79a3cc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3D0u;
        goto label_79a3d0;
    }
    ctx->pc = 0x79A3C8u;
    {
        const bool branch_taken_0x79a3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C8u;
        // 0x79a3cc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c8) {
            ctx->pc = 0x79A3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3b0;
        }
    }
    ctx->pc = 0x79A3D0u;
label_79a3d0:
    // 0x79a3d0: 0x8e23b000  lw          $v1, -0x5000($s1)
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946816)));
label_79a3d4:
    // 0x79a3d4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79a3d8:
    // 0x79a3d8: 0xc06e146  jal         func_1B8518
label_79a3dc:
    if (ctx->pc == 0x79A3DCu) {
        ctx->pc = 0x79A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D8u;
        // 0x79a3dc: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3E0u;
        goto label_79a3e0;
    }
    ctx->pc = 0x79A3D8u;
    SET_GPR_U32(ctx, 31, 0x79A3E0u);
    ctx->pc = 0x79A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3D8u;
    // 0x79a3dc: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8518u, 0x79A3D8u, 0x79A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3E0u;
label_79a3e0:
    // 0x79a3e0: 0x8e22b000  lw          $v0, -0x5000($s1)
    ctx->pc = 0x79a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946816)));
label_79a3e4:
    // 0x79a3e4: 0xc06e146  jal         func_1B8518
label_79a3e8:
    if (ctx->pc == 0x79A3E8u) {
        ctx->pc = 0x79A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E4u;
        // 0x79a3e8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3ECu;
        goto label_79a3ec;
    }
    ctx->pc = 0x79A3E4u;
    SET_GPR_U32(ctx, 31, 0x79A3ECu);
    ctx->pc = 0x79A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3E4u;
    // 0x79a3e8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8518u, 0x79A3E4u, 0x79A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3ECu;
label_79a3ec:
    // 0x79a3ec: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79a3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_79a3f0:
    // 0x79a3f0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_79a3f4:
    // 0x79a3f4: 0x3c01c00c  lui         $at, 0xC00C
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49164 << 16));
label_79a3f8:
    // 0x79a3f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a3f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79a3fc:
    // 0x79a3fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79a400:
    // 0x79a400: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a404:
    // 0x79a404: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x79a404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_79a408:
    // 0x79a408: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x79a408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_79a40c:
    // 0x79a40c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79a410:
    // 0x79a410: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79a410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a414:
    // 0x79a414: 0x3c01c0a5  lui         $at, 0xC0A5
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49317 << 16));
label_79a418:
    // 0x79a418: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x79a418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_79a41c:
    // 0x79a41c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a420:
    // 0x79a420: 0x26e4ea60  addiu       $a0, $s7, -0x15A0
    ctx->pc = 0x79a420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961760));
label_79a424:
    // 0x79a424: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x79a424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_79a428:
    // 0x79a428: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x79a428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_79a42c:
    // 0x79a42c: 0xc0b0a92  jal         func_2C2A48
label_79a430:
    if (ctx->pc == 0x79A430u) {
        ctx->pc = 0x79A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A42Cu;
        // 0x79a430: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A434u;
        goto label_79a434;
    }
    ctx->pc = 0x79A42Cu;
    SET_GPR_U32(ctx, 31, 0x79A434u);
    ctx->pc = 0x79A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A42Cu;
    // 0x79a430: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A42Cu, 0x79A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A434u;
label_79a434:
    // 0x79a434: 0x8e22b000  lw          $v0, -0x5000($s1)
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946816)));
label_79a438:
    // 0x79a438: 0xc06e146  jal         func_1B8518
label_79a43c:
    if (ctx->pc == 0x79A43Cu) {
        ctx->pc = 0x79A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A438u;
        // 0x79a43c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A440u;
        goto label_79a440;
    }
    ctx->pc = 0x79A438u;
    SET_GPR_U32(ctx, 31, 0x79A440u);
    ctx->pc = 0x79A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A438u;
    // 0x79a43c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8518u, 0x79A438u, 0x79A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A440u;
label_79a440:
    // 0x79a440: 0x8e22b000  lw          $v0, -0x5000($s1)
    ctx->pc = 0x79a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946816)));
label_79a444:
    // 0x79a444: 0xc06e146  jal         func_1B8518
label_79a448:
    if (ctx->pc == 0x79A448u) {
        ctx->pc = 0x79A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A444u;
        // 0x79a448: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A44Cu;
        goto label_79a44c;
    }
    ctx->pc = 0x79A444u;
    SET_GPR_U32(ctx, 31, 0x79A44Cu);
    ctx->pc = 0x79A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A444u;
    // 0x79a448: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8518u, 0x79A444u, 0x79A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A44Cu;
label_79a44c:
    // 0x79a44c: 0x8262af20  lb          $v0, -0x50E0($s3)
    ctx->pc = 0x79a44cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294946592)));
label_79a450:
    // 0x79a450: 0x27c84c58  addiu       $t0, $fp, 0x4C58
    ctx->pc = 0x79a450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 19544));
label_79a454:
    // 0x79a454: 0x2663af20  addiu       $v1, $s3, -0x50E0
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946592));
label_79a458:
    // 0x79a458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a45c:
    // 0x79a45c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a460:
    if (ctx->pc == 0x79A460u) {
        ctx->pc = 0x79A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A45Cu;
        // 0x79a460: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A464u;
        goto label_79a464;
    }
    ctx->pc = 0x79A45Cu;
    {
        const bool branch_taken_0x79a45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A45Cu;
        // 0x79a460: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a45c) {
            ctx->pc = 0x79A498u;
            goto label_79a498;
        }
    }
    ctx->pc = 0x79A464u;
label_79a464:
    // 0x79a464: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a468:
    // 0x79a468: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a46c:
    // 0x79a46c: 0x0  nop
    ctx->pc = 0x79a46cu;
    // NOP
label_79a470:
    // 0x79a470: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79a474:
    // 0x79a474: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79a478:
    // 0x79a478: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79a47c:
    // 0x79a47c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79a480:
    // 0x79a480: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a480u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79a484:
    // 0x79a484: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79a488:
    if (ctx->pc == 0x79A488u) {
        ctx->pc = 0x79A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A484u;
        // 0x79a488: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A48Cu;
        goto label_79a48c;
    }
    ctx->pc = 0x79A484u;
    {
        const bool branch_taken_0x79a484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A484u;
        // 0x79a488: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a484) {
            ctx->pc = 0x79A498u;
            goto label_79a498;
        }
    }
    ctx->pc = 0x79A48Cu;
label_79a48c:
    // 0x79a48c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a48cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a490:
    // 0x79a490: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79a494:
    if (ctx->pc == 0x79A494u) {
        ctx->pc = 0x79A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A490u;
        // 0x79a494: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A498u;
        goto label_79a498;
    }
    ctx->pc = 0x79A490u;
    {
        const bool branch_taken_0x79a490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a490) {
            ctx->pc = 0x79A494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A490u;
            // 0x79a494: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a470;
        }
    }
    ctx->pc = 0x79A498u;
label_79a498:
    // 0x79a498: 0xc053f66  jal         func_14FD98
label_79a49c:
    if (ctx->pc == 0x79A49Cu) {
        ctx->pc = 0x79A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A498u;
        // 0x79a49c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4A0u;
        goto label_79a4a0;
    }
    ctx->pc = 0x79A498u;
    SET_GPR_U32(ctx, 31, 0x79A4A0u);
    ctx->pc = 0x79A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A498u;
    // 0x79a49c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A498u, 0x79A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4A0u;
label_79a4a0:
    // 0x79a4a0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_79a4a4:
    // 0x79a4a4: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_79a4a8:
    // 0x79a4a8: 0x24646af0  addiu       $a0, $v1, 0x6AF0
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27376));
label_79a4ac:
    // 0x79a4ac: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x79a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_79a4b0:
    // 0x79a4b0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x79a4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_79a4b4:
    // 0x79a4b4: 0xc0a58dc  jal         func_296370
label_79a4b8:
    if (ctx->pc == 0x79A4B8u) {
        ctx->pc = 0x79A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B4u;
        // 0x79a4b8: 0xac430250  sw          $v1, 0x250($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4BCu;
        goto label_79a4bc;
    }
    ctx->pc = 0x79A4B4u;
    SET_GPR_U32(ctx, 31, 0x79A4BCu);
    ctx->pc = 0x79A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4B4u;
    // 0x79a4b8: 0xac430250  sw          $v1, 0x250($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79A4B4u, 0x79A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4BCu;
label_79a4bc:
    // 0x79a4bc: 0xc0a56ce  jal         func_295B38
label_79a4c0:
    if (ctx->pc == 0x79A4C0u) {
        ctx->pc = 0x79A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4BCu;
        // 0x79a4c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4C4u;
        goto label_79a4c4;
    }
    ctx->pc = 0x79A4BCu;
    SET_GPR_U32(ctx, 31, 0x79A4C4u);
    ctx->pc = 0x79A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4BCu;
    // 0x79a4c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x79A4BCu, 0x79A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4C4u;
label_79a4c4:
    // 0x79a4c4: 0xc1e6a56  jal         func_79A958
label_79a4c8:
    if (ctx->pc == 0x79A4C8u) {
        ctx->pc = 0x79A4CCu;
        goto label_79a4cc;
    }
    ctx->pc = 0x79A4C4u;
    SET_GPR_U32(ctx, 31, 0x79A4CCu);
    ctx->pc = 0x79A958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A958u, 0x79A4C4u, 0x79A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4CCu;
label_79a4cc:
    // 0x79a4cc: 0x240403da  addiu       $a0, $zero, 0x3DA
    ctx->pc = 0x79a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 986));
label_79a4d0:
    // 0x79a4d0: 0xc0c3ea6  jal         func_30FA98
label_79a4d4:
    if (ctx->pc == 0x79A4D4u) {
        ctx->pc = 0x79A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4D0u;
        // 0x79a4d4: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4D8u;
        goto label_79a4d8;
    }
    ctx->pc = 0x79A4D0u;
    SET_GPR_U32(ctx, 31, 0x79A4D8u);
    ctx->pc = 0x79A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4D0u;
    // 0x79a4d4: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79A4D0u, 0x79A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4D8u;
label_79a4d8:
    // 0x79a4d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a4dc:
    // 0x79a4dc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_79a4e0:
    if (ctx->pc == 0x79A4E0u) {
        ctx->pc = 0x79A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4DCu;
        // 0x79a4e0: 0x8ec27a8c  lw          $v0, 0x7A8C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4E4u;
        goto label_79a4e4;
    }
    ctx->pc = 0x79A4DCu;
    {
        const bool branch_taken_0x79a4dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4DCu;
        // 0x79a4e0: 0x8ec27a8c  lw          $v0, 0x7A8C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4dc) {
            ctx->pc = 0x79A534u;
            goto label_79a534;
        }
    }
    ctx->pc = 0x79A4E4u;
label_79a4e4:
    // 0x79a4e4: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a4e8:
    // 0x79a4e8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79a4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79a4ec:
    // 0x79a4ec: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79a4f0:
    // 0x79a4f0: 0x40f809  jalr        $v0
label_79a4f4:
    if (ctx->pc == 0x79A4F4u) {
        ctx->pc = 0x79A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F0u;
        // 0x79a4f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4F8u;
        goto label_79a4f8;
    }
    ctx->pc = 0x79A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A4F8u);
        ctx->pc = 0x79A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F0u;
        // 0x79a4f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4F0u, 0x79A4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A4F8u;
label_79a4f8:
    // 0x79a4f8: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x79a4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_79a4fc:
    // 0x79a4fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a500:
    // 0x79a500: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a504:
    // 0x79a504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a508:
    // 0x79a508: 0xc07097c  jal         func_1C25F0
label_79a50c:
    if (ctx->pc == 0x79A50Cu) {
        ctx->pc = 0x79A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A508u;
        // 0x79a50c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A510u;
        goto label_79a510;
    }
    ctx->pc = 0x79A508u;
    SET_GPR_U32(ctx, 31, 0x79A510u);
    ctx->pc = 0x79A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A508u;
    // 0x79a50c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25F0u, 0x79A508u, 0x79A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A510u;
label_79a510:
    // 0x79a510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a514:
    // 0x79a514: 0xc070972  jal         func_1C25C8
label_79a518:
    if (ctx->pc == 0x79A518u) {
        ctx->pc = 0x79A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A514u;
        // 0x79a518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A51Cu;
        goto label_79a51c;
    }
    ctx->pc = 0x79A514u;
    SET_GPR_U32(ctx, 31, 0x79A51Cu);
    ctx->pc = 0x79A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A514u;
    // 0x79a518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25C8u, 0x79A514u, 0x79A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A51Cu;
label_79a51c:
    // 0x79a51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a520:
    // 0x79a520: 0xc070968  jal         func_1C25A0
label_79a524:
    if (ctx->pc == 0x79A524u) {
        ctx->pc = 0x79A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A520u;
        // 0x79a524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A528u;
        goto label_79a528;
    }
    ctx->pc = 0x79A520u;
    SET_GPR_U32(ctx, 31, 0x79A528u);
    ctx->pc = 0x79A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A520u;
    // 0x79a524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25A0u, 0x79A520u, 0x79A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A528u;
label_79a528:
    // 0x79a528: 0x24020904  addiu       $v0, $zero, 0x904
    ctx->pc = 0x79a528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2308));
label_79a52c:
    // 0x79a52c: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x79a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
label_79a530:
    // 0x79a530: 0x8ec27a8c  lw          $v0, 0x7A8C($s6)
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31372)));
label_79a534:
    // 0x79a534: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79a534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_79a538:
    // 0x79a538: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79a53c:
    // 0x79a53c: 0xaec27a8c  sw          $v0, 0x7A8C($s6)
    ctx->pc = 0x79a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 31372), GPR_U32(ctx, 2));
label_79a540:
    // 0x79a540: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x79a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_79a544:
    // 0x79a544: 0x26e4ea60  addiu       $a0, $s7, -0x15A0
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961760));
label_79a548:
    // 0x79a548: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_79a54c:
    // 0x79a54c: 0xc0b0a92  jal         func_2C2A48
label_79a550:
    if (ctx->pc == 0x79A550u) {
        ctx->pc = 0x79A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A54Cu;
        // 0x79a550: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A554u;
        goto label_79a554;
    }
    ctx->pc = 0x79A54Cu;
    SET_GPR_U32(ctx, 31, 0x79A554u);
    ctx->pc = 0x79A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A54Cu;
    // 0x79a550: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A54Cu, 0x79A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A554u;
label_79a554:
    // 0x79a554: 0x240403d9  addiu       $a0, $zero, 0x3D9
    ctx->pc = 0x79a554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
label_79a558:
    // 0x79a558: 0xc0c3ea6  jal         func_30FA98
label_79a55c:
    if (ctx->pc == 0x79A55Cu) {
        ctx->pc = 0x79A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A558u;
        // 0x79a55c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A560u;
        goto label_79a560;
    }
    ctx->pc = 0x79A558u;
    SET_GPR_U32(ctx, 31, 0x79A560u);
    ctx->pc = 0x79A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A558u;
    // 0x79a55c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79A558u, 0x79A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A560u;
label_79a560:
    // 0x79a560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a564:
    // 0x79a564: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_79a568:
    if (ctx->pc == 0x79A568u) {
        ctx->pc = 0x79A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A564u;
        // 0x79a568: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A56Cu;
        goto label_79a56c;
    }
    ctx->pc = 0x79A564u;
    {
        const bool branch_taken_0x79a564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A564u;
        // 0x79a568: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a564) {
            ctx->pc = 0x79A59Cu;
            goto label_79a59c;
        }
    }
    ctx->pc = 0x79A56Cu;
label_79a56c:
    // 0x79a56c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a570:
    // 0x79a570: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79a570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79a574:
    // 0x79a574: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79a574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79a578:
    // 0x79a578: 0x40f809  jalr        $v0
label_79a57c:
    if (ctx->pc == 0x79A57Cu) {
        ctx->pc = 0x79A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A578u;
        // 0x79a57c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A580u;
        goto label_79a580;
    }
    ctx->pc = 0x79A578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A580u);
        ctx->pc = 0x79A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A578u;
        // 0x79a57c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A578u, 0x79A580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A580u;
label_79a580:
    // 0x79a580: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a584:
    // 0x79a584: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x79a584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_79a588:
    // 0x79a588: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_79a58c:
    // 0x79a58c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x79a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79a590:
    // 0x79a590: 0x40f809  jalr        $v0
label_79a594:
    if (ctx->pc == 0x79A594u) {
        ctx->pc = 0x79A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A590u;
        // 0x79a594: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A598u;
        goto label_79a598;
    }
    ctx->pc = 0x79A590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A598u);
        ctx->pc = 0x79A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A590u;
        // 0x79a594: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A590u, 0x79A598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A598u;
label_79a598:
    // 0x79a598: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a59c:
    // 0x79a59c: 0xc0b5692  jal         func_2D5A48
label_79a5a0:
    if (ctx->pc == 0x79A5A0u) {
        ctx->pc = 0x79A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A59Cu;
        // 0x79a5a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5A4u;
        goto label_79a5a4;
    }
    ctx->pc = 0x79A59Cu;
    SET_GPR_U32(ctx, 31, 0x79A5A4u);
    ctx->pc = 0x79A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A59Cu;
    // 0x79a5a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A59Cu, 0x79A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A4u;
label_79a5a4:
    // 0x79a5a4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x79a5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79a5a8:
    // 0x79a5a8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x79a5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79a5ac:
    // 0x79a5ac: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x79a5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79a5b0:
    // 0x79a5b0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x79a5b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79a5b4:
    // 0x79a5b4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x79a5b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79a5b8:
    // 0x79a5b8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x79a5b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79a5bc:
    // 0x79a5bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x79a5bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79a5c0:
    // 0x79a5c0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x79a5c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a5c4:
    // 0x79a5c4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x79a5c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a5c8:
    // 0x79a5c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79a5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_79a5cc:
    // 0x79a5cc: 0x3e00008  jr          $ra
label_79a5d0:
    if (ctx->pc == 0x79A5D0u) {
        ctx->pc = 0x79A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5CCu;
        // 0x79a5d0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5D4u;
        goto label_79a5d4;
    }
    ctx->pc = 0x79A5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5CCu;
        // 0x79a5d0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A5D4u;
label_79a5d4:
    // 0x79a5d4: 0x0  nop
    ctx->pc = 0x79a5d4u;
    // NOP
    ctx->pc = 0x79a5d8u;
}
} // namespace gh_r204
