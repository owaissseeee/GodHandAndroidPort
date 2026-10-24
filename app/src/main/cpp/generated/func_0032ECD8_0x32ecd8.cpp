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

// Function: func_0032ECD8
// Address: 0x32ecd8 - 0x32ed48
void func_0032ECD8_0x32ecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032ECD8_0x32ecd8");
#endif

    ctx->pc = 0x32ecd8u;

    // 0x32ecd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ecd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ecdc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x32ecdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ece0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x32ece0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ece4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32ece4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ece8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32ECE8u;
    {
        const bool branch_taken_0x32ece8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ECE8u;
        // 0x32ecec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ece8) {
            ctx->pc = 0x32ED08u;
            goto label_32ed08;
        }
    }
    ctx->pc = 0x32ECF0u;
    // 0x32ecf0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32ecf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ecf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ecf8: 0x24842fb0  addiu       $a0, $a0, 0x2FB0
    ctx->pc = 0x32ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12208));
    // 0x32ecfc: 0x80cff2c  j           func_33FCB0
    ctx->pc = 0x32ECFCu;
    ctx->pc = 0x32ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ECFCu;
    // 0x32ed00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32ECFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32ED04u;
    // 0x32ed04: 0x0  nop
    ctx->pc = 0x32ed04u;
    // NOP
label_32ed08:
    // 0x32ed08: 0x28c20021  slti        $v0, $a2, 0x21
    ctx->pc = 0x32ed08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x32ed0c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32ED0Cu;
    {
        const bool branch_taken_0x32ed0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ed0c) {
            ctx->pc = 0x32ED10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32ED0Cu;
            // 0x32ed10: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32ED28u;
            goto label_32ed28;
        }
    }
    ctx->pc = 0x32ED14u;
    // 0x32ed14: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32ed18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ed1c: 0x24842fd8  addiu       $a0, $a0, 0x2FD8
    ctx->pc = 0x32ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12248));
    // 0x32ed20: 0x80cff2c  j           func_33FCB0
    ctx->pc = 0x32ED20u;
    ctx->pc = 0x32ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ED20u;
    // 0x32ed24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32ED20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32ED28u;
label_32ed28:
    // 0x32ed28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ed28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ed2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ed30: 0xac4701ec  sw          $a3, 0x1EC($v0)
    ctx->pc = 0x32ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 7));
    // 0x32ed34: 0x8c6601e8  lw          $a2, 0x1E8($v1)
    ctx->pc = 0x32ed34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x32ed38: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32ed38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32ed3c: 0x80cbb52  j           func_32ED48
    ctx->pc = 0x32ED3Cu;
    ctx->pc = 0x32ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ED3Cu;
    // 0x32ed40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED48u, 0x32ED3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32ED44u;
    // 0x32ed44: 0x0  nop
    ctx->pc = 0x32ed44u;
    // NOP
    ctx->pc = 0x32ed48u;
}
