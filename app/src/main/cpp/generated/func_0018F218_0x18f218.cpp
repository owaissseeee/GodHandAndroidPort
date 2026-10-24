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

// Function: func_0018F218
// Address: 0x18f218 - 0x18f488
void func_0018F218_0x18f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018F218_0x18f218");
#endif

    switch (ctx->pc) {
        case 0x18f23cu: goto label_18f23c;
        case 0x18f2a8u: goto label_18f2a8;
        case 0x18f2b8u: goto label_18f2b8;
        case 0x18f2e8u: goto label_18f2e8;
        case 0x18f31cu: goto label_18f31c;
        case 0x18f32cu: goto label_18f32c;
        case 0x18f36cu: goto label_18f36c;
        case 0x18f38cu: goto label_18f38c;
        case 0x18f39cu: goto label_18f39c;
        case 0x18f3b8u: goto label_18f3b8;
        default: break;
    }

    ctx->pc = 0x18f218u;

    // 0x18f218: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18f218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18f21c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18f220: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18f220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18f224: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18f224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18f228: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x18f228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18f22c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18f22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18f230: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18f230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18f234: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x18F234u;
    SET_GPR_U32(ctx, 31, 0x18F23Cu);
    ctx->pc = 0x18F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F234u;
    // 0x18f238: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x18F234u, 0x18F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F23Cu;
label_18f23c:
    // 0x18f23c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18f23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18f240: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18f240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18f244: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x18f244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x18f248: 0x34213b64  ori         $at, $at, 0x3B64
    ctx->pc = 0x18f248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15204);
    // 0x18f24c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f250: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x18f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x18f254: 0x3c013fab  lui         $at, 0x3FAB
    ctx->pc = 0x18f254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16299 << 16));
    // 0x18f258: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x18f258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x18f25c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18f25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f260: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x18f260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18f264: 0x24534380  addiu       $s3, $v0, 0x4380
    ctx->pc = 0x18f264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x18f268: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18f268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18f26c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18f26cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18f270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18f270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f274: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18f274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18f278: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18f278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18f27c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18f27cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18f280: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18f280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f284: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18f284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18f288: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x18f288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18f28c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18f28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18f290: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x18f290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18f294: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18f294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18f298: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18f298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18f29c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18f2a0: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x18F2A0u;
    SET_GPR_U32(ctx, 31, 0x18F2A8u);
    ctx->pc = 0x18F2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2A0u;
    // 0x18f2a4: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x18F2A0u, 0x18F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2A8u;
label_18f2a8:
    // 0x18f2a8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18F2A8u;
    {
        const bool branch_taken_0x18f2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2A8u;
        // 0x18f2ac: 0xae220658  sw          $v0, 0x658($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2a8) {
            ctx->pc = 0x18F31Cu;
            goto label_18f31c;
        }
    }
    ctx->pc = 0x18F2B0u;
    // 0x18f2b0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x18F2B0u;
    SET_GPR_U32(ctx, 31, 0x18F2B8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x18F2B0u, 0x18F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2B8u;
label_18f2b8:
    // 0x18f2b8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18f2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18f2bc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x18f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18f2c0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18f2c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2c8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18f2cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x18f2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2d0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x18f2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x18f2d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18f2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f2d8: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x18f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x18f2dc: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x18f2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x18f2e0: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x18F2E0u;
    SET_GPR_U32(ctx, 31, 0x18F2E8u);
    ctx->pc = 0x18F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2E0u;
    // 0x18f2e4: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x18F2E0u, 0x18F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2E8u;
label_18f2e8:
    // 0x18f2e8: 0x8e230658  lw          $v1, 0x658($s1)
    ctx->pc = 0x18f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x18f2ec: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x18f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x18f2f0: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x18f2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x18f2f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18f2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f2f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18f2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2fc: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x18f2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f300: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x18f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f304: 0x8e220658  lw          $v0, 0x658($s1)
    ctx->pc = 0x18f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x18f308: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18f308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f30c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f30cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18f310: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x18f310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x18f314: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18F314u;
    SET_GPR_U32(ctx, 31, 0x18F31Cu);
    ctx->pc = 0x18F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F314u;
    // 0x18f318: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18F314u, 0x18F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F31Cu;
label_18f31c:
    // 0x18f31c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18f31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f320: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18f320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f324: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x18F324u;
    SET_GPR_U32(ctx, 31, 0x18F32Cu);
    ctx->pc = 0x18F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F324u;
    // 0x18f328: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x18F324u, 0x18F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F32Cu;
label_18f32c:
    // 0x18f32c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F32Cu;
    {
        const bool branch_taken_0x18f32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F32Cu;
        // 0x18f330: 0xae220654  sw          $v0, 0x654($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f32c) {
            ctx->pc = 0x18F36Cu;
            goto label_18f36c;
        }
    }
    ctx->pc = 0x18F334u;
    // 0x18f334: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x18f334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18f338: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18f338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18f33c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18f340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f344: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18f344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18f348: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18f348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f34c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x18f34cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x18f350: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x18f350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x18f354: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18f354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18f358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f35c: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x18f35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18f360: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x18f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f364: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x18F364u;
    SET_GPR_U32(ctx, 31, 0x18F36Cu);
    ctx->pc = 0x18F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F364u;
    // 0x18f368: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x18F364u, 0x18F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F36Cu;
label_18f36c:
    // 0x18f36c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x18f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x18f370: 0xa220065c  sb          $zero, 0x65C($s1)
    ctx->pc = 0x18f370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1628), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f374: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x18f374u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f37c: 0xa6220548  sh          $v0, 0x548($s1)
    ctx->pc = 0x18f37cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18f380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f384: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18F384u;
    SET_GPR_U32(ctx, 31, 0x18F38Cu);
    ctx->pc = 0x18F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F384u;
    // 0x18f388: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18F384u, 0x18F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F38Cu;
label_18f38c:
    // 0x18f38c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18f38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18f390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f394: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18F394u;
    SET_GPR_U32(ctx, 31, 0x18F39Cu);
    ctx->pc = 0x18F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F394u;
    // 0x18f398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18F394u, 0x18F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F39Cu;
label_18f39c:
    // 0x18f39c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18f39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18f3a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f3a4: 0x1045002f  beq         $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x18F3A4u;
    {
        const bool branch_taken_0x18f3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x18F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3A4u;
        // 0x18f3a8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3a4) {
            ctx->pc = 0x18F464u;
            goto label_18f464;
        }
    }
    ctx->pc = 0x18F3ACu;
    // 0x18f3ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18f3acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18f3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f3b4: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18f3b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18f3b8:
    // 0x18f3b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3bc: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18f3bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18f3c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F3C0u;
    {
        const bool branch_taken_0x18f3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3C0u;
        // 0x18f3c4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3c0) {
            ctx->pc = 0x18F3D0u;
            goto label_18f3d0;
        }
    }
    ctx->pc = 0x18F3C8u;
    // 0x18f3c8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18f3c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18f3cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f3d0:
    // 0x18f3d0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18f3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18f3d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F3D4u;
    {
        const bool branch_taken_0x18f3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3D4u;
        // 0x18f3d8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3d4) {
            ctx->pc = 0x18F3ECu;
            goto label_18f3ec;
        }
    }
    ctx->pc = 0x18F3DCu;
    // 0x18f3dc: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18f3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f3e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18F3E4u;
    {
        const bool branch_taken_0x18f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3E4u;
        // 0x18f3e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3e4) {
            ctx->pc = 0x18F3F0u;
            goto label_18f3f0;
        }
    }
    ctx->pc = 0x18F3ECu;
label_18f3ec:
    // 0x18f3ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f3f0:
    // 0x18f3f0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18f3f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3f8: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18f3f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18f3fc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18f3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18f400: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18f400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18f404: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18f404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18f408: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F408u;
    {
        const bool branch_taken_0x18f408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F408u;
        // 0x18f40c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f408) {
            ctx->pc = 0x18F418u;
            goto label_18f418;
        }
    }
    ctx->pc = 0x18F410u;
    // 0x18f410: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18f410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18f414: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18f414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f418:
    // 0x18f418: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18f418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18f41c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F41Cu;
    {
        const bool branch_taken_0x18f41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F41Cu;
        // 0x18f420: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f41c) {
            ctx->pc = 0x18F434u;
            goto label_18f434;
        }
    }
    ctx->pc = 0x18F424u;
    // 0x18f424: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18f424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18f428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f42c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18F42Cu;
    {
        const bool branch_taken_0x18f42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F42Cu;
        // 0x18f430: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f42c) {
            ctx->pc = 0x18F438u;
            goto label_18f438;
        }
    }
    ctx->pc = 0x18F434u;
label_18f434:
    // 0x18f434: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f438:
    // 0x18f438: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18f43c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18f440: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18f440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18f444: 0x28a30007  slti        $v1, $a1, 0x7
    ctx->pc = 0x18f444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x18f448: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18f44c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F44Cu;
    {
        const bool branch_taken_0x18f44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F44Cu;
        // 0x18f450: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f44c) {
            ctx->pc = 0x18F460u;
            goto label_18f460;
        }
    }
    ctx->pc = 0x18F454u;
    // 0x18f454: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18f454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18f458: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18F458u;
    {
        const bool branch_taken_0x18f458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18f458) {
            ctx->pc = 0x18F45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F458u;
            // 0x18f45c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f3b8;
        }
    }
    ctx->pc = 0x18F460u;
label_18f460:
    // 0x18f460: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18f460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18f464:
    // 0x18f464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f468: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18f468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f46c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18f46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f470: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18f470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f474: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18f474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f478: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x18f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18f47c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F47Cu;
        // 0x18f480: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F484u;
    // 0x18f484: 0x0  nop
    ctx->pc = 0x18f484u;
    // NOP
    ctx->pc = 0x18f488u;
}
