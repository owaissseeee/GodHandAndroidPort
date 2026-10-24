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

// Function: SFD_GetWritePtr
// Address: 0x358e78 - 0x358ee8
void SFD_GetWritePtr_0x358e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_GetWritePtr_0x358e78");
#endif

    switch (ctx->pc) {
        case 0x358e94u: goto label_358e94;
        default: break;
    }

    ctx->pc = 0x358e78u;

    // 0x358e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x358e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x358e80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x358e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x358e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x358e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x358e8c: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x358E8Cu;
    SET_GPR_U32(ctx, 31, 0x358E94u);
    ctx->pc = 0x358E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E8Cu;
    // 0x358e90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x358E8Cu, 0x358E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E94u;
label_358e94:
    // 0x358e94: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x358e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x358e98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x358e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x358e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ea0: 0x34a50134  ori         $a1, $a1, 0x134
    ctx->pc = 0x358ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
    // 0x358ea4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x358ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x358ea8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x358EA8u;
    {
        const bool branch_taken_0x358ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358EA8u;
        // 0x358eac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ea8) {
            ctx->pc = 0x358EC8u;
            goto label_358ec8;
        }
    }
    ctx->pc = 0x358EB0u;
    // 0x358eb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358eb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x358eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358eb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x358eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358ebc: 0x80d375c  j           func_34DD70
    ctx->pc = 0x358EBCu;
    ctx->pc = 0x358EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358EBCu;
    // 0x358ec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x358EBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358EC4u;
    // 0x358ec4: 0x0  nop
    ctx->pc = 0x358ec4u;
    // NOP
label_358ec8:
    // 0x358ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ecc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x358eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x358ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358edc: 0x80d70b4  j           func_35C2D0
    ctx->pc = 0x358EDCu;
    ctx->pc = 0x358EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358EDCu;
    // 0x358ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x358EDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358EE4u;
    // 0x358ee4: 0x0  nop
    ctx->pc = 0x358ee4u;
    // NOP
    ctx->pc = 0x358ee8u;
}
