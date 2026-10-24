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

// Function: func_0014DFD8
// Address: 0x14dfd8 - 0x14e4c8
void func_0014DFD8_0x14dfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014DFD8_0x14dfd8");
#endif

    switch (ctx->pc) {
        case 0x14e0a8u: goto label_14e0a8;
        case 0x14e2b8u: goto label_14e2b8;
        case 0x14e470u: goto label_14e470;
        default: break;
    }

    ctx->pc = 0x14dfd8u;

    // 0x14dfd8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x14dfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x14dfdc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x14dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x14dfe0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x14dfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x14dfe4: 0x2462d880  addiu       $v0, $v1, -0x2780
    ctx->pc = 0x14dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957184));
    // 0x14dfe8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x14dfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x14dfec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14dfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dff0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x14dff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x14dff4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x14dff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dff8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x14dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x14dffc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x14dffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e000: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x14e000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x14e004: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14e004u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e008: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14e008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x14e00c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x14e00cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e010: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x14e010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x14e014: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x14e014u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e018: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x14e018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x14e01c: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x14e01cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e020: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x14e020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x14e024: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14e024u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x14e028: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x14e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x14e02c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14e02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14e030: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14e030u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD880u));
    // 0x14e034: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x14e034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e038: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x14e038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e03c: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x14e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x14e040: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14e040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x14e044: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e048: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x14E048u;
    {
        const bool branch_taken_0x14e048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e048) {
            ctx->pc = 0x14E04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E048u;
            // 0x14e04c: 0x96830000  lhu         $v1, 0x0($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E0D0u;
            goto label_14e0d0;
        }
    }
    ctx->pc = 0x14E050u;
    // 0x14e050: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14e050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e054: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x14e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e058: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14e058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e05c: 0x0  nop
    ctx->pc = 0x14e05cu;
    // NOP
    // 0x14e060: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x14E060u;
    {
        const bool branch_taken_0x14e060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e060) {
            ctx->pc = 0x14E064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E060u;
            // 0x14e064: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E0C4u;
            goto label_14e0c4;
        }
    }
    ctx->pc = 0x14E068u;
    // 0x14e068: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x14e068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14e06c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x14e06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x14e070: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14e070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e074: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14e074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14e078: 0x0  nop
    ctx->pc = 0x14e078u;
    // NOP
    // 0x14e07c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x14e07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x14e080: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x14e080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x14e084: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x14e084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x14e088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e08c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x14e08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x14e090: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x14e090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x14e094: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e098: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x14e098u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x14e09c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x14e09cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x14e0a0: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x14E0A0u;
    SET_GPR_U32(ctx, 31, 0x14E0A8u);
    ctx->pc = 0x14E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E0A0u;
    // 0x14e0a4: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x14E0A0u, 0x14E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0A8u;
label_14e0a8:
    // 0x14e0a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14e0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14e0ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e0b0: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x14e0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e0b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14e0b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14e0b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e0bc: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x14e0bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14e0c0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x14e0c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_14e0c4:
    // 0x14e0c4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x14e0c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14e0c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14e0c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14e0cc: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x14e0ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_14e0d0:
    // 0x14e0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e0d4: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x14E0D4u;
    {
        const bool branch_taken_0x14e0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0D4u;
        // 0x14e0d8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0d4) {
            ctx->pc = 0x14E1BCu;
            goto label_14e1bc;
        }
    }
    ctx->pc = 0x14E0DCu;
    // 0x14e0dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E0DCu;
    {
        const bool branch_taken_0x14e0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0DCu;
        // 0x14e0e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0dc) {
            ctx->pc = 0x14E0F4u;
            goto label_14e0f4;
        }
    }
    ctx->pc = 0x14E0E4u;
    // 0x14e0e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E0E4u;
    {
        const bool branch_taken_0x14e0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0E4u;
        // 0x14e0e8: 0xc661d880  lwc1        $f1, -0x2780($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0e4) {
            ctx->pc = 0x14E104u;
            goto label_14e104;
        }
    }
    ctx->pc = 0x14E0ECu;
    // 0x14e0ec: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x14E0ECu;
    {
        const bool branch_taken_0x14e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0ECu;
        // 0x14e0f0: 0x2662d880  addiu       $v0, $s3, -0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0ec) {
            ctx->pc = 0x14E424u;
            goto label_14e424;
        }
    }
    ctx->pc = 0x14E0F4u;
label_14e0f4:
    // 0x14e0f4: 0x106200b0  beq         $v1, $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x14E0F4u;
    {
        const bool branch_taken_0x14e0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0F4u;
        // 0x14e0f8: 0xc661d880  lwc1        $f1, -0x2780($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0f4) {
            ctx->pc = 0x14E3B8u;
            goto label_14e3b8;
        }
    }
    ctx->pc = 0x14E0FCu;
    // 0x14e0fc: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x14E0FCu;
    {
        const bool branch_taken_0x14e0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0FCu;
        // 0x14e100: 0x2662d880  addiu       $v0, $s3, -0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0fc) {
            ctx->pc = 0x14E424u;
            goto label_14e424;
        }
    }
    ctx->pc = 0x14E104u;
label_14e104:
    // 0x14e104: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x14e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x14e108: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E108u;
    {
        const bool branch_taken_0x14e108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e108) {
            ctx->pc = 0x14E10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E108u;
            // 0x14e10c: 0x26820030  addiu       $v0, $s4, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E12Cu;
            goto label_14e12c;
        }
    }
    ctx->pc = 0x14E110u;
    // 0x14e110: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x14e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e114: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x14e114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14e118: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e11c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x14e11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x14e120: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e124: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x14e124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x14e128: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x14e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_14e12c:
    // 0x14e12c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x14e12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e130: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14e130u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e134: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x14e134u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e138: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14e138u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14e13c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x14e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e140: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x14e140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14e144: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x14e144u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e148: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x14e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e14c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x14e14cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e150: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x14e150u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x14e154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14e154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14e158: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e15c: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x14e15cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e160: 0x0  nop
    ctx->pc = 0x14e160u;
    // NOP
    // 0x14e164: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14E164u;
    {
        const bool branch_taken_0x14e164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E164u;
        // 0x14e168: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e164) {
            ctx->pc = 0x14E170u;
            goto label_14e170;
        }
    }
    ctx->pc = 0x14E16Cu;
    // 0x14e16c: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x14e16cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_14e170:
    // 0x14e170: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14e170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e174: 0x0  nop
    ctx->pc = 0x14e174u;
    // NOP
    // 0x14e178: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14E178u;
    {
        const bool branch_taken_0x14e178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e178) {
            ctx->pc = 0x14E17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E178u;
            // 0x14e17c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E180u;
            goto label_14e180;
        }
    }
    ctx->pc = 0x14E180u;
label_14e180:
    // 0x14e180: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x14e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14e184: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14e184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e188: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x14e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e18c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x14e18cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e190: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x14e190u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x14e194: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x14e194u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x14e198: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x14e198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14e19c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x14e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e1a0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x14e1a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e1a4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x14e1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e1a8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x14e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14e1ac: 0x124200a8  beq         $s2, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x14E1ACu;
    {
        const bool branch_taken_0x14e1ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1ACu;
        // 0x14e1b0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1ac) {
            ctx->pc = 0x14E450u;
            goto label_14e450;
        }
    }
    ctx->pc = 0x14E1B4u;
    // 0x14e1b4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x14E1B4u;
    {
        const bool branch_taken_0x14e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1B4u;
        // 0x14e1b8: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1b4) {
            ctx->pc = 0x14E410u;
            goto label_14e410;
        }
    }
    ctx->pc = 0x14E1BCu;
label_14e1bc:
    // 0x14e1bc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x14e1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e1c0: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x14e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x14e1c4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x14e1c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e1cc: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x14E1CCu;
    {
        const bool branch_taken_0x14e1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e1cc) {
            ctx->pc = 0x14E1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E1CCu;
            // 0x14e1d0: 0x8ec200f0  lw          $v0, 0xF0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E264u;
            goto label_14e264;
        }
    }
    ctx->pc = 0x14E1D4u;
    // 0x14e1d4: 0x92c202b4  lbu         $v0, 0x2B4($s6)
    ctx->pc = 0x14e1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x14e1d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E1D8u;
    {
        const bool branch_taken_0x14e1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1D8u;
        // 0x14e1dc: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1d8) {
            ctx->pc = 0x14E1ECu;
            goto label_14e1ec;
        }
    }
    ctx->pc = 0x14E1E0u;
    // 0x14e1e0: 0x8ec20278  lw          $v0, 0x278($s6)
    ctx->pc = 0x14e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 632)));
    // 0x14e1e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14E1E4u;
    {
        const bool branch_taken_0x14e1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1E4u;
        // 0x14e1e8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1e4) {
            ctx->pc = 0x14E1F0u;
            goto label_14e1f0;
        }
    }
    ctx->pc = 0x14E1ECu;
label_14e1ec:
    // 0x14e1ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14e1ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e1f0:
    // 0x14e1f0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x14e1f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14e1f4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14E1F4u;
    {
        const bool branch_taken_0x14e1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1F4u;
        // 0x14e1f8: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1f4) {
            ctx->pc = 0x14E288u;
            goto label_14e288;
        }
    }
    ctx->pc = 0x14E1FCu;
    // 0x14e1fc: 0x92c202b4  lbu         $v0, 0x2B4($s6)
    ctx->pc = 0x14e1fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x14e200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E200u;
    {
        const bool branch_taken_0x14e200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E200u;
        // 0x14e204: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e200) {
            ctx->pc = 0x14E214u;
            goto label_14e214;
        }
    }
    ctx->pc = 0x14E208u;
    // 0x14e208: 0x8ec20278  lw          $v0, 0x278($s6)
    ctx->pc = 0x14e208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 632)));
    // 0x14e20c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14E20Cu;
    {
        const bool branch_taken_0x14e20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E20Cu;
        // 0x14e210: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e20c) {
            ctx->pc = 0x14E218u;
            goto label_14e218;
        }
    }
    ctx->pc = 0x14E214u;
label_14e214:
    // 0x14e214: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14e214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e218:
    // 0x14e218: 0xc46200b0  lwc1        $f2, 0xB0($v1)
    ctx->pc = 0x14e218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e21c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x14e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14e220: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x14e220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e224: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14e224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e228: 0xc46300b8  lwc1        $f3, 0xB8($v1)
    ctx->pc = 0x14e228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e22c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14e22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14e230: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e234: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x14e234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14e238: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x14e238u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14e23c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x14e23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14e240: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x14e240u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14e244: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x14e244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x14e248: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x14e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e24c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x14e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e250: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x14e250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e254: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x14e254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14e258: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x14e258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14e25c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14E25Cu;
    {
        const bool branch_taken_0x14e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E25Cu;
        // 0x14e260: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e25c) {
            ctx->pc = 0x14E288u;
            goto label_14e288;
        }
    }
    ctx->pc = 0x14E264u;
label_14e264:
    // 0x14e264: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x14e264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14e268: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E268u;
    {
        const bool branch_taken_0x14e268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E268u;
        // 0x14e26c: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e268) {
            ctx->pc = 0x14E288u;
            goto label_14e288;
        }
    }
    ctx->pc = 0x14E270u;
    // 0x14e270: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e274: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x14e274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14e278: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e27c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x14e27cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14e280: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14e280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e284: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14e284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14e288:
    // 0x14e288: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x14e288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e28c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x14e28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14e290: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x14e290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e294: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x14e294u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e298: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x14e298u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14e29c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14e29cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14e2a0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x14e2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e2a4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x14e2a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14e2a8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x14e2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e2ac: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x14e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e2b0: 0xc04078a  jal         func_101E28
    ctx->pc = 0x14E2B0u;
    SET_GPR_U32(ctx, 31, 0x14E2B8u);
    ctx->pc = 0x14E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2B0u;
    // 0x14e2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x14E2B0u, 0x14E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2B8u;
label_14e2b8:
    // 0x14e2b8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x14e2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14e2bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e2c0: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x14e2c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e2c4: 0x0  nop
    ctx->pc = 0x14e2c4u;
    // NOP
    // 0x14e2c8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x14E2C8u;
    {
        const bool branch_taken_0x14e2c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2C8u;
        // 0x14e2cc: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2c8) {
            ctx->pc = 0x14E310u;
            goto label_14e310;
        }
    }
    ctx->pc = 0x14E2D0u;
    // 0x14e2d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14e2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14e2d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e2d8: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x14e2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14e2dc: 0x0  nop
    ctx->pc = 0x14e2dcu;
    // NOP
    // 0x14e2e0: 0x0  nop
    ctx->pc = 0x14e2e0u;
    // NOP
    // 0x14e2e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14e2e4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x14e2e8: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x14e2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e2ec: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x14e2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e2f0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x14e2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e2f4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x14e2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x14e2f8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x14e2f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14e2fc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x14e2fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x14e300: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x14e300u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x14e304: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x14e304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x14e308: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x14e308u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14e30c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x14e30cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_14e310:
    // 0x14e310: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x14e310u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e314: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x14e314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e318: 0x12330006  beq         $s1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E318u;
    {
        const bool branch_taken_0x14e318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x14E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E318u;
        // 0x14e31c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e318) {
            ctx->pc = 0x14E334u;
            goto label_14e334;
        }
    }
    ctx->pc = 0x14E320u;
    // 0x14e320: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x14e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e324: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x14e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e328: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x14e328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14e32c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x14e32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x14e330: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x14e330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_14e334:
    // 0x14e334: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x14e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x14e338: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x14e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e33c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14e33cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e340: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x14e340u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e344: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14e344u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14e348: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x14e348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e34c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x14e34cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e350: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x14e350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14e354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14e358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e35c: 0x4605a034  c.lt.s      $f20, $f5
    ctx->pc = 0x14e35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e360: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14e360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14e364: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14E364u;
    {
        const bool branch_taken_0x14e364 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E364u;
        // 0x14e368: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e364) {
            ctx->pc = 0x14E370u;
            goto label_14e370;
        }
    }
    ctx->pc = 0x14E36Cu;
    // 0x14e36c: 0x46002b06  mov.s       $f12, $f5
    ctx->pc = 0x14e36cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[5]);
label_14e370:
    // 0x14e370: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x14e370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e374: 0x0  nop
    ctx->pc = 0x14e374u;
    // NOP
    // 0x14e378: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14E378u;
    {
        const bool branch_taken_0x14e378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e378) {
            ctx->pc = 0x14E37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E378u;
            // 0x14e37c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E380u;
            goto label_14e380;
        }
    }
    ctx->pc = 0x14E380u;
label_14e380:
    // 0x14e380: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x14e380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e384: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x14e384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e388: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x14e388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e38c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x14e38cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x14e390: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x14e390u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x14e394: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x14e394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14e398: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x14e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e39c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x14e39cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14e3a0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x14e3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e3a4: 0x1253002a  beq         $s2, $s3, . + 4 + (0x2A << 2)
    ctx->pc = 0x14E3A4u;
    {
        const bool branch_taken_0x14e3a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x14E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3A4u;
        // 0x14e3a8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3a4) {
            ctx->pc = 0x14E450u;
            goto label_14e450;
        }
    }
    ctx->pc = 0x14E3ACu;
    // 0x14e3ac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x14e3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e3b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14E3B0u;
    {
        const bool branch_taken_0x14e3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3B0u;
        // 0x14e3b4: 0xc7a20028  lwc1        $f2, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3b0) {
            ctx->pc = 0x14E414u;
            goto label_14e414;
        }
    }
    ctx->pc = 0x14E3B8u;
label_14e3b8:
    // 0x14e3b8: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x14e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x14e3bc: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E3BCu;
    {
        const bool branch_taken_0x14e3bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e3bc) {
            ctx->pc = 0x14E3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E3BCu;
            // 0x14e3c0: 0x26820030  addiu       $v0, $s4, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E3E0u;
            goto label_14e3e0;
        }
    }
    ctx->pc = 0x14E3C4u;
    // 0x14e3c4: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x14e3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e3c8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x14e3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14e3cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e3d0: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x14e3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x14e3d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e3d8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x14e3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x14e3dc: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x14e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_14e3e0:
    // 0x14e3e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14e3e4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x14e3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e3e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14e3e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e3ec: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x14e3ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e3f0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14e3f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14e3f4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x14e3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e3f8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x14e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14e3fc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x14e3fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e400: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x14e400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e404: 0x12440012  beq         $s2, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14E404u;
    {
        const bool branch_taken_0x14e404 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x14E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E404u;
        // 0x14e408: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e404) {
            ctx->pc = 0x14E450u;
            goto label_14e450;
        }
    }
    ctx->pc = 0x14E40Cu;
    // 0x14e40c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x14e40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e410:
    // 0x14e410: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x14e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14e414:
    // 0x14e414: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x14e414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x14e418: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x14e418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x14e41c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14E41Cu;
    {
        const bool branch_taken_0x14e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E41Cu;
        // 0x14e420: 0xe6420008  swc1        $f2, 0x8($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e41c) {
            ctx->pc = 0x14E450u;
            goto label_14e450;
        }
    }
    ctx->pc = 0x14E424u;
label_14e424:
    // 0x14e424: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x14e424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14e428: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x14e428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e42c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x14e42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x14e430: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x14e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e434: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x14e434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x14e438: 0xc660d880  lwc1        $f0, -0x2780($s3)
    ctx->pc = 0x14e438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e43c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x14e43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x14e440: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e444: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x14e444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x14e448: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e44c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x14e44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_14e450:
    // 0x14e450: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x14e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x14e454: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x14e454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x14e458: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e45c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14E45Cu;
    {
        const bool branch_taken_0x14e45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E45Cu;
        // 0x14e460: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e45c) {
            ctx->pc = 0x14E498u;
            goto label_14e498;
        }
    }
    ctx->pc = 0x14E464u;
    // 0x14e464: 0x92c502cc  lbu         $a1, 0x2CC($s6)
    ctx->pc = 0x14e464u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 716)));
    // 0x14e468: 0xc0b64d8  jal         func_2D9360
    ctx->pc = 0x14E468u;
    SET_GPR_U32(ctx, 31, 0x14E470u);
    ctx->pc = 0x14E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E468u;
    // 0x14e46c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9360u, 0x14E468u, 0x14E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E470u;
label_14e470:
    // 0x14e470: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x14e470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e474: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x14e474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e478: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x14e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e47c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x14e47cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14e480: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14e480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14e484: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x14e484u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e488: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x14e488u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x14e48c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x14e48cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x14e490: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x14e490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x14e494: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x14e494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_14e498:
    // 0x14e498: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x14e498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14e49c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x14e49cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14e4a0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x14e4a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14e4a4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x14e4a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14e4a8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x14e4a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e4ac: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x14e4acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14e4b0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x14e4b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14e4b4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x14e4b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14e4b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14e4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14e4bc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x14e4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14E4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4C0u;
        // 0x14e4c4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E4C8u;
}
