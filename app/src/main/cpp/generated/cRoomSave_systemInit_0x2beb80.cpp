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

// Function: cRoomSave_systemInit
// Address: 0x2beb80 - 0x2bebc8
void cRoomSave_systemInit_0x2beb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cRoomSave_systemInit_0x2beb80");
#endif

    switch (ctx->pc) {
        case 0x2beba4u: goto label_2beba4;
        case 0x2bebb4u: goto label_2bebb4;
        default: break;
    }

    ctx->pc = 0x2beb80u;

    // 0x2beb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2beb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2beb84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2beb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2beb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2beb8c: 0x34069c30  ori         $a2, $zero, 0x9C30
    ctx->pc = 0x2beb8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39984);
    // 0x2beb90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2beb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2beb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2beb98: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2beb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2beb9c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2BEB9Cu;
    SET_GPR_U32(ctx, 31, 0x2BEBA4u);
    ctx->pc = 0x2BEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB9Cu;
    // 0x2beba0: 0x24849cb8  addiu       $a0, $a0, -0x6348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2BEB9Cu, 0x2BEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBA4u;
label_2beba4:
    // 0x2beba4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2beba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2beba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2beba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebac: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2BEBACu;
    SET_GPR_U32(ctx, 31, 0x2BEBB4u);
    ctx->pc = 0x2BEBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBACu;
    // 0x2bebb0: 0x24061650  addiu       $a2, $zero, 0x1650 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2BEBACu, 0x2BEBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBB4u;
label_2bebb4:
    // 0x2bebb4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2bebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2bebb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bebb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bebbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bebbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bebc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBC0u;
        // 0x2bebc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEBC8u;
}
