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

// Function: InitObjVtableAndTypeFull_27EE68
// Address: 0x27ee68 - 0x27eec0
void InitObjVtableAndTypeFull_27EE68_0x27ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableAndTypeFull_27EE68_0x27ee68");
#endif

    switch (ctx->pc) {
        case 0x27ee7cu: goto label_27ee7c;
        default: break;
    }

    ctx->pc = 0x27ee68u;

    // 0x27ee68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ee6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27ee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27ee70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ee74: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x27EE74u;
    SET_GPR_U32(ctx, 31, 0x27EE7Cu);
    ctx->pc = 0x27EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE74u;
    // 0x27ee78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x27EE74u, 0x27EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE7Cu;
label_27ee7c:
    // 0x27ee7c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x27ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x27ee80: 0x24638598  addiu       $v1, $v1, -0x7A68
    ctx->pc = 0x27ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935960));
    // 0x27ee84: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x27ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x27ee88: 0xfa001530  sqc2        $vf0, 0x1530($s0)
    ctx->pc = 0x27ee88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5424), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ee8c: 0xfa001540  sqc2        $vf0, 0x1540($s0)
    ctx->pc = 0x27ee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5440), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ee90: 0xfa001550  sqc2        $vf0, 0x1550($s0)
    ctx->pc = 0x27ee90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5456), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ee94: 0xfa001590  sqc2        $vf0, 0x1590($s0)
    ctx->pc = 0x27ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5520), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ee98: 0xfa0015a0  sqc2        $vf0, 0x15A0($s0)
    ctx->pc = 0x27ee98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ee9c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x27ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x27eea0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27eea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eea4: 0x246384b0  addiu       $v1, $v1, -0x7B50
    ctx->pc = 0x27eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935728));
    // 0x27eea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27eeac: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x27eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x27eeb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27eeb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27eeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x27EEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EEB4u;
        // 0x27eeb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EEBCu;
    // 0x27eebc: 0x0  nop
    ctx->pc = 0x27eebcu;
    // NOP
    ctx->pc = 0x27eec0u;
}
