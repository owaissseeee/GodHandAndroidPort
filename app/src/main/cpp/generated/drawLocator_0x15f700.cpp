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

// Function: drawLocator
// Address: 0x15f700 - 0x15fb98
void drawLocator_0x15f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawLocator_0x15f700");
#endif

    switch (ctx->pc) {
        case 0x15f748u: goto label_15f748;
        case 0x15f794u: goto label_15f794;
        case 0x15f7e0u: goto label_15f7e0;
        case 0x15f818u: goto label_15f818;
        case 0x15f840u: goto label_15f840;
        case 0x15f88cu: goto label_15f88c;
        case 0x15f8c4u: goto label_15f8c4;
        case 0x15f8ecu: goto label_15f8ec;
        case 0x15f938u: goto label_15f938;
        case 0x15f970u: goto label_15f970;
        case 0x15f998u: goto label_15f998;
        case 0x15f9e4u: goto label_15f9e4;
        case 0x15fa1cu: goto label_15fa1c;
        case 0x15fa44u: goto label_15fa44;
        case 0x15fa90u: goto label_15fa90;
        case 0x15fac8u: goto label_15fac8;
        case 0x15faf0u: goto label_15faf0;
        case 0x15fb3cu: goto label_15fb3c;
        case 0x15fb70u: goto label_15fb70;
        default: break;
    }

    ctx->pc = 0x15f700u;

    // 0x15f700: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15f700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x15f704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f708: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x15f708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x15f70c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x15f70cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f710: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x15f710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x15f714: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15f714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f718: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x15f718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x15f71c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x15f71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15f720: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x15f720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x15f724: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x15f724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f728: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x15f728u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x15f72c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x15f72cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15f730: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15f730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15f734: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x15f734u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x15f738: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x15f738u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15f73c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f740: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x15f740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x15f744: 0x0  nop
    ctx->pc = 0x15f744u;
    // NOP
label_15f748:
    // 0x15f748: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x15f748u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15f74c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15f750: 0x0  nop
    ctx->pc = 0x15f750u;
    // NOP
    // 0x15f754: 0x0  nop
    ctx->pc = 0x15f754u;
    // NOP
    // 0x15f758: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15F758u;
    {
        const bool branch_taken_0x15f758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x15F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F758u;
        // 0x15f75c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f758) {
            ctx->pc = 0x15F748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f748;
        }
    }
    ctx->pc = 0x15F760u;
    // 0x15f760: 0x4600b547  neg.s       $f21, $f22
    ctx->pc = 0x15f760u;
    ctx->f[21] = FPU_NEG_S(ctx->f[22]);
    // 0x15f764: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15f764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15f768: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15f768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15f76c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x15f770: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x15f770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x15f774: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x15f774u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15f778: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15f778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15f77c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15f77cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f780: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15f780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f788: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15f788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f78c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15F78Cu;
    SET_GPR_U32(ctx, 31, 0x15F794u);
    ctx->pc = 0x15F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F78Cu;
    // 0x15f790: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15F78Cu, 0x15F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F794u;
label_15f794:
    // 0x15f794: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15f794u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f798: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f79c: 0x13b30006  beq         $sp, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F79Cu;
    {
        const bool branch_taken_0x15f79c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x15F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F79Cu;
        // 0x15f7a0: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f79c) {
            ctx->pc = 0x15F7B8u;
            goto label_15f7b8;
        }
    }
    ctx->pc = 0x15F7A4u;
    // 0x15f7a4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f7a8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15f7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f7ac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15f7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15f7b0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15f7b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15f7b4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x15f7b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15f7b8:
    // 0x15f7b8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15f7bc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x15f7c0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x15f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x15f7c4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15f7c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15f7c8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15f7c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f7cc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15f7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15f7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7d8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15F7D8u;
    SET_GPR_U32(ctx, 31, 0x15F7E0u);
    ctx->pc = 0x15F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F7D8u;
    // 0x15f7dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15F7D8u, 0x15F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F7E0u;
label_15f7e0:
    // 0x15f7e0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15f7e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f7e4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15f7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f7e8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f7ec: 0x3c06ffa0  lui         $a2, 0xFFA0
    ctx->pc = 0x15f7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65440 << 16));
    // 0x15f7f0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15f7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f7f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15f7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7f8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15f7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f7fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f800: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15f800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15f804: 0x34c6a0a0  ori         $a2, $a2, 0xA0A0
    ctx->pc = 0x15f804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)41120);
    // 0x15f808: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15f808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15f80c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15f80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f810: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x15F810u;
    SET_GPR_U32(ctx, 31, 0x15F818u);
    ctx->pc = 0x15F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F810u;
    // 0x15f814: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x15F810u, 0x15F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F818u;
label_15f818:
    // 0x15f818: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15f818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15f81c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x15f820: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x15f820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x15f824: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15f824u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15f828: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15f828u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f82c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15f82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15f834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f838: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15F838u;
    SET_GPR_U32(ctx, 31, 0x15F840u);
    ctx->pc = 0x15F83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F838u;
    // 0x15f83c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15F838u, 0x15F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F840u;
label_15f840:
    // 0x15f840: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15f840u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f844: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15f844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f848: 0x13b30006  beq         $sp, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F848u;
    {
        const bool branch_taken_0x15f848 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x15F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F848u;
        // 0x15f84c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f848) {
            ctx->pc = 0x15F864u;
            goto label_15f864;
        }
    }
    ctx->pc = 0x15F850u;
    // 0x15f850: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f854: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15f854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f858: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15f858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15f85c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15f85cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15f860: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x15f860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15f864:
    // 0x15f864: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x15f864u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15f868: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15f868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x15f86c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x15f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x15f870: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15f870u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15f874: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15f874u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f878: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f880: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15f880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f884: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15F884u;
    SET_GPR_U32(ctx, 31, 0x15F88Cu);
    ctx->pc = 0x15F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F884u;
    // 0x15f888: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15F884u, 0x15F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F88Cu;
label_15f88c:
    // 0x15f88c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15f88cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f890: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15f890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f894: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15f894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f898: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x15f898u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x15f89c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15f89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f8a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15f8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8a4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f8a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f8ac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15f8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15f8b0: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x15f8b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x15f8b4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15f8b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15f8b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f8bc: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x15F8BCu;
    SET_GPR_U32(ctx, 31, 0x15F8C4u);
    ctx->pc = 0x15F8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F8BCu;
    // 0x15f8c0: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x15F8BCu, 0x15F8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F8C4u;
label_15f8c4:
    // 0x15f8c4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15f8c8: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x15f8c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15f8cc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x15f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x15f8d0: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15f8d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15f8d4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15f8d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f8d8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15f8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8e4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15F8E4u;
    SET_GPR_U32(ctx, 31, 0x15F8ECu);
    ctx->pc = 0x15F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F8E4u;
    // 0x15f8e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15F8E4u, 0x15F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F8ECu;
label_15f8ec:
    // 0x15f8ec: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15f8ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f8f0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f8f4: 0x13b30006  beq         $sp, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F8F4u;
    {
        const bool branch_taken_0x15f8f4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x15F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8F4u;
        // 0x15f8f8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8f4) {
            ctx->pc = 0x15F910u;
            goto label_15f910;
        }
    }
    ctx->pc = 0x15F8FCu;
    // 0x15f8fc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f900: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f904: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15f904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15f908: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15f908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15f90c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x15f90cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15f910:
    // 0x15f910: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15f910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15f914: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15f914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x15f918: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x15f918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x15f91c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15f91cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15f920: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15f920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f924: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15f924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f92c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15f92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f930: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15F930u;
    SET_GPR_U32(ctx, 31, 0x15F938u);
    ctx->pc = 0x15F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F930u;
    // 0x15f934: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15F930u, 0x15F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F938u;
label_15f938:
    // 0x15f938: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15f938u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f93c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f940: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15f940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f944: 0x3c06ffa0  lui         $a2, 0xFFA0
    ctx->pc = 0x15f944u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65440 << 16));
    // 0x15f948: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15f948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f94c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15f94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f950: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f954: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f958: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15f958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15f95c: 0x34c6a0a0  ori         $a2, $a2, 0xA0A0
    ctx->pc = 0x15f95cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)41120);
    // 0x15f960: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15f960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15f964: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15f964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f968: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x15F968u;
    SET_GPR_U32(ctx, 31, 0x15F970u);
    ctx->pc = 0x15F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F968u;
    // 0x15f96c: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x15F968u, 0x15F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F970u;
label_15f970:
    // 0x15f970: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15f970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15f974: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15f974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x15f978: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x15f978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x15f97c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15f97cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15f980: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15f980u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f984: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15f984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f98c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15f98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f990: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15F990u;
    SET_GPR_U32(ctx, 31, 0x15F998u);
    ctx->pc = 0x15F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F990u;
    // 0x15f994: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15F990u, 0x15F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F998u;
label_15f998:
    // 0x15f998: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15f998u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f99c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f9a0: 0x13b30006  beq         $sp, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F9A0u;
    {
        const bool branch_taken_0x15f9a0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x15F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9A0u;
        // 0x15f9a4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9a0) {
            ctx->pc = 0x15F9BCu;
            goto label_15f9bc;
        }
    }
    ctx->pc = 0x15F9A8u;
    // 0x15f9a8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f9ac: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f9b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15f9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15f9b4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15f9b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15f9b8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x15f9b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15f9bc:
    // 0x15f9bc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15f9c0: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x15f9c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15f9c4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x15f9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x15f9c8: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15f9c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15f9cc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15f9ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f9d0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15f9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15f9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9dc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15F9DCu;
    SET_GPR_U32(ctx, 31, 0x15F9E4u);
    ctx->pc = 0x15F9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F9DCu;
    // 0x15f9e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15F9DCu, 0x15F9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F9E4u;
label_15f9e4:
    // 0x15f9e4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15f9e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f9e8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15f9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f9ec: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f9f0: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x15f9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x15f9f4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f9f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15f9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9fc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15f9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fa00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15fa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fa04: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15fa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15fa08: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x15fa08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    // 0x15fa0c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15fa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15fa10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15fa10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fa14: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x15FA14u;
    SET_GPR_U32(ctx, 31, 0x15FA1Cu);
    ctx->pc = 0x15FA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FA14u;
    // 0x15fa18: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x15FA14u, 0x15FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA1Cu;
label_15fa1c:
    // 0x15fa1c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x15fa1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15fa20: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15fa24: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x15fa28: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15fa28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15fa2c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15fa2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15fa30: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15fa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15fa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa3c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15FA3Cu;
    SET_GPR_U32(ctx, 31, 0x15FA44u);
    ctx->pc = 0x15FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FA3Cu;
    // 0x15fa40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15FA3Cu, 0x15FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA44u;
label_15fa44:
    // 0x15fa44: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15fa44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15fa48: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15fa4c: 0x13b30006  beq         $sp, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FA4Cu;
    {
        const bool branch_taken_0x15fa4c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x15FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA4Cu;
        // 0x15fa50: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa4c) {
            ctx->pc = 0x15FA68u;
            goto label_15fa68;
        }
    }
    ctx->pc = 0x15FA54u;
    // 0x15fa54: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fa58: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15fa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fa5c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15fa5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15fa60: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15fa60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15fa64: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x15fa64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15fa68:
    // 0x15fa68: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15fa6c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x15fa70: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x15fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x15fa74: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15fa74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15fa78: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15fa78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15fa7c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15fa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15fa80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15fa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa88: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15FA88u;
    SET_GPR_U32(ctx, 31, 0x15FA90u);
    ctx->pc = 0x15FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FA88u;
    // 0x15fa8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15FA88u, 0x15FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA90u;
label_15fa90:
    // 0x15fa90: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15fa90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15fa94: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15fa98: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fa9c: 0x3c06ffa0  lui         $a2, 0xFFA0
    ctx->pc = 0x15fa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65440 << 16));
    // 0x15faa0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15faa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15faa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15faa8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15faa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15faac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fab0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15fab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15fab4: 0x34c6a0a0  ori         $a2, $a2, 0xA0A0
    ctx->pc = 0x15fab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)41120);
    // 0x15fab8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15fab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15fabc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15fabcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fac0: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x15FAC0u;
    SET_GPR_U32(ctx, 31, 0x15FAC8u);
    ctx->pc = 0x15FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FAC0u;
    // 0x15fac4: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x15FAC0u, 0x15FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FAC8u;
label_15fac8:
    // 0x15fac8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15facc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15faccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x15fad0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x15fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x15fad4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15fad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15fad8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15fad8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15fadc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15fae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fae4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15fae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fae8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15FAE8u;
    SET_GPR_U32(ctx, 31, 0x15FAF0u);
    ctx->pc = 0x15FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FAE8u;
    // 0x15faec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15FAE8u, 0x15FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FAF0u;
label_15faf0:
    // 0x15faf0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15faf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15faf4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15faf8: 0x13b30006  beq         $sp, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FAF8u;
    {
        const bool branch_taken_0x15faf8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x15FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAF8u;
        // 0x15fafc: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15faf8) {
            ctx->pc = 0x15FB14u;
            goto label_15fb14;
        }
    }
    ctx->pc = 0x15FB00u;
    // 0x15fb00: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15fb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fb04: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15fb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fb08: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15fb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15fb0c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15fb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15fb10: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x15fb10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15fb14:
    // 0x15fb14: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x15fb14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15fb18: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15fb1c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x15fb20: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x15fb20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15fb24: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15fb24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15fb28: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15fb2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15fb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb34: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15FB34u;
    SET_GPR_U32(ctx, 31, 0x15FB3Cu);
    ctx->pc = 0x15FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB34u;
    // 0x15fb38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15FB34u, 0x15FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB3Cu;
label_15fb3c:
    // 0x15fb3c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15fb3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15fb40: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15fb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15fb44: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fb48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15fb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb4c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x15fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fb50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15fb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fb54: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fb58: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x15fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x15fb5c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15fb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15fb60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15fb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fb64: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x15fb64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15fb68: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x15FB68u;
    SET_GPR_U32(ctx, 31, 0x15FB70u);
    ctx->pc = 0x15FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB68u;
    // 0x15fb6c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x15FB68u, 0x15FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB70u;
label_15fb70:
    // 0x15fb70: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x15fb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15fb74: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x15fb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fb78: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x15fb78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15fb7c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x15fb7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15fb80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15fb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15fb84: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x15fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15fb88: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x15fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15fb8c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x15fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15fb90: 0x3e00008  jr          $ra
    ctx->pc = 0x15FB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB90u;
        // 0x15fb94: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FB98u;
}
