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

// Function: func_002E8038
// Address: 0x2e8038 - 0x2e8168
void func_002E8038_0x2e8038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E8038_0x2e8038");
#endif

    switch (ctx->pc) {
        case 0x2e8080u: goto label_2e8080;
        case 0x2e80d0u: goto label_2e80d0;
        case 0x2e8118u: goto label_2e8118;
        default: break;
    }

    ctx->pc = 0x2e8038u;

    // 0x2e8038: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e8038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e803c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e8040: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e8040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e8044: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e8044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8048: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2e8048u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e804c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e804cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8050: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2e8050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e8054: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e8054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e8058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e805c: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2e805cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e8060: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e8060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e8064: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2e8064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2e8068: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2E8068u;
    {
        const bool branch_taken_0x2e8068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8068u;
        // 0x2e806c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8068) {
            ctx->pc = 0x2E8104u;
            goto label_2e8104;
        }
    }
    ctx->pc = 0x2E8070u;
    // 0x2e8070: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2e8070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2e8074: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2e8074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2e8078: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2e8078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2e807c: 0x2452b5c0  addiu       $s2, $v0, -0x4A40
    ctx->pc = 0x2e807cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948288));
label_2e8080:
    // 0x2e8080: 0x2101018  mult        $v0, $s0, $s0
    ctx->pc = 0x2e8080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e8084: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8084u;
    {
        const bool branch_taken_0x2e8084 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8084u;
        // 0x2e8088: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8084) {
            ctx->pc = 0x2E80A0u;
            goto label_2e80a0;
        }
    }
    ctx->pc = 0x2E808Cu;
    // 0x2e808c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e808cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e8090: 0x0  nop
    ctx->pc = 0x2e8090u;
    // NOP
    // 0x2e8094: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2e8094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2e8098: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8098u;
    {
        const bool branch_taken_0x2e8098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8098u;
        // 0x2e809c: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8098) {
            ctx->pc = 0x2E80BCu;
            goto label_2e80bc;
        }
    }
    ctx->pc = 0x2E80A0u;
label_2e80a0:
    // 0x2e80a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e80a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e80a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e80a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e80a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e80a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e80ac: 0x0  nop
    ctx->pc = 0x2e80acu;
    // NOP
    // 0x2e80b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2e80b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2e80b4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2e80b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2e80b8: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x2e80b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_2e80bc:
    // 0x2e80bc: 0x0  nop
    ctx->pc = 0x2e80bcu;
    // NOP
    // 0x2e80c0: 0x0  nop
    ctx->pc = 0x2e80c0u;
    // NOP
    // 0x2e80c4: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x2e80c4u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[21]);
    // 0x2e80c8: 0xc0e871e  jal         func_3A1C78
    ctx->pc = 0x2E80C8u;
    SET_GPR_U32(ctx, 31, 0x2E80D0u);
    ctx->pc = 0x3A1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1C78u, 0x2E80C8u, 0x2E80D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E80D0u;
label_2e80d0:
    // 0x2e80d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2e80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2e80d4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E80D4u;
    {
        const bool branch_taken_0x2e80d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80D4u;
        // 0x2e80d8: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80d4) {
            ctx->pc = 0x2E80E4u;
            goto label_2e80e4;
        }
    }
    ctx->pc = 0x2E80DCu;
    // 0x2e80dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E80DCu;
    {
        const bool branch_taken_0x2e80dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80DCu;
        // 0x2e80e0: 0xc440b5c0  lwc1        $f0, -0x4A40($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80dc) {
            ctx->pc = 0x2E80E8u;
            goto label_2e80e8;
        }
    }
    ctx->pc = 0x2E80E4u;
label_2e80e4:
    // 0x2e80e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e80e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e80e8:
    // 0x2e80e8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2e80e8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2e80ec: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2e80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2e80f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e80f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e80f4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2e80f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e80f8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E80F8u;
    {
        const bool branch_taken_0x2e80f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80F8u;
        // 0x2e80fc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80f8) {
            ctx->pc = 0x2E8080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8080;
        }
    }
    ctx->pc = 0x2E8100u;
    // 0x2e8100: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2e8100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_2e8104:
    // 0x2e8104: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E8104u;
    {
        const bool branch_taken_0x2e8104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8104u;
        // 0x2e8108: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8104) {
            ctx->pc = 0x2E8140u;
            goto label_2e8140;
        }
    }
    ctx->pc = 0x2E810Cu;
    // 0x2e810c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2e810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2e8110: 0x2443b5c0  addiu       $v1, $v0, -0x4A40
    ctx->pc = 0x2e8110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948288));
    // 0x2e8114: 0x0  nop
    ctx->pc = 0x2e8114u;
    // NOP
label_2e8118:
    // 0x2e8118: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e8118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e811c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e811cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e8120: 0x0  nop
    ctx->pc = 0x2e8120u;
    // NOP
    // 0x2e8124: 0x0  nop
    ctx->pc = 0x2e8124u;
    // NOP
    // 0x2e8128: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2e8128u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[20]);
    // 0x2e812c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2e812cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2e8130: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2e8130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2e8134: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2e8134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8138: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E8138u;
    {
        const bool branch_taken_0x2e8138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8138u;
        // 0x2e813c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8138) {
            ctx->pc = 0x2E8118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8118;
        }
    }
    ctx->pc = 0x2E8140u;
label_2e8140:
    // 0x2e8140: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e8140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e8144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8148: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e8148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e814c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8150: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2e8150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e8154: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2e8154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e8158: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2e8158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e815c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E815Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E815Cu;
        // 0x2e8160: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E815Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8164u;
    // 0x2e8164: 0x0  nop
    ctx->pc = 0x2e8164u;
    // NOP
    ctx->pc = 0x2e8168u;
}
