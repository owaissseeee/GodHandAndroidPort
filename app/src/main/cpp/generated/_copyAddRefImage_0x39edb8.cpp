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

// Function: _copyAddRefImage
// Address: 0x39edb8 - 0x39eea8
void _copyAddRefImage_0x39edb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_copyAddRefImage_0x39edb8");
#endif

    switch (ctx->pc) {
        case 0x39edc8u: goto label_39edc8;
        default: break;
    }

    ctx->pc = 0x39edb8u;

    // 0x39edb8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x39edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39edbc: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x39edbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
    // 0x39edc0: 0x254aef50  addiu       $t2, $t2, -0x10B0
    ctx->pc = 0x39edc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294963024));
    // 0x39edc4: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x39edc4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x39EF50u));
label_39edc8:
    // 0x39edc8: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x39edc8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39edcc: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x39edccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x39edd0: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x39edd0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x39edd4: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x39edd4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x39edd8: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x39edd8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x39eddc: 0x78cc0040  lq          $t4, 0x40($a2)
    ctx->pc = 0x39eddcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x39ede0: 0x78cd0050  lq          $t5, 0x50($a2)
    ctx->pc = 0x39ede0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x39ede4: 0x78ce0060  lq          $t6, 0x60($a2)
    ctx->pc = 0x39ede4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x39ede8: 0x78cf0070  lq          $t7, 0x70($a2)
    ctx->pc = 0x39ede8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x39edec: 0x78b90000  lq          $t9, 0x0($a1)
    ctx->pc = 0x39edecu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39edf0: 0x71194108  paddh       $t0, $t0, $t9
    ctx->pc = 0x39edf0u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x39edf4: 0x78b90010  lq          $t9, 0x10($a1)
    ctx->pc = 0x39edf4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x39edf8: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x39edf8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x39edfc: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x39edfcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x39ee00: 0x71394908  paddh       $t1, $t1, $t9
    ctx->pc = 0x39ee00u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x39ee04: 0x78b90020  lq          $t9, 0x20($a1)
    ctx->pc = 0x39ee04u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x39ee08: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x39ee08u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x39ee0c: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x39ee0cu;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x39ee10: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x39ee10u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39ee14: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x39ee14u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x39ee18: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x39ee18u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x39ee1c: 0x78b90030  lq          $t9, 0x30($a1)
    ctx->pc = 0x39ee1cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x39ee20: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x39ee20u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39ee24: 0x71795908  paddh       $t3, $t3, $t9
    ctx->pc = 0x39ee24u;
    SET_GPR_VEC(ctx, 11, PS2_PADDH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 25)));
    // 0x39ee28: 0x78b90040  lq          $t9, 0x40($a1)
    ctx->pc = 0x39ee28u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x39ee2c: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x39ee2cu;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x39ee30: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x39ee30u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x39ee34: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x39ee34u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x39ee38: 0x71996108  paddh       $t4, $t4, $t9
    ctx->pc = 0x39ee38u;
    SET_GPR_VEC(ctx, 12, PS2_PADDH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 25)));
    // 0x39ee3c: 0x78b90050  lq          $t9, 0x50($a1)
    ctx->pc = 0x39ee3cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x39ee40: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x39ee40u;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x39ee44: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x39ee44u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x39ee48: 0x71b96908  paddh       $t5, $t5, $t9
    ctx->pc = 0x39ee48u;
    SET_GPR_VEC(ctx, 13, PS2_PADDH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 25)));
    // 0x39ee4c: 0x78b90060  lq          $t9, 0x60($a1)
    ctx->pc = 0x39ee4cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x39ee50: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x39ee50u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x39ee54: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x39ee54u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x39ee58: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x39ee58u;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x39ee5c: 0x71d97108  paddh       $t6, $t6, $t9
    ctx->pc = 0x39ee5cu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 25)));
    // 0x39ee60: 0x78b90070  lq          $t9, 0x70($a1)
    ctx->pc = 0x39ee60u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x39ee64: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x39ee64u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x39ee68: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x39ee68u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x39ee6c: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x39ee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x39ee70: 0x71f97908  paddh       $t7, $t7, $t9
    ctx->pc = 0x39ee70u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x39ee74: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x39ee74u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x39ee78: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x39ee78u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x39ee7c: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x39ee7cu;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x39ee80: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x39ee80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x39ee84: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x39ee84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x39ee88: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x39ee88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x39ee8c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x39ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x39ee90: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x39ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x39ee94: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x39EE94u;
    {
        const bool branch_taken_0x39ee94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE94u;
        // 0x39ee98: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee94) {
            ctx->pc = 0x39EDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39edc8;
        }
    }
    ctx->pc = 0x39EE9Cu;
    // 0x39ee9c: 0x3e00008  jr          $ra
    ctx->pc = 0x39EE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EEA4u;
    // 0x39eea4: 0x0  nop
    ctx->pc = 0x39eea4u;
    // NOP
    ctx->pc = 0x39eea8u;
}
