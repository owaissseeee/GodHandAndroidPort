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

// Function: cIDBase_calcEntries
// Address: 0x2aa6e0 - 0x2aaa40
void cIDBase_calcEntries_0x2aa6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_calcEntries_0x2aa6e0");
#endif

    switch (ctx->pc) {
        case 0x2aa720u: goto label_2aa720;
        case 0x2aa770u: goto label_2aa770;
        case 0x2aa7d8u: goto label_2aa7d8;
        case 0x2aa80cu: goto label_2aa80c;
        case 0x2aa818u: goto label_2aa818;
        case 0x2aa88cu: goto label_2aa88c;
        case 0x2aa8d0u: goto label_2aa8d0;
        default: break;
    }

    ctx->pc = 0x2aa6e0u;

    // 0x2aa6e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2aa6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2aa6e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2aa6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2aa6e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2aa6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2aa6ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2aa6ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2aa6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2aa6f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2aa6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2aa6f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2aa6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2aa6fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa700: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2aa700u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2aa704: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2aa704u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2aa708: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2aa708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2aa70c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2aa70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2aa710: 0x184000bf  blez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2AA710u;
    {
        const bool branch_taken_0x2aa710 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2AA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA710u;
        // 0x2aa714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa710) {
            ctx->pc = 0x2AAA10u;
            goto label_2aaa10;
        }
    }
    ctx->pc = 0x2AA718u;
    // 0x2aa718: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x2aa718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2aa71c: 0x0  nop
    ctx->pc = 0x2aa71cu;
    // NOP
label_2aa720:
    // 0x2aa720: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2aa720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2aa724: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2aa724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa728: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2aa728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aa72c: 0x120000b3  beqz        $s0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2AA72Cu;
    {
        const bool branch_taken_0x2aa72c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA72Cu;
        // 0x2aa730: 0x24940001  addiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa72c) {
            ctx->pc = 0x2AA9FCu;
            goto label_2aa9fc;
        }
    }
    ctx->pc = 0x2AA734u;
    // 0x2aa734: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2aa734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa738: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2aa738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa73c: 0x82020029  lb          $v0, 0x29($s0)
    ctx->pc = 0x2aa73cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x2aa740: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2aa740u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2aa744: 0x46000d86  mov.s       $f22, $f1
    ctx->pc = 0x2aa744u;
    ctx->f[22] = FPU_MOV_S(ctx->f[1]);
    // 0x2aa748: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2aa748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2aa74c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2aa74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2aa750: 0x4400025  bltz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AA750u;
    {
        const bool branch_taken_0x2aa750 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA750u;
        // 0x2aa754: 0xe601005c  swc1        $f1, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa750) {
            ctx->pc = 0x2AA7E8u;
            goto label_2aa7e8;
        }
    }
    ctx->pc = 0x2AA758u;
    // 0x2aa758: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x2aa758u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2aa75c: 0x52200023  beql        $s1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2AA75Cu;
    {
        const bool branch_taken_0x2aa75c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa75c) {
            ctx->pc = 0x2AA760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA75Cu;
            // 0x2aa760: 0xc60c0060  lwc1        $f12, 0x60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA7ECu;
            goto label_2aa7ec;
        }
    }
    ctx->pc = 0x2AA764u;
    // 0x2aa764: 0xc6140060  lwc1        $f20, 0x60($s0)
    ctx->pc = 0x2aa764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aa768: 0x3c124000  lui         $s2, 0x4000
    ctx->pc = 0x2aa768u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16384 << 16));
    // 0x2aa76c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2aa76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2aa770:
    // 0x2aa770: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2aa770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2aa774: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AA774u;
    {
        const bool branch_taken_0x2aa774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa774) {
            ctx->pc = 0x2AA778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA774u;
            // 0x2aa778: 0xc6200040  lwc1        $f0, 0x40($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA7A0u;
            goto label_2aa7a0;
        }
    }
    ctx->pc = 0x2AA77Cu;
    // 0x2aa77c: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x2aa77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa780: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x2aa780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa784: 0xc602005c  lwc1        $f2, 0x5C($s0)
    ctx->pc = 0x2aa784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa788: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa78c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2aa78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2aa790: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x2aa790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa794: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2aa794u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2aa798: 0xe602005c  swc1        $f2, 0x5C($s0)
    ctx->pc = 0x2aa798u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2aa79c: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x2aa79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa7a0:
    // 0x2aa7a0: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x2aa7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa7a4: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x2aa7a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2aa7a8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2aa7a8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2aa7ac: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2aa7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2aa7b0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AA7B0u;
    {
        const bool branch_taken_0x2aa7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7B0u;
        // 0x2aa7b4: 0x4601b582  mul.s       $f22, $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7b0) {
            ctx->pc = 0x2AA7DCu;
            goto label_2aa7dc;
        }
    }
    ctx->pc = 0x2AA7B8u;
    // 0x2aa7b8: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x2aa7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa7bc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2aa7bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa7c0: 0x0  nop
    ctx->pc = 0x2aa7c0u;
    // NOP
    // 0x2aa7c4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA7C4u;
    {
        const bool branch_taken_0x2aa7c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aa7c4) {
            ctx->pc = 0x2AA7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA7C4u;
            // 0x2aa7c8: 0x8e310020  lw          $s1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA7E0u;
            goto label_2aa7e0;
        }
    }
    ctx->pc = 0x2AA7CCu;
    // 0x2aa7cc: 0xc60c0060  lwc1        $f12, 0x60($s0)
    ctx->pc = 0x2aa7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa7d0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2AA7D0u;
    SET_GPR_U32(ctx, 31, 0x2AA7D8u);
    ctx->pc = 0x2AA7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA7D0u;
    // 0x2aa7d4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2AA7D0u, 0x2AA7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA7D8u;
label_2aa7d8:
    // 0x2aa7d8: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2aa7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_2aa7dc:
    // 0x2aa7dc: 0x8e310020  lw          $s1, 0x20($s1)
    ctx->pc = 0x2aa7dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2aa7e0:
    // 0x2aa7e0: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2AA7E0u;
    {
        const bool branch_taken_0x2aa7e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa7e0) {
            ctx->pc = 0x2AA7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA7E0u;
            // 0x2aa7e4: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa770;
        }
    }
    ctx->pc = 0x2AA7E8u;
label_2aa7e8:
    // 0x2aa7e8: 0xc60c0060  lwc1        $f12, 0x60($s0)
    ctx->pc = 0x2aa7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2aa7ec:
    // 0x2aa7ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aa7ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa7f0: 0x0  nop
    ctx->pc = 0x2aa7f0u;
    // NOP
    // 0x2aa7f4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2aa7f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa7f8: 0x0  nop
    ctx->pc = 0x2aa7f8u;
    // NOP
    // 0x2aa7fc: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x2AA7FCu;
    {
        const bool branch_taken_0x2aa7fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aa7fc) {
            ctx->pc = 0x2AA800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA7FCu;
            // 0x2aa800: 0xc6000038  lwc1        $f0, 0x38($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA844u;
            goto label_2aa844;
        }
    }
    ctx->pc = 0x2AA804u;
    // 0x2aa804: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2AA804u;
    SET_GPR_U32(ctx, 31, 0x2AA80Cu);
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2AA804u, 0x2AA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA80Cu;
label_2aa80c:
    // 0x2aa80c: 0xc60c0060  lwc1        $f12, 0x60($s0)
    ctx->pc = 0x2aa80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa810: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2AA810u;
    SET_GPR_U32(ctx, 31, 0x2AA818u);
    ctx->pc = 0x2AA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA810u;
    // 0x2aa814: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2AA810u, 0x2AA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA818u;
label_2aa818:
    // 0x2aa818: 0xc6040038  lwc1        $f4, 0x38($s0)
    ctx->pc = 0x2aa818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa81c: 0xc602003c  lwc1        $f2, 0x3C($s0)
    ctx->pc = 0x2aa81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa820: 0x4604a042  mul.s       $f1, $f20, $f4
    ctx->pc = 0x2aa820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x2aa824: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x2aa824u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2aa828: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2aa828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2aa82c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2aa82cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2aa830: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2aa830u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2aa834: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2aa834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2aa838: 0xe6010098  swc1        $f1, 0x98($s0)
    ctx->pc = 0x2aa838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2aa83c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA83Cu;
    {
        const bool branch_taken_0x2aa83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA83Cu;
        // 0x2aa840: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa83c) {
            ctx->pc = 0x2AA850u;
            goto label_2aa850;
        }
    }
    ctx->pc = 0x2AA844u;
label_2aa844:
    // 0x2aa844: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x2aa844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa848: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2aa848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2aa84c: 0xe6010098  swc1        $f1, 0x98($s0)
    ctx->pc = 0x2aa84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_2aa850:
    // 0x2aa850: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2aa850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2aa854: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2aa854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2aa858: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2aa858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2aa85c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA85Cu;
    {
        const bool branch_taken_0x2aa85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa85c) {
            ctx->pc = 0x2AA860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA85Cu;
            // 0x2aa860: 0xc6000060  lwc1        $f0, 0x60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA880u;
            goto label_2aa880;
        }
    }
    ctx->pc = 0x2AA864u;
    // 0x2aa864: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2aa864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa868: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2aa868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa86c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2aa86cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2aa870: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x2aa870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x2aa874: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2aa874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2aa878: 0xe6010098  swc1        $f1, 0x98($s0)
    ctx->pc = 0x2aa878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2aa87c: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x2aa87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa880:
    // 0x2aa880: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x2aa880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa884: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2AA884u;
    SET_GPR_U32(ctx, 31, 0x2AA88Cu);
    ctx->pc = 0x2AA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA884u;
    // 0x2aa888: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2AA884u, 0x2AA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA88Cu;
label_2aa88c:
    // 0x2aa88c: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2aa88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa890: 0xc6020098  lwc1        $f2, 0x98($s0)
    ctx->pc = 0x2aa890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa894: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2aa894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2aa898: 0x82030029  lb          $v1, 0x29($s0)
    ctx->pc = 0x2aa898u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x2aa89c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2aa89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2aa8a0: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x2aa8a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2aa8a4: 0xe6020054  swc1        $f2, 0x54($s0)
    ctx->pc = 0x2aa8a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2aa8a8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2aa8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2aa8ac: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x2aa8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa8b0: 0x460004c  bltz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2AA8B0u;
    {
        const bool branch_taken_0x2aa8b0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2AA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8B0u;
        // 0x2aa8b4: 0xc6030034  lwc1        $f3, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8b0) {
            ctx->pc = 0x2AA9E4u;
            goto label_2aa9e4;
        }
    }
    ctx->pc = 0x2AA8B8u;
    // 0x2aa8b8: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x2aa8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2aa8bc: 0x50e0004a  beql        $a3, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x2AA8BCu;
    {
        const bool branch_taken_0x2aa8bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa8bc) {
            ctx->pc = 0x2AA8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA8BCu;
            // 0x2aa8c0: 0xc6000050  lwc1        $f0, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA9E8u;
            goto label_2aa9e8;
        }
    }
    ctx->pc = 0x2AA8C4u;
    // 0x2aa8c4: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2aa8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2aa8c8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2aa8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2aa8cc: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x2aa8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_2aa8d0:
    // 0x2aa8d0: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2aa8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2aa8d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aa8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aa8d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA8D8u;
    {
        const bool branch_taken_0x2aa8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa8d8) {
            ctx->pc = 0x2AA8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA8D8u;
            // 0x2aa8dc: 0xc4e10094  lwc1        $f1, 0x94($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA8ECu;
            goto label_2aa8ec;
        }
    }
    ctx->pc = 0x2AA8E0u;
    // 0x2aa8e0: 0x90e20088  lbu         $v0, 0x88($a3)
    ctx->pc = 0x2aa8e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x2aa8e4: 0xa2020088  sb          $v0, 0x88($s0)
    ctx->pc = 0x2aa8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa8e8: 0xc4e10094  lwc1        $f1, 0x94($a3)
    ctx->pc = 0x2aa8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa8ec:
    // 0x2aa8ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2aa8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2aa8f0: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x2aa8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa8f4: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x2aa8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa8f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa8fc: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2aa8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2aa900: 0xc4e10098  lwc1        $f1, 0x98($a3)
    ctx->pc = 0x2aa900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa904: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aa904u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aa908: 0xe6020054  swc1        $f2, 0x54($s0)
    ctx->pc = 0x2aa908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2aa90c: 0xc4e00030  lwc1        $f0, 0x30($a3)
    ctx->pc = 0x2aa90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa910: 0xc4e10034  lwc1        $f1, 0x34($a3)
    ctx->pc = 0x2aa910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa914: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x2aa914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2aa918: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2aa918u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2aa91c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2aa91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2aa920: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2AA920u;
    {
        const bool branch_taken_0x2aa920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA920u;
        // 0x2aa924: 0x460118c0  add.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa920) {
            ctx->pc = 0x2AA9D8u;
            goto label_2aa9d8;
        }
    }
    ctx->pc = 0x2AA928u;
    // 0x2aa928: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2aa928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2aa92c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2aa92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2aa930: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x2AA930u;
    {
        const bool branch_taken_0x2aa930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa930) {
            ctx->pc = 0x2AA934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA930u;
            // 0x2aa934: 0x8ce70020  lw          $a3, 0x20($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA9DCu;
            goto label_2aa9dc;
        }
    }
    ctx->pc = 0x2AA938u;
    // 0x2aa938: 0x90e3004c  lbu         $v1, 0x4C($a3)
    ctx->pc = 0x2aa938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x2aa93c: 0x92020064  lbu         $v0, 0x64($s0)
    ctx->pc = 0x2aa93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2aa940: 0x92040065  lbu         $a0, 0x65($s0)
    ctx->pc = 0x2aa940u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 101)));
    // 0x2aa944: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aa944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa948: 0x92050066  lbu         $a1, 0x66($s0)
    ctx->pc = 0x2aa948u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x2aa94c: 0x92060067  lbu         $a2, 0x67($s0)
    ctx->pc = 0x2aa94cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 103)));
    // 0x2aa950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa954: 0x0  nop
    ctx->pc = 0x2aa954u;
    // NOP
    // 0x2aa958: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa95c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2aa95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2aa960: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa964: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2aa964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2aa968: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x2aa968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa96c: 0x90e3004d  lbu         $v1, 0x4D($a3)
    ctx->pc = 0x2aa96cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 77)));
    // 0x2aa970: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2aa970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa974: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2aa974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa978: 0x0  nop
    ctx->pc = 0x2aa978u;
    // NOP
    // 0x2aa97c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa980: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2aa980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2aa984: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa984u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa988: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2aa988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2aa98c: 0xa2020065  sb          $v0, 0x65($s0)
    ctx->pc = 0x2aa98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa990: 0x90e3004e  lbu         $v1, 0x4E($a3)
    ctx->pc = 0x2aa990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 78)));
    // 0x2aa994: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2aa994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2aa998: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2aa998u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa99c: 0x0  nop
    ctx->pc = 0x2aa99cu;
    // NOP
    // 0x2aa9a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa9a4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2aa9a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2aa9a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa9a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa9ac: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2aa9acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2aa9b0: 0xa2020066  sb          $v0, 0x66($s0)
    ctx->pc = 0x2aa9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa9b4: 0x90e3004f  lbu         $v1, 0x4F($a3)
    ctx->pc = 0x2aa9b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 79)));
    // 0x2aa9b8: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x2aa9b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2aa9bc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2aa9bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa9c0: 0x0  nop
    ctx->pc = 0x2aa9c0u;
    // NOP
    // 0x2aa9c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aa9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aa9c8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2aa9c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2aa9cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa9ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa9d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2aa9d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2aa9d4: 0xa2020067  sb          $v0, 0x67($s0)
    ctx->pc = 0x2aa9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 2));
label_2aa9d8:
    // 0x2aa9d8: 0x8ce70020  lw          $a3, 0x20($a3)
    ctx->pc = 0x2aa9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_2aa9dc:
    // 0x2aa9dc: 0x54e0ffbc  bnel        $a3, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2AA9DCu;
    {
        const bool branch_taken_0x2aa9dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa9dc) {
            ctx->pc = 0x2AA9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA9DCu;
            // 0x2aa9e0: 0x8ce2002c  lw          $v0, 0x2C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa8d0;
        }
    }
    ctx->pc = 0x2AA9E4u;
label_2aa9e4:
    // 0x2aa9e4: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x2aa9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa9e8:
    // 0x2aa9e8: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2aa9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa9ec: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2aa9ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2aa9f0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2aa9f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2aa9f4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2aa9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2aa9f8: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x2aa9f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_2aa9fc:
    // 0x2aa9fc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2aa9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2aaa00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aaa00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa04: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2aaa04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aaa08: 0x1440ff45  bnez        $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x2AAA08u;
    {
        const bool branch_taken_0x2aaa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA08u;
        // 0x2aaa0c: 0x240200ac  addiu       $v0, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa08) {
            ctx->pc = 0x2AA720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa720;
        }
    }
    ctx->pc = 0x2AAA10u;
label_2aaa10:
    // 0x2aaa10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2aaa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aaa14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2aaa14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aaa18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2aaa18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aaa1c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2aaa1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aaa20: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2aaa20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aaa24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aaa24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aaa28: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2aaa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2aaa2c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2aaa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2aaa30: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2aaa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aaa34: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA34u;
        // 0x2aaa38: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAA3Cu;
    // 0x2aaa3c: 0x0  nop
    ctx->pc = 0x2aaa3cu;
    // NOP
    ctx->pc = 0x2aaa40u;
}
