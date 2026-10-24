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

// Function: func_00135040
// Address: 0x135040 - 0x1351d8
void func_00135040_0x135040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00135040_0x135040");
#endif

    switch (ctx->pc) {
        case 0x135090u: goto label_135090;
        case 0x135118u: goto label_135118;
        case 0x135124u: goto label_135124;
        case 0x135134u: goto label_135134;
        default: break;
    }

    ctx->pc = 0x135040u;

    // 0x135040: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x135040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x135044: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x135044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x135048: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x135048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x13504c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x13504cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135050: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x135050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135054: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x135054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x135058: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x135058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x13505c: 0x26500180  addiu       $s0, $s2, 0x180
    ctx->pc = 0x13505cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x135060: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x135060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x135064: 0x26710180  addiu       $s1, $s3, 0x180
    ctx->pc = 0x135064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x135068: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x135068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x13506c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13506cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135070: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x135074: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x135074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135078: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x135078u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x13507c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135080: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x135080u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x135084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135088: 0xc04daa2  jal         func_136A88
    ctx->pc = 0x135088u;
    SET_GPR_U32(ctx, 31, 0x135090u);
    ctx->pc = 0x13508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135088u;
    // 0x13508c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A88u, 0x135088u, 0x135090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135090u;
label_135090:
    // 0x135090: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x135090u;
    {
        const bool branch_taken_0x135090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135090u;
        // 0x135094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135090) {
            ctx->pc = 0x1351ACu;
            goto label_1351ac;
        }
    }
    ctx->pc = 0x135098u;
    // 0x135098: 0xc6630180  lwc1        $f3, 0x180($s3)
    ctx->pc = 0x135098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13509c: 0xc6400180  lwc1        $f0, 0x180($s2)
    ctx->pc = 0x13509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1350a0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1350a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1350a4: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1350a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1350a8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1350a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1350ac: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1350acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1350b0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1350b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1350b4: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1350b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1350b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1350b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1350bc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1350bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1350c0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1350c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1350c4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1350c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1350c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1350c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1350cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1350ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1350d0: 0x0  nop
    ctx->pc = 0x1350d0u;
    // NOP
    // 0x1350d4: 0x0  nop
    ctx->pc = 0x1350d4u;
    // NOP
    // 0x1350d8: 0x46000004  c1          0x4
    ctx->pc = 0x1350d8u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1350dc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1350dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1350e0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1350e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1350e4: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x1350e4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1350e8: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x1350e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1350ec: 0x0  nop
    ctx->pc = 0x1350ecu;
    // NOP
    // 0x1350f0: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x1350F0u;
    {
        const bool branch_taken_0x1350f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1350F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350F0u;
        // 0x1350f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350f0) {
            ctx->pc = 0x1351ACu;
            goto label_1351ac;
        }
    }
    ctx->pc = 0x1350F8u;
    // 0x1350f8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1350f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1350fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1350FCu;
    {
        const bool branch_taken_0x1350fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350FCu;
        // 0x135100: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350fc) {
            ctx->pc = 0x13510Cu;
            goto label_13510c;
        }
    }
    ctx->pc = 0x135104u;
    // 0x135104: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x135104u;
    {
        const bool branch_taken_0x135104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135104u;
        // 0x135108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135104) {
            ctx->pc = 0x1351ACu;
            goto label_1351ac;
        }
    }
    ctx->pc = 0x13510Cu;
label_13510c:
    // 0x13510c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13510cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135110: 0xc0c292e  jal         func_30A4B8
    ctx->pc = 0x135110u;
    SET_GPR_U32(ctx, 31, 0x135118u);
    ctx->pc = 0x135114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135110u;
    // 0x135114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4B8u, 0x135110u, 0x135118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135118u;
label_135118:
    // 0x135118: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x135118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13511c: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x13511Cu;
    SET_GPR_U32(ctx, 31, 0x135124u);
    ctx->pc = 0x135120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13511Cu;
    // 0x135120: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x13511Cu, 0x135124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135124u;
label_135124:
    // 0x135124: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x135124u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x135128: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x135128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13512c: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x13512Cu;
    SET_GPR_U32(ctx, 31, 0x135134u);
    ctx->pc = 0x135130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13512Cu;
    // 0x135130: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x13512Cu, 0x135134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135134u;
label_135134:
    // 0x135134: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x135134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x135138: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x135138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13513c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13513Cu;
    {
        const bool branch_taken_0x13513c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x135140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13513Cu;
        // 0x135140: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13513c) {
            ctx->pc = 0x13514Cu;
            goto label_13514c;
        }
    }
    ctx->pc = 0x135144u;
    // 0x135144: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x135144u;
    {
        const bool branch_taken_0x135144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135144u;
        // 0x135148: 0xc6a0000c  lwc1        $f0, 0xC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135144) {
            ctx->pc = 0x13515Cu;
            goto label_13515c;
        }
    }
    ctx->pc = 0x13514Cu;
label_13514c:
    // 0x13514c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13514Cu;
    {
        const bool branch_taken_0x13514c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13514Cu;
        // 0x135150: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13514c) {
            ctx->pc = 0x13515Cu;
            goto label_13515c;
        }
    }
    ctx->pc = 0x135154u;
    // 0x135154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x135154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x135158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13515c:
    // 0x13515c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13515cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x135160: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x135160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x135164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135168: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x135168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13516c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x13516cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x135170: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x135170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x135174: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x135174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x135178: 0x46030882  mul.s       $f2, $f1, $f3
    ctx->pc = 0x135178u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x13517c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135180: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x135180u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x135184: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x135184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x135188: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x135188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13518c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x13518cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135190: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x135190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x135194: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x135194u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x135198: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x135198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x13519c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13519cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1351a0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1351a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1351a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1351a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1351a8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1351a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1351ac:
    // 0x1351ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1351acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1351b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1351b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1351b4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1351b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1351b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1351b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1351bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1351bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1351c0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1351c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1351c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1351c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1351c8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1351c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1351cc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1351ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1351d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1351D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1351D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351D0u;
        // 0x1351d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1351D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1351D8u;
}
