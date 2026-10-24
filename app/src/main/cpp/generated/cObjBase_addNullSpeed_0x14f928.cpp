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

// Function: cObjBase_addNullSpeed
// Address: 0x14f928 - 0x14f9f0
void cObjBase_addNullSpeed_0x14f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_addNullSpeed_0x14f928");
#endif

    switch (ctx->pc) {
        case 0x14f9a0u: goto label_14f9a0;
        default: break;
    }

    ctx->pc = 0x14f928u;

    // 0x14f928: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14f928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14f92c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f930: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x14f930u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x14f934: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x14f934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x14f938: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14f938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14f93c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f940: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x14f940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14f944: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x14F944u;
    {
        const bool branch_taken_0x14f944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F944u;
        // 0x14f948: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f944) {
            ctx->pc = 0x14F9DCu;
            goto label_14f9dc;
        }
    }
    ctx->pc = 0x14F94Cu;
    // 0x14f94c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x14f94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14f950: 0xc6030110  lwc1        $f3, 0x110($s0)
    ctx->pc = 0x14f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f954: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f958: 0xc6020330  lwc1        $f2, 0x330($s0)
    ctx->pc = 0x14f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f95c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14f95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f960: 0xc6010334  lwc1        $f1, 0x334($s0)
    ctx->pc = 0x14f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f964: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x14f964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x14f968: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14f968u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14f96c: 0xc6040114  lwc1        $f4, 0x114($s0)
    ctx->pc = 0x14f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f970: 0xc6000338  lwc1        $f0, 0x338($s0)
    ctx->pc = 0x14f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14f974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f978: 0xc6030118  lwc1        $f3, 0x118($s0)
    ctx->pc = 0x14f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f97c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x14f97cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x14f980: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x14f980u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x14f984: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14f984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14f988: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x14f988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x14f98c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x14f98cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14f990: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x14f990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x14f994: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14f994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14f998: 0xc05420c  jal         func_150830
    ctx->pc = 0x14F998u;
    SET_GPR_U32(ctx, 31, 0x14F9A0u);
    ctx->pc = 0x14F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F998u;
    // 0x14f99c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x14F998u, 0x14F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9A0u;
label_14f9a0:
    // 0x14f9a0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x14f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14f9a4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x14f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f9a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f9ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f9b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f9b4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x14f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14f9b8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x14f9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f9bc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x14f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f9c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f9c4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x14f9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14f9c8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x14f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14f9cc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x14f9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f9d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f9d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f9d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f9d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14f9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14f9dc:
    // 0x14f9dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14f9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f9e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x14F9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9E4u;
        // 0x14f9e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F9ECu;
    // 0x14f9ec: 0x0  nop
    ctx->pc = 0x14f9ecu;
    // NOP
    ctx->pc = 0x14f9f0u;
}
