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

// Function: func_00192270
// Address: 0x192270 - 0x192458
void func_00192270_0x192270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00192270_0x192270");
#endif

    switch (ctx->pc) {
        case 0x192290u: goto label_192290;
        case 0x192314u: goto label_192314;
        case 0x19234cu: goto label_19234c;
        case 0x19235cu: goto label_19235c;
        case 0x19236cu: goto label_19236c;
        case 0x192390u: goto label_192390;
        default: break;
    }

    ctx->pc = 0x192270u;

    // 0x192270: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x192270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x192274: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x192274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x192278: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x192278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19227c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x19227cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x192280: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x192280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x192284: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x192284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x192288: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x192288u;
    SET_GPR_U32(ctx, 31, 0x192290u);
    ctx->pc = 0x19228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192288u;
    // 0x19228c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x192288u, 0x192290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192290u;
label_192290:
    // 0x192290: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x192290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x192294: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x192294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x192298: 0x3c014017  lui         $at, 0x4017
    ctx->pc = 0x192298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16407 << 16));
    // 0x19229c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x19229cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1922a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1922a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1922a4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1922a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1922a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1922a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1922ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1922acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1922b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1922b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1922b4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1922b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1922b8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1922b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1922bc: 0x3c01402f  lui         $at, 0x402F
    ctx->pc = 0x1922bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16431 << 16));
    // 0x1922c0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1922c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1922c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1922c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1922c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1922c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1922cc: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x1922ccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x1922d0: 0x3c013e8c  lui         $at, 0x3E8C
    ctx->pc = 0x1922d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16012 << 16));
    // 0x1922d4: 0x342149ba  ori         $at, $at, 0x49BA
    ctx->pc = 0x1922d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18874);
    // 0x1922d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1922d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1922dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1922dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1922e0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1922e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1922e4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1922e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1922e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1922e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1922ec: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1922ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1922f0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1922f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1922f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1922f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1922f8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1922f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1922fc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1922fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x192300: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x192300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x192304: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x192304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x192308: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x192308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19230c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19230Cu;
    SET_GPR_U32(ctx, 31, 0x192314u);
    ctx->pc = 0x192310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19230Cu;
    // 0x192310: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19230Cu, 0x192314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192314u;
label_192314:
    // 0x192314: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x192314u;
    {
        const bool branch_taken_0x192314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192314u;
        // 0x192318: 0xae020604  sw          $v0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192314) {
            ctx->pc = 0x19234Cu;
            goto label_19234c;
        }
    }
    ctx->pc = 0x19231Cu;
    // 0x19231c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19231cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192320: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x192320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x192324: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x192324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x192328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19232c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19232cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x192330: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x192330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192334: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x192334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x192338: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x192338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x19233c: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x19233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x192340: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x192340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192344: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x192344u;
    SET_GPR_U32(ctx, 31, 0x19234Cu);
    ctx->pc = 0x192348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192344u;
    // 0x192348: 0x46156b42  mul.s       $f13, $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x192344u, 0x19234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19234Cu;
label_19234c:
    // 0x19234c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19234cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192354: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x192354u;
    SET_GPR_U32(ctx, 31, 0x19235Cu);
    ctx->pc = 0x192358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192354u;
    // 0x192358: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x192354u, 0x19235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19235Cu;
label_19235c:
    // 0x19235c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x19235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x192360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192364: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x192364u;
    SET_GPR_U32(ctx, 31, 0x19236Cu);
    ctx->pc = 0x192368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192364u;
    // 0x192368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x192364u, 0x19236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19236Cu;
label_19236c:
    // 0x19236c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x192370: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x192370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x192374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192378: 0x1065002f  beq         $v1, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x192378u;
    {
        const bool branch_taken_0x192378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x19237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192378u;
        // 0x19237c: 0xa6020602  sh          $v0, 0x602($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1538), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192378) {
            ctx->pc = 0x192438u;
            goto label_192438;
        }
    }
    ctx->pc = 0x192380u;
    // 0x192380: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x192380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192384: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192388: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x192388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19238c: 0x0  nop
    ctx->pc = 0x19238cu;
    // NOP
label_192390:
    // 0x192390: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192394: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x192394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x192398: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192398u;
    {
        const bool branch_taken_0x192398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192398u;
        // 0x19239c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192398) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x1923A0u;
    // 0x1923a0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1923a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1923a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1923a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1923a8:
    // 0x1923a8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1923a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1923ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1923ACu;
    {
        const bool branch_taken_0x1923ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923ACu;
        // 0x1923b0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923ac) {
            ctx->pc = 0x1923C4u;
            goto label_1923c4;
        }
    }
    ctx->pc = 0x1923B4u;
    // 0x1923b4: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1923b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1923b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1923b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1923bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1923BCu;
    {
        const bool branch_taken_0x1923bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923BCu;
        // 0x1923c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923bc) {
            ctx->pc = 0x1923C8u;
            goto label_1923c8;
        }
    }
    ctx->pc = 0x1923C4u;
label_1923c4:
    // 0x1923c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1923c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1923c8:
    // 0x1923c8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1923c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1923cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1923ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1923d0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1923d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1923d4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1923d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1923d8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1923d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1923dc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1923dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1923e0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1923E0u;
    {
        const bool branch_taken_0x1923e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1923E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923E0u;
        // 0x1923e4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923e0) {
            ctx->pc = 0x1923F0u;
            goto label_1923f0;
        }
    }
    ctx->pc = 0x1923E8u;
    // 0x1923e8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1923e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1923ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1923ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1923f0:
    // 0x1923f0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1923f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1923f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1923F4u;
    {
        const bool branch_taken_0x1923f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923F4u;
        // 0x1923f8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923f4) {
            ctx->pc = 0x19240Cu;
            goto label_19240c;
        }
    }
    ctx->pc = 0x1923FCu;
    // 0x1923fc: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1923fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x192400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192404: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192404u;
    {
        const bool branch_taken_0x192404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192404u;
        // 0x192408: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192404) {
            ctx->pc = 0x192410u;
            goto label_192410;
        }
    }
    ctx->pc = 0x19240Cu;
label_19240c:
    // 0x19240c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192410:
    // 0x192410: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x192410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x192414: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x192418: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x192418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19241c: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x19241cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x192420: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x192420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x192424: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x192424u;
    {
        const bool branch_taken_0x192424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192424u;
        // 0x192428: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192424) {
            ctx->pc = 0x192438u;
            goto label_192438;
        }
    }
    ctx->pc = 0x19242Cu;
    // 0x19242c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x19242cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x192430: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x192430u;
    {
        const bool branch_taken_0x192430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x192430) {
            ctx->pc = 0x192434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192430u;
            // 0x192434: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192390;
        }
    }
    ctx->pc = 0x192438u;
label_192438:
    // 0x192438: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x192438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19243c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192440: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x192440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192444: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x192444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192448: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x192448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19244c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x19244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x192450: 0x3e00008  jr          $ra
    ctx->pc = 0x192450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192450u;
        // 0x192454: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192458u;
}
