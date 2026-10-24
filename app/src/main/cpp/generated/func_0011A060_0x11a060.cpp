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

// Function: func_0011A060
// Address: 0x11a060 - 0x11a2c0
void func_0011A060_0x11a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011A060_0x11a060");
#endif

    switch (ctx->pc) {
        case 0x11a0c0u: goto label_11a0c0;
        case 0x11a0c8u: goto label_11a0c8;
        case 0x11a0d4u: goto label_11a0d4;
        case 0x11a104u: goto label_11a104;
        case 0x11a10cu: goto label_11a10c;
        case 0x11a140u: goto label_11a140;
        case 0x11a178u: goto label_11a178;
        case 0x11a190u: goto label_11a190;
        case 0x11a1a0u: goto label_11a1a0;
        case 0x11a1bcu: goto label_11a1bc;
        case 0x11a1d8u: goto label_11a1d8;
        case 0x11a1f0u: goto label_11a1f0;
        case 0x11a204u: goto label_11a204;
        case 0x11a20cu: goto label_11a20c;
        case 0x11a220u: goto label_11a220;
        case 0x11a244u: goto label_11a244;
        case 0x11a250u: goto label_11a250;
        case 0x11a25cu: goto label_11a25c;
        case 0x11a270u: goto label_11a270;
        case 0x11a29cu: goto label_11a29c;
        default: break;
    }

    ctx->pc = 0x11a060u;

    // 0x11a060: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11a060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11a064: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11a064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11a068: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11a068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11a06c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a070: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11a070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11a074: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x11a074u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x11a078: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x11a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x11a07c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a080: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11a080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11a084: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11a084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11a088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a08c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a090: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11a090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11a094: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11a094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11a098: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11a098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11a09c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a0a0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x11a0a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0a4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11a0a8: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x11a0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x11a0ac: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11a0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11a0b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11a0b4: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x11a0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11a0b8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11A0B8u;
    SET_GPR_U32(ctx, 31, 0x11A0C0u);
    ctx->pc = 0x11A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0B8u;
    // 0x11a0bc: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11A0B8u, 0x11A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0C0u;
label_11a0c0:
    // 0x11a0c0: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11A0C0u;
    SET_GPR_U32(ctx, 31, 0x11A0C8u);
    ctx->pc = 0x11A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0C0u;
    // 0x11a0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11A0C0u, 0x11A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0C8u;
label_11a0c8:
    // 0x11a0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0cc: 0xc0a480c  jal         func_292030
    ctx->pc = 0x11A0CCu;
    SET_GPR_U32(ctx, 31, 0x11A0D4u);
    ctx->pc = 0x11A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0CCu;
    // 0x11a0d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x11A0CCu, 0x11A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0D4u;
label_11a0d4:
    // 0x11a0d4: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x11a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x11a0d8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11a0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11a0dc: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x11a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x11a0e0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A0E0u;
    {
        const bool branch_taken_0x11a0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E0u;
        // 0x11a0e4: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0e0) {
            ctx->pc = 0x11A0FCu;
            goto label_11a0fc;
        }
    }
    ctx->pc = 0x11A0E8u;
    // 0x11a0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a0ec: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11A0ECu;
    {
        const bool branch_taken_0x11a0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0ECu;
        // 0x11a0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0ec) {
            ctx->pc = 0x11A1FCu;
            goto label_11a1fc;
        }
    }
    ctx->pc = 0x11A0F4u;
    // 0x11a0f4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x11A0F4u;
    {
        const bool branch_taken_0x11a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a0f4) {
            ctx->pc = 0x11A254u;
            goto label_11a254;
        }
    }
    ctx->pc = 0x11A0FCu;
label_11a0fc:
    // 0x11a0fc: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11A0FCu;
    SET_GPR_U32(ctx, 31, 0x11A104u);
    ctx->pc = 0x11A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0FCu;
    // 0x11a100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11A0FCu, 0x11A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A104u;
label_11a104:
    // 0x11a104: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11A104u;
    SET_GPR_U32(ctx, 31, 0x11A10Cu);
    ctx->pc = 0x11A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A104u;
    // 0x11a108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11A104u, 0x11A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A10Cu;
label_11a10c:
    // 0x11a10c: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x11A10Cu;
    {
        const bool branch_taken_0x11a10c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a10c) {
            ctx->pc = 0x11A17Cu;
            goto label_11a17c;
        }
    }
    ctx->pc = 0x11A114u;
    // 0x11a114: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x11a114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11a118: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x11a118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x11a11c: 0x34210d85  ori         $at, $at, 0xD85
    ctx->pc = 0x11a11cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3461);
    // 0x11a120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a128: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11a128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11a12c: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x11a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x11a130: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x11a130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11a134: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11a134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a138: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11A138u;
    SET_GPR_U32(ctx, 31, 0x11A140u);
    ctx->pc = 0x11A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A138u;
    // 0x11a13c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11A138u, 0x11A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A140u;
label_11a140:
    // 0x11a140: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x11a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a144: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x11a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11a148: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11a14c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11a14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11a150: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11a150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a154: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x11a154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x11a158: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x11a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a15c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11a160: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x11a160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x11a164: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x11a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a168: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a16c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11a16cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11a170: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x11A170u;
    SET_GPR_U32(ctx, 31, 0x11A178u);
    ctx->pc = 0x11A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A170u;
    // 0x11a174: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x11A170u, 0x11A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A178u;
label_11a178:
    // 0x11a178: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x11a178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_11a17c:
    // 0x11a17c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11a17cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a180: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x11a180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x11a184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a188: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11A188u;
    SET_GPR_U32(ctx, 31, 0x11A190u);
    ctx->pc = 0x11A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A188u;
    // 0x11a18c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11A188u, 0x11A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A190u;
label_11a190:
    // 0x11a190: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x11a190u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x11a194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a198: 0xc049396  jal         func_124E58
    ctx->pc = 0x11A198u;
    SET_GPR_U32(ctx, 31, 0x11A1A0u);
    ctx->pc = 0x11A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A198u;
    // 0x11a19c: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x11A198u, 0x11A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1A0u;
label_11a1a0:
    // 0x11a1a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11a1a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1ac: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x11a1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11a1b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a1b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1b4: 0xc042902  jal         func_10A408
    ctx->pc = 0x11A1B4u;
    SET_GPR_U32(ctx, 31, 0x11A1BCu);
    ctx->pc = 0x11A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1B4u;
    // 0x11a1b8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11A1B4u, 0x11A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1BCu;
label_11a1bc:
    // 0x11a1bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11a1c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1c8: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x11a1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11a1cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a1ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1d0: 0xc042908  jal         func_10A420
    ctx->pc = 0x11A1D0u;
    SET_GPR_U32(ctx, 31, 0x11A1D8u);
    ctx->pc = 0x11A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1D0u;
    // 0x11a1d4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x11A1D0u, 0x11A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1D8u;
label_11a1d8:
    // 0x11a1d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a1dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11a1e0: 0xa2221684  sb          $v0, 0x1684($s1)
    ctx->pc = 0x11a1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a1e4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11a1e8: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11A1E8u;
    SET_GPR_U32(ctx, 31, 0x11A1F0u);
    ctx->pc = 0x11A1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1E8u;
    // 0x11a1ec: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11A1E8u, 0x11A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1F0u;
label_11a1f0:
    // 0x11a1f0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11a1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11a1f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a1f8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11a1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11a1fc:
    // 0x11a1fc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11A1FCu;
    SET_GPR_U32(ctx, 31, 0x11A204u);
    ctx->pc = 0x11A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1FCu;
    // 0x11a200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11A1FCu, 0x11A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A204u;
label_11a204:
    // 0x11a204: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11A204u;
    SET_GPR_U32(ctx, 31, 0x11A20Cu);
    ctx->pc = 0x11A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A204u;
    // 0x11a208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11A204u, 0x11A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A20Cu;
label_11a20c:
    // 0x11a20c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A20Cu;
    {
        const bool branch_taken_0x11a20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A20Cu;
        // 0x11a210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a20c) {
            ctx->pc = 0x11A230u;
            goto label_11a230;
        }
    }
    ctx->pc = 0x11A214u;
    // 0x11a214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a218: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11A218u;
    SET_GPR_U32(ctx, 31, 0x11A220u);
    ctx->pc = 0x11A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A218u;
    // 0x11a21c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11A218u, 0x11A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A220u;
label_11a220:
    // 0x11a220: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11a220u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a224: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11a224u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a228: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11a228u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a22c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11a22cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11a230:
    // 0x11a230: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a234: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11a234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11a238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a23c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11A23Cu;
    SET_GPR_U32(ctx, 31, 0x11A244u);
    ctx->pc = 0x11A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A23Cu;
    // 0x11a240: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11A23Cu, 0x11A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A244u;
label_11a244:
    // 0x11a244: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a248: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11A248u;
    SET_GPR_U32(ctx, 31, 0x11A250u);
    ctx->pc = 0x11A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A248u;
    // 0x11a24c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11A248u, 0x11A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A250u;
label_11a250:
    // 0x11a250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a254:
    // 0x11a254: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11A254u;
    SET_GPR_U32(ctx, 31, 0x11A25Cu);
    ctx->pc = 0x11A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A254u;
    // 0x11a258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11A254u, 0x11A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A25Cu;
label_11a25c:
    // 0x11a25c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A25Cu;
    {
        const bool branch_taken_0x11a25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A25Cu;
        // 0x11a260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a25c) {
            ctx->pc = 0x11A278u;
            goto label_11a278;
        }
    }
    ctx->pc = 0x11A264u;
    // 0x11a264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a268: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11A268u;
    SET_GPR_U32(ctx, 31, 0x11A270u);
    ctx->pc = 0x11A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A268u;
    // 0x11a26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11A268u, 0x11A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A270u;
label_11a270:
    // 0x11a270: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11A270u;
    {
        const bool branch_taken_0x11a270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A270u;
        // 0x11a274: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a270) {
            ctx->pc = 0x11A2A0u;
            goto label_11a2a0;
        }
    }
    ctx->pc = 0x11A278u;
label_11a278:
    // 0x11a278: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11a278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11a27c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x11a27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x11a280: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A280u;
    {
        const bool branch_taken_0x11a280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A280u;
        // 0x11a284: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a280) {
            ctx->pc = 0x11A2A0u;
            goto label_11a2a0;
        }
    }
    ctx->pc = 0x11A288u;
    // 0x11a288: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x11a288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x11a28c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11a28cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11a290: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11a290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a294: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x11A294u;
    SET_GPR_U32(ctx, 31, 0x11A29Cu);
    ctx->pc = 0x11A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A294u;
    // 0x11a298: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x11A294u, 0x11A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A29Cu;
label_11a29c:
    // 0x11a29c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11a29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11a2a0:
    // 0x11a2a0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11a2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a2a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11a2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a2a8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x11a2a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a2ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a2b0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11A2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2B4u;
        // 0x11a2b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A2BCu;
    // 0x11a2bc: 0x0  nop
    ctx->pc = 0x11a2bcu;
    // NOP
    ctx->pc = 0x11a2c0u;
}
