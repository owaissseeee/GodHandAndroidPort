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

// Function: dptofp
// Address: 0x31eae0 - 0x31eb38
void dptofp_0x31eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptofp_0x31eae0");
#endif

    switch (ctx->pc) {
        case 0x31eaf8u: goto label_31eaf8;
        case 0x31eb28u: goto label_31eb28;
        default: break;
    }

    ctx->pc = 0x31eae0u;

    // 0x31eae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31eae4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x31eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x31eae8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31eae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eaec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31eaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31eaf0: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31EAF0u;
    SET_GPR_U32(ctx, 31, 0x31EAF8u);
    ctx->pc = 0x31EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EAF0u;
    // 0x31eaf4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31EAF0u, 0x31EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAF8u;
label_31eaf8:
    // 0x31eaf8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x31eaf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31eafc: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x31eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x31eb00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31eb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31eb04: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x31eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31eb08: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x31eb08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x31eb0c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x31eb0cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x31eb10: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x31eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31eb14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31eb18: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x31eb18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x31eb1c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x31eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31eb20: 0xc0c7b68  jal         func_31EDA0
    ctx->pc = 0x31EB20u;
    SET_GPR_U32(ctx, 31, 0x31EB28u);
    ctx->pc = 0x31EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EB20u;
    // 0x31eb24: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDA0u, 0x31EB20u, 0x31EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB28u;
label_31eb28:
    // 0x31eb28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31eb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31eb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x31EB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB2Cu;
        // 0x31eb30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EB34u;
    // 0x31eb34: 0x0  nop
    ctx->pc = 0x31eb34u;
    // NOP
    ctx->pc = 0x31eb38u;
}
