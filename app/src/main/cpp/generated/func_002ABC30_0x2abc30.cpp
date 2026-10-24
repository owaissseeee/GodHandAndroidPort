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

// Function: func_002ABC30
// Address: 0x2abc30 - 0x2abce8
void func_002ABC30_0x2abc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ABC30_0x2abc30");
#endif

    switch (ctx->pc) {
        case 0x2abc90u: goto label_2abc90;
        default: break;
    }

    ctx->pc = 0x2abc30u;

    // 0x2abc30: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2abc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2abc34: 0x8444006c  lh          $a0, 0x6C($v0)
    ctx->pc = 0x2abc34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2abc38: 0x8446006e  lh          $a2, 0x6E($v0)
    ctx->pc = 0x2abc38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 110)));
    // 0x2abc3c: 0xa4a000a2  sh          $zero, 0xA2($a1)
    ctx->pc = 0x2abc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abc40: 0x8043005d  lb          $v1, 0x5D($v0)
    ctx->pc = 0x2abc40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 93)));
    // 0x2abc44: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2ABC44u;
    {
        const bool branch_taken_0x2abc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC44u;
        // 0x2abc48: 0x24c2fffd  addiu       $v0, $a2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc44) {
            ctx->pc = 0x2ABC84u;
            goto label_2abc84;
        }
    }
    ctx->pc = 0x2ABC4Cu;
    // 0x2abc4c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2abc4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2abc50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABC50u;
    {
        const bool branch_taken_0x2abc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC50u;
        // 0x2abc54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc50) {
            ctx->pc = 0x2ABC60u;
            goto label_2abc60;
        }
    }
    ctx->pc = 0x2ABC58u;
    // 0x2abc58: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2abc58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2abc5c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2abc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2abc60:
    // 0x2abc60: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2abc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2abc64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABC64u;
    {
        const bool branch_taken_0x2abc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC64u;
        // 0x2abc68: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc64) {
            ctx->pc = 0x2ABC74u;
            goto label_2abc74;
        }
    }
    ctx->pc = 0x2ABC6Cu;
    // 0x2abc6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABC6Cu;
    {
        const bool branch_taken_0x2abc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC6Cu;
        // 0x2abc70: 0x34422000  ori         $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc6c) {
            ctx->pc = 0x2ABC7Cu;
            goto label_2abc7c;
        }
    }
    ctx->pc = 0x2ABC74u;
label_2abc74:
    // 0x2abc74: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2abc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2abc78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2abc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2abc7c:
    // 0x2abc7c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2abc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x2abc80: 0x24c2fffd  addiu       $v0, $a2, -0x3
    ctx->pc = 0x2abc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_2abc84:
    // 0x2abc84: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2ABC84u;
    {
        const bool branch_taken_0x2abc84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2ABC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC84u;
        // 0x2abc88: 0xaca0009c  sw          $zero, 0x9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc84) {
            ctx->pc = 0x2ABCE0u;
            goto label_2abce0;
        }
    }
    ctx->pc = 0x2ABC8Cu;
    // 0x2abc8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2abc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2abc90:
    // 0x2abc90: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2abc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2abc94: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x2abc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2abc98: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2abc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abc9c: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x2abc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2abca0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2abca0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2abca4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2abca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2abca8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2abca8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2abcac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2abcacu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2abcb0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2abcb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2abcb4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2abcb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2abcb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2abcb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2abcbc: 0x0  nop
    ctx->pc = 0x2abcbcu;
    // NOP
    // 0x2abcc0: 0x0  nop
    ctx->pc = 0x2abcc0u;
    // NOP
    // 0x2abcc4: 0x46010044  c1          0x10044
    ctx->pc = 0x2abcc4u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x2abcc8: 0xc4a0009c  lwc1        $f0, 0x9C($a1)
    ctx->pc = 0x2abcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abccc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2abcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2abcd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2abcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2abcd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2abcd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2abcd8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2ABCD8u;
    {
        const bool branch_taken_0x2abcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCD8u;
        // 0x2abcdc: 0xe4a0009c  swc1        $f0, 0x9C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abcd8) {
            ctx->pc = 0x2ABC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2abc90;
        }
    }
    ctx->pc = 0x2ABCE0u;
label_2abce0:
    // 0x2abce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABCE8u;
}
