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

// Function: Init_Vtable214_TypeName4AC_279CE8
// Address: 0x279ce8 - 0x279d40
void Init_Vtable214_TypeName4AC_279CE8_0x279ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_Vtable214_TypeName4AC_279CE8_0x279ce8");
#endif

    switch (ctx->pc) {
        case 0x279cfcu: goto label_279cfc;
        default: break;
    }

    ctx->pc = 0x279ce8u;

    // 0x279ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279cec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x279cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x279cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279cf4: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x279CF4u;
    SET_GPR_U32(ctx, 31, 0x279CFCu);
    ctx->pc = 0x279CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279CF4u;
    // 0x279cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x279CF4u, 0x279CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CFCu;
label_279cfc:
    // 0x279cfc: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x279cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x279d00: 0x24637e68  addiu       $v1, $v1, 0x7E68
    ctx->pc = 0x279d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32360));
    // 0x279d04: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x279d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x279d08: 0xfa001530  sqc2        $vf0, 0x1530($s0)
    ctx->pc = 0x279d08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5424), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x279d0c: 0xfa001540  sqc2        $vf0, 0x1540($s0)
    ctx->pc = 0x279d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5440), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x279d10: 0xfa001550  sqc2        $vf0, 0x1550($s0)
    ctx->pc = 0x279d10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5456), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x279d14: 0xfa001590  sqc2        $vf0, 0x1590($s0)
    ctx->pc = 0x279d14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5520), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x279d18: 0xfa0015a0  sqc2        $vf0, 0x15A0($s0)
    ctx->pc = 0x279d18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x279d1c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x279d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x279d20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x279d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d24: 0x24637e50  addiu       $v1, $v1, 0x7E50
    ctx->pc = 0x279d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32336));
    // 0x279d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279d2c: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x279d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x279d30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x279d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279d34: 0x3e00008  jr          $ra
    ctx->pc = 0x279D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D34u;
        // 0x279d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279D3Cu;
    // 0x279d3c: 0x0  nop
    ctx->pc = 0x279d3cu;
    // NOP
    ctx->pc = 0x279d40u;
}
