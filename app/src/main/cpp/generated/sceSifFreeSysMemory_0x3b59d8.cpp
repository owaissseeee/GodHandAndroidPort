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

// Function: sceSifFreeSysMemory
// Address: 0x3b59d8 - 0x3b5a50
void sceSifFreeSysMemory_0x3b59d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifFreeSysMemory_0x3b59d8");
#endif

    switch (ctx->pc) {
        case 0x3b5a34u: goto label_3b5a34;
        default: break;
    }

    ctx->pc = 0x3b59d8u;

    // 0x3b59d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b59dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b59dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b59e0: 0x8c62aef4  lw          $v0, -0x510C($v1)
    ctx->pc = 0x3b59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEF4u));
    // 0x3b59e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b59e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b59e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b59e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b59ec: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B59ECu;
    {
        const bool branch_taken_0x3b59ec = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59ECu;
        // 0x3b59f0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59ec) {
            ctx->pc = 0x3B59FCu;
            goto label_3b59fc;
        }
    }
    ctx->pc = 0x3B59F4u;
    // 0x3b59f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3B59F4u;
    {
        const bool branch_taken_0x3b59f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59F4u;
        // 0x3b59f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59f4) {
            ctx->pc = 0x3B5A40u;
            goto label_3b5a40;
        }
    }
    ctx->pc = 0x3B59FCu;
label_3b59fc:
    // 0x3b59fc: 0x3c070078  lui         $a3, 0x78
    ctx->pc = 0x3b59fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)120 << 16));
    // 0x3b5a00: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b5a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b5a04: 0xace51840  sw          $a1, 0x1840($a3)
    ctx->pc = 0x3b5a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x781840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x781840u, _value); } while (0);
    // 0x3b5a08: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b5a08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b5a0c: 0x248417c0  addiu       $a0, $a0, 0x17C0
    ctx->pc = 0x3b5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6080));
    // 0x3b5a10: 0x24e71840  addiu       $a3, $a3, 0x1840
    ctx->pc = 0x3b5a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6208));
    // 0x3b5a14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b5a18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b5a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b5a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5a20: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3b5a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b5a24: 0x26091800  addiu       $t1, $s0, 0x1800
    ctx->pc = 0x3b5a24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 6144));
    // 0x3b5a28: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b5a28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b5a2c: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3B5A2Cu;
    SET_GPR_U32(ctx, 31, 0x3B5A34u);
    ctx->pc = 0x3B5A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A2Cu;
    // 0x3b5a30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3B5A2Cu, 0x3B5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A34u;
label_3b5a34:
    // 0x3b5a34: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B5A34u;
    {
        const bool branch_taken_0x3b5a34 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A34u;
        // 0x3b5a38: 0x8e021800  lw          $v0, 0x1800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5a34) {
            ctx->pc = 0x3B5A40u;
            goto label_3b5a40;
        }
    }
    ctx->pc = 0x3B5A3Cu;
    // 0x3b5a3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b5a40:
    // 0x3b5a40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b5a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5a44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b5a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5a48: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A48u;
        // 0x3b5a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5A50u;
}
