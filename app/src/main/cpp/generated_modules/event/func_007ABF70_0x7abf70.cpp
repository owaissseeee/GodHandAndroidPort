#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: func_007ABF70
// Address: 0x7abf70 - 0x7ac0f8
void func_007ABF70_0x7abf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007ABF70_0x7abf70");
#endif

    switch (ctx->pc) {
        case 0x7abfbcu: goto label_7abfbc;
        case 0x7abfdcu: goto label_7abfdc;
        case 0x7abff0u: goto label_7abff0;
        case 0x7ac01cu: goto label_7ac01c;
        case 0x7ac034u: goto label_7ac034;
        case 0x7ac048u: goto label_7ac048;
        case 0x7ac05cu: goto label_7ac05c;
        case 0x7ac070u: goto label_7ac070;
        case 0x7ac084u: goto label_7ac084;
        case 0x7ac098u: goto label_7ac098;
        case 0x7ac0acu: goto label_7ac0ac;
        case 0x7ac0c0u: goto label_7ac0c0;
        case 0x7ac0d4u: goto label_7ac0d4;
        default: break;
    }

    ctx->pc = 0x7abf70u;

    // 0x7abf70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7abf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7abf74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7abf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7abf78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7abf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7abf7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7abf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abf80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7abf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7abf84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x7abf84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abf88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7abf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7abf8c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x7abf8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x7abf90: 0x12400051  beqz        $s2, . + 4 + (0x51 << 2)
    ctx->pc = 0x7ABF90u;
    {
        const bool branch_taken_0x7abf90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABF90u;
        // 0x7abf94: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abf90) {
            ctx->pc = 0x7AC0D8u;
            goto label_7ac0d8;
        }
    }
    ctx->pc = 0x7ABF98u;
    // 0x7abf98: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x7abf98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x7abf9c: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7abf9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7abfa0: 0x26105248  addiu       $s0, $s0, 0x5248
    ctx->pc = 0x7abfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21064));
    // 0x7abfa4: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x7abfa4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x7abfa8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7abfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7abfac: 0x0  nop
    ctx->pc = 0x7abfacu;
    // NOP
    // 0x7abfb0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7abfb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7abfb4: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7ABFB4u;
    SET_GPR_U32(ctx, 31, 0x7ABFBCu);
    ctx->pc = 0x7ABFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABFB4u;
    // 0x7abfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7ABFB4u, 0x7ABFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABFBCu;
label_7abfbc:
    // 0x7abfbc: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x7abfbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x7abfc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7abfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abfc4: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x7abfc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x7abfc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7abfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7abfcc: 0x0  nop
    ctx->pc = 0x7abfccu;
    // NOP
    // 0x7abfd0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7abfd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7abfd4: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7ABFD4u;
    SET_GPR_U32(ctx, 31, 0x7ABFDCu);
    ctx->pc = 0x7ABFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABFD4u;
    // 0x7abfd8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7ABFD4u, 0x7ABFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABFDCu;
label_7abfdc:
    // 0x7abfdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7abfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abfe0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x7abfe0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x7abfe4: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x7abfe4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x7abfe8: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7ABFE8u;
    SET_GPR_U32(ctx, 31, 0x7ABFF0u);
    ctx->pc = 0x7ABFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABFE8u;
    // 0x7abfec: 0xc48c000c  lwc1        $f12, 0xC($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7ABFE8u, 0x7ABFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABFF0u;
label_7abff0:
    // 0x7abff0: 0x4615a541  sub.s       $f21, $f20, $f21
    ctx->pc = 0x7abff0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x7abff4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7abff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7abff8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7abff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7abffc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x7abffcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x7ac000: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7ac000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7ac004: 0x96250010  lhu         $a1, 0x10($s1)
    ctx->pc = 0x7ac004u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7ac008: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x7ac008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x7ac00c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7ac00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac010: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x7ac010u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[21]);
    // 0x7ac014: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x7AC014u;
    SET_GPR_U32(ctx, 31, 0x7AC01Cu);
    ctx->pc = 0x7AC018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC014u;
    // 0x7ac018: 0x46140d01  sub.s       $f20, $f1, $f20 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x7AC014u, 0x7AC01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC01Cu;
label_7ac01c:
    // 0x7ac01c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ac01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac020: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x7AC020u;
    {
        const bool branch_taken_0x7ac020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC020u;
        // 0x7ac024: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac020) {
            ctx->pc = 0x7AC0D8u;
            goto label_7ac0d8;
        }
    }
    ctx->pc = 0x7AC028u;
    // 0x7ac028: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x7ac028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7ac02c: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AC02Cu;
    SET_GPR_U32(ctx, 31, 0x7AC034u);
    ctx->pc = 0x7AC030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC02Cu;
    // 0x7ac030: 0xc64d0014  lwc1        $f13, 0x14($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AC02Cu, 0x7AC034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC034u;
label_7ac034:
    // 0x7ac034: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x7ac034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x7ac038: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7ac038u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7ac03c: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x7ac03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7ac040: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AC040u;
    SET_GPR_U32(ctx, 31, 0x7AC048u);
    ctx->pc = 0x7AC044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC040u;
    // 0x7ac044: 0xc64d0018  lwc1        $f13, 0x18($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AC040u, 0x7AC048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC048u;
label_7ac048:
    // 0x7ac048: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x7ac048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x7ac04c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7ac04cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7ac050: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x7ac050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7ac054: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AC054u;
    SET_GPR_U32(ctx, 31, 0x7AC05Cu);
    ctx->pc = 0x7AC058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC054u;
    // 0x7ac058: 0xc64d001c  lwc1        $f13, 0x1C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AC054u, 0x7AC05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC05Cu;
label_7ac05c:
    // 0x7ac05c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x7ac05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x7ac060: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7ac060u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7ac064: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x7ac064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7ac068: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AC068u;
    SET_GPR_U32(ctx, 31, 0x7AC070u);
    ctx->pc = 0x7AC06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC068u;
    // 0x7ac06c: 0xc64d0020  lwc1        $f13, 0x20($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AC068u, 0x7AC070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC070u;
label_7ac070:
    // 0x7ac070: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x7ac070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x7ac074: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7ac074u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7ac078: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x7ac078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7ac07c: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AC07Cu;
    SET_GPR_U32(ctx, 31, 0x7AC084u);
    ctx->pc = 0x7AC080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC07Cu;
    // 0x7ac080: 0xc64d0024  lwc1        $f13, 0x24($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AC07Cu, 0x7AC084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC084u;
label_7ac084:
    // 0x7ac084: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x7ac084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x7ac088: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7ac088u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7ac08c: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x7ac08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7ac090: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AC090u;
    SET_GPR_U32(ctx, 31, 0x7AC098u);
    ctx->pc = 0x7AC094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC090u;
    // 0x7ac094: 0xc64d0028  lwc1        $f13, 0x28($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AC090u, 0x7AC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC098u;
label_7ac098:
    // 0x7ac098: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x7ac098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x7ac09c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7ac09cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7ac0a0: 0xc62c002c  lwc1        $f12, 0x2C($s1)
    ctx->pc = 0x7ac0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7ac0a4: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AC0A4u;
    SET_GPR_U32(ctx, 31, 0x7AC0ACu);
    ctx->pc = 0x7AC0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC0A4u;
    // 0x7ac0a8: 0xc64d002c  lwc1        $f13, 0x2C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AC0A4u, 0x7AC0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC0ACu;
label_7ac0ac:
    // 0x7ac0ac: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x7ac0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x7ac0b0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7ac0b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7ac0b4: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x7ac0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7ac0b8: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AC0B8u;
    SET_GPR_U32(ctx, 31, 0x7AC0C0u);
    ctx->pc = 0x7AC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC0B8u;
    // 0x7ac0bc: 0xc64d0030  lwc1        $f13, 0x30($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AC0B8u, 0x7AC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC0C0u;
label_7ac0c0:
    // 0x7ac0c0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x7ac0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x7ac0c4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7ac0c4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7ac0c8: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x7ac0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7ac0cc: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AC0CCu;
    SET_GPR_U32(ctx, 31, 0x7AC0D4u);
    ctx->pc = 0x7AC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC0CCu;
    // 0x7ac0d0: 0xc64d0034  lwc1        $f13, 0x34($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AC0CCu, 0x7AC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC0D4u;
label_7ac0d4:
    // 0x7ac0d4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x7ac0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_7ac0d8:
    // 0x7ac0d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7ac0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ac0dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7ac0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ac0e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7ac0e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ac0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ac0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ac0e8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x7ac0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7ac0ec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x7ac0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7ac0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC0F0u;
        // 0x7ac0f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC0F8u;
}
} // namespace gh_event
