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

// Function: func_001B1938
// Address: 0x1b1938 - 0x1b19e0
void func_001B1938_0x1b1938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B1938_0x1b1938");
#endif

    ctx->pc = 0x1b1938u;

    // 0x1b1938: 0x948202fe  lhu         $v0, 0x2FE($a0)
    ctx->pc = 0x1b1938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x1b193c: 0x24030364  addiu       $v1, $zero, 0x364
    ctx->pc = 0x1b193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 868));
    // 0x1b1940: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B1940u;
    {
        const bool branch_taken_0x1b1940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1940u;
        // 0x1b1944: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1940) {
            ctx->pc = 0x1B19D4u;
            goto label_1b19d4;
        }
    }
    ctx->pc = 0x1B1948u;
    // 0x1b1948: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1b1948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1b194c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1950: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b1950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b1954: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1954u;
    {
        const bool branch_taken_0x1b1954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1954u;
        // 0x1b1958: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1954) {
            ctx->pc = 0x1B1968u;
            goto label_1b1968;
        }
    }
    ctx->pc = 0x1B195Cu;
    // 0x1b195c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1b195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1b1960: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1960u;
    {
        const bool branch_taken_0x1b1960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1960u;
        // 0x1b1964: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1960) {
            ctx->pc = 0x1B196Cu;
            goto label_1b196c;
        }
    }
    ctx->pc = 0x1B1968u;
label_1b1968:
    // 0x1b1968: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b196c:
    // 0x1b196c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B196Cu;
    {
        const bool branch_taken_0x1b196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b196c) {
            ctx->pc = 0x1B19D4u;
            goto label_1b19d4;
        }
    }
    ctx->pc = 0x1B1974u;
    // 0x1b1974: 0xc4810630  lwc1        $f1, 0x630($a0)
    ctx->pc = 0x1b1974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1978: 0x3c013bda  lui         $at, 0x3BDA
    ctx->pc = 0x1b1978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15322 << 16));
    // 0x1b197c: 0x3421740e  ori         $at, $at, 0x740E
    ctx->pc = 0x1b197cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29710);
    // 0x1b1980: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1984: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1988: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b1988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b198c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b198cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b1990: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b1990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1994: 0x0  nop
    ctx->pc = 0x1b1994u;
    // NOP
    // 0x1b1998: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B1998u;
    {
        const bool branch_taken_0x1b1998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1998) {
            ctx->pc = 0x1B199Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1998u;
            // 0x1b199c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B19A0u;
            goto label_1b19a0;
        }
    }
    ctx->pc = 0x1B19A0u;
label_1b19a0:
    // 0x1b19a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b19a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b19a4: 0x0  nop
    ctx->pc = 0x1b19a4u;
    // NOP
    // 0x1b19a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b19a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b19ac: 0x0  nop
    ctx->pc = 0x1b19acu;
    // NOP
    // 0x1b19b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B19B0u;
    {
        const bool branch_taken_0x1b19b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b19b0) {
            ctx->pc = 0x1B19B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B19B0u;
            // 0x1b19b4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B19B8u;
            goto label_1b19b8;
        }
    }
    ctx->pc = 0x1B19B8u;
label_1b19b8:
    // 0x1b19b8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1b19b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b19bc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b19bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1b19c0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b19c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b19c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b19c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b19c8: 0x0  nop
    ctx->pc = 0x1b19c8u;
    // NOP
    // 0x1b19cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b19ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b19d0: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x1b19d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
label_1b19d4:
    // 0x1b19d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B19D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19D4u;
        // 0x1b19d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B19D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B19DCu;
    // 0x1b19dc: 0x0  nop
    ctx->pc = 0x1b19dcu;
    // NOP
    ctx->pc = 0x1b19e0u;
}
