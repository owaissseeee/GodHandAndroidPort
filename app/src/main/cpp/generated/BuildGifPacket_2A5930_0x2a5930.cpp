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

// Function: BuildGifPacket_2A5930
// Address: 0x2a5930 - 0x2a5998
void BuildGifPacket_2A5930_0x2a5930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildGifPacket_2A5930_0x2a5930");
#endif

    switch (ctx->pc) {
        case 0x2a5948u: goto label_2a5948;
        case 0x2a5988u: goto label_2a5988;
        default: break;
    }

    ctx->pc = 0x2a5930u;

    // 0x2a5930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5934: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a5934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a5938: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a5938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a593c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5940: 0xc0a93cc  jal         func_2A4F30
    ctx->pc = 0x2A5940u;
    SET_GPR_U32(ctx, 31, 0x2A5948u);
    ctx->pc = 0x2A5944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5940u;
    // 0x2a5944: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4F30u, 0x2A5940u, 0x2A5948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5948u;
label_2a5948:
    // 0x2a5948: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a5948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a594c: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A594Cu;
    {
        const bool branch_taken_0x2a594c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A594Cu;
        // 0x2a5950: 0x3c041100  lui         $a0, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a594c) {
            ctx->pc = 0x2A5988u;
            goto label_2a5988;
        }
    }
    ctx->pc = 0x2A5954u;
    // 0x2a5954: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2a5954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2a5958: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a5958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2a595c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x2a595cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x2a5960: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x2a5960u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x2a5964: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a5964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a5968: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x2a5968u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x2a596c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a5970: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2a5970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2a5974: 0x8c472050  lw          $a3, 0x2050($v0)
    ctx->pc = 0x2a5974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8272)));
    // 0x2a5978: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x2a5978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x2a597c: 0x8c452060  lw          $a1, 0x2060($v0)
    ctx->pc = 0x2a597cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8288)));
    // 0x2a5980: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x2A5980u;
    SET_GPR_U32(ctx, 31, 0x2A5988u);
    ctx->pc = 0x2A5984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5980u;
    // 0x2a5984: 0x8c462064  lw          $a2, 0x2064($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x2A5980u, 0x2A5988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5988u;
label_2a5988:
    // 0x2a5988: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a5988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a598c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a598cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5990: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5990u;
        // 0x2a5994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5998u;
}
