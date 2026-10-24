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

// Function: func_002B4228
// Address: 0x2b4228 - 0x2b42f0
void func_002B4228_0x2b4228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4228_0x2b4228");
#endif

    ctx->pc = 0x2b4228u;

    // 0x2b4228: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b4228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b422c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b4230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b4230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b4234: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x2b4234u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b4238: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4238u;
    {
        const bool branch_taken_0x2b4238 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2B423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4238u;
        // 0x2b423c: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4238) {
            ctx->pc = 0x2B4254u;
            goto label_2b4254;
        }
    }
    ctx->pc = 0x2B4240u;
    // 0x2b4240: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b4240u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4244: 0x0  nop
    ctx->pc = 0x2b4244u;
    // NOP
    // 0x2b4248: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b4248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b424c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B424Cu;
    {
        const bool branch_taken_0x2b424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B424Cu;
        // 0x2b4250: 0xa51018  mult        $v0, $a1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b424c) {
            ctx->pc = 0x2B4274u;
            goto label_2b4274;
        }
    }
    ctx->pc = 0x2B4254u;
label_2b4254:
    // 0x2b4254: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2b4254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2b4258: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x2b4258u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2b425c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b4260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4264: 0x0  nop
    ctx->pc = 0x2b4264u;
    // NOP
    // 0x2b4268: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b4268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b426c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b426cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2b4270: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x2b4270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2b4274:
    // 0x2b4274: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2b4274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2b4278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b4278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b427c: 0x0  nop
    ctx->pc = 0x2b427cu;
    // NOP
    // 0x2b4280: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2b4280u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2b4284: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4284u;
    {
        const bool branch_taken_0x2b4284 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B4288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4284u;
        // 0x2b4288: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4284) {
            ctx->pc = 0x2B42A0u;
            goto label_2b42a0;
        }
    }
    ctx->pc = 0x2B428Cu;
    // 0x2b428c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b428cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b4290: 0x0  nop
    ctx->pc = 0x2b4290u;
    // NOP
    // 0x2b4294: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b4294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b4298: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4298u;
    {
        const bool branch_taken_0x2b4298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4298) {
            ctx->pc = 0x2B42B8u;
            goto label_2b42b8;
        }
    }
    ctx->pc = 0x2B42A0u;
label_2b42a0:
    // 0x2b42a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b42a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b42a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b42a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b42a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b42a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b42ac: 0x0  nop
    ctx->pc = 0x2b42acu;
    // NOP
    // 0x2b42b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b42b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b42b4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2b42b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2b42b8:
    // 0x2b42b8: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2b42b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2b42bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b42bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b42c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b42c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2b42c4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b42c8: 0x0  nop
    ctx->pc = 0x2b42c8u;
    // NOP
    // 0x2b42cc: 0x0  nop
    ctx->pc = 0x2b42ccu;
    // NOP
    // 0x2b42d0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2b42d0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x2b42d4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x2b42d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x2b42d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b42d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b42dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b42dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b42e0: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x2b42e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x2b42e4: 0xe481009c  swc1        $f1, 0x9C($a0)
    ctx->pc = 0x2b42e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x2b42e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B42E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42E8u;
        // 0x2b42ec: 0xe4810098  swc1        $f1, 0x98($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B42E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B42F0u;
}
