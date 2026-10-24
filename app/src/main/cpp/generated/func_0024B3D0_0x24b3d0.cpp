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

// Function: func_0024B3D0
// Address: 0x24b3d0 - 0x24b660
void func_0024B3D0_0x24b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024B3D0_0x24b3d0");
#endif

    switch (ctx->pc) {
        case 0x24b42cu: goto label_24b42c;
        case 0x24b450u: goto label_24b450;
        case 0x24b474u: goto label_24b474;
        case 0x24b488u: goto label_24b488;
        case 0x24b49cu: goto label_24b49c;
        case 0x24b4b4u: goto label_24b4b4;
        case 0x24b4c8u: goto label_24b4c8;
        case 0x24b4dcu: goto label_24b4dc;
        case 0x24b4fcu: goto label_24b4fc;
        case 0x24b540u: goto label_24b540;
        case 0x24b560u: goto label_24b560;
        case 0x24b568u: goto label_24b568;
        case 0x24b57cu: goto label_24b57c;
        case 0x24b590u: goto label_24b590;
        case 0x24b5f8u: goto label_24b5f8;
        case 0x24b604u: goto label_24b604;
        case 0x24b620u: goto label_24b620;
        case 0x24b63cu: goto label_24b63c;
        default: break;
    }

    ctx->pc = 0x24b3d0u;

    // 0x24b3d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24b3d4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x24b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x24b3d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24b3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x24b3dc: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x24b3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x24b3e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x24b3e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24b3ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x24b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x24b3f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b3f4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x24b3f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24b3f8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24b3fc: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x24b3fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24b400: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24b400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24b404: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B404u;
    {
        const bool branch_taken_0x24b404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B404u;
        // 0x24b408: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b404) {
            ctx->pc = 0x24B420u;
            goto label_24b420;
        }
    }
    ctx->pc = 0x24B40Cu;
    // 0x24b40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b410: 0x50820041  beql        $a0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x24B410u;
    {
        const bool branch_taken_0x24b410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24b410) {
            ctx->pc = 0x24B414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B410u;
            // 0x24b414: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B518u;
            goto label_24b518;
        }
    }
    ctx->pc = 0x24B418u;
    // 0x24b418: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x24B418u;
    {
        const bool branch_taken_0x24b418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B418u;
        // 0x24b41c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b418) {
            ctx->pc = 0x24B608u;
            goto label_24b608;
        }
    }
    ctx->pc = 0x24B420u;
label_24b420:
    // 0x24b420: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x24b420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b424: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24B424u;
    SET_GPR_U32(ctx, 31, 0x24B42Cu);
    ctx->pc = 0x24B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B424u;
    // 0x24b428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24B424u, 0x24B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B42Cu;
label_24b42c:
    // 0x24b42c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x24b42cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24b430: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24b430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24b434: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x24b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24b438: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x24b438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x24b43c: 0x8c433db4  lw          $v1, 0x3DB4($v0)
    ctx->pc = 0x24b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15796)));
    // 0x24b440: 0x8c453db0  lw          $a1, 0x3DB0($v0)
    ctx->pc = 0x24b440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15792)));
    // 0x24b444: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x24b444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24b448: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24B448u;
    SET_GPR_U32(ctx, 31, 0x24B450u);
    ctx->pc = 0x24B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B448u;
    // 0x24b44c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24B448u, 0x24B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B450u;
label_24b450:
    // 0x24b450: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24b450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24b454: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24B454u;
    {
        const bool branch_taken_0x24b454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B454u;
        // 0x24b458: 0x8e040748  lw          $a0, 0x748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b454) {
            ctx->pc = 0x24B4A4u;
            goto label_24b4a4;
        }
    }
    ctx->pc = 0x24B45Cu;
    // 0x24b45c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x24b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24b460: 0x8c623db8  lw          $v0, 0x3DB8($v1)
    ctx->pc = 0x24b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15800)));
    // 0x24b464: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B464u;
    {
        const bool branch_taken_0x24b464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B464u;
        // 0x24b468: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b464) {
            ctx->pc = 0x24B474u;
            goto label_24b474;
        }
    }
    ctx->pc = 0x24B46Cu;
    // 0x24b46c: 0xc0a04f6  jal         func_2813D8
    ctx->pc = 0x24B46Cu;
    SET_GPR_U32(ctx, 31, 0x24B474u);
    ctx->pc = 0x24B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B46Cu;
    // 0x24b470: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813D8u, 0x24B46Cu, 0x24B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B474u;
label_24b474:
    // 0x24b474: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24b474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x24b478: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B478u;
    {
        const bool branch_taken_0x24b478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b478) {
            ctx->pc = 0x24B47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B478u;
            // 0x24b47c: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B48Cu;
            goto label_24b48c;
        }
    }
    ctx->pc = 0x24B480u;
    // 0x24b480: 0xc0a0ca2  jal         func_283288
    ctx->pc = 0x24B480u;
    SET_GPR_U32(ctx, 31, 0x24B488u);
    ctx->pc = 0x24B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B480u;
    // 0x24b484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283288u, 0x24B480u, 0x24B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B488u;
label_24b488:
    // 0x24b488: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24b488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_24b48c:
    // 0x24b48c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24B48Cu;
    {
        const bool branch_taken_0x24b48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b48c) {
            ctx->pc = 0x24B4DCu;
            goto label_24b4dc;
        }
    }
    ctx->pc = 0x24B494u;
    // 0x24b494: 0xc0a0ca2  jal         func_283288
    ctx->pc = 0x24B494u;
    SET_GPR_U32(ctx, 31, 0x24B49Cu);
    ctx->pc = 0x24B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B494u;
    // 0x24b498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283288u, 0x24B494u, 0x24B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B49Cu;
label_24b49c:
    // 0x24b49c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24B49Cu;
    {
        const bool branch_taken_0x24b49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b49c) {
            ctx->pc = 0x24B4DCu;
            goto label_24b4dc;
        }
    }
    ctx->pc = 0x24B4A4u;
label_24b4a4:
    // 0x24b4a4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B4A4u;
    {
        const bool branch_taken_0x24b4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b4a4) {
            ctx->pc = 0x24B4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B4A4u;
            // 0x24b4a8: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B4B8u;
            goto label_24b4b8;
        }
    }
    ctx->pc = 0x24B4ACu;
    // 0x24b4ac: 0xc0a04f6  jal         func_2813D8
    ctx->pc = 0x24B4ACu;
    SET_GPR_U32(ctx, 31, 0x24B4B4u);
    ctx->pc = 0x24B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4ACu;
    // 0x24b4b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813D8u, 0x24B4ACu, 0x24B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4B4u;
label_24b4b4:
    // 0x24b4b4: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_24b4b8:
    // 0x24b4b8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B4B8u;
    {
        const bool branch_taken_0x24b4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b4b8) {
            ctx->pc = 0x24B4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B4B8u;
            // 0x24b4bc: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B4CCu;
            goto label_24b4cc;
        }
    }
    ctx->pc = 0x24B4C0u;
    // 0x24b4c0: 0xc0a0ca2  jal         func_283288
    ctx->pc = 0x24B4C0u;
    SET_GPR_U32(ctx, 31, 0x24B4C8u);
    ctx->pc = 0x24B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4C0u;
    // 0x24b4c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283288u, 0x24B4C0u, 0x24B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4C8u;
label_24b4c8:
    // 0x24b4c8: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_24b4cc:
    // 0x24b4cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B4CCu;
    {
        const bool branch_taken_0x24b4cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b4cc) {
            ctx->pc = 0x24B4DCu;
            goto label_24b4dc;
        }
    }
    ctx->pc = 0x24B4D4u;
    // 0x24b4d4: 0xc0a0ca2  jal         func_283288
    ctx->pc = 0x24B4D4u;
    SET_GPR_U32(ctx, 31, 0x24B4DCu);
    ctx->pc = 0x24B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4D4u;
    // 0x24b4d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283288u, 0x24B4D4u, 0x24B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4DCu;
label_24b4dc:
    // 0x24b4dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24b4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b4e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24b4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24b4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4e8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x24b4e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4f0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24b4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24b4f4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24B4F4u;
    SET_GPR_U32(ctx, 31, 0x24B4FCu);
    ctx->pc = 0x24B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4F4u;
    // 0x24b4f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24B4F4u, 0x24B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4FCu;
label_24b4fc:
    // 0x24b4fc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24b4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24b500: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x24b500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x24b504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24b50c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24b50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x24b510: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24b510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24b514: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x24b514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b518:
    // 0x24b518: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24b518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b51c: 0x0  nop
    ctx->pc = 0x24b51cu;
    // NOP
    // 0x24b520: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24b520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b524: 0x0  nop
    ctx->pc = 0x24b524u;
    // NOP
    // 0x24b528: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x24B528u;
    {
        const bool branch_taken_0x24b528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b528) {
            ctx->pc = 0x24B560u;
            goto label_24b560;
        }
    }
    ctx->pc = 0x24B530u;
    // 0x24b530: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b534: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24b534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b538: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24B538u;
    SET_GPR_U32(ctx, 31, 0x24B540u);
    ctx->pc = 0x24B53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B538u;
    // 0x24b53c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24B538u, 0x24B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B540u;
label_24b540:
    // 0x24b540: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24b540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b548: 0x3c013c49  lui         $at, 0x3C49
    ctx->pc = 0x24b548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15433 << 16));
    // 0x24b54c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24b54cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24b550: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24b550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b554: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x24b554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24b558: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x24B558u;
    SET_GPR_U32(ctx, 31, 0x24B560u);
    ctx->pc = 0x24B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B558u;
    // 0x24b55c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x24B558u, 0x24B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B560u;
label_24b560:
    // 0x24b560: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24B560u;
    SET_GPR_U32(ctx, 31, 0x24B568u);
    ctx->pc = 0x24B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B560u;
    // 0x24b564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24B560u, 0x24B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B568u;
label_24b568:
    // 0x24b568: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24B568u;
    {
        const bool branch_taken_0x24b568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b568) {
            ctx->pc = 0x24B5E4u;
            goto label_24b5e4;
        }
    }
    ctx->pc = 0x24B570u;
    // 0x24b570: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24b570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24b574: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24B574u;
    SET_GPR_U32(ctx, 31, 0x24B57Cu);
    ctx->pc = 0x24B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B574u;
    // 0x24b578: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24B574u, 0x24B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B57Cu;
label_24b57c:
    // 0x24b57c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x24b57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24b580: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24B580u;
    {
        const bool branch_taken_0x24b580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B580u;
        // 0x24b584: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b580) {
            ctx->pc = 0x24B5D4u;
            goto label_24b5d4;
        }
    }
    ctx->pc = 0x24B588u;
    // 0x24b588: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24B588u;
    SET_GPR_U32(ctx, 31, 0x24B590u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24B588u, 0x24B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B590u;
label_24b590:
    // 0x24b590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24b590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b594: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24B594u;
    {
        const bool branch_taken_0x24b594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B594u;
        // 0x24b598: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b594) {
            ctx->pc = 0x24B5D4u;
            goto label_24b5d4;
        }
    }
    ctx->pc = 0x24B59Cu;
    // 0x24b59c: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x24b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b5a0: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x24b5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x24b5a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b5a8: 0x0  nop
    ctx->pc = 0x24b5a8u;
    // NOP
    // 0x24b5ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24b5acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b5b0: 0x0  nop
    ctx->pc = 0x24b5b0u;
    // NOP
    // 0x24b5b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24B5B4u;
    {
        const bool branch_taken_0x24b5b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5B4u;
        // 0x24b5b8: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5b4) {
            ctx->pc = 0x24B5D0u;
            goto label_24b5d0;
        }
    }
    ctx->pc = 0x24B5BCu;
    // 0x24b5bc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24b5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b5c0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24b5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24b5c4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24b5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b5c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24B5C8u;
    {
        const bool branch_taken_0x24b5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5C8u;
        // 0x24b5cc: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5c8) {
            ctx->pc = 0x24B604u;
            goto label_24b604;
        }
    }
    ctx->pc = 0x24B5D0u;
label_24b5d0:
    // 0x24b5d0: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x24b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_24b5d4:
    // 0x24b5d4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24b5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b5d8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24b5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24b5dc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24b5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b5e0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24b5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24b5e4:
    // 0x24b5e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24b5e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24b5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24b5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b5f0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24B5F0u;
    SET_GPR_U32(ctx, 31, 0x24B5F8u);
    ctx->pc = 0x24B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5F0u;
    // 0x24b5f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24B5F0u, 0x24B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5F8u;
label_24b5f8:
    // 0x24b5f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24b5f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24b5fc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24B5FCu;
    SET_GPR_U32(ctx, 31, 0x24B604u);
    ctx->pc = 0x24B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5FCu;
    // 0x24b600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24B5FCu, 0x24B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B604u;
label_24b604:
    // 0x24b604: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24b604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_24b608:
    // 0x24b608: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24b608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b60c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B60Cu;
    {
        const bool branch_taken_0x24b60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B60Cu;
        // 0x24b610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b60c) {
            ctx->pc = 0x24B620u;
            goto label_24b620;
        }
    }
    ctx->pc = 0x24B614u;
    // 0x24b614: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24b618: 0xc09b6c0  jal         func_26DB00
    ctx->pc = 0x24B618u;
    SET_GPR_U32(ctx, 31, 0x24B620u);
    ctx->pc = 0x24B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B618u;
    // 0x24b61c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DB00u, 0x24B618u, 0x24B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B620u;
label_24b620:
    // 0x24b620: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24b620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x24b624: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24b624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24b628: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B628u;
    {
        const bool branch_taken_0x24b628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B628u;
        // 0x24b62c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b628) {
            ctx->pc = 0x24B63Cu;
            goto label_24b63c;
        }
    }
    ctx->pc = 0x24B630u;
    // 0x24b630: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24b630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24b634: 0xc09b6c0  jal         func_26DB00
    ctx->pc = 0x24B634u;
    SET_GPR_U32(ctx, 31, 0x24B63Cu);
    ctx->pc = 0x24B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B634u;
    // 0x24b638: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DB00u, 0x24B634u, 0x24B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B63Cu;
label_24b63c:
    // 0x24b63c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24b63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b640: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x24b640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24b644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b648: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x24b648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b650: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x24b650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24b654: 0x3e00008  jr          $ra
    ctx->pc = 0x24B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B654u;
        // 0x24b658: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B65Cu;
    // 0x24b65c: 0x0  nop
    ctx->pc = 0x24b65cu;
    // NOP
    ctx->pc = 0x24b660u;
}
