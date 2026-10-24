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

// Function: func_0011F438
// Address: 0x11f438 - 0x11f810
void func_0011F438_0x11f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011F438_0x11f438");
#endif

    switch (ctx->pc) {
        case 0x11f48cu: goto label_11f48c;
        case 0x11f498u: goto label_11f498;
        case 0x11f51cu: goto label_11f51c;
        case 0x11f530u: goto label_11f530;
        case 0x11f538u: goto label_11f538;
        case 0x11f540u: goto label_11f540;
        case 0x11f550u: goto label_11f550;
        case 0x11f578u: goto label_11f578;
        case 0x11f590u: goto label_11f590;
        case 0x11f5e0u: goto label_11f5e0;
        case 0x11f5e8u: goto label_11f5e8;
        case 0x11f608u: goto label_11f608;
        case 0x11f648u: goto label_11f648;
        case 0x11f654u: goto label_11f654;
        case 0x11f684u: goto label_11f684;
        case 0x11f6acu: goto label_11f6ac;
        case 0x11f6e8u: goto label_11f6e8;
        case 0x11f6f0u: goto label_11f6f0;
        case 0x11f6fcu: goto label_11f6fc;
        case 0x11f730u: goto label_11f730;
        case 0x11f73cu: goto label_11f73c;
        case 0x11f758u: goto label_11f758;
        case 0x11f7a8u: goto label_11f7a8;
        case 0x11f7b0u: goto label_11f7b0;
        case 0x11f7c4u: goto label_11f7c4;
        case 0x11f7e8u: goto label_11f7e8;
        case 0x11f7f4u: goto label_11f7f4;
        default: break;
    }

    ctx->pc = 0x11f438u;

    // 0x11f438: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11f438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11f43c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11f440: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11f440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11f444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11f44c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f450: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11f450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11f454: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11f454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11f458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f45c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11f460: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11f460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11f464: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11f464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f468: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11f468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11f46c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f470: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11f470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f474: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11f478: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11f478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11f47c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11f480: 0x8e300694  lw          $s0, 0x694($s1)
    ctx->pc = 0x11f480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11f484: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11F484u;
    SET_GPR_U32(ctx, 31, 0x11F48Cu);
    ctx->pc = 0x11F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F484u;
    // 0x11f488: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11F484u, 0x11F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F48Cu;
label_11f48c:
    // 0x11f48c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11f490: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11F490u;
    SET_GPR_U32(ctx, 31, 0x11F498u);
    ctx->pc = 0x11F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F490u;
    // 0x11f494: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11F490u, 0x11F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F498u;
label_11f498:
    // 0x11f498: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11f498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11f49c: 0x10720042  beq         $v1, $s2, . + 4 + (0x42 << 2)
    ctx->pc = 0x11F49Cu;
    {
        const bool branch_taken_0x11f49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x11F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F49Cu;
        // 0x11f4a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f49c) {
            ctx->pc = 0x11F5A8u;
            goto label_11f5a8;
        }
    }
    ctx->pc = 0x11F4A4u;
    // 0x11f4a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F4A4u;
    {
        const bool branch_taken_0x11f4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f4a4) {
            ctx->pc = 0x11F4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F4A4u;
            // 0x11f4a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F4BCu;
            goto label_11f4bc;
        }
    }
    ctx->pc = 0x11F4ACu;
    // 0x11f4ac: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F4ACu;
    {
        const bool branch_taken_0x11f4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f4ac) {
            ctx->pc = 0x11F4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F4ACu;
            // 0x11f4b0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F4D4u;
            goto label_11f4d4;
        }
    }
    ctx->pc = 0x11F4B4u;
    // 0x11f4b4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x11F4B4u;
    {
        const bool branch_taken_0x11f4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4B4u;
        // 0x11f4b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4b4) {
            ctx->pc = 0x11F7F8u;
            goto label_11f7f8;
        }
    }
    ctx->pc = 0x11F4BCu;
label_11f4bc:
    // 0x11f4bc: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x11F4BCu;
    {
        const bool branch_taken_0x11f4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4BCu;
        // 0x11f4c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4bc) {
            ctx->pc = 0x11F744u;
            goto label_11f744;
        }
    }
    ctx->pc = 0x11F4C4u;
    // 0x11f4c4: 0x506200ab  beql        $v1, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x11F4C4u;
    {
        const bool branch_taken_0x11f4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f4c4) {
            ctx->pc = 0x11F4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F4C4u;
            // 0x11f4c8: 0x8622056e  lh          $v0, 0x56E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F774u;
            goto label_11f774;
        }
    }
    ctx->pc = 0x11F4CCu;
    // 0x11f4cc: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x11F4CCu;
    {
        const bool branch_taken_0x11f4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4CCu;
        // 0x11f4d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4cc) {
            ctx->pc = 0x11F7F8u;
            goto label_11f7f8;
        }
    }
    ctx->pc = 0x11F4D4u;
label_11f4d4:
    // 0x11f4d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11f4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4d8: 0x3c013d20  lui         $at, 0x3D20
    ctx->pc = 0x11f4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15648 << 16));
    // 0x11f4dc: 0x3421902e  ori         $at, $at, 0x902E
    ctx->pc = 0x11f4dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36910);
    // 0x11f4e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11f4e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f4e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f4e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4e8: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f4ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4f0: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x11f4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x11f4f4: 0x342185f0  ori         $at, $at, 0x85F0
    ctx->pc = 0x11f4f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34288);
    // 0x11f4f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f4fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f508: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11f508u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11f50c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11f50cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11f510: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11f510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11f514: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11F514u;
    SET_GPR_U32(ctx, 31, 0x11F51Cu);
    ctx->pc = 0x11F518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F514u;
    // 0x11f518: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11F514u, 0x11F51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F51Cu;
label_11f51c:
    // 0x11f51c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11f51cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11f520: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x11f520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11f524: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11f524u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11f528: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11F528u;
    SET_GPR_U32(ctx, 31, 0x11F530u);
    ctx->pc = 0x11F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F528u;
    // 0x11f52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11F528u, 0x11F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F530u;
label_11f530:
    // 0x11f530: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11F530u;
    SET_GPR_U32(ctx, 31, 0x11F538u);
    ctx->pc = 0x11F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F530u;
    // 0x11f534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11F530u, 0x11F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F538u;
label_11f538:
    // 0x11f538: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11F538u;
    SET_GPR_U32(ctx, 31, 0x11F540u);
    ctx->pc = 0x11F53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F538u;
    // 0x11f53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11F538u, 0x11F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F540u;
label_11f540:
    // 0x11f540: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11f540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11f544: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11f544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11f548: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11F548u;
    SET_GPR_U32(ctx, 31, 0x11F550u);
    ctx->pc = 0x11F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F548u;
    // 0x11f54c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11F548u, 0x11F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F550u;
label_11f550:
    // 0x11f550: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11F550u;
    {
        const bool branch_taken_0x11f550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f550) {
            ctx->pc = 0x11F554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F550u;
            // 0x11f554: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F57Cu;
            goto label_11f57c;
        }
    }
    ctx->pc = 0x11F558u;
    // 0x11f558: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x11f558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x11f55c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f560: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x11f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f568: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f568u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11f56c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11f56cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11f570: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11F570u;
    SET_GPR_U32(ctx, 31, 0x11F578u);
    ctx->pc = 0x11F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F570u;
    // 0x11f574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11F570u, 0x11F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F578u;
label_11f578:
    // 0x11f578: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11f578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_11f57c:
    // 0x11f57c: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x11F57Cu;
    {
        const bool branch_taken_0x11f57c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x11f57c) {
            ctx->pc = 0x11F580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F57Cu;
            // 0x11f580: 0xa632054a  sh          $s2, 0x54A($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F584u;
            goto label_11f584;
        }
    }
    ctx->pc = 0x11F584u;
label_11f584:
    // 0x11f584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f588: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11F588u;
    SET_GPR_U32(ctx, 31, 0x11F590u);
    ctx->pc = 0x11F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F588u;
    // 0x11f58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11F588u, 0x11F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F590u;
label_11f590:
    // 0x11f590: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11f590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11f594: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x11f594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11f598: 0xae3215b0  sw          $s2, 0x15B0($s1)
    ctx->pc = 0x11f598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 18));
    // 0x11f59c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f5a0: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x11f5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x11f5a4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11f5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11f5a8:
    // 0x11f5a8: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11f5a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x11f5ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11F5ACu;
    {
        const bool branch_taken_0x11f5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5ACu;
        // 0x11f5b0: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5ac) {
            ctx->pc = 0x11F5D8u;
            goto label_11f5d8;
        }
    }
    ctx->pc = 0x11F5B4u;
    // 0x11f5b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F5B4u;
    {
        const bool branch_taken_0x11f5b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5B4u;
        // 0x11f5b8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5b4) {
            ctx->pc = 0x11F5D8u;
            goto label_11f5d8;
        }
    }
    ctx->pc = 0x11F5BCu;
    // 0x11f5bc: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x11f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11f5c0: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11f5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f5c4: 0x26030550  addiu       $v1, $s0, 0x550
    ctx->pc = 0x11f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x11f5c8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11f5c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f5cc: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11f5ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f5d0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11f5d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11f5d4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11f5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11f5d8:
    // 0x11f5d8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11F5D8u;
    SET_GPR_U32(ctx, 31, 0x11F5E0u);
    ctx->pc = 0x11F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F5D8u;
    // 0x11f5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11F5D8u, 0x11F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F5E0u;
label_11f5e0:
    // 0x11f5e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11F5E0u;
    SET_GPR_U32(ctx, 31, 0x11F5E8u);
    ctx->pc = 0x11F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F5E0u;
    // 0x11f5e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11F5E0u, 0x11F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F5E8u;
label_11f5e8:
    // 0x11f5e8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11F5E8u;
    {
        const bool branch_taken_0x11f5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f5e8) {
            ctx->pc = 0x11F634u;
            goto label_11f634;
        }
    }
    ctx->pc = 0x11F5F0u;
    // 0x11f5f0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11f5f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11f5f4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11F5F4u;
    {
        const bool branch_taken_0x11f5f4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5F4u;
        // 0x11f5f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5f4) {
            ctx->pc = 0x11F624u;
            goto label_11f624;
        }
    }
    ctx->pc = 0x11F5FCu;
    // 0x11f5fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f600: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11F600u;
    SET_GPR_U32(ctx, 31, 0x11F608u);
    ctx->pc = 0x11F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F600u;
    // 0x11f604: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11F600u, 0x11F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F608u;
label_11f608:
    // 0x11f608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f60c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11f610: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11f610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11f614: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11f614u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11f618: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11f618u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f61c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11F61Cu;
    {
        const bool branch_taken_0x11f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F61Cu;
        // 0x11f620: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f61c) {
            ctx->pc = 0x11F634u;
            goto label_11f634;
        }
    }
    ctx->pc = 0x11F624u;
label_11f624:
    // 0x11f624: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11f624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11f628: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11f628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11f62c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11f62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11f630: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11f630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11f634:
    // 0x11f634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f638: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11f638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11f63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f640: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11F640u;
    SET_GPR_U32(ctx, 31, 0x11F648u);
    ctx->pc = 0x11F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F640u;
    // 0x11f644: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11F640u, 0x11F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F648u;
label_11f648:
    // 0x11f648: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11f648u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11f64c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11F64Cu;
    SET_GPR_U32(ctx, 31, 0x11F654u);
    ctx->pc = 0x11F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F64Cu;
    // 0x11f650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11F64Cu, 0x11F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F654u;
label_11f654:
    // 0x11f654: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11f654u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11f658: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11f658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11f65c: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x11F65Cu;
    {
        const bool branch_taken_0x11f65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f65c) {
            ctx->pc = 0x11F660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F65Cu;
            // 0x11f660: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F7F8u;
            goto label_11f7f8;
        }
    }
    ctx->pc = 0x11F664u;
    // 0x11f664: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11f664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11f668: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x11F668u;
    {
        const bool branch_taken_0x11f668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F668u;
        // 0x11f66c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f668) {
            ctx->pc = 0x11F7F4u;
            goto label_11f7f4;
        }
    }
    ctx->pc = 0x11F670u;
    // 0x11f670: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x11f670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x11f674: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x11f674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x11f678: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11f678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11f67c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11F67Cu;
    SET_GPR_U32(ctx, 31, 0x11F684u);
    ctx->pc = 0x11F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F67Cu;
    // 0x11f680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11F67Cu, 0x11F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F684u;
label_11f684:
    // 0x11f684: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11F684u;
    {
        const bool branch_taken_0x11f684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f684) {
            ctx->pc = 0x11F688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F684u;
            // 0x11f688: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F6B0u;
            goto label_11f6b0;
        }
    }
    ctx->pc = 0x11F68Cu;
    // 0x11f68c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x11f68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x11f690: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f694: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x11f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f698: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f69c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f69cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11f6a0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11f6a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11f6a4: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11F6A4u;
    SET_GPR_U32(ctx, 31, 0x11F6ACu);
    ctx->pc = 0x11F6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F6A4u;
    // 0x11f6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11F6A4u, 0x11F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F6ACu;
label_11f6ac:
    // 0x11f6ac: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11f6acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_11f6b0:
    // 0x11f6b0: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F6B0u;
    {
        const bool branch_taken_0x11f6b0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6B0u;
        // 0x11f6b4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6b0) {
            ctx->pc = 0x11F70Cu;
            goto label_11f70c;
        }
    }
    ctx->pc = 0x11F6B8u;
    // 0x11f6b8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11f6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11f6bc: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11f6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11f6c0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11f6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11f6c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6c8: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11f6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11f6cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11f6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11f6d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11f6d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11f6d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11f6dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6e0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11F6E0u;
    SET_GPR_U32(ctx, 31, 0x11F6E8u);
    ctx->pc = 0x11F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F6E0u;
    // 0x11f6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11F6E0u, 0x11F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F6E8u;
label_11f6e8:
    // 0x11f6e8: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11F6E8u;
    SET_GPR_U32(ctx, 31, 0x11F6F0u);
    ctx->pc = 0x11F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F6E8u;
    // 0x11f6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11F6E8u, 0x11F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F6F0u;
label_11f6f0:
    // 0x11f6f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11f6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6f4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11F6F4u;
    SET_GPR_U32(ctx, 31, 0x11F6FCu);
    ctx->pc = 0x11F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F6F4u;
    // 0x11f6f8: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11F6F4u, 0x11F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F6FCu;
label_11f6fc:
    // 0x11f6fc: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11f6fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11f700: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11f700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11f704: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11F704u;
    {
        const bool branch_taken_0x11f704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F704u;
        // 0x11f708: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f704) {
            ctx->pc = 0x11F730u;
            goto label_11f730;
        }
    }
    ctx->pc = 0x11F70Cu;
label_11f70c:
    // 0x11f70c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f710: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11f714: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11f714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11f718: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11f718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f71c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11f71cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f720: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11f720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f724: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11f724u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f728: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11F728u;
    SET_GPR_U32(ctx, 31, 0x11F730u);
    ctx->pc = 0x11F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F728u;
    // 0x11f72c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11F728u, 0x11F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F730u;
label_11f730:
    // 0x11f730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f734: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11F734u;
    SET_GPR_U32(ctx, 31, 0x11F73Cu);
    ctx->pc = 0x11F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F734u;
    // 0x11f738: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11F734u, 0x11F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F73Cu;
label_11f73c:
    // 0x11f73c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11F73Cu;
    {
        const bool branch_taken_0x11f73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F73Cu;
        // 0x11f740: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f73c) {
            ctx->pc = 0x11F7F8u;
            goto label_11f7f8;
        }
    }
    ctx->pc = 0x11F744u;
label_11f744:
    // 0x11f744: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11f744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11f748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f74c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x11f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11f750: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11F750u;
    SET_GPR_U32(ctx, 31, 0x11F758u);
    ctx->pc = 0x11F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F750u;
    // 0x11f754: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11F750u, 0x11F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F758u;
label_11f758:
    // 0x11f758: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11f758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11f75c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x11f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11f760: 0xae3215b0  sw          $s2, 0x15B0($s1)
    ctx->pc = 0x11f760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 18));
    // 0x11f764: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f768: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x11f768u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x11f76c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11f76cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x11f770: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11f770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
label_11f774:
    // 0x11f774: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11F774u;
    {
        const bool branch_taken_0x11f774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F774u;
        // 0x11f778: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f774) {
            ctx->pc = 0x11F7A0u;
            goto label_11f7a0;
        }
    }
    ctx->pc = 0x11F77Cu;
    // 0x11f77c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F77Cu;
    {
        const bool branch_taken_0x11f77c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F77Cu;
        // 0x11f780: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f77c) {
            ctx->pc = 0x11F7A0u;
            goto label_11f7a0;
        }
    }
    ctx->pc = 0x11F784u;
    // 0x11f784: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x11f784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x11f788: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11f788u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f78c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x11f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11f790: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11f790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f794: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x11f794u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f798: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11f798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11f79c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11f7a0:
    // 0x11f7a0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11F7A0u;
    SET_GPR_U32(ctx, 31, 0x11F7A8u);
    ctx->pc = 0x11F7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7A0u;
    // 0x11f7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11F7A0u, 0x11F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F7A8u;
label_11f7a8:
    // 0x11f7a8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11F7A8u;
    SET_GPR_U32(ctx, 31, 0x11F7B0u);
    ctx->pc = 0x11F7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7A8u;
    // 0x11f7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11F7A8u, 0x11F7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F7B0u;
label_11f7b0:
    // 0x11f7b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F7B0u;
    {
        const bool branch_taken_0x11f7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7B0u;
        // 0x11f7b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7b0) {
            ctx->pc = 0x11F7D4u;
            goto label_11f7d4;
        }
    }
    ctx->pc = 0x11F7B8u;
    // 0x11f7b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7bc: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11F7BCu;
    SET_GPR_U32(ctx, 31, 0x11F7C4u);
    ctx->pc = 0x11F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7BCu;
    // 0x11f7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11F7BCu, 0x11F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F7C4u;
label_11f7c4:
    // 0x11f7c4: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11f7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f7c8: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11f7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f7cc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11f7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f7d0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11f7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11f7d4:
    // 0x11f7d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f7d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11f7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11f7dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7e0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11F7E0u;
    SET_GPR_U32(ctx, 31, 0x11F7E8u);
    ctx->pc = 0x11F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7E0u;
    // 0x11f7e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11F7E0u, 0x11F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F7E8u;
label_11f7e8:
    // 0x11f7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7ec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11F7ECu;
    SET_GPR_U32(ctx, 31, 0x11F7F4u);
    ctx->pc = 0x11F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7ECu;
    // 0x11f7f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11F7ECu, 0x11F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F7F4u;
label_11f7f4:
    // 0x11f7f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11f7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11f7f8:
    // 0x11f7f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11f7f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f7fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11f7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11f800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f804: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f808: 0x3e00008  jr          $ra
    ctx->pc = 0x11F808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F808u;
        // 0x11f80c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F810u;
}
