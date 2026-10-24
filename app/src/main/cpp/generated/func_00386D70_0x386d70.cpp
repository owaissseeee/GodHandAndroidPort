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

// Function: func_00386D70
// Address: 0x386d70 - 0x386de0
void func_00386D70_0x386d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00386D70_0x386d70");
#endif

    switch (ctx->pc) {
        case 0x386da4u: goto label_386da4;
        case 0x386dc4u: goto label_386dc4;
        default: break;
    }

    ctx->pc = 0x386d70u;

    // 0x386d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x386d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x386d74: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x386d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x386d78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x386d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x386d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386d80: 0x2450a790  addiu       $s0, $v0, -0x5870
    ctx->pc = 0x386d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x386d84: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x386d84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x76A7B2u));
    // 0x386d88: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x386d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x386d8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x386D8Cu;
    {
        const bool branch_taken_0x386d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D8Cu;
        // 0x386d90: 0x3062fffe  andi        $v0, $v1, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x386d8c) {
            ctx->pc = 0x386DA8u;
            goto label_386da8;
        }
    }
    ctx->pc = 0x386D94u;
    // 0x386d94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x386d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386d98: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x386d98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x386d9c: 0xc0df66c  jal         func_37D9B0
    ctx->pc = 0x386D9Cu;
    SET_GPR_U32(ctx, 31, 0x386DA4u);
    ctx->pc = 0x386DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386D9Cu;
    // 0x386da0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D9B0u, 0x386D9Cu, 0x386DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386DA4u;
label_386da4:
    // 0x386da4: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x386da4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_386da8:
    // 0x386da8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x386da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x386dac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386DACu;
    {
        const bool branch_taken_0x386dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DACu;
        // 0x386db0: 0x3062fffd  andi        $v0, $v1, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x386dac) {
            ctx->pc = 0x386DC4u;
            goto label_386dc4;
        }
    }
    ctx->pc = 0x386DB4u;
    // 0x386db4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x386db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386db8: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x386db8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x386dbc: 0xc0df66c  jal         func_37D9B0
    ctx->pc = 0x386DBCu;
    SET_GPR_U32(ctx, 31, 0x386DC4u);
    ctx->pc = 0x386DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386DBCu;
    // 0x386dc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D9B0u, 0x386DBCu, 0x386DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386DC4u;
label_386dc4:
    // 0x386dc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x386dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x386DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DCCu;
        // 0x386dd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386DD4u;
    // 0x386dd4: 0x0  nop
    ctx->pc = 0x386dd4u;
    // NOP
    // 0x386dd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x386dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x386ddc: 0x0  nop
    ctx->pc = 0x386ddcu;
    // NOP
    ctx->pc = 0x386de0u;
}
