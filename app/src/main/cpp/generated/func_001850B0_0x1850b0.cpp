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

// Function: func_001850B0
// Address: 0x1850b0 - 0x185180
void func_001850B0_0x1850b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001850B0_0x1850b0");
#endif

    switch (ctx->pc) {
        case 0x185164u: goto label_185164;
        default: break;
    }

    ctx->pc = 0x1850b0u;

    // 0x1850b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1850b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1850b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1850b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1850b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1850b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1850bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1850bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1850c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1850c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850c4: 0x86020628  lh          $v0, 0x628($s0)
    ctx->pc = 0x1850c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1576)));
    // 0x1850c8: 0x86030636  lh          $v1, 0x636($s0)
    ctx->pc = 0x1850c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1590)));
    // 0x1850cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1850ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1850d0: 0x0  nop
    ctx->pc = 0x1850d0u;
    // NOP
    // 0x1850d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1850d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1850d8: 0x9204065a  lbu         $a0, 0x65A($s0)
    ctx->pc = 0x1850d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1626)));
    // 0x1850dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1850dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1850e0: 0x0  nop
    ctx->pc = 0x1850e0u;
    // NOP
    // 0x1850e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1850e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1850e8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1850e8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1850ec: 0x10850014  beq         $a0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1850ECu;
    {
        const bool branch_taken_0x1850ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1850F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850ECu;
        // 0x1850f0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850ec) {
            ctx->pc = 0x185140u;
            goto label_185140;
        }
    }
    ctx->pc = 0x1850F4u;
    // 0x1850f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1850F4u;
    {
        const bool branch_taken_0x1850f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1850f4) {
            ctx->pc = 0x1850F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1850F4u;
            // 0x1850f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18510Cu;
            goto label_18510c;
        }
    }
    ctx->pc = 0x1850FCu;
    // 0x1850fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1850FCu;
    {
        const bool branch_taken_0x1850fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1850fc) {
            ctx->pc = 0x18511Cu;
            goto label_18511c;
        }
    }
    ctx->pc = 0x185104u;
    // 0x185104: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x185104u;
    {
        const bool branch_taken_0x185104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185104u;
        // 0x185108: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185104) {
            ctx->pc = 0x185174u;
            goto label_185174;
        }
    }
    ctx->pc = 0x18510Cu;
label_18510c:
    // 0x18510c: 0x50820018  beql        $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x18510Cu;
    {
        const bool branch_taken_0x18510c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18510c) {
            ctx->pc = 0x185110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18510Cu;
            // 0x185110: 0xa2050661  sb          $a1, 0x661($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1633), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185170u;
            goto label_185170;
        }
    }
    ctx->pc = 0x185114u;
    // 0x185114: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x185114u;
    {
        const bool branch_taken_0x185114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185114u;
        // 0x185118: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185114) {
            ctx->pc = 0x185174u;
            goto label_185174;
        }
    }
    ctx->pc = 0x18511Cu;
label_18511c:
    // 0x18511c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18511cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x185120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x185120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185124: 0x0  nop
    ctx->pc = 0x185124u;
    // NOP
    // 0x185128: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18512c: 0x0  nop
    ctx->pc = 0x18512cu;
    // NOP
    // 0x185130: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x185130u;
    {
        const bool branch_taken_0x185130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185130u;
        // 0x185134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185130) {
            ctx->pc = 0x185170u;
            goto label_185170;
        }
    }
    ctx->pc = 0x185138u;
    // 0x185138: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x185138u;
    {
        const bool branch_taken_0x185138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185138u;
        // 0x18513c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185138) {
            ctx->pc = 0x18515Cu;
            goto label_18515c;
        }
    }
    ctx->pc = 0x185140u;
label_185140:
    // 0x185140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185144: 0x0  nop
    ctx->pc = 0x185144u;
    // NOP
    // 0x185148: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18514c: 0x0  nop
    ctx->pc = 0x18514cu;
    // NOP
    // 0x185150: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x185150u;
    {
        const bool branch_taken_0x185150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185150u;
        // 0x185154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185150) {
            ctx->pc = 0x185170u;
            goto label_185170;
        }
    }
    ctx->pc = 0x185158u;
    // 0x185158: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x185158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18515c:
    // 0x18515c: 0xc0617d4  jal         func_185F50
    ctx->pc = 0x18515Cu;
    SET_GPR_U32(ctx, 31, 0x185164u);
    ctx->pc = 0x185F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185F50u, 0x18515Cu, 0x185164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185164u;
label_185164:
    // 0x185164: 0x9202065a  lbu         $v0, 0x65A($s0)
    ctx->pc = 0x185164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1626)));
    // 0x185168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x185168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18516c: 0xa202065a  sb          $v0, 0x65A($s0)
    ctx->pc = 0x18516cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1626), (uint8_t)GPR_U32(ctx, 2));
label_185170:
    // 0x185170: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x185170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_185174:
    // 0x185174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185178: 0x3e00008  jr          $ra
    ctx->pc = 0x185178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185178u;
        // 0x18517c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185180u;
}
