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

// Function: func_0035EDE0
// Address: 0x35ede0 - 0x35ee98
void func_0035EDE0_0x35ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035EDE0_0x35ede0");
#endif

    switch (ctx->pc) {
        case 0x35ede8u: goto label_35ede8;
        case 0x35ee20u: goto label_35ee20;
        case 0x35ee70u: goto label_35ee70;
        default: break;
    }

    ctx->pc = 0x35ede0u;

    // 0x35ede0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x35ede0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35ede4: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x35ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_35ede8:
    // 0x35ede8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x35ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x35edec: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x35edecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35edf0: 0x0  nop
    ctx->pc = 0x35edf0u;
    // NOP
    // 0x35edf4: 0x0  nop
    ctx->pc = 0x35edf4u;
    // NOP
    // 0x35edf8: 0x0  nop
    ctx->pc = 0x35edf8u;
    // NOP
    // 0x35edfc: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EDFCu;
    {
        const bool branch_taken_0x35edfc = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x35EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EDFCu;
        // 0x35ee00: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35edfc) {
            ctx->pc = 0x35EDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ede8;
        }
    }
    ctx->pc = 0x35EE04u;
    // 0x35ee04: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x35ee04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
    // 0x35ee08: 0x3421fdf3  ori         $at, $at, 0xFDF3
    ctx->pc = 0x35ee08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65011);
    // 0x35ee0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35ee0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35ee10: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x35ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35ee14: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x35ee14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x35ee18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35ee18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35ee1c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x35ee1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_35ee20:
    // 0x35ee20: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x35ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x35ee24: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x35ee24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35ee28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ee2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35ee2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35ee30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35ee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35ee34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x35ee34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35ee38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35ee38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ee3c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35ee3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x35ee40: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x35ee40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35ee44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x35EE44u;
    {
        const bool branch_taken_0x35ee44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE44u;
        // 0x35ee48: 0x28a300ec  slti        $v1, $a1, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee44) {
            ctx->pc = 0x35EE5Cu;
            goto label_35ee5c;
        }
    }
    ctx->pc = 0x35EE4Cu;
    // 0x35ee4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x35ee4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x35ee50: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35ee50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x35ee54: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x35ee54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35ee58: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x35ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_35ee5c:
    // 0x35ee5c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x35EE5Cu;
    {
        const bool branch_taken_0x35ee5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE5Cu;
        // 0x35ee60: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee5c) {
            ctx->pc = 0x35EE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ee20;
        }
    }
    ctx->pc = 0x35EE64u;
    // 0x35ee64: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x35ee64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x35ee68: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x35ee68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x35ee6c: 0x0  nop
    ctx->pc = 0x35ee6cu;
    // NOP
label_35ee70:
    // 0x35ee70: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x35ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35ee74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35ee78: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x35ee78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x35ee7c: 0x0  nop
    ctx->pc = 0x35ee7cu;
    // NOP
    // 0x35ee80: 0x0  nop
    ctx->pc = 0x35ee80u;
    // NOP
    // 0x35ee84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EE84u;
    {
        const bool branch_taken_0x35ee84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE84u;
        // 0x35ee88: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee84) {
            ctx->pc = 0x35EE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ee70;
        }
    }
    ctx->pc = 0x35EE8Cu;
    // 0x35ee8c: 0x3e00008  jr          $ra
    ctx->pc = 0x35EE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EE94u;
    // 0x35ee94: 0x0  nop
    ctx->pc = 0x35ee94u;
    // NOP
    ctx->pc = 0x35ee98u;
}
