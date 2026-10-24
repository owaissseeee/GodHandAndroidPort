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

// Function: Slot2_updateLineMark3
// Address: 0x1e6e68 - 0x1e6ed8
void Slot2_updateLineMark3_0x1e6e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_updateLineMark3_0x1e6e68");
#endif

    switch (ctx->pc) {
        case 0x1e6eb8u: goto label_1e6eb8;
        case 0x1e6eccu: goto label_1e6ecc;
        default: break;
    }

    ctx->pc = 0x1e6e68u;

    // 0x1e6e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6e70: 0x948303e6  lhu         $v1, 0x3E6($a0)
    ctx->pc = 0x1e6e70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 998)));
    // 0x1e6e74: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1e6e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e6e78: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E6E78u;
    {
        const bool branch_taken_0x1e6e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E78u;
        // 0x1e6e7c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e78) {
            ctx->pc = 0x1E6ECCu;
            goto label_1e6ecc;
        }
    }
    ctx->pc = 0x1E6E80u;
    // 0x1e6e80: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1e6e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1e6e84: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e6e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e6e88: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6E88u;
    {
        const bool branch_taken_0x1e6e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E88u;
        // 0x1e6e8c: 0xa48303e6  sh          $v1, 0x3E6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 998), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e88) {
            ctx->pc = 0x1E6ECCu;
            goto label_1e6ecc;
        }
    }
    ctx->pc = 0x1E6E90u;
    // 0x1e6e90: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1e6e90u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e6e94: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e6e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e6e98: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e6e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e6e9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e6e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6ea0: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x1e6ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e6ea4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6EA4u;
    {
        const bool branch_taken_0x1e6ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EA4u;
        // 0x1e6ea8: 0xa48203e6  sh          $v0, 0x3E6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 998), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ea4) {
            ctx->pc = 0x1E6EC0u;
            goto label_1e6ec0;
        }
    }
    ctx->pc = 0x1E6EACu;
    // 0x1e6eac: 0x8c8403c8  lw          $a0, 0x3C8($a0)
    ctx->pc = 0x1e6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 968)));
    // 0x1e6eb0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6EB0u;
    SET_GPR_U32(ctx, 31, 0x1E6EB8u);
    ctx->pc = 0x1E6EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EB0u;
    // 0x1e6eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6EB0u, 0x1E6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6EB8u;
label_1e6eb8:
    // 0x1e6eb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6EB8u;
    {
        const bool branch_taken_0x1e6eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EB8u;
        // 0x1e6ebc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6eb8) {
            ctx->pc = 0x1E6ED0u;
            goto label_1e6ed0;
        }
    }
    ctx->pc = 0x1E6EC0u;
label_1e6ec0:
    // 0x1e6ec0: 0x8c8403c8  lw          $a0, 0x3C8($a0)
    ctx->pc = 0x1e6ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 968)));
    // 0x1e6ec4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6EC4u;
    SET_GPR_U32(ctx, 31, 0x1E6ECCu);
    ctx->pc = 0x1E6EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EC4u;
    // 0x1e6ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6EC4u, 0x1E6ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6ECCu;
label_1e6ecc:
    // 0x1e6ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6ed0:
    // 0x1e6ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6ED0u;
        // 0x1e6ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6ED8u;
}
