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

// Function: func_00378180
// Address: 0x378180 - 0x3781f8
void func_00378180_0x378180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378180_0x378180");
#endif

    ctx->pc = 0x378180u;

    // 0x378180: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x378180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x378184: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x378184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x378188: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x378188u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x37818c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37818Cu;
    {
        const bool branch_taken_0x37818c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x37818c) {
            ctx->pc = 0x378190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37818Cu;
            // 0x378190: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x378194u;
            goto label_378194;
        }
    }
    ctx->pc = 0x378194u;
label_378194:
    // 0x378194: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x378194u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x378198: 0x1810  mfhi        $v1
    ctx->pc = 0x378198u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x37819c: 0x286200b4  slti        $v0, $v1, 0xB4
    ctx->pc = 0x37819cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x3781a0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3781A0u;
    {
        const bool branch_taken_0x3781a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3781a0) {
            ctx->pc = 0x3781A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3781A0u;
            // 0x3781a4: 0xc31823  subu        $v1, $a2, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3781A8u;
            goto label_3781a8;
        }
    }
    ctx->pc = 0x3781A8u;
label_3781a8:
    // 0x3781a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3781a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3781ac: 0x0  nop
    ctx->pc = 0x3781acu;
    // NOP
    // 0x3781b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3781b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3781b4: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x3781b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x3781b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3781b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3781bc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x3781bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x3781c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3781c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3781c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3781c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3781c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3781c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3781cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3781ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3781d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3781d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3781d4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3781d4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x3781d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3781d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3781dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3781dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3781e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3781e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3781e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3781E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3781E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781E4u;
        // 0x3781e8: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3781E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3781ECu;
    // 0x3781ec: 0x0  nop
    ctx->pc = 0x3781ecu;
    // NOP
    // 0x3781f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3781f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3781f4: 0x0  nop
    ctx->pc = 0x3781f4u;
    // NOP
    ctx->pc = 0x3781f8u;
}
