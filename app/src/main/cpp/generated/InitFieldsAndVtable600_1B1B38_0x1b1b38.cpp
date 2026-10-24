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

// Function: InitFieldsAndVtable600_1B1B38
// Address: 0x1b1b38 - 0x1b1b78
void InitFieldsAndVtable600_1B1B38_0x1b1b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFieldsAndVtable600_1B1B38_0x1b1b38");
#endif

    switch (ctx->pc) {
        case 0x1b1b4cu: goto label_1b1b4c;
        default: break;
    }

    ctx->pc = 0x1b1b38u;

    // 0x1b1b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1b3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b1b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b1b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1b44: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1B1B44u;
    SET_GPR_U32(ctx, 31, 0x1B1B4Cu);
    ctx->pc = 0x1B1B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B44u;
    // 0x1b1b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1B1B44u, 0x1B1B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B4Cu;
label_1b1b4c:
    // 0x1b1b4c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b1b50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b54: 0x246383d8  addiu       $v1, $v1, -0x7C28
    ctx->pc = 0x1b1b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935512));
    // 0x1b1b58: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1b1b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1b1b5c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1b1b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1b1b60: 0xa6000604  sh          $zero, 0x604($s0)
    ctx->pc = 0x1b1b60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1540), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b1b64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b1b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B6Cu;
        // 0x1b1b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1B74u;
    // 0x1b1b74: 0x0  nop
    ctx->pc = 0x1b1b74u;
    // NOP
    ctx->pc = 0x1b1b78u;
}
