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

// Function: func_002448E0
// Address: 0x2448e0 - 0x244cf8
void func_002448E0_0x2448e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002448E0_0x2448e0");
#endif

    switch (ctx->pc) {
        case 0x244914u: goto label_244914;
        case 0x244944u: goto label_244944;
        case 0x244970u: goto label_244970;
        case 0x24499cu: goto label_24499c;
        case 0x2449c4u: goto label_2449c4;
        case 0x2449d0u: goto label_2449d0;
        case 0x2449e0u: goto label_2449e0;
        case 0x244a68u: goto label_244a68;
        case 0x244a7cu: goto label_244a7c;
        case 0x244adcu: goto label_244adc;
        case 0x244ae8u: goto label_244ae8;
        case 0x244b48u: goto label_244b48;
        case 0x244bc8u: goto label_244bc8;
        case 0x244bd8u: goto label_244bd8;
        case 0x244c18u: goto label_244c18;
        case 0x244c54u: goto label_244c54;
        case 0x244ca0u: goto label_244ca0;
        case 0x244cb0u: goto label_244cb0;
        case 0x244cc4u: goto label_244cc4;
        case 0x244cd0u: goto label_244cd0;
        case 0x244cd8u: goto label_244cd8;
        default: break;
    }

    ctx->pc = 0x2448e0u;

    // 0x2448e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2448e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2448e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2448e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2448e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2448ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2448ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2448f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2448f4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2448f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2448f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2448f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2448fc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2448fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x244900: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x244900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x244904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244908: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x244908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24490c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x24490Cu;
    SET_GPR_U32(ctx, 31, 0x244914u);
    ctx->pc = 0x244910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24490Cu;
    // 0x244910: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x24490Cu, 0x244914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244914u;
label_244914:
    // 0x244914: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x244914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244918: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x244918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x24491c: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x24491Cu;
    {
        const bool branch_taken_0x24491c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24491Cu;
        // 0x244920: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24491c) {
            ctx->pc = 0x244CD8u;
            goto label_244cd8;
        }
    }
    ctx->pc = 0x244924u;
    // 0x244924: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x244924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x244928: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x244928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
    // 0x24492c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244930: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x244930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244934: 0x800008  jr          $a0
    ctx->pc = 0x244934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24493Cu: goto label_24493c;
            case 0x24497Cu: goto label_24497c;
            case 0x2449D8u: goto label_2449d8;
            case 0x244A28u: goto label_244a28;
            case 0x244BD0u: goto label_244bd0;
            case 0x244C98u: goto label_244c98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244934u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24493Cu;
label_24493c:
    // 0x24493c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24493Cu;
    SET_GPR_U32(ctx, 31, 0x244944u);
    ctx->pc = 0x244940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24493Cu;
    // 0x244940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24493Cu, 0x244944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244944u;
label_244944:
    // 0x244944: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x244944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x244948: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x244948u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24494c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24494cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244954: 0x8c650d70  lw          $a1, 0xD70($v1)
    ctx->pc = 0x244954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
    // 0x244958: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x244958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24495c: 0x8c660d74  lw          $a2, 0xD74($v1)
    ctx->pc = 0x24495cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3444)));
    // 0x244960: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244960u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244964: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x244964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x244968: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x244968u;
    SET_GPR_U32(ctx, 31, 0x244970u);
    ctx->pc = 0x24496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244968u;
    // 0x24496c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x244968u, 0x244970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244970u;
label_244970:
    // 0x244970: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x244970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x244974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x244978: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x244978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24497c:
    // 0x24497c: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x24497cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x244980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244984: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x244984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x244988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24498c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x24498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x244990: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x244990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x244994: 0xc055f06  jal         func_157C18
    ctx->pc = 0x244994u;
    SET_GPR_U32(ctx, 31, 0x24499Cu);
    ctx->pc = 0x244998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244994u;
    // 0x244998: 0xa6020434  sh          $v0, 0x434($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x244994u, 0x24499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24499Cu;
label_24499c:
    // 0x24499c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24499Cu;
    {
        const bool branch_taken_0x24499c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24499c) {
            ctx->pc = 0x2449B0u;
            goto label_2449b0;
        }
    }
    ctx->pc = 0x2449A4u;
    // 0x2449a4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2449a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2449a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2449a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2449ac: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2449acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2449b0:
    // 0x2449b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2449b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2449b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2449b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2449b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2449b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2449BCu;
    SET_GPR_U32(ctx, 31, 0x2449C4u);
    ctx->pc = 0x2449C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2449BCu;
    // 0x2449c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2449BCu, 0x2449C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449C4u;
label_2449c4:
    // 0x2449c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2449c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2449C8u;
    SET_GPR_U32(ctx, 31, 0x2449D0u);
    ctx->pc = 0x2449CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2449C8u;
    // 0x2449cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2449C8u, 0x2449D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449D0u;
label_2449d0:
    // 0x2449d0: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2449D0u;
    {
        const bool branch_taken_0x2449d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2449D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449D0u;
        // 0x2449d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449d0) {
            ctx->pc = 0x244CDCu;
            goto label_244cdc;
        }
    }
    ctx->pc = 0x2449D8u;
label_2449d8:
    // 0x2449d8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x2449D8u;
    SET_GPR_U32(ctx, 31, 0x2449E0u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x2449D8u, 0x2449E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449E0u;
label_2449e0:
    // 0x2449e0: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2449e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x2449e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2449e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2449e8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2449e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2449ec: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2449ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2449f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2449f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2449f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2449f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2449f8: 0x8e0204a8  lw          $v0, 0x4A8($s0)
    ctx->pc = 0x2449f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1192)));
    // 0x2449fc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2449fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244a00: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x244a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x244a04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x244a08: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x244a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x244a0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x244a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x244a10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x244a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x244a14: 0xae0204a8  sw          $v0, 0x4A8($s0)
    ctx->pc = 0x244a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1192), GPR_U32(ctx, 2));
    // 0x244a18: 0xe6010608  swc1        $f1, 0x608($s0)
    ctx->pc = 0x244a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
    // 0x244a1c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x244a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x244a20: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x244a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x244a24: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x244a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
label_244a28:
    // 0x244a28: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x244a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244a30: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x244a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x244a34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x244a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x244a38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x244a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244a3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x244a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x244a40: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x244a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x244a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244a4c: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x244a4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x244a50: 0xa2020623  sb          $v0, 0x623($s0)
    ctx->pc = 0x244a50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1571), (uint8_t)GPR_U32(ctx, 2));
    // 0x244a54: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x244a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x244a58: 0x260516a0  addiu       $a1, $s0, 0x16A0
    ctx->pc = 0x244a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    // 0x244a5c: 0xa2030531  sb          $v1, 0x531($s0)
    ctx->pc = 0x244a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x244a60: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x244A60u;
    SET_GPR_U32(ctx, 31, 0x244A68u);
    ctx->pc = 0x244A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244A60u;
    // 0x244a64: 0xa2020617  sb          $v0, 0x617($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x244A60u, 0x244A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A68u;
label_244a68:
    // 0x244a68: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x244a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x244a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244a70: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x244a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x244a74: 0xc055f06  jal         func_157C18
    ctx->pc = 0x244A74u;
    SET_GPR_U32(ctx, 31, 0x244A7Cu);
    ctx->pc = 0x244A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244A74u;
    // 0x244a78: 0xa6020434  sh          $v0, 0x434($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x244A74u, 0x244A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A7Cu;
label_244a7c:
    // 0x244a7c: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x244a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244a88: 0x0  nop
    ctx->pc = 0x244a88u;
    // NOP
    // 0x244a8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x244a8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244a90: 0x0  nop
    ctx->pc = 0x244a90u;
    // NOP
    // 0x244a94: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x244A94u;
    {
        const bool branch_taken_0x244a94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244a94) {
            ctx->pc = 0x244A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244A94u;
            // 0x244a98: 0xae000330  sw          $zero, 0x330($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244AC0u;
            goto label_244ac0;
        }
    }
    ctx->pc = 0x244A9Cu;
    // 0x244a9c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x244a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244aa0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x244aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x244aa4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x244aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x244aa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x244aac: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x244aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x244ab0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x244ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x244ab4: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x244ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x244ab8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x244AB8u;
    {
        const bool branch_taken_0x244ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AB8u;
        // 0x244abc: 0xe6000338  swc1        $f0, 0x338($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ab8) {
            ctx->pc = 0x244AC8u;
            goto label_244ac8;
        }
    }
    ctx->pc = 0x244AC0u;
label_244ac0:
    // 0x244ac0: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x244ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x244ac4: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x244ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
label_244ac8:
    // 0x244ac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244acc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x244accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x244ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ad4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x244AD4u;
    SET_GPR_U32(ctx, 31, 0x244ADCu);
    ctx->pc = 0x244AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244AD4u;
    // 0x244ad8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x244AD4u, 0x244ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244ADCu;
label_244adc:
    // 0x244adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ae0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x244AE0u;
    SET_GPR_U32(ctx, 31, 0x244AE8u);
    ctx->pc = 0x244AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244AE0u;
    // 0x244ae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x244AE0u, 0x244AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244AE8u;
label_244ae8:
    // 0x244ae8: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x244ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244aec: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x244aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244af0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x244af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x244af4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x244af4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x244af8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x244af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244afc: 0x0  nop
    ctx->pc = 0x244afcu;
    // NOP
    // 0x244b00: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x244B00u;
    {
        const bool branch_taken_0x244b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B00u;
        // 0x244b04: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b00) {
            ctx->pc = 0x244B14u;
            goto label_244b14;
        }
    }
    ctx->pc = 0x244B08u;
    // 0x244b08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x244b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x244b0c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x244B0Cu;
    {
        const bool branch_taken_0x244b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B0Cu;
        // 0x244b10: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b0c) {
            ctx->pc = 0x244CD8u;
            goto label_244cd8;
        }
    }
    ctx->pc = 0x244B14u;
label_244b14:
    // 0x244b14: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x244b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x244b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x244b1c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x244b1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244b20: 0x0  nop
    ctx->pc = 0x244b20u;
    // NOP
    // 0x244b24: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x244B24u;
    {
        const bool branch_taken_0x244b24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B24u;
        // 0x244b28: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b24) {
            ctx->pc = 0x244B58u;
            goto label_244b58;
        }
    }
    ctx->pc = 0x244B2Cu;
    // 0x244b2c: 0x8e0700f0  lw          $a3, 0xF0($s0)
    ctx->pc = 0x244b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x244b30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x244b30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x244b34: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x244b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x244b38: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x244b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x244b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244b40: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x244B40u;
    SET_GPR_U32(ctx, 31, 0x244B48u);
    ctx->pc = 0x244B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B40u;
    // 0x244b44: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x244B40u, 0x244B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B48u;
label_244b48:
    // 0x244b48: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x244b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x244b4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b50: 0x0  nop
    ctx->pc = 0x244b50u;
    // NOP
    // 0x244b54: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x244b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_244b58:
    // 0x244b58: 0x8e030474  lw          $v1, 0x474($s0)
    ctx->pc = 0x244b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
    // 0x244b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244b60: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244B60u;
    {
        const bool branch_taken_0x244b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B60u;
        // 0x244b64: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b60) {
            ctx->pc = 0x244B74u;
            goto label_244b74;
        }
    }
    ctx->pc = 0x244B68u;
    // 0x244b68: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x244B68u;
    {
        const bool branch_taken_0x244b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B68u;
        // 0x244b6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b68) {
            ctx->pc = 0x244B74u;
            goto label_244b74;
        }
    }
    ctx->pc = 0x244B70u;
    // 0x244b70: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x244b70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_244b74:
    // 0x244b74: 0xc6000608  lwc1        $f0, 0x608($s0)
    ctx->pc = 0x244b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b78: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x244b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b7c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x244b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x244b80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x244b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x244b84: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x244b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244b88: 0x0  nop
    ctx->pc = 0x244b88u;
    // NOP
    // 0x244b8c: 0x45000052  bc1f        . + 4 + (0x52 << 2)
    ctx->pc = 0x244B8Cu;
    {
        const bool branch_taken_0x244b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B8Cu;
        // 0x244b90: 0xe6000608  swc1        $f0, 0x608($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b8c) {
            ctx->pc = 0x244CD8u;
            goto label_244cd8;
        }
    }
    ctx->pc = 0x244B94u;
    // 0x244b94: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x244b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x244b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b9c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x244b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x244ba0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x244ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x244ba4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x244ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ba8: 0xe6000608  swc1        $f0, 0x608($s0)
    ctx->pc = 0x244ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
    // 0x244bac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244bb0: 0x240600fb  addiu       $a2, $zero, 0xFB
    ctx->pc = 0x244bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x244bb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x244bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244bb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244bb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244bbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x244bbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244bc0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x244BC0u;
    SET_GPR_U32(ctx, 31, 0x244BC8u);
    ctx->pc = 0x244BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BC0u;
    // 0x244bc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x244BC0u, 0x244BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BC8u;
label_244bc8:
    // 0x244bc8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x244BC8u;
    {
        const bool branch_taken_0x244bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BC8u;
        // 0x244bcc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244bc8) {
            ctx->pc = 0x244CDCu;
            goto label_244cdc;
        }
    }
    ctx->pc = 0x244BD0u;
label_244bd0:
    // 0x244bd0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x244BD0u;
    SET_GPR_U32(ctx, 31, 0x244BD8u);
    ctx->pc = 0x244BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BD0u;
    // 0x244bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x244BD0u, 0x244BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BD8u;
label_244bd8:
    // 0x244bd8: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x244bd8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x244bdc: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x244bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x244be0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x244be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x244be4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x244BE4u;
    {
        const bool branch_taken_0x244be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BE4u;
        // 0x244be8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244be4) {
            ctx->pc = 0x244C20u;
            goto label_244c20;
        }
    }
    ctx->pc = 0x244BECu;
    // 0x244bec: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x244becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x244bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244bf4: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x244bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x244bf8: 0x8c430da8  lw          $v1, 0xDA8($v0)
    ctx->pc = 0x244bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3496)));
    // 0x244bfc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x244bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x244c00: 0x8c4a0dac  lw          $t2, 0xDAC($v0)
    ctx->pc = 0x244c00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3500)));
    // 0x244c04: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x244c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x244c08: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x244c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244c0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244c0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c10: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x244C10u;
    SET_GPR_U32(ctx, 31, 0x244C18u);
    ctx->pc = 0x244C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C10u;
    // 0x244c14: 0x1428821  addu        $s1, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x244C10u, 0x244C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C18u;
label_244c18:
    // 0x244c18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x244C18u;
    {
        const bool branch_taken_0x244c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244c18) {
            ctx->pc = 0x244C34u;
            goto label_244c34;
        }
    }
    ctx->pc = 0x244C20u;
label_244c20:
    // 0x244c20: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x244c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x244c24: 0x8c430d78  lw          $v1, 0xD78($v0)
    ctx->pc = 0x244c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
    // 0x244c28: 0x8c440d7c  lw          $a0, 0xD7C($v0)
    ctx->pc = 0x244c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3452)));
    // 0x244c2c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x244c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244c30: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x244c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_244c34:
    // 0x244c34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x244c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x244c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c44: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x244c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c48: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x244c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244c4c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x244C4Cu;
    SET_GPR_U32(ctx, 31, 0x244C54u);
    ctx->pc = 0x244C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C4Cu;
    // 0x244c50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x244C4Cu, 0x244C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C54u;
label_244c54:
    // 0x244c54: 0x8e0304a8  lw          $v1, 0x4A8($s0)
    ctx->pc = 0x244c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1192)));
    // 0x244c58: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x244c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x244c5c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x244c5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244c60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x244c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x244c64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x244c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x244c68: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x244c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x244c6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244c70: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x244c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x244c74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x244c78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x244c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x244c7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x244c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244c80: 0xe6001744  swc1        $f0, 0x1744($s0)
    ctx->pc = 0x244c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5956), bits); }
    // 0x244c84: 0xa2020531  sb          $v0, 0x531($s0)
    ctx->pc = 0x244c84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 2));
    // 0x244c88: 0xae0304a8  sw          $v1, 0x4A8($s0)
    ctx->pc = 0x244c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1192), GPR_U32(ctx, 3));
    // 0x244c8c: 0xe601054c  swc1        $f1, 0x54C($s0)
    ctx->pc = 0x244c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x244c90: 0xa20402f6  sb          $a0, 0x2F6($s0)
    ctx->pc = 0x244c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 4));
    // 0x244c94: 0xa2000623  sb          $zero, 0x623($s0)
    ctx->pc = 0x244c94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1571), (uint8_t)GPR_U32(ctx, 0));
label_244c98:
    // 0x244c98: 0xc055f06  jal         func_157C18
    ctx->pc = 0x244C98u;
    SET_GPR_U32(ctx, 31, 0x244CA0u);
    ctx->pc = 0x244C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C98u;
    // 0x244c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x244C98u, 0x244CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CA0u;
label_244ca0:
    // 0x244ca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244CA0u;
    {
        const bool branch_taken_0x244ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ca0) {
            ctx->pc = 0x244CB0u;
            goto label_244cb0;
        }
    }
    ctx->pc = 0x244CA8u;
    // 0x244ca8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x244CA8u;
    SET_GPR_U32(ctx, 31, 0x244CB0u);
    ctx->pc = 0x244CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CA8u;
    // 0x244cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x244CA8u, 0x244CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CB0u;
label_244cb0:
    // 0x244cb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244cb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x244cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x244cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244cbc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x244CBCu;
    SET_GPR_U32(ctx, 31, 0x244CC4u);
    ctx->pc = 0x244CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CBCu;
    // 0x244cc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x244CBCu, 0x244CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CC4u;
label_244cc4:
    // 0x244cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244cc8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x244CC8u;
    SET_GPR_U32(ctx, 31, 0x244CD0u);
    ctx->pc = 0x244CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CC8u;
    // 0x244ccc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x244CC8u, 0x244CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CD0u;
label_244cd0:
    // 0x244cd0: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x244CD0u;
    SET_GPR_U32(ctx, 31, 0x244CD8u);
    ctx->pc = 0x244CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CD0u;
    // 0x244cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x244CD0u, 0x244CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CD8u;
label_244cd8:
    // 0x244cd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x244cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_244cdc:
    // 0x244cdc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x244cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244ce0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x244ce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244ce4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x244ce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244cec: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x244cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x244CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CF0u;
        // 0x244cf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244CF8u;
}
