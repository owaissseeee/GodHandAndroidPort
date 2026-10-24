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

// Function: func_0022A3F8
// Address: 0x22a3f8 - 0x22a8d0
void func_0022A3F8_0x22a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022A3F8_0x22a3f8");
#endif

    switch (ctx->pc) {
        case 0x22a428u: goto label_22a428;
        case 0x22a45cu: goto label_22a45c;
        case 0x22a488u: goto label_22a488;
        case 0x22a4a4u: goto label_22a4a4;
        case 0x22a4c4u: goto label_22a4c4;
        case 0x22a4e8u: goto label_22a4e8;
        case 0x22a500u: goto label_22a500;
        case 0x22a518u: goto label_22a518;
        case 0x22a524u: goto label_22a524;
        case 0x22a54cu: goto label_22a54c;
        case 0x22a558u: goto label_22a558;
        case 0x22a568u: goto label_22a568;
        case 0x22a594u: goto label_22a594;
        case 0x22a5a0u: goto label_22a5a0;
        case 0x22a624u: goto label_22a624;
        case 0x22a648u: goto label_22a648;
        case 0x22a660u: goto label_22a660;
        case 0x22a678u: goto label_22a678;
        case 0x22a6a4u: goto label_22a6a4;
        case 0x22a6dcu: goto label_22a6dc;
        case 0x22a6ecu: goto label_22a6ec;
        case 0x22a708u: goto label_22a708;
        case 0x22a71cu: goto label_22a71c;
        case 0x22a7ccu: goto label_22a7cc;
        case 0x22a7dcu: goto label_22a7dc;
        case 0x22a808u: goto label_22a808;
        case 0x22a838u: goto label_22a838;
        case 0x22a84cu: goto label_22a84c;
        case 0x22a85cu: goto label_22a85c;
        case 0x22a870u: goto label_22a870;
        case 0x22a87cu: goto label_22a87c;
        case 0x22a884u: goto label_22a884;
        default: break;
    }

    ctx->pc = 0x22a3f8u;

    // 0x22a3f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a3fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a404: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22a404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22a408: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a40c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a410: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22a410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22a414: 0xa222186a  sb          $v0, 0x186A($s1)
    ctx->pc = 0x22a414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x22a418: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x22a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22a41c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x22a41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x22a420: 0xc098a84  jal         func_262A10
    ctx->pc = 0x22A420u;
    SET_GPR_U32(ctx, 31, 0x22A428u);
    ctx->pc = 0x22A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A420u;
    // 0x22a424: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x22A420u, 0x22A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A428u;
label_22a428:
    // 0x22a428: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x22a428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22a42c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x22a42cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x22a430: 0x10400112  beqz        $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x22A430u;
    {
        const bool branch_taken_0x22a430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A430u;
        // 0x22a434: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a430) {
            ctx->pc = 0x22A87Cu;
            goto label_22a87c;
        }
    }
    ctx->pc = 0x22A438u;
    // 0x22a438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22a438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22a43c: 0x24428840  addiu       $v0, $v0, -0x77C0
    ctx->pc = 0x22a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936640));
    // 0x22a440: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22a440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a444: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22a444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a448: 0x800008  jr          $a0
    ctx->pc = 0x22A448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A450u: goto label_22a450;
            case 0x22A4BCu: goto label_22a4bc;
            case 0x22A560u: goto label_22a560;
            case 0x22A5FCu: goto label_22a5fc;
            case 0x22A7D4u: goto label_22a7d4;
            case 0x22A844u: goto label_22a844;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A448u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22A450u;
label_22a450:
    // 0x22a450: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x22a450u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22a454: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22A454u;
    SET_GPR_U32(ctx, 31, 0x22A45Cu);
    ctx->pc = 0x22A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A454u;
    // 0x22a458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22A454u, 0x22A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A45Cu;
label_22a45c:
    // 0x22a45c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22a460: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22a460u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22a464: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a46c: 0x8c650e0c  lw          $a1, 0xE0C($v1)
    ctx->pc = 0x22a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3596)));
    // 0x22a470: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22a470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22a474: 0x8c660e10  lw          $a2, 0xE10($v1)
    ctx->pc = 0x22a474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3600)));
    // 0x22a478: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a47c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22a480: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22A480u;
    SET_GPR_U32(ctx, 31, 0x22A488u);
    ctx->pc = 0x22A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A480u;
    // 0x22a484: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22A480u, 0x22A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A488u;
label_22a488:
    // 0x22a488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a48c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22a48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22a490: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x22a490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x22a494: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x22a494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x22a498: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22a498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a49c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22A49Cu;
    SET_GPR_U32(ctx, 31, 0x22A4A4u);
    ctx->pc = 0x22A4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A49Cu;
    // 0x22a4a0: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22A49Cu, 0x22A4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4A4u;
label_22a4a4:
    // 0x22a4a4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22a4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22a4a8: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x22a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a4ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a4b0: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x22a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x22a4b4: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22a4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22a4b8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22a4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22a4bc:
    // 0x22a4bc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22A4BCu;
    SET_GPR_U32(ctx, 31, 0x22A4C4u);
    ctx->pc = 0x22A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4BCu;
    // 0x22a4c0: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22A4BCu, 0x22A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4C4u;
label_22a4c4:
    // 0x22a4c4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a4c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4cc: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22a4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22a4d0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22a4d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22a4d4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22a4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22a4d8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22a4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22a4dc: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x22a4dcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x22a4e0: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x22A4E0u;
    SET_GPR_U32(ctx, 31, 0x22A4E8u);
    ctx->pc = 0x22A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4E0u;
    // 0x22a4e4: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x22A4E0u, 0x22A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4E8u;
label_22a4e8:
    // 0x22a4e8: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x22a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a4ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22a4ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22a4f0: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22a4f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22a4f4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22a4f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22a4f8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22A4F8u;
    SET_GPR_U32(ctx, 31, 0x22A500u);
    ctx->pc = 0x22A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4F8u;
    // 0x22a4fc: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22A4F8u, 0x22A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A500u;
label_22a500:
    // 0x22a500: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x22a500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a504: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22a504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22a508: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22a508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22a50c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22a50cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22a510: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22A510u;
    SET_GPR_U32(ctx, 31, 0x22A518u);
    ctx->pc = 0x22A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A510u;
    // 0x22a514: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22A510u, 0x22A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A518u;
label_22a518:
    // 0x22a518: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x22a518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x22a51c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22A51Cu;
    SET_GPR_U32(ctx, 31, 0x22A524u);
    ctx->pc = 0x22A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A51Cu;
    // 0x22a520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22A51Cu, 0x22A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A524u;
label_22a524:
    // 0x22a524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A524u;
    {
        const bool branch_taken_0x22a524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a524) {
            ctx->pc = 0x22A538u;
            goto label_22a538;
        }
    }
    ctx->pc = 0x22A52Cu;
    // 0x22a52c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22a52cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22a530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a534: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22a534u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22a538:
    // 0x22a538: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a53c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22a53cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a544: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22A544u;
    SET_GPR_U32(ctx, 31, 0x22A54Cu);
    ctx->pc = 0x22A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A544u;
    // 0x22a548: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22A544u, 0x22A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A54Cu;
label_22a54c:
    // 0x22a54c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a54cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a550: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22A550u;
    SET_GPR_U32(ctx, 31, 0x22A558u);
    ctx->pc = 0x22A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A550u;
    // 0x22a554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22A550u, 0x22A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A558u;
label_22a558:
    // 0x22a558: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x22A558u;
    {
        const bool branch_taken_0x22a558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a558) {
            ctx->pc = 0x22A87Cu;
            goto label_22a87c;
        }
    }
    ctx->pc = 0x22A560u;
label_22a560:
    // 0x22a560: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22A560u;
    SET_GPR_U32(ctx, 31, 0x22A568u);
    ctx->pc = 0x22A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A560u;
    // 0x22a564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22A560u, 0x22A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A568u;
label_22a568:
    // 0x22a568: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22a568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22a56c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a570: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a574: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22a574u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22a578: 0x8c650e14  lw          $a1, 0xE14($v1)
    ctx->pc = 0x22a578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3604)));
    // 0x22a57c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a580: 0x8c660e18  lw          $a2, 0xE18($v1)
    ctx->pc = 0x22a580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3608)));
    // 0x22a584: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a588: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22a588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22a58c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22A58Cu;
    SET_GPR_U32(ctx, 31, 0x22A594u);
    ctx->pc = 0x22A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A58Cu;
    // 0x22a590: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22A58Cu, 0x22A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A594u;
label_22a594:
    // 0x22a594: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22a594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22a598: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22A598u;
    SET_GPR_U32(ctx, 31, 0x22A5A0u);
    ctx->pc = 0x22A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A598u;
    // 0x22a59c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22A598u, 0x22A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5A0u;
label_22a5a0:
    // 0x22a5a0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x22a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22a5a4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22a5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22a5a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A5A8u;
    {
        const bool branch_taken_0x22a5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5A8u;
        // 0x22a5ac: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5a8) {
            ctx->pc = 0x22A5C8u;
            goto label_22a5c8;
        }
    }
    ctx->pc = 0x22A5B0u;
    // 0x22a5b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22a5b4: 0x24428860  addiu       $v0, $v0, -0x77A0
    ctx->pc = 0x22a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936672));
    // 0x22a5b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a5bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a5c0: 0x800008  jr          $a0
    ctx->pc = 0x22A5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A5C8u: goto label_22a5c8;
            case 0x22A5D0u: goto label_22a5d0;
            case 0x22A5D8u: goto label_22a5d8;
            case 0x22A5E0u: goto label_22a5e0;
            case 0x22A5E8u: goto label_22a5e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A5C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22A5C8u;
label_22a5c8:
    // 0x22a5c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22A5C8u;
    {
        const bool branch_taken_0x22a5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5C8u;
        // 0x22a5cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5c8) {
            ctx->pc = 0x22A5ECu;
            goto label_22a5ec;
        }
    }
    ctx->pc = 0x22A5D0u;
label_22a5d0:
    // 0x22a5d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22A5D0u;
    {
        const bool branch_taken_0x22a5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5D0u;
        // 0x22a5d4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5d0) {
            ctx->pc = 0x22A5ECu;
            goto label_22a5ec;
        }
    }
    ctx->pc = 0x22A5D8u;
label_22a5d8:
    // 0x22a5d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22A5D8u;
    {
        const bool branch_taken_0x22a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5D8u;
        // 0x22a5dc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5d8) {
            ctx->pc = 0x22A5ECu;
            goto label_22a5ec;
        }
    }
    ctx->pc = 0x22A5E0u;
label_22a5e0:
    // 0x22a5e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22A5E0u;
    {
        const bool branch_taken_0x22a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5E0u;
        // 0x22a5e4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5e0) {
            ctx->pc = 0x22A5ECu;
            goto label_22a5ec;
        }
    }
    ctx->pc = 0x22A5E8u;
label_22a5e8:
    // 0x22a5e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22a5ec:
    // 0x22a5ec: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x22a5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x22a5f0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22a5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22a5f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a5f8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22a5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22a5fc:
    // 0x22a5fc: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x22a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a600: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x22a600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x22a604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a608: 0x0  nop
    ctx->pc = 0x22a608u;
    // NOP
    // 0x22a60c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22a60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a610: 0x0  nop
    ctx->pc = 0x22a610u;
    // NOP
    // 0x22a614: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x22A614u;
    {
        const bool branch_taken_0x22a614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a614) {
            ctx->pc = 0x22A618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A614u;
            // 0x22a618: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A680u;
            goto label_22a680;
        }
    }
    ctx->pc = 0x22A61Cu;
    // 0x22a61c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22A61Cu;
    SET_GPR_U32(ctx, 31, 0x22A624u);
    ctx->pc = 0x22A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A61Cu;
    // 0x22a620: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22A61Cu, 0x22A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A624u;
label_22a624:
    // 0x22a624: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a62c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22a62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22a630: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22a630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22a634: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22a634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22a638: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22a638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22a63c: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x22a63cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x22a640: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x22A640u;
    SET_GPR_U32(ctx, 31, 0x22A648u);
    ctx->pc = 0x22A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A640u;
    // 0x22a644: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x22A640u, 0x22A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A648u;
label_22a648:
    // 0x22a648: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x22a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a64c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22a64cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22a650: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22a650u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22a654: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22a654u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22a658: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22A658u;
    SET_GPR_U32(ctx, 31, 0x22A660u);
    ctx->pc = 0x22A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A658u;
    // 0x22a65c: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22A658u, 0x22A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A660u;
label_22a660:
    // 0x22a660: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x22a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a664: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22a664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22a668: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22a668u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22a66c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22a66cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22a670: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22A670u;
    SET_GPR_U32(ctx, 31, 0x22A678u);
    ctx->pc = 0x22A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A670u;
    // 0x22a674: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22A670u, 0x22A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A678u;
label_22a678:
    // 0x22a678: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x22a678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x22a67c: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x22a67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
label_22a680:
    // 0x22a680: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A680u;
    {
        const bool branch_taken_0x22a680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a680) {
            ctx->pc = 0x22A69Cu;
            goto label_22a69c;
        }
    }
    ctx->pc = 0x22A688u;
    // 0x22a688: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x22a688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x22a68c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x22a68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22a690: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A690u;
    {
        const bool branch_taken_0x22a690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A690u;
        // 0x22a694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a690) {
            ctx->pc = 0x22A69Cu;
            goto label_22a69c;
        }
    }
    ctx->pc = 0x22A698u;
    // 0x22a698: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x22a698u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_22a69c:
    // 0x22a69c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22A69Cu;
    SET_GPR_U32(ctx, 31, 0x22A6A4u);
    ctx->pc = 0x22A6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A69Cu;
    // 0x22a6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22A69Cu, 0x22A6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6A4u;
label_22a6a4:
    // 0x22a6a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22A6A4u;
    {
        const bool branch_taken_0x22a6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6A4u;
        // 0x22a6a8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6a4) {
            ctx->pc = 0x22A6D0u;
            goto label_22a6d0;
        }
    }
    ctx->pc = 0x22A6ACu;
    // 0x22a6ac: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x22a6acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x22a6b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A6B0u;
    {
        const bool branch_taken_0x22a6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6B0u;
        // 0x22a6b4: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6b0) {
            ctx->pc = 0x22A6C4u;
            goto label_22a6c4;
        }
    }
    ctx->pc = 0x22A6B8u;
    // 0x22a6b8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x22a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22a6bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22A6BCu;
    {
        const bool branch_taken_0x22a6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6BCu;
        // 0x22a6c0: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6bc) {
            ctx->pc = 0x22A6CCu;
            goto label_22a6cc;
        }
    }
    ctx->pc = 0x22A6C4u;
label_22a6c4:
    // 0x22a6c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22a6c8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22a6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22a6cc:
    // 0x22a6cc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x22a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_22a6d0:
    // 0x22a6d0: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x22a6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x22a6d4: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x22A6D4u;
    SET_GPR_U32(ctx, 31, 0x22A6DCu);
    ctx->pc = 0x22A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A6D4u;
    // 0x22a6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x22A6D4u, 0x22A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6DCu;
label_22a6dc:
    // 0x22a6dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A6DCu;
    {
        const bool branch_taken_0x22a6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6DCu;
        // 0x22a6e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6dc) {
            ctx->pc = 0x22A6F4u;
            goto label_22a6f4;
        }
    }
    ctx->pc = 0x22A6E4u;
    // 0x22a6e4: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x22A6E4u;
    SET_GPR_U32(ctx, 31, 0x22A6ECu);
    ctx->pc = 0x22A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A6E4u;
    // 0x22a6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x22A6E4u, 0x22A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6ECu;
label_22a6ec:
    // 0x22a6ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A6ECu;
    {
        const bool branch_taken_0x22a6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6ECu;
        // 0x22a6f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6ec) {
            ctx->pc = 0x22A6F8u;
            goto label_22a6f8;
        }
    }
    ctx->pc = 0x22A6F4u;
label_22a6f4:
    // 0x22a6f4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22a6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22a6f8:
    // 0x22a6f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a6fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22a6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a700: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22A700u;
    SET_GPR_U32(ctx, 31, 0x22A708u);
    ctx->pc = 0x22A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A700u;
    // 0x22a704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22A700u, 0x22A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A708u;
label_22a708:
    // 0x22a708: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x22a708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
    // 0x22a70c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22a710: 0xae200334  sw          $zero, 0x334($s1)
    ctx->pc = 0x22a710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 820), GPR_U32(ctx, 0));
    // 0x22a714: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22A714u;
    SET_GPR_U32(ctx, 31, 0x22A71Cu);
    ctx->pc = 0x22A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A714u;
    // 0x22a718: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22A714u, 0x22A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A71Cu;
label_22a71c:
    // 0x22a71c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x22a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22a720: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22a720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22a724: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A724u;
    {
        const bool branch_taken_0x22a724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A724u;
        // 0x22a728: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a724) {
            ctx->pc = 0x22A744u;
            goto label_22a744;
        }
    }
    ctx->pc = 0x22A72Cu;
    // 0x22a72c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22a730: 0x24428880  addiu       $v0, $v0, -0x7780
    ctx->pc = 0x22a730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936704));
    // 0x22a734: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a738: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22a738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a73c: 0x800008  jr          $a0
    ctx->pc = 0x22A73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A744u: goto label_22a744;
            case 0x22A758u: goto label_22a758;
            case 0x22A76Cu: goto label_22a76c;
            case 0x22A780u: goto label_22a780;
            case 0x22A794u: goto label_22a794;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A73Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22A744u;
label_22a744:
    // 0x22a744: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x22a744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x22a748: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x22a748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x22a74c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a750: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22A750u;
    {
        const bool branch_taken_0x22a750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A750u;
        // 0x22a754: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a750) {
            ctx->pc = 0x22A7A8u;
            goto label_22a7a8;
        }
    }
    ctx->pc = 0x22A758u;
label_22a758:
    // 0x22a758: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x22a758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x22a75c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x22a75cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x22a760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a764: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22A764u;
    {
        const bool branch_taken_0x22a764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A764u;
        // 0x22a768: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a764) {
            ctx->pc = 0x22A7A8u;
            goto label_22a7a8;
        }
    }
    ctx->pc = 0x22A76Cu;
label_22a76c:
    // 0x22a76c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x22a76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x22a770: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x22a770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x22a774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a778: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22A778u;
    {
        const bool branch_taken_0x22a778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A778u;
        // 0x22a77c: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a778) {
            ctx->pc = 0x22A7A8u;
            goto label_22a7a8;
        }
    }
    ctx->pc = 0x22A780u;
label_22a780:
    // 0x22a780: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x22a780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x22a784: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x22a784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x22a788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a78c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22A78Cu;
    {
        const bool branch_taken_0x22a78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A78Cu;
        // 0x22a790: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a78c) {
            ctx->pc = 0x22A7A8u;
            goto label_22a7a8;
        }
    }
    ctx->pc = 0x22A794u;
label_22a794:
    // 0x22a794: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x22a794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x22a798: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22a798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22a79c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a7a0: 0x0  nop
    ctx->pc = 0x22a7a0u;
    // NOP
    // 0x22a7a4: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x22a7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_22a7a8:
    // 0x22a7a8: 0xc6200338  lwc1        $f0, 0x338($s1)
    ctx->pc = 0x22a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a7ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7b0: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x22a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a7b4: 0xc62c0600  lwc1        $f12, 0x600($s1)
    ctx->pc = 0x22a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22a7b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22a7b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22a7bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a7c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22a7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22a7c4: 0xc053e98  jal         func_14FA60
    ctx->pc = 0x22A7C4u;
    SET_GPR_U32(ctx, 31, 0x22A7CCu);
    ctx->pc = 0x22A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7C4u;
    // 0x22a7c8: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FA60u, 0x22A7C4u, 0x22A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7CCu;
label_22a7cc:
    // 0x22a7cc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x22A7CCu;
    {
        const bool branch_taken_0x22a7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a7cc) {
            ctx->pc = 0x22A87Cu;
            goto label_22a87c;
        }
    }
    ctx->pc = 0x22A7D4u;
label_22a7d4:
    // 0x22a7d4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22A7D4u;
    SET_GPR_U32(ctx, 31, 0x22A7DCu);
    ctx->pc = 0x22A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7D4u;
    // 0x22a7d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22A7D4u, 0x22A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7DCu;
label_22a7dc:
    // 0x22a7dc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22a7e0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22a7e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22a7e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7ec: 0x8c650e1c  lw          $a1, 0xE1C($v1)
    ctx->pc = 0x22a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3612)));
    // 0x22a7f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a7f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7f4: 0x8c660e20  lw          $a2, 0xE20($v1)
    ctx->pc = 0x22a7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3616)));
    // 0x22a7f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a7f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22a800: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22A800u;
    SET_GPR_U32(ctx, 31, 0x22A808u);
    ctx->pc = 0x22A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A800u;
    // 0x22a804: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22A800u, 0x22A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A808u;
label_22a808:
    // 0x22a808: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x22a808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x22a80c: 0x34214ff3  ori         $at, $at, 0x4FF3
    ctx->pc = 0x22a80cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20467);
    // 0x22a810: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a814: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x22a814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x22a818: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x22a818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x22a81c: 0xae2005f4  sw          $zero, 0x5F4($s1)
    ctx->pc = 0x22a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
    // 0x22a820: 0xe62005d8  swc1        $f0, 0x5D8($s1)
    ctx->pc = 0x22a820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1496), bits); }
    // 0x22a824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a828: 0xae2205b4  sw          $v0, 0x5B4($s1)
    ctx->pc = 0x22a828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 2));
    // 0x22a82c: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x22a82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x22a830: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x22A830u;
    SET_GPR_U32(ctx, 31, 0x22A838u);
    ctx->pc = 0x22A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A830u;
    // 0x22a834: 0xe62005d4  swc1        $f0, 0x5D4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1492), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x22A830u, 0x22A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A838u;
label_22a838:
    // 0x22a838: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x22a838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22a83c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22a840: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x22a840u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_22a844:
    // 0x22a844: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22A844u;
    SET_GPR_U32(ctx, 31, 0x22A84Cu);
    ctx->pc = 0x22A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A844u;
    // 0x22a848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22A844u, 0x22A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A84Cu;
label_22a84c:
    // 0x22a84c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A84Cu;
    {
        const bool branch_taken_0x22a84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a84c) {
            ctx->pc = 0x22A85Cu;
            goto label_22a85c;
        }
    }
    ctx->pc = 0x22A854u;
    // 0x22a854: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x22A854u;
    SET_GPR_U32(ctx, 31, 0x22A85Cu);
    ctx->pc = 0x22A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A854u;
    // 0x22a858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x22A854u, 0x22A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A85Cu;
label_22a85c:
    // 0x22a85c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a860: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22a860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a868: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22A868u;
    SET_GPR_U32(ctx, 31, 0x22A870u);
    ctx->pc = 0x22A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A868u;
    // 0x22a86c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22A868u, 0x22A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A870u;
label_22a870:
    // 0x22a870: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a870u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a874: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22A874u;
    SET_GPR_U32(ctx, 31, 0x22A87Cu);
    ctx->pc = 0x22A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A874u;
    // 0x22a878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22A874u, 0x22A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A87Cu;
label_22a87c:
    // 0x22a87c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22A87Cu;
    SET_GPR_U32(ctx, 31, 0x22A884u);
    ctx->pc = 0x22A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A87Cu;
    // 0x22a880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22A87Cu, 0x22A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A884u;
label_22a884:
    // 0x22a884: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22a884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22a888: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22a888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22a88c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A88Cu;
    {
        const bool branch_taken_0x22a88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A88Cu;
        // 0x22a890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a88c) {
            ctx->pc = 0x22A898u;
            goto label_22a898;
        }
    }
    ctx->pc = 0x22A894u;
    // 0x22a894: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x22a894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_22a898:
    // 0x22a898: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x22a898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x22a89c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A89Cu;
    {
        const bool branch_taken_0x22a89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A89Cu;
        // 0x22a8a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a89c) {
            ctx->pc = 0x22A8B8u;
            goto label_22a8b8;
        }
    }
    ctx->pc = 0x22A8A4u;
    // 0x22a8a4: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x22a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22a8a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22a8ac: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22a8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x22a8b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22a8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22a8b4: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x22a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_22a8b8:
    // 0x22a8b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a8c0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22A8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8C4u;
        // 0x22a8c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A8CCu;
    // 0x22a8cc: 0x0  nop
    ctx->pc = 0x22a8ccu;
    // NOP
    ctx->pc = 0x22a8d0u;
}
