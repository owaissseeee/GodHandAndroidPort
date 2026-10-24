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

// Function: func_00380720
// Address: 0x380720 - 0x3807e0
void func_00380720_0x380720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380720_0x380720");
#endif

    ctx->pc = 0x380720u;

    // 0x380720: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x380720u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380724: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x380724u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380728: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x380728u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38072c: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38072Cu;
    {
        const bool branch_taken_0x38072c = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x380730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38072Cu;
        // 0x380730: 0x140782d  daddu       $t7, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38072c) {
            ctx->pc = 0x38073Cu;
            goto label_38073c;
        }
    }
    ctx->pc = 0x380734u;
    // 0x380734: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x380734u;
    {
        const bool branch_taken_0x380734 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x380738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380734u;
        // 0x380738: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380734) {
            ctx->pc = 0x38076Cu;
            goto label_38076c;
        }
    }
    ctx->pc = 0x38073Cu;
label_38073c:
    // 0x38073c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x38073cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x380740: 0x0  nop
    ctx->pc = 0x380740u;
    // NOP
    // 0x380744: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x380744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x380748: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x380748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x38074c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x38074cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x380750: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x380750u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380754: 0x0  nop
    ctx->pc = 0x380754u;
    // NOP
    // 0x380758: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x380758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x38075c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x38075cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x380760: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x380760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x380764: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380764u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380768: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x380768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_38076c:
    // 0x38076c: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x38076cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x380770: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x380770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x380774: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x380774u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x380778: 0x34427e40  ori         $v0, $v0, 0x7E40
    ctx->pc = 0x380778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32320);
    // 0x38077c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x38077cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x380780: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x380780u;
    {
        const bool branch_taken_0x380780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380780) {
            ctx->pc = 0x380784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380780u;
            // 0x380784: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x380788u;
            goto label_380788;
        }
    }
    ctx->pc = 0x380788u;
label_380788:
    // 0x380788: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x380788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x38078c: 0x24090e10  addiu       $t1, $zero, 0xE10
    ctx->pc = 0x38078cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x380790: 0x240a0064  addiu       $t2, $zero, 0x64
    ctx->pc = 0x380790u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x380794: 0x2012  mflo        $a0
    ctx->pc = 0x380794u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x380798: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x380798u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x38079c: 0x3812  mflo        $a3
    ctx->pc = 0x38079cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x3807a0: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x3807a0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3807a4: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x3807a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x3807a8: 0x1812  mflo        $v1
    ctx->pc = 0x3807a8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3807ac: 0x5810  mfhi        $t3
    ctx->pc = 0x3807acu;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x3807b0: 0xe81018  mult        $v0, $a3, $t0
    ctx->pc = 0x3807b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3807b4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3807b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3807b8: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x3807b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x3807bc: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x3807bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3807c0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x3807c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3807c4: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x3807c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3807c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3807c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3807cc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3807ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3807d0: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x3807d0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x3807d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3807D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3807D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3807D4u;
        // 0x3807d8: 0xadeb0000  sw          $t3, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3807D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3807DCu;
    // 0x3807dc: 0x0  nop
    ctx->pc = 0x3807dcu;
    // NOP
    ctx->pc = 0x3807e0u;
}
