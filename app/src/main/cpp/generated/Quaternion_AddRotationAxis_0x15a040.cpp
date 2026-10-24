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

// Function: Quaternion_AddRotationAxis
// Address: 0x15a040 - 0x15a190
void Quaternion_AddRotationAxis_0x15a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quaternion_AddRotationAxis_0x15a040");
#endif

    switch (ctx->pc) {
        case 0x15a094u: goto label_15a094;
        case 0x15a0a0u: goto label_15a0a0;
        default: break;
    }

    ctx->pc = 0x15a040u;

    // 0x15a040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15a044: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15a044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15a048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a04c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15a050: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15a054: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15a054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15a05c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a060: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x15a060u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15a064: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x15a064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15a068: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x15a068u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x15a06c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x15a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a070: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x15a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a074: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x15a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a078: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15a078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15a07c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x15a07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a080: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x15a080u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15a084: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15a084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15a088: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x15a088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x15a08c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x15A08Cu;
    SET_GPR_U32(ctx, 31, 0x15A094u);
    ctx->pc = 0x15A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A08Cu;
    // 0x15a090: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x15A08Cu, 0x15A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A094u;
label_15a094:
    // 0x15a094: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x15a094u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x15a098: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x15A098u;
    SET_GPR_U32(ctx, 31, 0x15A0A0u);
    ctx->pc = 0x15A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A098u;
    // 0x15a09c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x15A098u, 0x15A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0A0u;
label_15a0a0:
    // 0x15a0a0: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x15a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15a0a4: 0x4600aac7  neg.s       $f11, $f21
    ctx->pc = 0x15a0a4u;
    ctx->f[11] = FPU_NEG_S(ctx->f[21]);
    // 0x15a0a8: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x15a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15a0ac: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x15a0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a0b0: 0x46080282  mul.s       $f10, $f0, $f8
    ctx->pc = 0x15a0b0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x15a0b4: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x15a0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a0b8: 0x46070242  mul.s       $f9, $f0, $f7
    ctx->pc = 0x15a0b8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x15a0bc: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x15a0bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x15a0c0: 0xc7a5000c  lwc1        $f5, 0xC($sp)
    ctx->pc = 0x15a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15a0c4: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x15a0c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x15a0c8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a0cc: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x15a0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15a0d0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x15a0d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x15a0d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a0d8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x15a0d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15a0dc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x15a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15a0e0: 0x46060102  mul.s       $f4, $f0, $f6
    ctx->pc = 0x15a0e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x15a0e4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x15a0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x15a0e8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x15a0e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x15a0ec: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x15a0ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x15a0f0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x15a0f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x15a0f4: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x15a0f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x15a0f8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a0fc: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x15a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a100: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x15a100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x15a104: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x15a104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a108: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x15a108u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x15a10c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x15a10cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x15a110: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x15a110u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x15a114: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15a114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15a118: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x15a118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x15a11c: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x15a11cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x15a120: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x15a120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x15a124: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x15a124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a128: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x15a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a12c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x15a12cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x15a130: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15a130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a134: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x15a134u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x15a138: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x15a138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x15a13c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x15a13cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15a140: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x15a140u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x15a144: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x15a144u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x15a148: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x15a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15a14c: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x15a14cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
    // 0x15a150: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x15a150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x15a154: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a158: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x15a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a15c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x15a15cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x15a160: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x15a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a164: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x15a164u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x15a168: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15a168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a16c: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x15a16cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x15a170: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x15a170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x15a174: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15a174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15a178: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x15a178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x15a17c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15a17cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a180: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x15a180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15a184: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15a184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a188: 0x3e00008  jr          $ra
    ctx->pc = 0x15A188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A188u;
        // 0x15a18c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A190u;
}
