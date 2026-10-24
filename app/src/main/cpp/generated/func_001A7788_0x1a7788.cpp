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

// Function: func_001A7788
// Address: 0x1a7788 - 0x1a77f8
void func_001A7788_0x1a7788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A7788_0x1a7788");
#endif

    switch (ctx->pc) {
        case 0x1a779cu: goto label_1a779c;
        case 0x1a77b8u: goto label_1a77b8;
        default: break;
    }

    ctx->pc = 0x1a7788u;

    // 0x1a7788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a778c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a778cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a7790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7794: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A7794u;
    SET_GPR_U32(ctx, 31, 0x1A779Cu);
    ctx->pc = 0x1A7798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7794u;
    // 0x1a7798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A7794u, 0x1A779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A779Cu;
label_1a779c:
    // 0x1a779c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a77a0: 0x26050600  addiu       $a1, $s0, 0x600
    ctx->pc = 0x1a77a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1a77a4: 0x244275c8  addiu       $v0, $v0, 0x75C8
    ctx->pc = 0x1a77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30152));
    // 0x1a77a8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1a77a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a77ac: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1a77acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1a77b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a77b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77b4: 0x0  nop
    ctx->pc = 0x1a77b4u;
    // NOP
label_1a77b8:
    // 0x1a77b8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1a77b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a77bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a77bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a77c0: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x1a77c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a77c4: 0x0  nop
    ctx->pc = 0x1a77c4u;
    // NOP
    // 0x1a77c8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A77C8u;
    {
        const bool branch_taken_0x1a77c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77C8u;
        // 0x1a77cc: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77c8) {
            ctx->pc = 0x1A77B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a77b8;
        }
    }
    ctx->pc = 0x1A77D0u;
    // 0x1a77d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a77d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77d4: 0xa2000611  sb          $zero, 0x611($s0)
    ctx->pc = 0x1a77d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1553), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a77d8: 0xa2000610  sb          $zero, 0x610($s0)
    ctx->pc = 0x1a77d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1552), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a77dc: 0xa2000612  sb          $zero, 0x612($s0)
    ctx->pc = 0x1a77dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1554), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a77e0: 0xa2000615  sb          $zero, 0x615($s0)
    ctx->pc = 0x1a77e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1557), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a77e4: 0xa2000614  sb          $zero, 0x614($s0)
    ctx->pc = 0x1a77e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1556), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a77e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a77e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a77ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a77ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a77f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A77F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77F0u;
        // 0x1a77f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A77F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A77F8u;
}
